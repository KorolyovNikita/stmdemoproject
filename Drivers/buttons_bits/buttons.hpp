#pragma once

#include <type_traits>
#include "typepack.hpp"

#include "os.hpp"
#include "buttonModes.hpp"
#include "buttonEventEnum.hpp"
#include "buttonBase.hpp"
#include "buttonProgramDebounce.hpp"
#include "buttonDirectInput.hpp"

#include "xprintf.hpp"
extern xprintf Debug;


namespace button
{
  template<size_t id, class ...Modes>
  struct Button
  {
    /* friends */
    template<class, FrontType, class, size_t>
    friend class ::button::Input::ProgramDebounce;

    template<class, FrontType, class>
    friend class ::button::Input::Direct;

    friend class Mode;
    /* ------- */

    struct Mode : ::button::Mode::Press::ModeControl<Button>,
                  Modes::template ModeControl<Button>... {};

    constexpr static auto ID = id;
    inline static uint8_t ModeBits = 1 << int(EventEnum::PRESS);

  private:
    forceinline static void Handle(bool State)
    {
      ::button::Mode::Press::Impl<Button>::Handle(State);
      (Modes::template Impl<Button>::Handle(State), ...);   
    };

    forceinline static void Release()
    {
      (Modes::template Impl<Button>::Release(), ...);
    };

    forceinline static void SetModeBits(EventEnum bitNum)
    {
      ModeBits |= (1U << int(bitNum));
    }

    forceinline static void WriteModeBits(EventEnum bitNum)
    {
      ModeBits = (1U << int(bitNum));
    }

    forceinline static void ResetModeBits(EventEnum bitNum)
    {
      ModeBits &= ~(1U << int(bitNum));
    }

    constexpr static bool isModeSet(EventEnum bitNum)
    {
      return ModeBits & (1U << int(bitNum));
    }

  };

};