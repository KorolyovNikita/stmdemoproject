/******************************************************************************
* Filename : otg_fs_pwrclk_registers.hpp
*
* Details  : USB on the go full speed
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct OTG_FS_PWRCLK
{
  // OTG_FS power and clock gating control register (OTG_FS_PCGCCTL)
  struct FS_PCGCCTL : Register<0x50000e00, ReadWriteMode, 0x0>
  {
    // PHY Suspended
    struct PHYSUSP : RegisterField<FS_PCGCCTL, 4, 1, ReadWriteMode>
    {
    };
    // Gate HCLK
    struct GATEHCLK : RegisterField<FS_PCGCCTL, 1, 1, ReadWriteMode>
    {
    };
    // Stop PHY clock
    struct STPPCLK : RegisterField<FS_PCGCCTL, 0, 1, ReadWriteMode>
    {
    };
  };

// Large Registers

};


