#pragma once


namespace button
{
  enum class EventEnum : uint8_t
  {
    PRESS,
    RELEASE,
    LONG_PRESS,
    LONG_PRESS_COUNTED,
    CLICK_CALCULATE
  };
};