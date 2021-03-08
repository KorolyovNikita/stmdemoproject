/******************************************************************************
* Filename : dac_registers.hpp
*
* Details  : Digital-to-analog converter
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct DAC
{
  // control register
  struct CR : Register<0x40007400, ReadWriteMode, 0x0>
  {
    // DAC channel2 DMA underrun interrupt enable
    struct DMAUDRIE2 : RegisterField<CR, 29, 1, ReadWriteMode>
    {
    };
    // DAC channel2 DMA enable
    struct DMAEN2 : RegisterField<CR, 28, 1, ReadWriteMode>
    {
    };
    // DAC channel2 mask/amplitude selector
    struct MAMP2 : RegisterField<CR, 24, 4, ReadWriteMode>
    {
    };
    // DAC channel2 noise/triangle wave generation enable
    struct WAVE2 : RegisterField<CR, 22, 2, ReadWriteMode>
    {
    };
    // DAC channel2 trigger selection
    struct TSEL2 : RegisterField<CR, 19, 3, ReadWriteMode>
    {
    };
    // DAC channel2 trigger enable
    struct TEN2 : RegisterField<CR, 18, 1, ReadWriteMode>
    {
    };
    // DAC channel2 output buffer disable
    struct BOFF2 : RegisterField<CR, 17, 1, ReadWriteMode>
    {
    };
    // DAC channel2 enable
    struct EN2 : RegisterField<CR, 16, 1, ReadWriteMode>
    {
    };
    // DAC channel1 DMA Underrun Interrupt enable
    struct DMAUDRIE1 : RegisterField<CR, 13, 1, ReadWriteMode>
    {
    };
    // DAC channel1 DMA enable
    struct DMAEN1 : RegisterField<CR, 12, 1, ReadWriteMode>
    {
    };
    // DAC channel1 mask/amplitude selector
    struct MAMP1 : RegisterField<CR, 8, 4, ReadWriteMode>
    {
    };
    // DAC channel1 noise/triangle wave generation enable
    struct WAVE1 : RegisterField<CR, 6, 2, ReadWriteMode>
    {
    };
    // DAC channel1 trigger selection
    struct TSEL1 : RegisterField<CR, 3, 3, ReadWriteMode>
    {
    };
    // DAC channel1 trigger enable
    struct TEN1 : RegisterField<CR, 2, 1, ReadWriteMode>
    {
    };
    // DAC channel1 output buffer disable
    struct BOFF1 : RegisterField<CR, 1, 1, ReadWriteMode>
    {
    };
    // DAC channel1 enable
    struct EN1 : RegisterField<CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // software trigger register
  struct SWTRIGR : Register<0x40007404, WriteMode, 0x0>
  {
    // DAC channel2 software trigger
    struct SWTRIG2 : RegisterField<SWTRIGR, 1, 1, WriteMode>
    {
    };
    // DAC channel1 software trigger
    struct SWTRIG1 : RegisterField<SWTRIGR, 0, 1, WriteMode>
    {
    };
  };

  // channel1 12-bit right-aligned data holding register
  struct DHR12R1 : Register<0x40007408, ReadWriteMode, 0x0>
  {
    // DAC channel1 12-bit right-aligned data
    struct DACC1DHR : RegisterField<DHR12R1, 0, 12, ReadWriteMode>
    {
    };
  };

  // channel1 12-bit left aligned data holding register
  struct DHR12L1 : Register<0x4000740c, ReadWriteMode, 0x0>
  {
    // DAC channel1 12-bit left-aligned data
    struct DACC1DHR : RegisterField<DHR12L1, 4, 12, ReadWriteMode>
    {
    };
  };

  // channel1 8-bit right aligned data holding register
  struct DHR8R1 : Register<0x40007410, ReadWriteMode, 0x0>
  {
    // DAC channel1 8-bit right-aligned data
    struct DACC1DHR : RegisterField<DHR8R1, 0, 8, ReadWriteMode>
    {
    };
  };

  // channel2 12-bit right aligned data holding register
  struct DHR12R2 : Register<0x40007414, ReadWriteMode, 0x0>
  {
    // DAC channel2 12-bit right-aligned data
    struct DACC2DHR : RegisterField<DHR12R2, 0, 12, ReadWriteMode>
    {
    };
  };

  // channel2 12-bit left aligned data holding register
  struct DHR12L2 : Register<0x40007418, ReadWriteMode, 0x0>
  {
    // DAC channel2 12-bit left-aligned data
    struct DACC2DHR : RegisterField<DHR12L2, 4, 12, ReadWriteMode>
    {
    };
  };

  // channel2 8-bit right-aligned data holding register
  struct DHR8R2 : Register<0x4000741c, ReadWriteMode, 0x0>
  {
    // DAC channel2 8-bit right-aligned data
    struct DACC2DHR : RegisterField<DHR8R2, 0, 8, ReadWriteMode>
    {
    };
  };

  // Dual DAC 12-bit right-aligned data holding register
  struct DHR12RD : Register<0x40007420, ReadWriteMode, 0x0>
  {
    // DAC channel2 12-bit right-aligned data
    struct DACC2DHR : RegisterField<DHR12RD, 16, 12, ReadWriteMode>
    {
    };
    // DAC channel1 12-bit right-aligned data
    struct DACC1DHR : RegisterField<DHR12RD, 0, 12, ReadWriteMode>
    {
    };
  };

  // DUAL DAC 12-bit left aligned data holding register
  struct DHR12LD : Register<0x40007424, ReadWriteMode, 0x0>
  {
    // DAC channel2 12-bit left-aligned data
    struct DACC2DHR : RegisterField<DHR12LD, 20, 12, ReadWriteMode>
    {
    };
    // DAC channel1 12-bit left-aligned data
    struct DACC1DHR : RegisterField<DHR12LD, 4, 12, ReadWriteMode>
    {
    };
  };

  // DUAL DAC 8-bit right aligned data holding register
  struct DHR8RD : Register<0x40007428, ReadWriteMode, 0x0>
  {
    // DAC channel2 8-bit right-aligned data
    struct DACC2DHR : RegisterField<DHR8RD, 8, 8, ReadWriteMode>
    {
    };
    // DAC channel1 8-bit right-aligned data
    struct DACC1DHR : RegisterField<DHR8RD, 0, 8, ReadWriteMode>
    {
    };
  };

  // channel1 data output register
  struct DOR1 : Register<0x4000742c, ReadMode, 0x0>
  {
    // DAC channel1 data output
    struct DACC1DOR : RegisterField<DOR1, 0, 12, ReadMode>
    {
    };
  };

  // channel2 data output register
  struct DOR2 : Register<0x40007430, ReadMode, 0x0>
  {
    // DAC channel2 data output
    struct DACC2DOR : RegisterField<DOR2, 0, 12, ReadMode>
    {
    };
  };

  // status register
  struct SR : Register<0x40007434, ReadWriteMode, 0x0>
  {
    // DAC channel2 DMA underrun flag
    struct DMAUDR2 : RegisterField<SR, 29, 1, ReadWriteMode>
    {
    };
    // DAC channel1 DMA underrun flag
    struct DMAUDR1 : RegisterField<SR, 13, 1, ReadWriteMode>
    {
    };
  };

// Large Registers

};


