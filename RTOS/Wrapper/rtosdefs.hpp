#pragma once

#define forceinline  __attribute__((always_inline)) inline

#include "FreeRtos.h"
#include "task.h"
#include "semphr.h"
#include "queue.h"
#include "timers.h"
#include "event_groups.h"
#include "portmacro.h"
#include "FreeRTOSConfig.h"

#include <chrono>
using namespace std::chrono_literals;


#include <type_traits>

namespace OS
{
  using namespace std::chrono;
  template<TickType_t v>
  using tick_t = std::integral_constant<TickType_t, v>;

  using TicksPerSecond = std::chrono::duration<TickType_t, std::ratio<portTICK_PERIOD_MS,1000>>;

  using tTaskEventMask = std::uint32_t;

  forceinline auto GetTickCount()
  {
    return xTaskGetTickCountFromISR();
  }
};