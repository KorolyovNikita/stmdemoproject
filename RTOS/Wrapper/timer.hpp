#pragma once

#include "rtosdefs.hpp"

namespace OS 
{
  enum class TimerMode
  {
    OneShot,
    AutoReload
  };
 


  struct Timer
  {
    Timer(void(*Callback)() = nullptr, 
          TickType_t timeOut = 1000, 
          TimerMode mode = OS::TimerMode::OneShot)
      : Execute(Callback)
    {
      handle = xTimerCreateStatic(NULL, timeOut,
                                BaseType_t(mode), this,
                                static_cast<TimerCallbackFunction_t>(Run),
                                &context);
    }

    /* Control */
    forceinline void SetCallBack(void(*Callback)())
    {
      Execute = Callback;
    }

    forceinline void SetPeriod(const size_t period)
    {
      xTimerChangePeriodFromISR(handle, period, NULL);
    }

    forceinline void Start() 
    {
      xTimerStartFromISR(handle, NULL);
    }

    forceinline void Start(void(*Callback)(), TickType_t timeOut) 
    {
      SetCallBack(Callback);
      SetPeriod(timeOut);
      xTimerStartFromISR(handle, NULL);
    }

    forceinline void Restart()
    {
      xTimerResetFromISR(handle, NULL);
    }

    forceinline void Restart(void(*Callback)(), TickType_t timeOut)
    {
      SetCallBack(Callback);
      SetPeriod(timeOut);
      xTimerResetFromISR(handle, NULL);
    }

    forceinline void Stop()
    {
      xTimerStopFromISR(handle, NULL);
    }

  private:
    forceinline static void Run(TimerHandle_t pContext)
    {
      static_cast<Timer*>(pvTimerGetTimerID(pContext))->Execute();
    }

    void(*Execute)();
    TimerHandle_t handle;
    StaticTimer_t context{};
  };
};