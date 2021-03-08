/******************************************************************************
* Filename : spdif_rx_registers.hpp
*
* Details  : Receiver Interface
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct SPDIF_RX
{
  // Control register
  struct CR : Register<0x40004000, ReadWriteMode, 0x0>
  {
    // input selection
    struct INSEL : RegisterField<CR, 16, 3, ReadWriteMode>
    {
    };
    // Wait For Activity
    struct WFA : RegisterField<CR, 14, 1, ReadWriteMode>
    {
    };
    // Maximum allowed re-tries during synchronization phase
    struct NBTR : RegisterField<CR, 12, 2, ReadWriteMode>
    {
    };
    // Channel Selection
    struct CHSEL : RegisterField<CR, 11, 1, ReadWriteMode>
    {
    };
    // Control Buffer DMA ENable for control flow
    struct CBDMAEN : RegisterField<CR, 10, 1, ReadWriteMode>
    {
    };
    // Mask of Preamble Type bits
    struct PTMSK : RegisterField<CR, 9, 1, ReadWriteMode>
    {
    };
    // Mask of channel status and user bits
    struct CUMSK : RegisterField<CR, 8, 1, ReadWriteMode>
    {
    };
    // Mask of Validity bit
    struct VMSK : RegisterField<CR, 7, 1, ReadWriteMode>
    {
    };
    // Mask Parity error bit
    struct PMSK : RegisterField<CR, 6, 1, ReadWriteMode>
    {
    };
    // RX Data format
    struct DRFMT : RegisterField<CR, 4, 2, ReadWriteMode>
    {
    };
    // STerEO Mode
    struct RXSTEO : RegisterField<CR, 3, 1, ReadWriteMode>
    {
    };
    // Receiver DMA ENable for data flow
    struct RXDMAEN : RegisterField<CR, 2, 1, ReadWriteMode>
    {
    };
    // Peripheral Block Enable
    struct SPDIFEN : RegisterField<CR, 0, 2, ReadWriteMode>
    {
    };
  };

  // Interrupt mask register
  struct IMR : Register<0x40004004, ReadWriteMode, 0x0>
  {
    // Serial Interface Error Interrupt Enable
    struct IFEIE : RegisterField<IMR, 6, 1, ReadWriteMode>
    {
    };
    // Synchronization Done
    struct SYNCDIE : RegisterField<IMR, 5, 1, ReadWriteMode>
    {
    };
    // Synchronization Block Detected Interrupt Enable
    struct SBLKIE : RegisterField<IMR, 4, 1, ReadWriteMode>
    {
    };
    // Overrun error Interrupt Enable
    struct OVRIE : RegisterField<IMR, 3, 1, ReadWriteMode>
    {
    };
    // Parity error interrupt enable
    struct PERRIE : RegisterField<IMR, 2, 1, ReadWriteMode>
    {
    };
    // Control Buffer Ready Interrupt Enable
    struct CSRNEIE : RegisterField<IMR, 1, 1, ReadWriteMode>
    {
    };
    // RXNE interrupt enable
    struct RXNEIE : RegisterField<IMR, 0, 1, ReadWriteMode>
    {
    };
  };

  // Status register
  struct SR : Register<0x40004008, ReadMode, 0x0>
  {
    // Duration of 5 symbols counted with SPDIF_CLK
    struct WIDTH5 : RegisterField<SR, 16, 15, ReadMode>
    {
    };
    // Time-out error
    struct TERR : RegisterField<SR, 8, 1, ReadMode>
    {
    };
    // Synchronization error
    struct SERR : RegisterField<SR, 7, 1, ReadMode>
    {
    };
    // Framing error
    struct FERR : RegisterField<SR, 6, 1, ReadMode>
    {
    };
    // Synchronization Done
    struct SYNCD : RegisterField<SR, 5, 1, ReadMode>
    {
    };
    // Synchronization Block Detected
    struct SBD : RegisterField<SR, 4, 1, ReadMode>
    {
    };
    // Overrun error
    struct OVR : RegisterField<SR, 3, 1, ReadMode>
    {
    };
    // Parity error
    struct PERR : RegisterField<SR, 2, 1, ReadMode>
    {
    };
    // Control Buffer register is not empty
    struct CSRNE : RegisterField<SR, 1, 1, ReadMode>
    {
    };
    // Read data register not empty
    struct RXNE : RegisterField<SR, 0, 1, ReadMode>
    {
    };
  };

  // Interrupt Flag Clear register
  struct IFCR : Register<0x4000400c, WriteMode, 0x0>
  {
    // Clears the Synchronization Done flag
    struct SYNCDCF : RegisterField<IFCR, 5, 1, WriteMode>
    {
    };
    // Clears the Synchronization Block Detected flag
    struct SBDCF : RegisterField<IFCR, 4, 1, WriteMode>
    {
    };
    // Clears the Overrun error flag
    struct OVRCF : RegisterField<IFCR, 3, 1, WriteMode>
    {
    };
    // Clears the Parity error flag
    struct PERRCF : RegisterField<IFCR, 2, 1, WriteMode>
    {
    };
  };

  // Data input register
  struct DR : Register<0x40004010, ReadMode, 0x0>
  {
    // Preamble Type
    struct PT : RegisterField<DR, 28, 2, ReadMode>
    {
    };
    // Channel Status bit
    struct C : RegisterField<DR, 27, 1, ReadMode>
    {
    };
    // User bit
    struct U : RegisterField<DR, 26, 1, ReadMode>
    {
    };
    // Validity bit
    struct V : RegisterField<DR, 25, 1, ReadMode>
    {
    };
    // Parity Error bit
    struct PE : RegisterField<DR, 24, 1, ReadMode>
    {
    };
    // Parity Error bit
    struct _DR : RegisterField<DR, 0, 24, ReadMode>
    {
    };
  };

  // Channel Status register
  struct CSR : Register<0x40004014, ReadMode, 0x0>
  {
    // Start Of Block
    struct SOB : RegisterField<CSR, 24, 1, ReadMode>
    {
    };
    // Channel A status information
    struct CS : RegisterField<CSR, 16, 8, ReadMode>
    {
    };
    // User data information
    struct USR : RegisterField<CSR, 0, 16, ReadMode>
    {
    };
  };

  // Debug Information register
  struct DIR : Register<0x40004018, ReadMode, 0x0>
  {
    // Threshold LOW
    struct TLO : RegisterField<DIR, 16, 13, ReadMode>
    {
    };
    // Threshold HIGH
    struct THI : RegisterField<DIR, 0, 13, ReadMode>
    {
    };
  };

// Large Registers

};


