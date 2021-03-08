/******************************************************************************
* Filename : mpu_registers.hpp
*
* Details  : Memory protection unit
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct MPU
{
  // MPU type register
  struct MPU_TYPER : Register<0xe000ed90, ReadMode, 0x800>
  {
    // Number of MPU instruction regions
    struct IREGION : RegisterField<MPU_TYPER, 16, 8, ReadMode>
    {
    };
    // Number of MPU data regions
    struct DREGION : RegisterField<MPU_TYPER, 8, 8, ReadMode>
    {
    };
    // Separate flag
    struct SEPARATE : RegisterField<MPU_TYPER, 0, 1, ReadMode>
    {
    };
  };

  // MPU control register
  struct MPU_CTRL : Register<0xe000ed94, ReadMode, 0x0>
  {
    // Enable priviliged software access to default memory map
    struct PRIVDEFENA : RegisterField<MPU_CTRL, 2, 1, ReadMode>
    {
    };
    // Enables the operation of MPU during hard fault
    struct HFNMIENA : RegisterField<MPU_CTRL, 1, 1, ReadMode>
    {
    };
    // Enables the MPU
    struct ENABLE : RegisterField<MPU_CTRL, 0, 1, ReadMode>
    {
    };
  };

  // MPU region number register
  struct MPU_RNR : Register<0xe000ed98, ReadWriteMode, 0x0>
  {
    // MPU region
    struct REGION : RegisterField<MPU_RNR, 0, 8, ReadWriteMode>
    {
    };
  };

  // MPU region base address register
  struct MPU_RBAR : Register<0xe000ed9c, ReadWriteMode, 0x0>
  {
    // Region base address field
    struct ADDR : RegisterField<MPU_RBAR, 5, 27, ReadWriteMode>
    {
    };
    // MPU region number valid
    struct VALID : RegisterField<MPU_RBAR, 4, 1, ReadWriteMode>
    {
    };
    // MPU region field
    struct REGION : RegisterField<MPU_RBAR, 0, 4, ReadWriteMode>
    {
    };
  };

  // MPU region attribute and size register
  struct MPU_RASR : Register<0xe000eda0, ReadWriteMode, 0x0>
  {
    // Instruction access disable bit
    struct XN : RegisterField<MPU_RASR, 28, 1, ReadWriteMode>
    {
    };
    // Access permission
    struct AP : RegisterField<MPU_RASR, 24, 3, ReadWriteMode>
    {
    };
    // memory attribute
    struct TEX : RegisterField<MPU_RASR, 19, 3, ReadWriteMode>
    {
    };
    // Shareable memory attribute
    struct S : RegisterField<MPU_RASR, 18, 1, ReadWriteMode>
    {
    };
    // memory attribute
    struct C : RegisterField<MPU_RASR, 17, 1, ReadWriteMode>
    {
    };
    // memory attribute
    struct B : RegisterField<MPU_RASR, 16, 1, ReadWriteMode>
    {
    };
    // Subregion disable bits
    struct SRD : RegisterField<MPU_RASR, 8, 8, ReadWriteMode>
    {
    };
    // Size of the MPU protection region
    struct SIZE : RegisterField<MPU_RASR, 1, 5, ReadWriteMode>
    {
    };
    // Region enable bit.
    struct ENABLE : RegisterField<MPU_RASR, 0, 1, ReadWriteMode>
    {
    };
  };

// Large Registers

};


