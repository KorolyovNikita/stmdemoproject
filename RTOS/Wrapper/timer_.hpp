#pragma once

#include "rtosdefs.hpp"

namespace OS 
{
  enum class TimerMode
  {
    OneShot,
    AutoReload
  };

  // template<TickType_t >
  struct Timer
  {
    Timer(const TickType_t timeOut = 1000, const TimerMode mode = OS::TimerMode::OneShot)
    {
      handle = xTimerCreateStatic("", timeOut,
                                  BaseType_t(mode), this,
                                  static_cast<TimerCallbackFunction_t>(Run),
                                  &context);
    }

    

    virtual void Execute() = 0;

    /* Control */
    forceinline void Start()   {xTimerStartFromISR(handle, NULL);}
    forceinline void Stop()    {xTimerStopFromISR(handle, NULL);}
    forceinline void Restart() {xTimerResetFromISR(handle, NULL);}

    forceinline void SetPeriod(const milliseconds period)
    {
      xTimerChangePeriodFromISR(handle, 
        duration_cast<TicksPerSecond>(period).count(), NULL);
    }
    forceinline void SetPeriod(const size_t period) 
    {
      xTimerChangePeriodFromISR(handle, period, NULL);
    }

    forceinline milliseconds GetPeriod()
    {
      return static_cast<TicksPerSecond>(xTimerGetPeriod(handle));
    }

    forceinline milliseconds GetRemainingTime()
    {
      return static_cast<TicksPerSecond>(xTimerGetExpiryTime(handle) - GetTickCount());
    }



  private:
    forceinline static void Run(TimerHandle_t pContext)
    {
      static_cast<Timer*>(pvTimerGetTimerID(pContext))->Execute();
    }

    TimerHandle_t handle;
    StaticTimer_t context{};
  };
};