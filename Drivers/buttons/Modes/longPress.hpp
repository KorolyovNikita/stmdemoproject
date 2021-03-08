#pragma once

#include "os.hpp"

#include "EventEnum.hpp"


namespace button
{
  namespace Mode
  {
    template<class Btn, class delay = OS::tick_t<400>>
    struct LongPress
    {
      forceinline static void onPress()
      { 
        Btn::Timer.Restart(timerCallback, delay::value);
      }
      forceinline static void onRelease()
      {}

      forceinline static void timerCallback()
      {
        return Btn::onEvent(EventEnum::LONG_PRESS, 0);
      }

    };

  };

};