#pragma once

#include "rtosdefs.hpp"

namespace OS {
  using namespace std::chrono;

  struct Mutex
  {
    forceinline Mutex()   
      : handle(xSemaphoreCreateMutexStatic(&context))
    {}

    forceinline ~Mutex()
    {
      vSemaphoreDelete(handle);
    }
    
    forceinline bool Lock(const milliseconds timeOut = milliseconds::max())
    {
      return static_cast<bool>(xSemaphoreTake(handle, 
                               duration_cast<TicksPerSecond>(timeOut).count())
                              );
    }
    forceinline bool UnLock()
    {
      return static_cast<bool>(xSemaphoreGiveFromISR(handle, NULL));
    }

  private:
    StaticSemaphore_t context;
    SemaphoreHandle_t handle;
  };
}