#pragma once


#include "os.hpp"
#include "buttonBase.hpp"
#include "eventEnum.hpp"

#include "programDebounce.hpp"
// #include "directInput.hpp"

#include "Modes/modeBits.hpp"
#include "Modes/press.hpp"
#include "Modes/longPress.hpp"
#include "Modes/clickCalculate.hpp"

#include "xprintf.hpp"
extern xprintf Debug;


namespace button
{
  template<size_t id, class pin, class frontType, class Input, class Subscriber, class ...Modes>
  struct Button : ButtonBase<pin, frontType>
  {
    constexpr static auto ID = id;
    inline static OS::Timer Timer{};

    forceinline static void onEvent(EventEnum event, size_t arg)
    {
      Subscriber::onEvent(ID, event, arg);
    }

    /* ModeControl */
    struct Mode : Modes::type<Button>... {};
    inline static uint8_t ModeBits = 1 << int(EventEnum::PRESS);

    template<EventEnum ...bit>
    forceinline static void SetModeBits()
    {
      ModeBits |= (... | (1U << int(bit)) );
    }
    template<EventEnum ...bit>
    forceinline static void WriteModeBits()
    {
      ModeBits = (... | (1U << int(bit)) );
    }
    template<EventEnum ...bit>
    forceinline static void ResetModeBits()
    {
      ModeBits &= ~(... | (1U << int(bit)) );
    }

    template<EventEnum ...bit>
    forceinline static bool isModeSet()
    {
      return ModeBits & (... | (1U << int(bit)) );
    }
    /* ----------- */


    template<class...>
    friend struct ::extInterrupt;

    template<class, class>
    friend struct ::button::ProgramDebounce;

  private:
    constexpr static void IrqHandler() {
      return Input::template type<Button>::IrqHandler();
    }

    forceinline static void Handle(bool State)
    {
      Timer.Stop();
      if(State)
        (Modes::template type<Button>::onPress(), ...);
      else 
        (Modes::template type<Button>::onRelease(), ...);
    };

  };


  template <template <class...> class F, class... Ts>
  struct SetMode {
    template <class Button>
    struct type : F<Button, Ts...> {};
  };

};