#pragma once

#include "exti.hpp"


namespace button
{
  enum class FrontType
  {
    Normal,
    Inverted,
    Normal_PullDown,
    Inverted_PullUp
  };


  template <typename pin, FrontType type>
  struct ButtonBase
  {
    template<class...>
    friend struct extInterrupt;
    
  private:
    using exti = extiLine<pin, extiTrigger::Rising_Falling>;

    /* configPUPDR */
    template<FrontType t = type, class D = void>
    struct configPUPDR 
      : pin::PUPDR::noPull {};

    template<class D>
    struct configPUPDR<FrontType::Normal_PullDown, D>
      : pin::PUPDR::Pull_down {};

    template<class D>
    struct configPUPDR<FrontType::Inverted_PullUp, D>
      : pin::PUPDR::Pull_up {};
    /* ----------- */

  public:
    constexpr static bool isInverted = int(type) & 0b01;
    static constexpr auto pinNum = exti::pinNum;

    forceinline static bool isPressed()
    {
      return pin::Read() ^ isInverted;
    }

    using Init = Pack<
      typename exti::Init,

      /* GPIO configuration */
      typename pin::BusEnable,
      typename pin::MODER::Input,
      typename configPUPDR<>::Type
    >;

  };

};