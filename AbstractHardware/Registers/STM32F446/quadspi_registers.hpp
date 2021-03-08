/******************************************************************************
* Filename : quadspi_registers.hpp
*
* Details  : QuadSPI interface
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct QUADSPI
{
  // control register
  struct CR : Register<0xa0001000, ReadWriteMode, 0x0>
  {
    // Clock prescaler
    struct PRESCALER : RegisterField<CR, 24, 8, ReadWriteMode>
    {
    };
    // Polling match mode
    struct PMM : RegisterField<CR, 23, 1, ReadWriteMode>
    {
    };
    // Automatic poll mode stop
    struct APMS : RegisterField<CR, 22, 1, ReadWriteMode>
    {
    };
    // TimeOut interrupt enable
    struct TOIE : RegisterField<CR, 20, 1, ReadWriteMode>
    {
    };
    // Status match interrupt enable
    struct SMIE : RegisterField<CR, 19, 1, ReadWriteMode>
    {
    };
    // FIFO threshold interrupt enable
    struct FTIE : RegisterField<CR, 18, 1, ReadWriteMode>
    {
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<CR, 17, 1, ReadWriteMode>
    {
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<CR, 16, 1, ReadWriteMode>
    {
    };
    // IFO threshold level
    struct FTHRES : RegisterField<CR, 8, 5, ReadWriteMode>
    {
    };
    // FLASH memory selection
    struct FSEL : RegisterField<CR, 7, 1, ReadWriteMode>
    {
    };
    // Dual-flash mode
    struct DFM : RegisterField<CR, 6, 1, ReadWriteMode>
    {
    };
    // Sample shift
    struct SSHIFT : RegisterField<CR, 4, 1, ReadWriteMode>
    {
    };
    // Timeout counter enable
    struct TCEN : RegisterField<CR, 3, 1, ReadWriteMode>
    {
    };
    // DMA enable
    struct DMAEN : RegisterField<CR, 2, 1, ReadWriteMode>
    {
    };
    // Abort request
    struct ABORT : RegisterField<CR, 1, 1, ReadWriteMode>
    {
    };
    // Enable
    struct EN : RegisterField<CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // device configuration register
  struct DCR : Register<0xa0001004, ReadWriteMode, 0x0>
  {
    // FLASH memory size
    struct FSIZE : RegisterField<DCR, 16, 5, ReadWriteMode>
    {
    };
    // Chip select high time
    struct CSHT : RegisterField<DCR, 8, 3, ReadWriteMode>
    {
    };
    // Mode 0 / mode 3
    struct CKMODE : RegisterField<DCR, 0, 1, ReadWriteMode>
    {
    };
  };

  // status register
  struct SR : Register<0xa0001008, ReadMode, 0x0>
  {
    // FIFO level
    struct FLEVEL : RegisterField<SR, 8, 7, ReadMode>
    {
    };
    // Busy
    struct BUSY : RegisterField<SR, 5, 1, ReadMode>
    {
    };
    // Timeout flag
    struct TOF : RegisterField<SR, 4, 1, ReadMode>
    {
    };
    // Status match flag
    struct SMF : RegisterField<SR, 3, 1, ReadMode>
    {
    };
    // FIFO threshold flag
    struct FTF : RegisterField<SR, 2, 1, ReadMode>
    {
    };
    // Transfer complete flag
    struct TCF : RegisterField<SR, 1, 1, ReadMode>
    {
    };
    // Transfer error flag
    struct TEF : RegisterField<SR, 0, 1, ReadMode>
    {
    };
  };

  // flag clear register
  struct FCR : Register<0xa000100c, ReadWriteMode, 0x0>
  {
    // Clear timeout flag
    struct CTOF : RegisterField<FCR, 4, 1, ReadWriteMode>
    {
    };
    // Clear status match flag
    struct CSMF : RegisterField<FCR, 3, 1, ReadWriteMode>
    {
    };
    // Clear transfer complete flag
    struct CTCF : RegisterField<FCR, 1, 1, ReadWriteMode>
    {
    };
    // Clear transfer error flag
    struct CTEF : RegisterField<FCR, 0, 1, ReadWriteMode>
    {
    };
  };

  // data length register
  struct DLR : Register<0xa0001010, ReadWriteMode, 0x0>
  {
    // Data length
    struct DL : RegisterField<DLR, 0, 32, ReadWriteMode>
    {
    };
  };

  // communication configuration register
  struct CCR : Register<0xa0001014, ReadWriteMode, 0x0>
  {
    // Double data rate mode
    struct DDRM : RegisterField<CCR, 31, 1, ReadWriteMode>
    {
    };
    // DDR hold half cycle
    struct DHHC : RegisterField<CCR, 30, 1, ReadWriteMode>
    {
    };
    // Send instruction only once mode
    struct SIOO : RegisterField<CCR, 28, 1, ReadWriteMode>
    {
    };
    // Functional mode
    struct FMODE : RegisterField<CCR, 26, 2, ReadWriteMode>
    {
    };
    // Data mode
    struct DMODE : RegisterField<CCR, 24, 2, ReadWriteMode>
    {
    };
    // Number of dummy cycles
    struct DCYC : RegisterField<CCR, 18, 5, ReadWriteMode>
    {
    };
    // Alternate bytes size
    struct ABSIZE : RegisterField<CCR, 16, 2, ReadWriteMode>
    {
    };
    // Alternate bytes mode
    struct ABMODE : RegisterField<CCR, 14, 2, ReadWriteMode>
    {
    };
    // Address size
    struct ADSIZE : RegisterField<CCR, 12, 2, ReadWriteMode>
    {
    };
    // Address mode
    struct ADMODE : RegisterField<CCR, 10, 2, ReadWriteMode>
    {
    };
    // Instruction mode
    struct IMODE : RegisterField<CCR, 8, 2, ReadWriteMode>
    {
    };
    // Instruction
    struct INSTRUCTION : RegisterField<CCR, 0, 8, ReadWriteMode>
    {
    };
  };

  // address register
  struct AR : Register<0xa0001018, ReadWriteMode, 0x0>
  {
    // Address
    struct ADDRESS : RegisterField<AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // ABR
  struct ABR : Register<0xa000101c, ReadWriteMode, 0x0>
  {
    // ALTERNATE
    struct ALTERNATE : RegisterField<ABR, 0, 32, ReadWriteMode>
    {
    };
  };

  // data register
  struct DR : Register<0xa0001020, ReadWriteMode, 0x0>
  {
    // Data
    struct DATA : RegisterField<DR, 0, 32, ReadWriteMode>
    {
    };
  };

  // polling status mask register
  struct PSMKR : Register<0xa0001024, ReadWriteMode, 0x0>
  {
    // Status mask
    struct MASK : RegisterField<PSMKR, 0, 32, ReadWriteMode>
    {
    };
  };

  // polling status match register
  struct PSMAR : Register<0xa0001028, ReadWriteMode, 0x0>
  {
    // Status match
    struct MATCH : RegisterField<PSMAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // polling interval register
  struct PIR : Register<0xa000102c, ReadWriteMode, 0x0>
  {
    // Polling interval
    struct INTERVAL : RegisterField<PIR, 0, 16, ReadWriteMode>
    {
    };
  };

  // low-power timeout register
  struct LPTR : Register<0xa0001030, ReadWriteMode, 0x0>
  {
    // Timeout period
    struct TIMEOUT : RegisterField<LPTR, 0, 16, ReadWriteMode>
    {
    };
  };

// Large Registers

};


