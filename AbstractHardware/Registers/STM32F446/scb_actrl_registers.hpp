/******************************************************************************
* Filename : scb_actrl_registers.hpp
*
* Details  : System control block ACTLR
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct SCB_ACTRL
{
  // Auxiliary control register
  struct ACTRL : Register<0xe000e008, ReadWriteMode, 0x0>
  {
    // DISOOFP
    struct DISOOFP : RegisterField<ACTRL, 9, 1, ReadWriteMode>
    {
    };
    // DISFPCA
    struct DISFPCA : RegisterField<ACTRL, 8, 1, ReadWriteMode>
    {
    };
    // DISFOLD
    struct DISFOLD : RegisterField<ACTRL, 2, 1, ReadWriteMode>
    {
    };
    // DISDEFWBUF
    struct DISDEFWBUF : RegisterField<ACTRL, 1, 1, ReadWriteMode>
    {
    };
    // DISMCYCINT
    struct DISMCYCINT : RegisterField<ACTRL, 0, 1, ReadWriteMode>
    {
    };
  };

// Large Registers

};


