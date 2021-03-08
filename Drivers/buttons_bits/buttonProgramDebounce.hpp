#pragma once

#include "os.hpp"
#include "buttonBase.hpp"

extern xprintf Debug;


namespace button
{
  namespace Input
  {
    template<typename pin, FrontType type, typename out, size_t timeOut = 50>
    struct ProgramDebounce
    {


    private:
      using Base = ButtonBase<pin, type>;
      constexpr static auto pinNum = Base::pinNum;

      struct : OS::Timer<timeOut>
      {
        void Execute() override
        {
          if(Base::isPressed() ^ !targetState)
          {
            out::Handle((State = targetState));
          }
        }
        bool targetState;
        bool State;
      }
      inline static Timer;

      forceinline static void IrqHandler()
      {
        // Debug.puts("irq\n\r");
        Timer.targetState = (!Timer.State);
        Timer.Restart();
      }
    public:
      using Init = typename Base::Init;

    };

  };

};
