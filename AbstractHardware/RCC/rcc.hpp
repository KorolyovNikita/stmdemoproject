/*
Created by Korolyov Nikita on 18.11.2020
https://github.com/KorolyovNikita
*/

#pragma once

#include "rcc_registers.hpp"
#include "flash_registers.hpp"

#define forceinline  __attribute__((always_inline)) inline

extern "C" { uint32_t SystemCoreClock = 16000000; }


template<typename ...Observers>
struct rcc
{
  template<typename Config>
  forceinline static void Set()
  {
    RCC::CR::HSEON::Set();
    while(RCC::CR::HSERDY::notReady::IsSet());

    Config::PLLCFGR::Write();


    RCC::CR::PLLON::Set();
    while(RCC::CR::PLLRDY::notReady::IsSet());

    Config::CFGR::Write();
    Config::Flash::Write();

    RCC::CFGR::SW::PLL::Set();
    while(!RCC::CFGR::SWS::PLL::IsSet());

    SystemCoreClock = Config::HCLK::Hz;

    (Observers::template UpdateClock<Config>(), ...);
  }
};

template<auto mhz>
struct freq
{
  static constexpr uint32_t MHz = mhz;
  static constexpr uint32_t KHz = MHz * 1000;
  static constexpr uint32_t Hz = KHz * 1000;
};