#pragma once

#include "os.hpp"
#include "buttonEventEnum.hpp"

namespace button
{
  struct msg
  {
    uint16_t id     : 5;
    EventEnum event : 3;
    uint16_t args   : 8;
  };

  struct flowControl
  {
    inline static OS::Queue<msg, 4> flow;
  };
};