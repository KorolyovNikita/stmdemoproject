/******************************************************************************
* Filename : fpu_cpacr_registers.hpp
*
* Details  : Floating point unit CPACR
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct FPU_CPACR
{
  // Coprocessor access control register
  struct CPACR : Register<0xe000ed88, ReadWriteMode, 0x0>
  {
    // CP
    struct CP : RegisterField<CPACR, 20, 4, ReadWriteMode>
    {
    };
  };

// Large Registers

};


