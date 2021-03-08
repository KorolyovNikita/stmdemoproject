#pragma once

#include "EventEnum.hpp"
#include "modeBits.hpp"


namespace button
{
  namespace Mode
  {
    template<class Btn>
    struct Press
    {      
      forceinline static void onPress()
      { 
        Btn::onEvent(EventEnum::PRESS, 0);
      }
      forceinline static void onRelease()
      {}

    };

  };

};