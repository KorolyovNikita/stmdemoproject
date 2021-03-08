/******************************************************************************
* Filename : iwdg_registers.hpp
*
* Details  : Independent watchdog
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct IWDG
{
  // Key register
  struct KR : Register<0x40003000, WriteMode, 0x0>
  {
    // Key value (write only, read 0000h)
    struct KEY : RegisterField<KR, 0, 16, WriteMode>
    {
    };
  };

  // Prescaler register
  struct PR : Register<0x40003004, ReadWriteMode, 0x0>
  {
    // Prescaler divider
    struct _PR : RegisterField<PR, 0, 3, ReadWriteMode>
    {
    };
  };

  // Reload register
  struct RLR : Register<0x40003008, ReadWriteMode, 0xfff>
  {
    // Watchdog counter reload value
    struct RL : RegisterField<RLR, 0, 12, ReadWriteMode>
    {
    };
  };

  // Status register
  struct SR : Register<0x4000300c, ReadMode, 0x0>
  {
    // Watchdog counter reload value update
    struct RVU : RegisterField<SR, 1, 1, ReadMode>
    {
    };
    // Watchdog prescaler value update
    struct PVU : RegisterField<SR, 0, 1, ReadMode>
    {
    };
  };

// Large Registers

};


