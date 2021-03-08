#pragma once

#include<array>
#include "rtosdefs.hpp"

namespace OS {
  using namespace std::chrono;

  template<typename T, std::size_t size>
  struct Queue
  {
    forceinline Queue()
      : handle(xQueueCreateStatic(size, 
                                  sizeof(T),
                                  buffer.data(),
                                  &context))
    {}

    forceinline ~Queue()
    {
      vQueueDelete(handle);
    }

    forceinline bool Put(const T &item, const milliseconds timeOut = milliseconds::max())
    {
      return static_cast<bool>(xQueueSend(handle, &item, 
                               duration_cast<TicksPerSecond>(timeOut).count())
                              );
    }

    forceinline bool Get(T &item, const milliseconds timeOut = milliseconds::max())
    {
      return static_cast<bool>(xQueueReceive(handle, &item, 
                               duration_cast<TicksPerSecond>(timeOut).count())
                              );
    }

  private:
    QueueHandle_t handle;
    StaticQueue_t context;
    std::array<std::uint8_t, size * sizeof(T)> buffer;
  };

};