/******************************************************************************
* Filename : wwdg_registers.hpp
*
* Details  : Window watchdog
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct WWDG
{
  // Control register
  struct CR : Register<0x40002c00, ReadWriteMode, 0x7f>
  {
    // Activation bit
    struct WDGA : RegisterField<CR, 7, 1, ReadWriteMode>
    {
    };
    // 7-bit counter (MSB to LSB)
    struct T : RegisterField<CR, 0, 7, ReadWriteMode>
    {
    };
  };

  // Configuration register
  struct CFR : Register<0x40002c04, ReadWriteMode, 0x7f>
  {
    // Early wakeup interrupt
    struct EWI : RegisterField<CFR, 9, 1, ReadWriteMode>
    {
    };
    // Timer base
    struct WDGTB1 : RegisterField<CFR, 8, 1, ReadWriteMode>
    {
    };
    // Timer base
    struct WDGTB0 : RegisterField<CFR, 7, 1, ReadWriteMode>
    {
    };
    // 7-bit window value
    struct W : RegisterField<CFR, 0, 7, ReadWriteMode>
    {
    };
  };

  // Status register
  struct SR : Register<0x40002c08, ReadWriteMode, 0x0>
  {
    // Early wakeup interrupt flag
    struct EWIF : RegisterField<SR, 0, 1, ReadWriteMode>
    {
    };
  };

// Large Registers

};


