#pragma once

#include "exti.hpp"


namespace button
{
  struct FrontType
  {
    struct Normal {};
    struct Inverted {};
    struct Normal_PullDown {};
    struct Inverted_PullUp {};
  };


  template <class pin, class type>
  struct ButtonBase : extiLine<pin, extiTrigger::Rising_Falling>
  {
  private:
    using exti = extiLine<pin, extiTrigger::Rising_Falling>;

    /* configPUPDR */
    template<class t = type, class D = void>
    struct configPUPDR 
      : pin::PUPDR::noPull {};

    template<class D>
    struct configPUPDR<FrontType::Normal_PullDown, D>
      : pin::PUPDR::Pull_down {};

    template<class D>
    struct configPUPDR<FrontType::Inverted_PullUp, D>
      : pin::PUPDR::Pull_up {};
    /* ----------- */


  protected:
    constexpr static bool isInverted = 
      std::is_same_v<type, FrontType::Inverted> || 
      std::is_same_v<type, FrontType::Inverted_PullUp> ? true : false;
      
    forceinline static bool isPressed()
    {
      return pin::Read() ^ isInverted;
    }

  public:
    using Init = Pack<
      typename exti::Init,

      /* GPIO configuration */
      typename pin::BusEnable,
      typename pin::MODER::Input,
      typename configPUPDR<>::Type
    >;

  };

};