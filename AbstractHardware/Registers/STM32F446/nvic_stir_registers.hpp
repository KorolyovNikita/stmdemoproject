/******************************************************************************
* Filename : nvic_stir_registers.hpp
*
* Details  : Nested vectored interrupt controller
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct NVIC_STIR
{
  // Software trigger interrupt register
  struct STIR : Register<0xe000ef00, ReadWriteMode, 0x0>
  {
    // Software generated interrupt ID
    struct INTID : RegisterField<STIR, 0, 9, ReadWriteMode>
    {
    };
  };

// Large Registers

};


