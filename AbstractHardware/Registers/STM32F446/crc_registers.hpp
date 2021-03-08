/******************************************************************************
* Filename : crc_registers.hpp
*
* Details  : Cryptographic processor
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct CRC
{
  // Data register
  struct DR : Register<0x40023000, ReadWriteMode, 0xffffffff>
  {
    // Data Register
    struct _DR : RegisterField<DR, 0, 32, ReadWriteMode>
    {
    };
  };

  // Independent Data register
  struct IDR : Register<0x40023004, ReadWriteMode, 0x0>
  {
    // Independent Data register
    struct _IDR : RegisterField<IDR, 0, 8, ReadWriteMode>
    {
    };
  };

  // Control register
  struct CR : Register<0x40023008, WriteMode, 0x0>
  {
    // Control regidter
    struct _CR : RegisterField<CR, 0, 1, WriteMode>
    {
    };
  };

// Large Registers

};


