/******************************************************************************
* Filename : flash_registers.hpp
*
* Details  : FLASH
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct FLASH
{
  // Flash access control register
  struct ACR : Register<0x40023c00, ReadWriteMode, 0x0>
  {
    // Data cache reset
    struct DCRST : RegisterField<ACR, 12, 1, ReadWriteMode>
    {
    };
    // Instruction cache reset
    struct ICRST : RegisterField<ACR, 11, 1, WriteMode>
    {
    };
    // Data cache enable
    struct DCEN : RegisterField<ACR, 10, 1, ReadWriteMode>
    {
    };
    // Instruction cache enable
    struct ICEN : RegisterField<ACR, 9, 1, ReadWriteMode>
    {
    };
    // Prefetch enable
    struct PRFTEN : RegisterField<ACR, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<PRFTEN, 0U>;
      using Enable = FieldValue<PRFTEN, 1U>;
    };
    // Latency
    struct LATENCY : RegisterField<ACR, 0, 3, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 7)>>
      using Value = FieldValue<LATENCY, val>;
    };
  };

  // Flash key register
  struct KEYR : Register<0x40023c04, WriteMode, 0x0>
  {
    // FPEC key
    struct KEY : RegisterField<KEYR, 0, 32, WriteMode>
    {
    };
  };

  // Flash option key register
  struct OPTKEYR : Register<0x40023c08, WriteMode, 0x0>
  {
    // Option byte key
    struct OPTKEY : RegisterField<OPTKEYR, 0, 32, WriteMode>
    {
    };
  };

  // Status register
  struct SR : Register<0x40023c0c, ReadWriteMode, 0x0>
  {
    // Busy
    struct BSY : RegisterField<SR, 16, 1, ReadMode>
    {
    };
    // Read Protection Error
    struct RDERR : RegisterField<SR, 8, 1, ReadWriteMode>
    {
    };
    // Programming sequence error
    struct PGSERR : RegisterField<SR, 7, 1, ReadWriteMode>
    {
    };
    // Programming parallelism error
    struct PGPERR : RegisterField<SR, 6, 1, ReadWriteMode>
    {
    };
    // Programming alignment error
    struct PGAERR : RegisterField<SR, 5, 1, ReadWriteMode>
    {
    };
    // Write protection error
    struct WRPERR : RegisterField<SR, 4, 1, ReadWriteMode>
    {
    };
    // Operation error
    struct OPERR : RegisterField<SR, 1, 1, ReadWriteMode>
    {
    };
    // End of operation
    struct EOP : RegisterField<SR, 0, 1, ReadWriteMode>
    {
    };
  };

  // Control register
  struct CR : Register<0x40023c10, ReadWriteMode, 0x80000000>
  {
    // Lock
    struct LOCK : RegisterField<CR, 31, 1, ReadWriteMode>
    {
    };
    // Error interrupt enable
    struct ERRIE : RegisterField<CR, 25, 1, ReadWriteMode>
    {
    };
    // End of operation interrupt enable
    struct EOPIE : RegisterField<CR, 24, 1, ReadWriteMode>
    {
    };
    // Start
    struct STRT : RegisterField<CR, 16, 1, ReadWriteMode>
    {
    };
    // Program size
    struct PSIZE : RegisterField<CR, 8, 2, ReadWriteMode>
    {
    };
    // Sector number
    struct SNB : RegisterField<CR, 3, 4, ReadWriteMode>
    {
    };
    // Mass Erase of sectors 0 to 11
    struct MER : RegisterField<CR, 2, 1, ReadWriteMode>
    {
    };
    // Sector Erase
    struct SER : RegisterField<CR, 1, 1, ReadWriteMode>
    {
    };
    // Programming
    struct PG : RegisterField<CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // Flash option control register
  struct OPTCR : Register<0x40023c14, ReadWriteMode, 0xfffaaed>
  {
    // Selection of Protection Mode of nWPRi bits
    struct SPRMOD : RegisterField<OPTCR, 31, 1, ReadWriteMode>
    {
    };
    // Not write protect
    struct nWRP : RegisterField<OPTCR, 16, 8, ReadWriteMode>
    {
    };
    // Read protect
    struct RDP : RegisterField<OPTCR, 8, 8, ReadWriteMode>
    {
    };
    // nRST_STDBY User option bytes
    struct nRST_STDBY : RegisterField<OPTCR, 7, 1, ReadWriteMode>
    {
    };
    // nRST_STOP User option bytes
    struct nRST_STOP : RegisterField<OPTCR, 6, 1, ReadWriteMode>
    {
    };
    // WDG_SW User option bytes
    struct WDG_SW : RegisterField<OPTCR, 5, 1, ReadWriteMode>
    {
    };
    // BOR reset Level
    struct BOR_LEV : RegisterField<OPTCR, 2, 2, ReadWriteMode>
    {
    };
    // Option start
    struct OPTSTRT : RegisterField<OPTCR, 1, 1, ReadWriteMode>
    {
    };
    // Option lock
    struct OPTLOCK : RegisterField<OPTCR, 0, 1, ReadWriteMode>
    {
    };
  };

// Large Registers

};


