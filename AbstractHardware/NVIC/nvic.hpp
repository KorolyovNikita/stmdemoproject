/*
Created by Korolyov Nikita on 10.11.2020
https://github.com/KorolyovNikita
*/

#pragma once

#include "irqenum.hpp"
#include "nvic_registers.hpp"
#include "scb_registers.hpp"
#include "pack.hpp"

#define forceinline  __attribute__((always_inline)) inline


template<typename ...V>
struct nvicConfig
{
  forceinline static void Set()
  {
    Pack<typename NVIC::ISER_SETENA<V::irqNum>::Enable...>::Write();
    Pack<typename NVIC::IPR<V::irqNum>::template Priority<V::pr>...>::Write();
  }
};


template<auto irqnum, auto priority>
struct nvic
{
  static constexpr auto irqNum = static_cast<std::size_t>(irqnum);
  static constexpr auto pr = priority;


  forceinline static void Enable()
  {
    NVIC::ISER_SETENA<irqNum>::Set();
  }

  forceinline static void Disable() {
    NVIC::ICER_CLRENA<irqNum>::Set();
  }

  forceinline static void SetPriority()
  {
    NVIC::IPR<irqNum>::template Priority<priority>::Set();
  }
};


class nvicPriorityGrouping
{
  template<auto priority>
  struct Base
  {
    forceinline static void Set() {
      Pack<SCB::AIRCR::VECTKEYSTAT::Key0x5FA,
           SCB::AIRCR::PRIGROUP::Group<priority>
           >::Set();
    }
  };

public:
  struct group16_sub0 : Base<3> {};
  struct group8_sub2  : Base<4> {};
  struct group4_sub4  : Base<5> {};
  struct group2_sub8  : Base<6> {};
  struct group0_sub16 : Base<7> {};
};

