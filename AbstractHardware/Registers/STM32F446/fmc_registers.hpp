/******************************************************************************
* Filename : fmc_registers.hpp
*
* Details  : Flexible memory controller
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct FMC
{
  // SRAM/NOR-Flash chip-select control register 1
  struct BCR1 : Register<0xa0000000, ReadWriteMode, 0x30d0>
  {
    // CCLKEN
    struct CCLKEN : RegisterField<BCR1, 20, 1, ReadWriteMode>
    {
    };
    // CBURSTRW
    struct CBURSTRW : RegisterField<BCR1, 19, 1, ReadWriteMode>
    {
    };
    // ASYNCWAIT
    struct ASYNCWAIT : RegisterField<BCR1, 15, 1, ReadWriteMode>
    {
    };
    // EXTMOD
    struct EXTMOD : RegisterField<BCR1, 14, 1, ReadWriteMode>
    {
    };
    // WAITEN
    struct WAITEN : RegisterField<BCR1, 13, 1, ReadWriteMode>
    {
    };
    // WREN
    struct WREN : RegisterField<BCR1, 12, 1, ReadWriteMode>
    {
    };
    // WAITCFG
    struct WAITCFG : RegisterField<BCR1, 11, 1, ReadWriteMode>
    {
    };
    // WAITPOL
    struct WAITPOL : RegisterField<BCR1, 9, 1, ReadWriteMode>
    {
    };
    // BURSTEN
    struct BURSTEN : RegisterField<BCR1, 8, 1, ReadWriteMode>
    {
    };
    // FACCEN
    struct FACCEN : RegisterField<BCR1, 6, 1, ReadWriteMode>
    {
    };
    // MWID
    struct MWID : RegisterField<BCR1, 4, 2, ReadWriteMode>
    {
    };
    // MTYP
    struct MTYP : RegisterField<BCR1, 2, 2, ReadWriteMode>
    {
    };
    // MUXEN
    struct MUXEN : RegisterField<BCR1, 1, 1, ReadWriteMode>
    {
    };
    // MBKEN
    struct MBKEN : RegisterField<BCR1, 0, 1, ReadWriteMode>
    {
    };
  };

  // SRAM/NOR-Flash chip-select timing register 1
  struct BTR1 : Register<0xa0000004, ReadWriteMode, 0xffffffff>
  {
    // ACCMOD
    struct ACCMOD : RegisterField<BTR1, 28, 2, ReadWriteMode>
    {
    };
    // DATLAT
    struct DATLAT : RegisterField<BTR1, 24, 4, ReadWriteMode>
    {
    };
    // CLKDIV
    struct CLKDIV : RegisterField<BTR1, 20, 4, ReadWriteMode>
    {
    };
    // BUSTURN
    struct BUSTURN : RegisterField<BTR1, 16, 4, ReadWriteMode>
    {
    };
    // DATAST
    struct DATAST : RegisterField<BTR1, 8, 8, ReadWriteMode>
    {
    };
    // ADDHLD
    struct ADDHLD : RegisterField<BTR1, 4, 4, ReadWriteMode>
    {
    };
    // ADDSET
    struct ADDSET : RegisterField<BTR1, 0, 4, ReadWriteMode>
    {
    };
  };

  // SRAM/NOR-Flash chip-select control register 2
  struct BCR2 : Register<0xa0000008, ReadWriteMode, 0x30d0>
  {
    // CBURSTRW
    struct CBURSTRW : RegisterField<BCR2, 19, 1, ReadWriteMode>
    {
    };
    // ASYNCWAIT
    struct ASYNCWAIT : RegisterField<BCR2, 15, 1, ReadWriteMode>
    {
    };
    // EXTMOD
    struct EXTMOD : RegisterField<BCR2, 14, 1, ReadWriteMode>
    {
    };
    // WAITEN
    struct WAITEN : RegisterField<BCR2, 13, 1, ReadWriteMode>
    {
    };
    // WREN
    struct WREN : RegisterField<BCR2, 12, 1, ReadWriteMode>
    {
    };
    // WAITCFG
    struct WAITCFG : RegisterField<BCR2, 11, 1, ReadWriteMode>
    {
    };
    // WRAPMOD
    struct WRAPMOD : RegisterField<BCR2, 10, 1, ReadWriteMode>
    {
    };
    // WAITPOL
    struct WAITPOL : RegisterField<BCR2, 9, 1, ReadWriteMode>
    {
    };
    // BURSTEN
    struct BURSTEN : RegisterField<BCR2, 8, 1, ReadWriteMode>
    {
    };
    // FACCEN
    struct FACCEN : RegisterField<BCR2, 6, 1, ReadWriteMode>
    {
    };
    // MWID
    struct MWID : RegisterField<BCR2, 4, 2, ReadWriteMode>
    {
    };
    // MTYP
    struct MTYP : RegisterField<BCR2, 2, 2, ReadWriteMode>
    {
    };
    // MUXEN
    struct MUXEN : RegisterField<BCR2, 1, 1, ReadWriteMode>
    {
    };
    // MBKEN
    struct MBKEN : RegisterField<BCR2, 0, 1, ReadWriteMode>
    {
    };
  };

  // SRAM/NOR-Flash chip-select timing register 2
  struct BTR2 : Register<0xa000000c, ReadWriteMode, 0xffffffff>
  {
    // ACCMOD
    struct ACCMOD : RegisterField<BTR2, 28, 2, ReadWriteMode>
    {
    };
    // DATLAT
    struct DATLAT : RegisterField<BTR2, 24, 4, ReadWriteMode>
    {
    };
    // CLKDIV
    struct CLKDIV : RegisterField<BTR2, 20, 4, ReadWriteMode>
    {
    };
    // BUSTURN
    struct BUSTURN : RegisterField<BTR2, 16, 4, ReadWriteMode>
    {
    };
    // DATAST
    struct DATAST : RegisterField<BTR2, 8, 8, ReadWriteMode>
    {
    };
    // ADDHLD
    struct ADDHLD : RegisterField<BTR2, 4, 4, ReadWriteMode>
    {
    };
    // ADDSET
    struct ADDSET : RegisterField<BTR2, 0, 4, ReadWriteMode>
    {
    };
  };

  // SRAM/NOR-Flash chip-select control register 3
  struct BCR3 : Register<0xa0000010, ReadWriteMode, 0x30d0>
  {
    // CBURSTRW
    struct CBURSTRW : RegisterField<BCR3, 19, 1, ReadWriteMode>
    {
    };
    // ASYNCWAIT
    struct ASYNCWAIT : RegisterField<BCR3, 15, 1, ReadWriteMode>
    {
    };
    // EXTMOD
    struct EXTMOD : RegisterField<BCR3, 14, 1, ReadWriteMode>
    {
    };
    // WAITEN
    struct WAITEN : RegisterField<BCR3, 13, 1, ReadWriteMode>
    {
    };
    // WREN
    struct WREN : RegisterField<BCR3, 12, 1, ReadWriteMode>
    {
    };
    // WAITCFG
    struct WAITCFG : RegisterField<BCR3, 11, 1, ReadWriteMode>
    {
    };
    // WRAPMOD
    struct WRAPMOD : RegisterField<BCR3, 10, 1, ReadWriteMode>
    {
    };
    // WAITPOL
    struct WAITPOL : RegisterField<BCR3, 9, 1, ReadWriteMode>
    {
    };
    // BURSTEN
    struct BURSTEN : RegisterField<BCR3, 8, 1, ReadWriteMode>
    {
    };
    // FACCEN
    struct FACCEN : RegisterField<BCR3, 6, 1, ReadWriteMode>
    {
    };
    // MWID
    struct MWID : RegisterField<BCR3, 4, 2, ReadWriteMode>
    {
    };
    // MTYP
    struct MTYP : RegisterField<BCR3, 2, 2, ReadWriteMode>
    {
    };
    // MUXEN
    struct MUXEN : RegisterField<BCR3, 1, 1, ReadWriteMode>
    {
    };
    // MBKEN
    struct MBKEN : RegisterField<BCR3, 0, 1, ReadWriteMode>
    {
    };
  };

  // SRAM/NOR-Flash chip-select timing register 3
  struct BTR3 : Register<0xa0000014, ReadWriteMode, 0xffffffff>
  {
    // ACCMOD
    struct ACCMOD : RegisterField<BTR3, 28, 2, ReadWriteMode>
    {
    };
    // DATLAT
    struct DATLAT : RegisterField<BTR3, 24, 4, ReadWriteMode>
    {
    };
    // CLKDIV
    struct CLKDIV : RegisterField<BTR3, 20, 4, ReadWriteMode>
    {
    };
    // BUSTURN
    struct BUSTURN : RegisterField<BTR3, 16, 4, ReadWriteMode>
    {
    };
    // DATAST
    struct DATAST : RegisterField<BTR3, 8, 8, ReadWriteMode>
    {
    };
    // ADDHLD
    struct ADDHLD : RegisterField<BTR3, 4, 4, ReadWriteMode>
    {
    };
    // ADDSET
    struct ADDSET : RegisterField<BTR3, 0, 4, ReadWriteMode>
    {
    };
  };

  // SRAM/NOR-Flash chip-select control register 4
  struct BCR4 : Register<0xa0000018, ReadWriteMode, 0x30d0>
  {
    // CBURSTRW
    struct CBURSTRW : RegisterField<BCR4, 19, 1, ReadWriteMode>
    {
    };
    // ASYNCWAIT
    struct ASYNCWAIT : RegisterField<BCR4, 15, 1, ReadWriteMode>
    {
    };
    // EXTMOD
    struct EXTMOD : RegisterField<BCR4, 14, 1, ReadWriteMode>
    {
    };
    // WAITEN
    struct WAITEN : RegisterField<BCR4, 13, 1, ReadWriteMode>
    {
    };
    // WREN
    struct WREN : RegisterField<BCR4, 12, 1, ReadWriteMode>
    {
    };
    // WAITCFG
    struct WAITCFG : RegisterField<BCR4, 11, 1, ReadWriteMode>
    {
    };
    // WRAPMOD
    struct WRAPMOD : RegisterField<BCR4, 10, 1, ReadWriteMode>
    {
    };
    // WAITPOL
    struct WAITPOL : RegisterField<BCR4, 9, 1, ReadWriteMode>
    {
    };
    // BURSTEN
    struct BURSTEN : RegisterField<BCR4, 8, 1, ReadWriteMode>
    {
    };
    // FACCEN
    struct FACCEN : RegisterField<BCR4, 6, 1, ReadWriteMode>
    {
    };
    // MWID
    struct MWID : RegisterField<BCR4, 4, 2, ReadWriteMode>
    {
    };
    // MTYP
    struct MTYP : RegisterField<BCR4, 2, 2, ReadWriteMode>
    {
    };
    // MUXEN
    struct MUXEN : RegisterField<BCR4, 1, 1, ReadWriteMode>
    {
    };
    // MBKEN
    struct MBKEN : RegisterField<BCR4, 0, 1, ReadWriteMode>
    {
    };
  };

  // SRAM/NOR-Flash chip-select timing register 4
  struct BTR4 : Register<0xa000001c, ReadWriteMode, 0xffffffff>
  {
    // ACCMOD
    struct ACCMOD : RegisterField<BTR4, 28, 2, ReadWriteMode>
    {
    };
    // DATLAT
    struct DATLAT : RegisterField<BTR4, 24, 4, ReadWriteMode>
    {
    };
    // CLKDIV
    struct CLKDIV : RegisterField<BTR4, 20, 4, ReadWriteMode>
    {
    };
    // BUSTURN
    struct BUSTURN : RegisterField<BTR4, 16, 4, ReadWriteMode>
    {
    };
    // DATAST
    struct DATAST : RegisterField<BTR4, 8, 8, ReadWriteMode>
    {
    };
    // ADDHLD
    struct ADDHLD : RegisterField<BTR4, 4, 4, ReadWriteMode>
    {
    };
    // ADDSET
    struct ADDSET : RegisterField<BTR4, 0, 4, ReadWriteMode>
    {
    };
  };

  // PC Card/NAND Flash control register 2
  struct PCR2 : Register<0xa0000060, ReadWriteMode, 0x18>
  {
    // ECCPS
    struct ECCPS : RegisterField<PCR2, 17, 3, ReadWriteMode>
    {
    };
    // TAR
    struct TAR : RegisterField<PCR2, 13, 4, ReadWriteMode>
    {
    };
    // TCLR
    struct TCLR : RegisterField<PCR2, 9, 4, ReadWriteMode>
    {
    };
    // ECCEN
    struct ECCEN : RegisterField<PCR2, 6, 1, ReadWriteMode>
    {
    };
    // PWID
    struct PWID : RegisterField<PCR2, 4, 2, ReadWriteMode>
    {
    };
    // PTYP
    struct PTYP : RegisterField<PCR2, 3, 1, ReadWriteMode>
    {
    };
    // PBKEN
    struct PBKEN : RegisterField<PCR2, 2, 1, ReadWriteMode>
    {
    };
    // PWAITEN
    struct PWAITEN : RegisterField<PCR2, 1, 1, ReadWriteMode>
    {
    };
  };

  // FIFO status and interrupt register 2
  struct SR2 : Register<0xa0000064, ReadWriteMode, 0x40>
  {
    // FEMPT
    struct FEMPT : RegisterField<SR2, 6, 1, ReadMode>
    {
    };
    // IFEN
    struct IFEN : RegisterField<SR2, 5, 1, ReadWriteMode>
    {
    };
    // ILEN
    struct ILEN : RegisterField<SR2, 4, 1, ReadWriteMode>
    {
    };
    // IREN
    struct IREN : RegisterField<SR2, 3, 1, ReadWriteMode>
    {
    };
    // IFS
    struct IFS : RegisterField<SR2, 2, 1, ReadWriteMode>
    {
    };
    // ILS
    struct ILS : RegisterField<SR2, 1, 1, ReadWriteMode>
    {
    };
    // IRS
    struct IRS : RegisterField<SR2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Common memory space timing register 2
  struct PMEM2 : Register<0xa0000068, ReadWriteMode, 0xfcfcfcfc>
  {
    // MEMHIZx
    struct MEMHIZx : RegisterField<PMEM2, 24, 8, ReadWriteMode>
    {
    };
    // MEMHOLDx
    struct MEMHOLDx : RegisterField<PMEM2, 16, 8, ReadWriteMode>
    {
    };
    // MEMWAITx
    struct MEMWAITx : RegisterField<PMEM2, 8, 8, ReadWriteMode>
    {
    };
    // MEMSETx
    struct MEMSETx : RegisterField<PMEM2, 0, 8, ReadWriteMode>
    {
    };
  };

  // Attribute memory space timing register 2
  struct PATT2 : Register<0xa000006c, ReadWriteMode, 0xfcfcfcfc>
  {
    // ATTHIZx
    struct ATTHIZx : RegisterField<PATT2, 24, 8, ReadWriteMode>
    {
    };
    // ATTHOLDx
    struct ATTHOLDx : RegisterField<PATT2, 16, 8, ReadWriteMode>
    {
    };
    // ATTWAITx
    struct ATTWAITx : RegisterField<PATT2, 8, 8, ReadWriteMode>
    {
    };
    // ATTSETx
    struct ATTSETx : RegisterField<PATT2, 0, 8, ReadWriteMode>
    {
    };
  };

  // ECC result register 2
  struct ECCR2 : Register<0xa0000074, ReadMode, 0x0>
  {
    // ECCx
    struct ECCx : RegisterField<ECCR2, 0, 32, ReadMode>
    {
    };
  };

  // PC Card/NAND Flash control register 3
  struct PCR3 : Register<0xa0000080, ReadWriteMode, 0x18>
  {
    // ECCPS
    struct ECCPS : RegisterField<PCR3, 17, 3, ReadWriteMode>
    {
    };
    // TAR
    struct TAR : RegisterField<PCR3, 13, 4, ReadWriteMode>
    {
    };
    // TCLR
    struct TCLR : RegisterField<PCR3, 9, 4, ReadWriteMode>
    {
    };
    // ECCEN
    struct ECCEN : RegisterField<PCR3, 6, 1, ReadWriteMode>
    {
    };
    // PWID
    struct PWID : RegisterField<PCR3, 4, 2, ReadWriteMode>
    {
    };
    // PTYP
    struct PTYP : RegisterField<PCR3, 3, 1, ReadWriteMode>
    {
    };
    // PBKEN
    struct PBKEN : RegisterField<PCR3, 2, 1, ReadWriteMode>
    {
    };
    // PWAITEN
    struct PWAITEN : RegisterField<PCR3, 1, 1, ReadWriteMode>
    {
    };
  };

  // FIFO status and interrupt register 3
  struct SR3 : Register<0xa0000084, ReadWriteMode, 0x40>
  {
    // FEMPT
    struct FEMPT : RegisterField<SR3, 6, 1, ReadMode>
    {
    };
    // IFEN
    struct IFEN : RegisterField<SR3, 5, 1, ReadWriteMode>
    {
    };
    // ILEN
    struct ILEN : RegisterField<SR3, 4, 1, ReadWriteMode>
    {
    };
    // IREN
    struct IREN : RegisterField<SR3, 3, 1, ReadWriteMode>
    {
    };
    // IFS
    struct IFS : RegisterField<SR3, 2, 1, ReadWriteMode>
    {
    };
    // ILS
    struct ILS : RegisterField<SR3, 1, 1, ReadWriteMode>
    {
    };
    // IRS
    struct IRS : RegisterField<SR3, 0, 1, ReadWriteMode>
    {
    };
  };

  // Common memory space timing register 3
  struct PMEM3 : Register<0xa0000088, ReadWriteMode, 0xfcfcfcfc>
  {
    // MEMHIZx
    struct MEMHIZx : RegisterField<PMEM3, 24, 8, ReadWriteMode>
    {
    };
    // MEMHOLDx
    struct MEMHOLDx : RegisterField<PMEM3, 16, 8, ReadWriteMode>
    {
    };
    // MEMWAITx
    struct MEMWAITx : RegisterField<PMEM3, 8, 8, ReadWriteMode>
    {
    };
    // MEMSETx
    struct MEMSETx : RegisterField<PMEM3, 0, 8, ReadWriteMode>
    {
    };
  };

  // Attribute memory space timing register 3
  struct PATT3 : Register<0xa000008c, ReadWriteMode, 0xfcfcfcfc>
  {
    // ATTHIZx
    struct ATTHIZx : RegisterField<PATT3, 24, 8, ReadWriteMode>
    {
    };
    // ATTHOLDx
    struct ATTHOLDx : RegisterField<PATT3, 16, 8, ReadWriteMode>
    {
    };
    // ATTWAITx
    struct ATTWAITx : RegisterField<PATT3, 8, 8, ReadWriteMode>
    {
    };
    // ATTSETx
    struct ATTSETx : RegisterField<PATT3, 0, 8, ReadWriteMode>
    {
    };
  };

  // ECC result register 3
  struct ECCR3 : Register<0xa0000094, ReadMode, 0x0>
  {
    // ECCx
    struct ECCx : RegisterField<ECCR3, 0, 32, ReadMode>
    {
    };
  };

  // PC Card/NAND Flash control register 4
  struct PCR4 : Register<0xa00000a0, ReadWriteMode, 0x18>
  {
    // ECCPS
    struct ECCPS : RegisterField<PCR4, 17, 3, ReadWriteMode>
    {
    };
    // TAR
    struct TAR : RegisterField<PCR4, 13, 4, ReadWriteMode>
    {
    };
    // TCLR
    struct TCLR : RegisterField<PCR4, 9, 4, ReadWriteMode>
    {
    };
    // ECCEN
    struct ECCEN : RegisterField<PCR4, 6, 1, ReadWriteMode>
    {
    };
    // PWID
    struct PWID : RegisterField<PCR4, 4, 2, ReadWriteMode>
    {
    };
    // PTYP
    struct PTYP : RegisterField<PCR4, 3, 1, ReadWriteMode>
    {
    };
    // PBKEN
    struct PBKEN : RegisterField<PCR4, 2, 1, ReadWriteMode>
    {
    };
    // PWAITEN
    struct PWAITEN : RegisterField<PCR4, 1, 1, ReadWriteMode>
    {
    };
  };

  // FIFO status and interrupt register 4
  struct SR4 : Register<0xa00000a4, ReadWriteMode, 0x40>
  {
    // FEMPT
    struct FEMPT : RegisterField<SR4, 6, 1, ReadMode>
    {
    };
    // IFEN
    struct IFEN : RegisterField<SR4, 5, 1, ReadWriteMode>
    {
    };
    // ILEN
    struct ILEN : RegisterField<SR4, 4, 1, ReadWriteMode>
    {
    };
    // IREN
    struct IREN : RegisterField<SR4, 3, 1, ReadWriteMode>
    {
    };
    // IFS
    struct IFS : RegisterField<SR4, 2, 1, ReadWriteMode>
    {
    };
    // ILS
    struct ILS : RegisterField<SR4, 1, 1, ReadWriteMode>
    {
    };
    // IRS
    struct IRS : RegisterField<SR4, 0, 1, ReadWriteMode>
    {
    };
  };

  // Common memory space timing register 4
  struct PMEM4 : Register<0xa00000a8, ReadWriteMode, 0xfcfcfcfc>
  {
    // MEMHIZx
    struct MEMHIZx : RegisterField<PMEM4, 24, 8, ReadWriteMode>
    {
    };
    // MEMHOLDx
    struct MEMHOLDx : RegisterField<PMEM4, 16, 8, ReadWriteMode>
    {
    };
    // MEMWAITx
    struct MEMWAITx : RegisterField<PMEM4, 8, 8, ReadWriteMode>
    {
    };
    // MEMSETx
    struct MEMSETx : RegisterField<PMEM4, 0, 8, ReadWriteMode>
    {
    };
  };

  // Attribute memory space timing register 4
  struct PATT4 : Register<0xa00000ac, ReadWriteMode, 0xfcfcfcfc>
  {
    // ATTHIZx
    struct ATTHIZx : RegisterField<PATT4, 24, 8, ReadWriteMode>
    {
    };
    // ATTHOLDx
    struct ATTHOLDx : RegisterField<PATT4, 16, 8, ReadWriteMode>
    {
    };
    // ATTWAITx
    struct ATTWAITx : RegisterField<PATT4, 8, 8, ReadWriteMode>
    {
    };
    // ATTSETx
    struct ATTSETx : RegisterField<PATT4, 0, 8, ReadWriteMode>
    {
    };
  };

  // I/O space timing register 4
  struct PIO4 : Register<0xa00000b0, ReadWriteMode, 0xfcfcfcfc>
  {
    // IOHIZx
    struct IOHIZx : RegisterField<PIO4, 24, 8, ReadWriteMode>
    {
    };
    // IOHOLDx
    struct IOHOLDx : RegisterField<PIO4, 16, 8, ReadWriteMode>
    {
    };
    // IOWAITx
    struct IOWAITx : RegisterField<PIO4, 8, 8, ReadWriteMode>
    {
    };
    // IOSETx
    struct IOSETx : RegisterField<PIO4, 0, 8, ReadWriteMode>
    {
    };
  };

  // SRAM/NOR-Flash write timing registers 1
  struct BWTR1 : Register<0xa0000104, ReadWriteMode, 0xfffffff>
  {
    // ACCMOD
    struct ACCMOD : RegisterField<BWTR1, 28, 2, ReadWriteMode>
    {
    };
    // DATLAT
    struct DATLAT : RegisterField<BWTR1, 24, 4, ReadWriteMode>
    {
    };
    // CLKDIV
    struct CLKDIV : RegisterField<BWTR1, 20, 4, ReadWriteMode>
    {
    };
    // DATAST
    struct DATAST : RegisterField<BWTR1, 8, 8, ReadWriteMode>
    {
    };
    // ADDHLD
    struct ADDHLD : RegisterField<BWTR1, 4, 4, ReadWriteMode>
    {
    };
    // ADDSET
    struct ADDSET : RegisterField<BWTR1, 0, 4, ReadWriteMode>
    {
    };
  };

  // SRAM/NOR-Flash write timing registers 2
  struct BWTR2 : Register<0xa000010c, ReadWriteMode, 0xfffffff>
  {
    // ACCMOD
    struct ACCMOD : RegisterField<BWTR2, 28, 2, ReadWriteMode>
    {
    };
    // DATLAT
    struct DATLAT : RegisterField<BWTR2, 24, 4, ReadWriteMode>
    {
    };
    // CLKDIV
    struct CLKDIV : RegisterField<BWTR2, 20, 4, ReadWriteMode>
    {
    };
    // DATAST
    struct DATAST : RegisterField<BWTR2, 8, 8, ReadWriteMode>
    {
    };
    // ADDHLD
    struct ADDHLD : RegisterField<BWTR2, 4, 4, ReadWriteMode>
    {
    };
    // ADDSET
    struct ADDSET : RegisterField<BWTR2, 0, 4, ReadWriteMode>
    {
    };
  };

  // SRAM/NOR-Flash write timing registers 3
  struct BWTR3 : Register<0xa0000114, ReadWriteMode, 0xfffffff>
  {
    // ACCMOD
    struct ACCMOD : RegisterField<BWTR3, 28, 2, ReadWriteMode>
    {
    };
    // DATLAT
    struct DATLAT : RegisterField<BWTR3, 24, 4, ReadWriteMode>
    {
    };
    // CLKDIV
    struct CLKDIV : RegisterField<BWTR3, 20, 4, ReadWriteMode>
    {
    };
    // DATAST
    struct DATAST : RegisterField<BWTR3, 8, 8, ReadWriteMode>
    {
    };
    // ADDHLD
    struct ADDHLD : RegisterField<BWTR3, 4, 4, ReadWriteMode>
    {
    };
    // ADDSET
    struct ADDSET : RegisterField<BWTR3, 0, 4, ReadWriteMode>
    {
    };
  };

  // SRAM/NOR-Flash write timing registers 4
  struct BWTR4 : Register<0xa000011c, ReadWriteMode, 0xfffffff>
  {
    // ACCMOD
    struct ACCMOD : RegisterField<BWTR4, 28, 2, ReadWriteMode>
    {
    };
    // DATLAT
    struct DATLAT : RegisterField<BWTR4, 24, 4, ReadWriteMode>
    {
    };
    // CLKDIV
    struct CLKDIV : RegisterField<BWTR4, 20, 4, ReadWriteMode>
    {
    };
    // DATAST
    struct DATAST : RegisterField<BWTR4, 8, 8, ReadWriteMode>
    {
    };
    // ADDHLD
    struct ADDHLD : RegisterField<BWTR4, 4, 4, ReadWriteMode>
    {
    };
    // ADDSET
    struct ADDSET : RegisterField<BWTR4, 0, 4, ReadWriteMode>
    {
    };
  };

  // SDRAM Control Register 1
  struct SDCR1 : Register<0xa0000140, ReadWriteMode, 0x2d0>
  {
    // Read pipe
    struct RPIPE : RegisterField<SDCR1, 13, 2, ReadWriteMode>
    {
    };
    // Burst read
    struct RBURST : RegisterField<SDCR1, 12, 1, ReadWriteMode>
    {
    };
    // SDRAM clock configuration
    struct SDCLK : RegisterField<SDCR1, 10, 2, ReadWriteMode>
    {
    };
    // Write protection
    struct WP : RegisterField<SDCR1, 9, 1, ReadWriteMode>
    {
    };
    // CAS latency
    struct CAS : RegisterField<SDCR1, 7, 2, ReadWriteMode>
    {
    };
    // Number of internal banks
    struct NB : RegisterField<SDCR1, 6, 1, ReadWriteMode>
    {
    };
    // Memory data bus width
    struct MWID : RegisterField<SDCR1, 4, 2, ReadWriteMode>
    {
    };
    // Number of row address bits
    struct NR : RegisterField<SDCR1, 2, 2, ReadWriteMode>
    {
    };
    // Number of column address bits
    struct NC : RegisterField<SDCR1, 0, 2, ReadWriteMode>
    {
    };
  };

  // SDRAM Control Register 2
  struct SDCR2 : Register<0xa0000144, ReadWriteMode, 0x2d0>
  {
    // Read pipe
    struct RPIPE : RegisterField<SDCR2, 13, 2, ReadWriteMode>
    {
    };
    // Burst read
    struct RBURST : RegisterField<SDCR2, 12, 1, ReadWriteMode>
    {
    };
    // SDRAM clock configuration
    struct SDCLK : RegisterField<SDCR2, 10, 2, ReadWriteMode>
    {
    };
    // Write protection
    struct WP : RegisterField<SDCR2, 9, 1, ReadWriteMode>
    {
    };
    // CAS latency
    struct CAS : RegisterField<SDCR2, 7, 2, ReadWriteMode>
    {
    };
    // Number of internal banks
    struct NB : RegisterField<SDCR2, 6, 1, ReadWriteMode>
    {
    };
    // Memory data bus width
    struct MWID : RegisterField<SDCR2, 4, 2, ReadWriteMode>
    {
    };
    // Number of row address bits
    struct NR : RegisterField<SDCR2, 2, 2, ReadWriteMode>
    {
    };
    // Number of column address bits
    struct NC : RegisterField<SDCR2, 0, 2, ReadWriteMode>
    {
    };
  };

  // SDRAM Timing register 1
  struct SDTR1 : Register<0xa0000148, ReadWriteMode, 0xfffffff>
  {
    // Row to column delay
    struct TRCD : RegisterField<SDTR1, 24, 4, ReadWriteMode>
    {
    };
    // Row precharge delay
    struct TRP : RegisterField<SDTR1, 20, 4, ReadWriteMode>
    {
    };
    // Recovery delay
    struct TWR : RegisterField<SDTR1, 16, 4, ReadWriteMode>
    {
    };
    // Row cycle delay
    struct TRC : RegisterField<SDTR1, 12, 4, ReadWriteMode>
    {
    };
    // Self refresh time
    struct TRAS : RegisterField<SDTR1, 8, 4, ReadWriteMode>
    {
    };
    // Exit self-refresh delay
    struct TXSR : RegisterField<SDTR1, 4, 4, ReadWriteMode>
    {
    };
    // Load Mode Register to Active
    struct TMRD : RegisterField<SDTR1, 0, 4, ReadWriteMode>
    {
    };
  };

  // SDRAM Timing register 2
  struct SDTR2 : Register<0xa000014c, ReadWriteMode, 0xfffffff>
  {
    // Row to column delay
    struct TRCD : RegisterField<SDTR2, 24, 4, ReadWriteMode>
    {
    };
    // Row precharge delay
    struct TRP : RegisterField<SDTR2, 20, 4, ReadWriteMode>
    {
    };
    // Recovery delay
    struct TWR : RegisterField<SDTR2, 16, 4, ReadWriteMode>
    {
    };
    // Row cycle delay
    struct TRC : RegisterField<SDTR2, 12, 4, ReadWriteMode>
    {
    };
    // Self refresh time
    struct TRAS : RegisterField<SDTR2, 8, 4, ReadWriteMode>
    {
    };
    // Exit self-refresh delay
    struct TXSR : RegisterField<SDTR2, 4, 4, ReadWriteMode>
    {
    };
    // Load Mode Register to Active
    struct TMRD : RegisterField<SDTR2, 0, 4, ReadWriteMode>
    {
    };
  };

  // SDRAM Command Mode register
  struct SDCMR : Register<0xa0000150, ReadWriteMode, 0x0>
  {
    // Mode Register definition
    struct MRD : RegisterField<SDCMR, 9, 13, ReadWriteMode>
    {
    };
    // Number of Auto-refresh
    struct NRFS : RegisterField<SDCMR, 5, 4, ReadWriteMode>
    {
    };
    // Command target bank 1
    struct CTB1 : RegisterField<SDCMR, 4, 1, WriteMode>
    {
    };
    // Command target bank 2
    struct CTB2 : RegisterField<SDCMR, 3, 1, WriteMode>
    {
    };
    // Command mode
    struct MODE : RegisterField<SDCMR, 0, 3, WriteMode>
    {
    };
  };

  // SDRAM Refresh Timer register
  struct SDRTR : Register<0xa0000154, ReadWriteMode, 0x0>
  {
    // RES Interrupt Enable
    struct REIE : RegisterField<SDRTR, 14, 1, ReadWriteMode>
    {
    };
    // Refresh Timer Count
    struct COUNT : RegisterField<SDRTR, 1, 13, ReadWriteMode>
    {
    };
    // Clear Refresh error flag
    struct CRE : RegisterField<SDRTR, 0, 1, WriteMode>
    {
    };
  };

  // SDRAM Status register
  struct SDSR : Register<0xa0000158, ReadMode, 0x0>
  {
    // Busy status
    struct BUSY : RegisterField<SDSR, 5, 1, ReadMode>
    {
    };
    // Status Mode for Bank 2
    struct MODES2 : RegisterField<SDSR, 3, 2, ReadMode>
    {
    };
    // Status Mode for Bank 1
    struct MODES1 : RegisterField<SDSR, 1, 2, ReadMode>
    {
    };
    // Refresh error flag
    struct RE : RegisterField<SDSR, 0, 1, ReadMode>
    {
    };
  };

// Large Registers

};


