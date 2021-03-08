/*
Created by Korolyov Nikita on 7.11.2020
https://github.com/KorolyovNikita
*/

#pragma once

#include "nvic_registers.hpp"
#include "exti_registers.hpp"
#include "syscfg_registers.hpp"
#include "irqenum.hpp"
#include "typepack.hpp"


enum class extiTrigger
{
  None,
  Falling,
  Rising,
  Rising_Falling
};

template<typename ...Lines>
struct extInterrupt
{
  template<class ...Ts>
  forceinline static void IrqHelper(tp::empty_pack, size_t PendingReg) {}

  template<class ...Ts>
  forceinline static void IrqHelper(type_pack<Ts...> tp, size_t PendingReg)
  {
    using H = typename decltype(tp::head(tp))::type;
    
    if(PendingReg & (1U << H::pinNum))
    {
      EXTI::PR::PRx<H::pinNum>::Clear::Write();
      return H::IrqHandler();
    }
    IrqHelper(tp::tail(tp), PendingReg);
  }

  forceinline static void IrqHandler()
  {
    IrqHelper(type_pack<Lines...>{}, EXTI::PR::Read());
  }
};


template <typename pin, 
          extiTrigger defaultTrigger = extiTrigger::None>
struct extiLine
{
private:
  template<extiTrigger tr = defaultTrigger>
  constexpr static auto configTrigger(...)
  {
    return Pack<
      typename EXTI::FTSR::TRx<pinNum>:: Value<(int(tr) & 0b01)>,
      typename EXTI::RTSR::TRx<pinNum>:: Value<(int(tr) >> 1)>
    >{};
  }

public:
  forceinline static void Enable()
  {
    EXTI::IMR::MRx<pinNum>::Enable::Set();
  }

  forceinline static void Disable()
  {
    EXTI::IMR::MRx<pinNum>::Enable::Set();
  }

  template<extiTrigger tr = defaultTrigger>
  forceinline static void SetTrigger(...)
  {
    configTrigger(tr).Set();
  }

  static constexpr auto pinNum = pin::pinNum;
  using Port = typename pin::port;

  using Init = Pack<
    typename EXTI::IMR::MRx<pinNum>::Enable,
    typename SYSCFG::EXTICR_EXTI<pinNum>::Value<Port::periphNum>,
    decltype(configTrigger())
  >;
};

