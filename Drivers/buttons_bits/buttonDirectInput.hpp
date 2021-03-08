#pragma once

#include "buttonBase.hpp"


namespace button
{
  namespace Input
  {
    template<typename pin, FrontType type, typename out>
    struct Direct
    {
      template<class...>
      friend struct extInterrupt;

    private:
      using Base = ButtonBase<pin, type>;
      constexpr static auto pinNum = Base::pinNum;

      forceinline static void IrqHandler()
      {
        out::Handler(Base::isPressed());
      }
    public:
      using Init = typename Base::Init;
    };

  };
  
};