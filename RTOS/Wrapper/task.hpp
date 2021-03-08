#pragma once

#include <array>
#include "rtosdefs.hpp"

namespace OS {
  using namespace std::chrono;

  template<auto StackSize> 
  struct Thread 
  {
    friend struct Scheduler;
    
    virtual void Execute() = 0;

    /* Delay */
    forceinline void Sleep(const milliseconds timeOut)
    {      
      vTaskDelay(duration_cast<TicksPerSecond>(timeOut).count());   
    };
    forceinline void SleepUntil(const milliseconds timeOut)
    { 
      vTaskDelayUntil(&lastWakeTime, 
                      duration_cast<TicksPerSecond>(timeOut).count());
    };

    /* Events */
    static constexpr tTaskEventMask defaultTaskMaskBits = 0b01;

    forceinline void Signal(const tTaskEventMask mask = defaultTaskMaskBits)
    {
      BaseType_t xHigherPriorityTaskWoken = pdFALSE;
      xTaskNotifyFromISR(handle, mask, eSetBits, &xHigherPriorityTaskWoken);
      portYIELD_FROM_ISR(xHigherPriorityTaskWoken);
    };

    forceinline tTaskEventMask WaitForSignal(const tTaskEventMask mask = defaultTaskMaskBits,
                                             const milliseconds timeOut = milliseconds::max())
    {    
      uint32_t ulNotifiedValue = 0U;
      xTaskNotifyWait(0U,
                      std::numeric_limits<uint32_t>::max(),
                      &ulNotifiedValue,
                      duration_cast<TicksPerSecond>(timeOut).count());
      return (ulNotifiedValue & mask);
    }

  private:
    forceinline void Run()
    {
      lastWakeTime = xTaskGetTickCount(); 
      Execute();
    }

    TaskHandle_t handle = nullptr;
    StaticTask_t context;
    TickType_t lastWakeTime = 0U;

    static constexpr auto stackSize = StackSize;
    std::array<StackType_t, StackSize> stack;
  };
};