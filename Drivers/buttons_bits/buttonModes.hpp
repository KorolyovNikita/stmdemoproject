#pragma once

#include "os.hpp"
#include "typepack.hpp"

#include "buttonEventEnum.hpp"
#include "buttonFlow.hpp"

#include "xprintf.hpp"
extern xprintf Debug;


namespace button
{
  struct Mode
  {
  private:
    template<class Button, EventEnum modeBit>
    struct BitsControl
    {
      constexpr static EventEnum ModeBit = modeBit;

      forceinline static void Enable() {Button::SetModeBits(modeBit);}
      forceinline static void EnableOne() {Button::WriteModeBits(modeBit);}
      forceinline static void Disable() {Button::ResetModeBits(modeBit);}
    };

  public:
    struct Press
    {
      constexpr static auto ModeBit = EventEnum::PRESS;

      template<class Button>
      struct ModeControl
      {
        struct PressMode 
          : BitsControl<Button, ModeBit>{};
      };

      template<class Button>
      struct Impl
      {
        forceinline static void Handle(bool State)
        {
          if(!Button::isModeSet(ModeBit)) return;
          
          if(State)
            flowControl::flow.Put(msg{Button::ID, EventEnum::PRESS, 0});
        }
      };
    };


    struct Release
    {
      constexpr static auto ModeBit = EventEnum::RELEASE;

      template<class Button>
      struct ModeControl
      {
        struct ReleaseMode 
          : BitsControl<Button, ModeBit>{};
      };

      template<class Button>
      struct Impl
      {
        forceinline static void Handle(bool State)
        {
          if(!Button::isModeSet(ModeBit)) return;
          
          if(!State) 
            Debug.puts("Realease\n\n\r");
        }
      };
    };


    template<TickType_t delay = 400>
    struct LongPress
    {
      constexpr static auto ModeBit = EventEnum::LONG_PRESS;

      template<class Button>
      struct ModeControl
      {
        struct LongPressMode 
          : BitsControl<Button, ModeBit>{};
      };

      template<class Button>
      struct Impl
      {
        forceinline static void Handle(bool State)
        {
          if(!Button::isModeSet(ModeBit)) return;
          
          State ? Timer.Restart() : Timer.Stop();
        }

        struct : OS::Timer<450>
        {
          void Execute() override
          {
            Debug.puts("LongPress\n\r");
          }
        }
        inline static Timer;
      };
    };


    template<TickType_t start = 300, 
            TickType_t end = 100,
            TickType_t step = 25>
    struct LongPressCounted
    {
      constexpr static auto ModeBit = EventEnum::LONG_PRESS_COUNTED;

      template<class Button>
      struct ModeControl
      {
        struct LongPressCountedMode 
          : BitsControl<Button, ModeBit>{};
      };

      template<class Button>
      struct Impl
      {
        forceinline static void Handle(bool State)
        {
          if(!Button::isModeSet(ModeBit)) return;
          
          State ? Timer.Restart() : Timer.Stop();
        }

        struct : OS::Timer<>
        {
          void Execute() override
          {
            
            Restart(period);
          }

          forceinline void Restart(size_t p = start)
          {
            SetPeriod(p);
            OS::Timer<>::Restart();
            period = (p >= end) ? (p - step) : p;
          }

          forceinline void Stop()
          {
            OS::Timer<>::Stop();
            period = start;
          }

          size_t period;
        }
        inline static Timer;
      };
    };


    template<size_t delay = 400>
    struct ClickCalculate
    {
      constexpr static auto ModeBit = EventEnum::CLICK_CALCULATE;

      template<class Button>
      struct ModeControl
      {
        struct ClickCalculateMode 
          : BitsControl<Button, ModeBit>{};
      };

      template<class Button>
      struct Impl
      {
        forceinline static void Handle(bool State)
        {
          if(!Button::isModeSet(ModeBit)) return;
          
          State ? ++count, Timer.Stop() 
                : Timer.Restart();
        }

        struct : OS::Timer<delay>
        {
          void Execute() override
          {
            flowControl::flow.Put(msg{Button::ID, ModeBit, count});
            count = 0;
          }
        }
        inline static Timer;
        inline static uint8_t count = 0;
      };

    };

  };

};


