#pragma once

#include "os.hpp"

#include "EventEnum.hpp"


namespace button
{
  namespace Mode
  {
    template<class Btn, class delay = OS::tick_t<400>>
    struct ClickCalculate
    {
      forceinline static void onPress()
      { 
        ++count;
      }

      forceinline static void onRelease()
      { 
        Btn::Timer.Restart(timerCallback, delay::value);
      }

      forceinline static void timerCallback()
      {
        uint8_t tmpCount = count;
        count = 0;
        return Btn::onEvent(EventEnum::CLICK_CALCULATE, tmpCount);
      }

      private:
      inline static uint8_t count = 0;
    };

  };

};