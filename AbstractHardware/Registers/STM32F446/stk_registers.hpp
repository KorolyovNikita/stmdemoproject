/******************************************************************************
* Filename : stk_registers.hpp
*
* Details  : SysTick timer
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct STK
{
  // SysTick control and status register
  struct CTRL : Register<0xe000e010, ReadWriteMode, 0x0>
  {
    // COUNTFLAG
    struct COUNTFLAG : RegisterField<CTRL, 16, 1, ReadWriteMode>
    {
    };
    // Clock source selection
    struct CLKSOURCE : RegisterField<CTRL, 2, 1, ReadWriteMode>
    {
    };
    // SysTick exception request enable
    struct TICKINT : RegisterField<CTRL, 1, 1, ReadWriteMode>
    {
    };
    // Counter enable
    struct ENABLE : RegisterField<CTRL, 0, 1, ReadWriteMode>
    {
    };
  };

  // SysTick reload value register
  struct LOAD : Register<0xe000e014, ReadWriteMode, 0x0>
  {
    // RELOAD value
    struct RELOAD : RegisterField<LOAD, 0, 24, ReadWriteMode>
    {
    };
  };

  // SysTick current value register
  struct VAL : Register<0xe000e018, ReadWriteMode, 0x0>
  {
    // Current counter value
    struct CURRENT : RegisterField<VAL, 0, 24, ReadWriteMode>
    {
    };
  };

  // SysTick calibration value register
  struct CALIB : Register<0xe000e01c, ReadWriteMode, 0x0>
  {
    // NOREF flag. Reads as zero
    struct NOREF : RegisterField<CALIB, 31, 1, ReadWriteMode>
    {
    };
    // SKEW flag: Indicates whether the TENMS value is exact
    struct SKEW : RegisterField<CALIB, 30, 1, ReadWriteMode>
    {
    };
    // Calibration value
    struct TENMS : RegisterField<CALIB, 0, 24, ReadWriteMode>
    {
    };
  };

// Large Registers

};


