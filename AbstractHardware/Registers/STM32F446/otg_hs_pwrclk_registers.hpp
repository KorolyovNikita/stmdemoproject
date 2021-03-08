/******************************************************************************
* Filename : otg_hs_pwrclk_registers.hpp
*
* Details  : USB on the go high speed
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct OTG_HS_PWRCLK
{
  // Power and clock gating control register
  struct OTG_HS_PCGCR : Register<0x40040e00, ReadWriteMode, 0x0>
  {
    // PHY suspended
    struct PHYSUSP : RegisterField<OTG_HS_PCGCR, 4, 1, ReadWriteMode>
    {
    };
    // Gate HCLK
    struct GATEHCLK : RegisterField<OTG_HS_PCGCR, 1, 1, ReadWriteMode>
    {
    };
    // Stop PHY clock
    struct STPPCLK : RegisterField<OTG_HS_PCGCR, 0, 1, ReadWriteMode>
    {
    };
  };

// Large Registers

};


