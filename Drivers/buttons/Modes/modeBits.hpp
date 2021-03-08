#pragma once

#include "eventEnum.hpp"

namespace button
{
  template<class Button, EventEnum modeBit>
  struct ModeBitsControl
  {
    forceinline static void Enable()    {Button::template SetModeBits<modeBit>();}
    forceinline static void EnableOne() {Button::template WriteModeBits<modeBit>();}
    forceinline static void Disable()   {Button::template ResetModeBits<modeBit>();}
    forceinline static void isEnable()  {Button::template isModeSet<modeBit>();}
  };

};