#pragma once

#include "os.hpp"
#include "buttonBase.hpp"

extern xprintf Debug;


namespace button
{
  template <template <class...> class F, class... Ts>
  struct SetInput {
    template <class Button>
    struct type : F<Button, Ts...> {};
  };


  template<class Btn, class timeOut = OS::tick_t<40>>
  struct ProgramDebounce 
  {
    template<class...>
    friend struct extInterrupt;


    forceinline static void TimerCallback()
    {
      if(Btn::isPressed() ^ !targetState)
      {
        Btn::Handle((State = targetState));
      }
    }

    inline static OS::Timer Timer{TimerCallback, timeOut::value};


    forceinline static void IrqHandler()
    {
      // Debug.puts("irq\n\r");
      targetState = !State;
      Timer.Restart();
    }

    inline static bool State;

    private:
    inline static bool targetState;

  };

};
