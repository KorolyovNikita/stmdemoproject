#pragma once

#include "rtosdefs.hpp"

namespace OS {
  
  struct Semaphore
  {
    forceinline Semaphore()   
      : handle(xSemaphoreCreateBinaryStatic(&context))
    {
      Give();
    }

    forceinline ~Semaphore()
    {
      vSemaphoreDelete(handle);
    }
    
    forceinline bool Take(const milliseconds timeOut = milliseconds::max())
    {
      return static_cast<bool>(xSemaphoreTake(handle, 
                               duration_cast<TicksPerSecond>(timeOut).count())
                              );
    }

    forceinline bool Give()
    {
      return static_cast<bool>(xSemaphoreGiveFromISR(handle, NULL));
    }

  private:
    StaticSemaphore_t context;
    SemaphoreHandle_t handle;
  };
  
};