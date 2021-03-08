#pragma once

#include "rtosdefs.hpp"

namespace OS {
  struct Event
  {
    Event() : handle(xEventGroupCreateStatic(&context)) {}

    forceinline void Signal(EventEnum_t mask)
    {
      BaseType_t xHigherPriorityTaskWoken = pdFALSE;
      if (xEventGroupSetBitsFromISR(handle, mask, &xHigherPriorityTaskWoken) != pdFAIL)
      {
        portYIELD_FROM_ISR(xHigherPriorityTaskWoken);
      }
    }

    forceinline EventEnum_t Wait(EventEnum_t mask, const milliseconds timeOut = milliseconds::max())
    {
      return xEventGroupWaitBits(handle, mask, pdTRUE, pdFALSE, 
                                 duration_cast<TicksPerSecond>(timeOut).count());
    }

    EventGroupHandle_t handle;
    StaticEventGroup_t context;
  };
};