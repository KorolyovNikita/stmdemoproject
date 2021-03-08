/******************************************************************************
* Filename : sai_registers.hpp
*
* Details  : Serial audio interface
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct SAI1
{
  static constexpr auto periphNum = 1;

  // Global configuration register
  struct GCR : Register<0x40015800, ReadWriteMode, 0x0>
  {
    // Synchronization outputs
    struct SYNCOUT : RegisterField<GCR, 4, 2, ReadWriteMode>
    {
    };
    // Synchronization inputs
    struct SYNCIN : RegisterField<GCR, 0, 2, ReadWriteMode>
    {
    };
  };

  // AConfiguration register 1
  struct ACR1 : Register<0x40015804, ReadWriteMode, 0x40>
  {
    // Master clock divider
    struct MCJDIV : RegisterField<ACR1, 20, 4, ReadWriteMode>
    {
    };
    // No divider
    struct NODIV : RegisterField<ACR1, 19, 1, ReadWriteMode>
    {
    };
    // DMA enable
    struct DMAEN : RegisterField<ACR1, 17, 1, ReadWriteMode>
    {
    };
    // Audio block A enable
    struct SAIAEN : RegisterField<ACR1, 16, 1, ReadWriteMode>
    {
    };
    // Output drive
    struct OutDri : RegisterField<ACR1, 13, 1, ReadWriteMode>
    {
    };
    // Mono mode
    struct MONO : RegisterField<ACR1, 12, 1, ReadWriteMode>
    {
    };
    // Synchronization enable
    struct SYNCEN : RegisterField<ACR1, 10, 2, ReadWriteMode>
    {
    };
    // Clock strobing edge
    struct CKSTR : RegisterField<ACR1, 9, 1, ReadWriteMode>
    {
    };
    // Least significant bit first
    struct LSBFIRST : RegisterField<ACR1, 8, 1, ReadWriteMode>
    {
    };
    // Data size
    struct DS : RegisterField<ACR1, 5, 3, ReadWriteMode>
    {
    };
    // Protocol configuration
    struct PRTCFG : RegisterField<ACR1, 2, 2, ReadWriteMode>
    {
    };
    // Audio block mode
    struct MODE : RegisterField<ACR1, 0, 2, ReadWriteMode>
    {
    };
  };

  // AConfiguration register 2
  struct ACR2 : Register<0x40015808, ReadWriteMode, 0x0>
  {
    // Companding mode
    struct COMP : RegisterField<ACR2, 14, 2, ReadWriteMode>
    {
    };
    // Complement bit
    struct CPL : RegisterField<ACR2, 13, 1, ReadWriteMode>
    {
    };
    // Mute counter
    struct MUTECN : RegisterField<ACR2, 7, 6, ReadWriteMode>
    {
    };
    // Mute value
    struct MUTEVAL : RegisterField<ACR2, 6, 1, ReadWriteMode>
    {
    };
    // Mute
    struct MUTE : RegisterField<ACR2, 5, 1, ReadWriteMode>
    {
    };
    // Tristate management on data line
    struct TRIS : RegisterField<ACR2, 4, 1, ReadWriteMode>
    {
    };
    // FIFO flush
    struct FFLUS : RegisterField<ACR2, 3, 1, ReadWriteMode>
    {
    };
    // FIFO threshold
    struct FTH : RegisterField<ACR2, 0, 3, ReadWriteMode>
    {
    };
  };

  // AFRCR
  struct AFRCR : Register<0x4001580c, ReadWriteMode, 0x7>
  {
    // Frame synchronization offset
    struct FSOFF : RegisterField<AFRCR, 18, 1, ReadWriteMode>
    {
    };
    // Frame synchronization polarity
    struct FSPOL : RegisterField<AFRCR, 17, 1, ReadWriteMode>
    {
    };
    // Frame synchronization definition
    struct FSDEF : RegisterField<AFRCR, 16, 1, ReadWriteMode>
    {
    };
    // Frame synchronization active level length
    struct FSALL : RegisterField<AFRCR, 8, 7, ReadWriteMode>
    {
    };
    // Frame length
    struct FRL : RegisterField<AFRCR, 0, 8, ReadWriteMode>
    {
    };
  };

  // ASlot register
  struct ASLOTR : Register<0x40015810, ReadWriteMode, 0x0>
  {
    // Slot enable
    struct SLOTEN : RegisterField<ASLOTR, 16, 16, ReadWriteMode>
    {
    };
    // Number of slots in an audio frame
    struct NBSLOT : RegisterField<ASLOTR, 8, 4, ReadWriteMode>
    {
    };
    // Slot size
    struct SLOTSZ : RegisterField<ASLOTR, 6, 2, ReadWriteMode>
    {
    };
    // First bit offset
    struct FBOFF : RegisterField<ASLOTR, 0, 5, ReadWriteMode>
    {
    };
  };

  // AInterrupt mask register2
  struct AIM : Register<0x40015814, ReadWriteMode, 0x0>
  {
    // Late frame synchronization detection interrupt enable
    struct LFSDET : RegisterField<AIM, 6, 1, ReadWriteMode>
    {
    };
    // Anticipated frame synchronization detection interrupt enable
    struct AFSDETIE : RegisterField<AIM, 5, 1, ReadWriteMode>
    {
    };
    // Codec not ready interrupt enable
    struct CNRDYIE : RegisterField<AIM, 4, 1, ReadWriteMode>
    {
    };
    // FIFO request interrupt enable
    struct FREQIE : RegisterField<AIM, 3, 1, ReadWriteMode>
    {
    };
    // Wrong clock configuration interrupt enable
    struct WCKCFG : RegisterField<AIM, 2, 1, ReadWriteMode>
    {
    };
    // Mute detection interrupt enable
    struct MUTEDET : RegisterField<AIM, 1, 1, ReadWriteMode>
    {
    };
    // Overrun/underrun interrupt enable
    struct OVRUDRIE : RegisterField<AIM, 0, 1, ReadWriteMode>
    {
    };
  };

  // AStatus register
  struct ASR : Register<0x40015818, ReadWriteMode, 0x0>
  {
    // FIFO level threshold
    struct FLVL : RegisterField<ASR, 16, 3, ReadWriteMode>
    {
    };
    // Late frame synchronization detection
    struct LFSDET : RegisterField<ASR, 6, 1, ReadWriteMode>
    {
    };
    // Anticipated frame synchronization detection
    struct AFSDET : RegisterField<ASR, 5, 1, ReadWriteMode>
    {
    };
    // Codec not ready
    struct CNRDY : RegisterField<ASR, 4, 1, ReadWriteMode>
    {
    };
    // FIFO request
    struct FREQ : RegisterField<ASR, 3, 1, ReadWriteMode>
    {
    };
    // Wrong clock configuration flag. This bit is read only.
    struct WCKCFG : RegisterField<ASR, 2, 1, ReadWriteMode>
    {
    };
    // Mute detection
    struct MUTEDET : RegisterField<ASR, 1, 1, ReadWriteMode>
    {
    };
    // Overrun / underrun
    struct OVRUDR : RegisterField<ASR, 0, 1, ReadWriteMode>
    {
    };
  };

  // AClear flag register
  struct ACLRFR : Register<0x4001581c, ReadWriteMode, 0x0>
  {
    // Clear late frame synchronization detection flag
    struct LFSDET : RegisterField<ACLRFR, 6, 1, ReadWriteMode>
    {
    };
    // Clear anticipated frame synchronization detection flag.
    struct CAFSDET : RegisterField<ACLRFR, 5, 1, ReadWriteMode>
    {
    };
    // Clear codec not ready flag
    struct CNRDY : RegisterField<ACLRFR, 4, 1, ReadWriteMode>
    {
    };
    // Clear wrong clock configuration flag
    struct WCKCFG : RegisterField<ACLRFR, 2, 1, ReadWriteMode>
    {
    };
    // Mute detection flag
    struct MUTEDET : RegisterField<ACLRFR, 1, 1, ReadWriteMode>
    {
    };
    // Clear overrun / underrun
    struct OVRUDR : RegisterField<ACLRFR, 0, 1, ReadWriteMode>
    {
    };
  };

  // AData register
  struct ADR : Register<0x40015820, ReadWriteMode, 0x0>
  {
    // Data
    struct DATA : RegisterField<ADR, 0, 32, ReadWriteMode>
    {
    };
  };

  // BConfiguration register 1
  struct BCR1 : Register<0x40015824, ReadWriteMode, 0x40>
  {
    // Master clock divider
    struct MCJDIV : RegisterField<BCR1, 20, 4, ReadWriteMode>
    {
    };
    // No divider
    struct NODIV : RegisterField<BCR1, 19, 1, ReadWriteMode>
    {
    };
    // DMA enable
    struct DMAEN : RegisterField<BCR1, 17, 1, ReadWriteMode>
    {
    };
    // Audio block B enable
    struct SAIBEN : RegisterField<BCR1, 16, 1, ReadWriteMode>
    {
    };
    // Output drive
    struct OutDri : RegisterField<BCR1, 13, 1, ReadWriteMode>
    {
    };
    // Mono mode
    struct MONO : RegisterField<BCR1, 12, 1, ReadWriteMode>
    {
    };
    // Synchronization enable
    struct SYNCEN : RegisterField<BCR1, 10, 2, ReadWriteMode>
    {
    };
    // Clock strobing edge
    struct CKSTR : RegisterField<BCR1, 9, 1, ReadWriteMode>
    {
    };
    // Least significant bit first
    struct LSBFIRST : RegisterField<BCR1, 8, 1, ReadWriteMode>
    {
    };
    // Data size
    struct DS : RegisterField<BCR1, 5, 3, ReadWriteMode>
    {
    };
    // Protocol configuration
    struct PRTCFG : RegisterField<BCR1, 2, 2, ReadWriteMode>
    {
    };
    // Audio block mode
    struct MODE : RegisterField<BCR1, 0, 2, ReadWriteMode>
    {
    };
  };

  // BConfiguration register 2
  struct BCR2 : Register<0x40015828, ReadWriteMode, 0x0>
  {
    // Companding mode
    struct COMP : RegisterField<BCR2, 14, 2, ReadWriteMode>
    {
    };
    // Complement bit
    struct CPL : RegisterField<BCR2, 13, 1, ReadWriteMode>
    {
    };
    // Mute counter
    struct MUTECN : RegisterField<BCR2, 7, 6, ReadWriteMode>
    {
    };
    // Mute value
    struct MUTEVAL : RegisterField<BCR2, 6, 1, ReadWriteMode>
    {
    };
    // Mute
    struct MUTE : RegisterField<BCR2, 5, 1, ReadWriteMode>
    {
    };
    // Tristate management on data line
    struct TRIS : RegisterField<BCR2, 4, 1, ReadWriteMode>
    {
    };
    // FIFO flush
    struct FFLUS : RegisterField<BCR2, 3, 1, ReadWriteMode>
    {
    };
    // FIFO threshold
    struct FTH : RegisterField<BCR2, 0, 3, ReadWriteMode>
    {
    };
  };

  // BFRCR
  struct BFRCR : Register<0x4001582c, ReadWriteMode, 0x7>
  {
    // Frame synchronization offset
    struct FSOFF : RegisterField<BFRCR, 18, 1, ReadWriteMode>
    {
    };
    // Frame synchronization polarity
    struct FSPOL : RegisterField<BFRCR, 17, 1, ReadWriteMode>
    {
    };
    // Frame synchronization definition
    struct FSDEF : RegisterField<BFRCR, 16, 1, ReadWriteMode>
    {
    };
    // Frame synchronization active level length
    struct FSALL : RegisterField<BFRCR, 8, 7, ReadWriteMode>
    {
    };
    // Frame length
    struct FRL : RegisterField<BFRCR, 0, 8, ReadWriteMode>
    {
    };
  };

  // BSlot register
  struct BSLOTR : Register<0x40015830, ReadWriteMode, 0x0>
  {
    // Slot enable
    struct SLOTEN : RegisterField<BSLOTR, 16, 16, ReadWriteMode>
    {
    };
    // Number of slots in an audio frame
    struct NBSLOT : RegisterField<BSLOTR, 8, 4, ReadWriteMode>
    {
    };
    // Slot size
    struct SLOTSZ : RegisterField<BSLOTR, 6, 2, ReadWriteMode>
    {
    };
    // First bit offset
    struct FBOFF : RegisterField<BSLOTR, 0, 5, ReadWriteMode>
    {
    };
  };

  // BInterrupt mask register2
  struct BIM : Register<0x40015834, ReadWriteMode, 0x0>
  {
    // Late frame synchronization detection interrupt enable
    struct LFSDETIE : RegisterField<BIM, 6, 1, ReadWriteMode>
    {
    };
    // Anticipated frame synchronization detection interrupt enable
    struct AFSDETIE : RegisterField<BIM, 5, 1, ReadWriteMode>
    {
    };
    // Codec not ready interrupt enable
    struct CNRDYIE : RegisterField<BIM, 4, 1, ReadWriteMode>
    {
    };
    // FIFO request interrupt enable
    struct FREQIE : RegisterField<BIM, 3, 1, ReadWriteMode>
    {
    };
    // Wrong clock configuration interrupt enable
    struct WCKCFG : RegisterField<BIM, 2, 1, ReadWriteMode>
    {
    };
    // Mute detection interrupt enable
    struct MUTEDET : RegisterField<BIM, 1, 1, ReadWriteMode>
    {
    };
    // Overrun/underrun interrupt enable
    struct OVRUDRIE : RegisterField<BIM, 0, 1, ReadWriteMode>
    {
    };
  };

  // BStatus register
  struct BSR : Register<0x40015838, ReadMode, 0x0>
  {
    // FIFO level threshold
    struct FLVL : RegisterField<BSR, 16, 3, ReadMode>
    {
    };
    // Late frame synchronization detection
    struct LFSDET : RegisterField<BSR, 6, 1, ReadMode>
    {
    };
    // Anticipated frame synchronization detection
    struct AFSDET : RegisterField<BSR, 5, 1, ReadMode>
    {
    };
    // Codec not ready
    struct CNRDY : RegisterField<BSR, 4, 1, ReadMode>
    {
    };
    // FIFO request
    struct FREQ : RegisterField<BSR, 3, 1, ReadMode>
    {
    };
    // Wrong clock configuration flag
    struct WCKCFG : RegisterField<BSR, 2, 1, ReadMode>
    {
    };
    // Mute detection
    struct MUTEDET : RegisterField<BSR, 1, 1, ReadMode>
    {
    };
    // Overrun / underrun
    struct OVRUDR : RegisterField<BSR, 0, 1, ReadMode>
    {
    };
  };

  // BClear flag register
  struct BCLRFR : Register<0x4001583c, WriteMode, 0x0>
  {
    // Clear late frame synchronization detection flag
    struct LFSDET : RegisterField<BCLRFR, 6, 1, WriteMode>
    {
    };
    // Clear anticipated frame synchronization detection flag
    struct CAFSDET : RegisterField<BCLRFR, 5, 1, WriteMode>
    {
    };
    // Clear codec not ready flag
    struct CNRDY : RegisterField<BCLRFR, 4, 1, WriteMode>
    {
    };
    // Clear wrong clock configuration flag
    struct WCKCFG : RegisterField<BCLRFR, 2, 1, WriteMode>
    {
    };
    // Mute detection flag
    struct MUTEDET : RegisterField<BCLRFR, 1, 1, WriteMode>
    {
    };
    // Clear overrun / underrun
    struct OVRUDR : RegisterField<BCLRFR, 0, 1, WriteMode>
    {
    };
  };

  // BData register
  struct BDR : Register<0x40015840, ReadWriteMode, 0x0>
  {
    // Data
    struct DATA : RegisterField<BDR, 0, 32, ReadWriteMode>
    {
    };
  };

// Large Registers

};


struct SAI2
{
  static constexpr auto periphNum = 2;

  // Global configuration register
  struct GCR : Register<0x40015c00, ReadWriteMode, 0x0>
  {
    // Synchronization outputs
    struct SYNCOUT : RegisterField<GCR, 4, 2, ReadWriteMode>
    {
    };
    // Synchronization inputs
    struct SYNCIN : RegisterField<GCR, 0, 2, ReadWriteMode>
    {
    };
  };

  // AConfiguration register 1
  struct ACR1 : Register<0x40015c04, ReadWriteMode, 0x40>
  {
    // Master clock divider
    struct MCJDIV : RegisterField<ACR1, 20, 4, ReadWriteMode>
    {
    };
    // No divider
    struct NODIV : RegisterField<ACR1, 19, 1, ReadWriteMode>
    {
    };
    // DMA enable
    struct DMAEN : RegisterField<ACR1, 17, 1, ReadWriteMode>
    {
    };
    // Audio block A enable
    struct SAIAEN : RegisterField<ACR1, 16, 1, ReadWriteMode>
    {
    };
    // Output drive
    struct OutDri : RegisterField<ACR1, 13, 1, ReadWriteMode>
    {
    };
    // Mono mode
    struct MONO : RegisterField<ACR1, 12, 1, ReadWriteMode>
    {
    };
    // Synchronization enable
    struct SYNCEN : RegisterField<ACR1, 10, 2, ReadWriteMode>
    {
    };
    // Clock strobing edge
    struct CKSTR : RegisterField<ACR1, 9, 1, ReadWriteMode>
    {
    };
    // Least significant bit first
    struct LSBFIRST : RegisterField<ACR1, 8, 1, ReadWriteMode>
    {
    };
    // Data size
    struct DS : RegisterField<ACR1, 5, 3, ReadWriteMode>
    {
    };
    // Protocol configuration
    struct PRTCFG : RegisterField<ACR1, 2, 2, ReadWriteMode>
    {
    };
    // Audio block mode
    struct MODE : RegisterField<ACR1, 0, 2, ReadWriteMode>
    {
    };
  };

  // AConfiguration register 2
  struct ACR2 : Register<0x40015c08, ReadWriteMode, 0x0>
  {
    // Companding mode
    struct COMP : RegisterField<ACR2, 14, 2, ReadWriteMode>
    {
    };
    // Complement bit
    struct CPL : RegisterField<ACR2, 13, 1, ReadWriteMode>
    {
    };
    // Mute counter
    struct MUTECN : RegisterField<ACR2, 7, 6, ReadWriteMode>
    {
    };
    // Mute value
    struct MUTEVAL : RegisterField<ACR2, 6, 1, ReadWriteMode>
    {
    };
    // Mute
    struct MUTE : RegisterField<ACR2, 5, 1, ReadWriteMode>
    {
    };
    // Tristate management on data line
    struct TRIS : RegisterField<ACR2, 4, 1, ReadWriteMode>
    {
    };
    // FIFO flush
    struct FFLUS : RegisterField<ACR2, 3, 1, ReadWriteMode>
    {
    };
    // FIFO threshold
    struct FTH : RegisterField<ACR2, 0, 3, ReadWriteMode>
    {
    };
  };

  // AFRCR
  struct AFRCR : Register<0x40015c0c, ReadWriteMode, 0x7>
  {
    // Frame synchronization offset
    struct FSOFF : RegisterField<AFRCR, 18, 1, ReadWriteMode>
    {
    };
    // Frame synchronization polarity
    struct FSPOL : RegisterField<AFRCR, 17, 1, ReadWriteMode>
    {
    };
    // Frame synchronization definition
    struct FSDEF : RegisterField<AFRCR, 16, 1, ReadWriteMode>
    {
    };
    // Frame synchronization active level length
    struct FSALL : RegisterField<AFRCR, 8, 7, ReadWriteMode>
    {
    };
    // Frame length
    struct FRL : RegisterField<AFRCR, 0, 8, ReadWriteMode>
    {
    };
  };

  // ASlot register
  struct ASLOTR : Register<0x40015c10, ReadWriteMode, 0x0>
  {
    // Slot enable
    struct SLOTEN : RegisterField<ASLOTR, 16, 16, ReadWriteMode>
    {
    };
    // Number of slots in an audio frame
    struct NBSLOT : RegisterField<ASLOTR, 8, 4, ReadWriteMode>
    {
    };
    // Slot size
    struct SLOTSZ : RegisterField<ASLOTR, 6, 2, ReadWriteMode>
    {
    };
    // First bit offset
    struct FBOFF : RegisterField<ASLOTR, 0, 5, ReadWriteMode>
    {
    };
  };

  // AInterrupt mask register2
  struct AIM : Register<0x40015c14, ReadWriteMode, 0x0>
  {
    // Late frame synchronization detection interrupt enable
    struct LFSDET : RegisterField<AIM, 6, 1, ReadWriteMode>
    {
    };
    // Anticipated frame synchronization detection interrupt enable
    struct AFSDETIE : RegisterField<AIM, 5, 1, ReadWriteMode>
    {
    };
    // Codec not ready interrupt enable
    struct CNRDYIE : RegisterField<AIM, 4, 1, ReadWriteMode>
    {
    };
    // FIFO request interrupt enable
    struct FREQIE : RegisterField<AIM, 3, 1, ReadWriteMode>
    {
    };
    // Wrong clock configuration interrupt enable
    struct WCKCFG : RegisterField<AIM, 2, 1, ReadWriteMode>
    {
    };
    // Mute detection interrupt enable
    struct MUTEDET : RegisterField<AIM, 1, 1, ReadWriteMode>
    {
    };
    // Overrun/underrun interrupt enable
    struct OVRUDRIE : RegisterField<AIM, 0, 1, ReadWriteMode>
    {
    };
  };

  // AStatus register
  struct ASR : Register<0x40015c18, ReadWriteMode, 0x0>
  {
    // FIFO level threshold
    struct FLVL : RegisterField<ASR, 16, 3, ReadWriteMode>
    {
    };
    // Late frame synchronization detection
    struct LFSDET : RegisterField<ASR, 6, 1, ReadWriteMode>
    {
    };
    // Anticipated frame synchronization detection
    struct AFSDET : RegisterField<ASR, 5, 1, ReadWriteMode>
    {
    };
    // Codec not ready
    struct CNRDY : RegisterField<ASR, 4, 1, ReadWriteMode>
    {
    };
    // FIFO request
    struct FREQ : RegisterField<ASR, 3, 1, ReadWriteMode>
    {
    };
    // Wrong clock configuration flag. This bit is read only.
    struct WCKCFG : RegisterField<ASR, 2, 1, ReadWriteMode>
    {
    };
    // Mute detection
    struct MUTEDET : RegisterField<ASR, 1, 1, ReadWriteMode>
    {
    };
    // Overrun / underrun
    struct OVRUDR : RegisterField<ASR, 0, 1, ReadWriteMode>
    {
    };
  };

  // AClear flag register
  struct ACLRFR : Register<0x40015c1c, ReadWriteMode, 0x0>
  {
    // Clear late frame synchronization detection flag
    struct LFSDET : RegisterField<ACLRFR, 6, 1, ReadWriteMode>
    {
    };
    // Clear anticipated frame synchronization detection flag.
    struct CAFSDET : RegisterField<ACLRFR, 5, 1, ReadWriteMode>
    {
    };
    // Clear codec not ready flag
    struct CNRDY : RegisterField<ACLRFR, 4, 1, ReadWriteMode>
    {
    };
    // Clear wrong clock configuration flag
    struct WCKCFG : RegisterField<ACLRFR, 2, 1, ReadWriteMode>
    {
    };
    // Mute detection flag
    struct MUTEDET : RegisterField<ACLRFR, 1, 1, ReadWriteMode>
    {
    };
    // Clear overrun / underrun
    struct OVRUDR : RegisterField<ACLRFR, 0, 1, ReadWriteMode>
    {
    };
  };

  // AData register
  struct ADR : Register<0x40015c20, ReadWriteMode, 0x0>
  {
    // Data
    struct DATA : RegisterField<ADR, 0, 32, ReadWriteMode>
    {
    };
  };

  // BConfiguration register 1
  struct BCR1 : Register<0x40015c24, ReadWriteMode, 0x40>
  {
    // Master clock divider
    struct MCJDIV : RegisterField<BCR1, 20, 4, ReadWriteMode>
    {
    };
    // No divider
    struct NODIV : RegisterField<BCR1, 19, 1, ReadWriteMode>
    {
    };
    // DMA enable
    struct DMAEN : RegisterField<BCR1, 17, 1, ReadWriteMode>
    {
    };
    // Audio block B enable
    struct SAIBEN : RegisterField<BCR1, 16, 1, ReadWriteMode>
    {
    };
    // Output drive
    struct OutDri : RegisterField<BCR1, 13, 1, ReadWriteMode>
    {
    };
    // Mono mode
    struct MONO : RegisterField<BCR1, 12, 1, ReadWriteMode>
    {
    };
    // Synchronization enable
    struct SYNCEN : RegisterField<BCR1, 10, 2, ReadWriteMode>
    {
    };
    // Clock strobing edge
    struct CKSTR : RegisterField<BCR1, 9, 1, ReadWriteMode>
    {
    };
    // Least significant bit first
    struct LSBFIRST : RegisterField<BCR1, 8, 1, ReadWriteMode>
    {
    };
    // Data size
    struct DS : RegisterField<BCR1, 5, 3, ReadWriteMode>
    {
    };
    // Protocol configuration
    struct PRTCFG : RegisterField<BCR1, 2, 2, ReadWriteMode>
    {
    };
    // Audio block mode
    struct MODE : RegisterField<BCR1, 0, 2, ReadWriteMode>
    {
    };
  };

  // BConfiguration register 2
  struct BCR2 : Register<0x40015c28, ReadWriteMode, 0x0>
  {
    // Companding mode
    struct COMP : RegisterField<BCR2, 14, 2, ReadWriteMode>
    {
    };
    // Complement bit
    struct CPL : RegisterField<BCR2, 13, 1, ReadWriteMode>
    {
    };
    // Mute counter
    struct MUTECN : RegisterField<BCR2, 7, 6, ReadWriteMode>
    {
    };
    // Mute value
    struct MUTEVAL : RegisterField<BCR2, 6, 1, ReadWriteMode>
    {
    };
    // Mute
    struct MUTE : RegisterField<BCR2, 5, 1, ReadWriteMode>
    {
    };
    // Tristate management on data line
    struct TRIS : RegisterField<BCR2, 4, 1, ReadWriteMode>
    {
    };
    // FIFO flush
    struct FFLUS : RegisterField<BCR2, 3, 1, ReadWriteMode>
    {
    };
    // FIFO threshold
    struct FTH : RegisterField<BCR2, 0, 3, ReadWriteMode>
    {
    };
  };

  // BFRCR
  struct BFRCR : Register<0x40015c2c, ReadWriteMode, 0x7>
  {
    // Frame synchronization offset
    struct FSOFF : RegisterField<BFRCR, 18, 1, ReadWriteMode>
    {
    };
    // Frame synchronization polarity
    struct FSPOL : RegisterField<BFRCR, 17, 1, ReadWriteMode>
    {
    };
    // Frame synchronization definition
    struct FSDEF : RegisterField<BFRCR, 16, 1, ReadWriteMode>
    {
    };
    // Frame synchronization active level length
    struct FSALL : RegisterField<BFRCR, 8, 7, ReadWriteMode>
    {
    };
    // Frame length
    struct FRL : RegisterField<BFRCR, 0, 8, ReadWriteMode>
    {
    };
  };

  // BSlot register
  struct BSLOTR : Register<0x40015c30, ReadWriteMode, 0x0>
  {
    // Slot enable
    struct SLOTEN : RegisterField<BSLOTR, 16, 16, ReadWriteMode>
    {
    };
    // Number of slots in an audio frame
    struct NBSLOT : RegisterField<BSLOTR, 8, 4, ReadWriteMode>
    {
    };
    // Slot size
    struct SLOTSZ : RegisterField<BSLOTR, 6, 2, ReadWriteMode>
    {
    };
    // First bit offset
    struct FBOFF : RegisterField<BSLOTR, 0, 5, ReadWriteMode>
    {
    };
  };

  // BInterrupt mask register2
  struct BIM : Register<0x40015c34, ReadWriteMode, 0x0>
  {
    // Late frame synchronization detection interrupt enable
    struct LFSDETIE : RegisterField<BIM, 6, 1, ReadWriteMode>
    {
    };
    // Anticipated frame synchronization detection interrupt enable
    struct AFSDETIE : RegisterField<BIM, 5, 1, ReadWriteMode>
    {
    };
    // Codec not ready interrupt enable
    struct CNRDYIE : RegisterField<BIM, 4, 1, ReadWriteMode>
    {
    };
    // FIFO request interrupt enable
    struct FREQIE : RegisterField<BIM, 3, 1, ReadWriteMode>
    {
    };
    // Wrong clock configuration interrupt enable
    struct WCKCFG : RegisterField<BIM, 2, 1, ReadWriteMode>
    {
    };
    // Mute detection interrupt enable
    struct MUTEDET : RegisterField<BIM, 1, 1, ReadWriteMode>
    {
    };
    // Overrun/underrun interrupt enable
    struct OVRUDRIE : RegisterField<BIM, 0, 1, ReadWriteMode>
    {
    };
  };

  // BStatus register
  struct BSR : Register<0x40015c38, ReadMode, 0x0>
  {
    // FIFO level threshold
    struct FLVL : RegisterField<BSR, 16, 3, ReadMode>
    {
    };
    // Late frame synchronization detection
    struct LFSDET : RegisterField<BSR, 6, 1, ReadMode>
    {
    };
    // Anticipated frame synchronization detection
    struct AFSDET : RegisterField<BSR, 5, 1, ReadMode>
    {
    };
    // Codec not ready
    struct CNRDY : RegisterField<BSR, 4, 1, ReadMode>
    {
    };
    // FIFO request
    struct FREQ : RegisterField<BSR, 3, 1, ReadMode>
    {
    };
    // Wrong clock configuration flag
    struct WCKCFG : RegisterField<BSR, 2, 1, ReadMode>
    {
    };
    // Mute detection
    struct MUTEDET : RegisterField<BSR, 1, 1, ReadMode>
    {
    };
    // Overrun / underrun
    struct OVRUDR : RegisterField<BSR, 0, 1, ReadMode>
    {
    };
  };

  // BClear flag register
  struct BCLRFR : Register<0x40015c3c, WriteMode, 0x0>
  {
    // Clear late frame synchronization detection flag
    struct LFSDET : RegisterField<BCLRFR, 6, 1, WriteMode>
    {
    };
    // Clear anticipated frame synchronization detection flag
    struct CAFSDET : RegisterField<BCLRFR, 5, 1, WriteMode>
    {
    };
    // Clear codec not ready flag
    struct CNRDY : RegisterField<BCLRFR, 4, 1, WriteMode>
    {
    };
    // Clear wrong clock configuration flag
    struct WCKCFG : RegisterField<BCLRFR, 2, 1, WriteMode>
    {
    };
    // Mute detection flag
    struct MUTEDET : RegisterField<BCLRFR, 1, 1, WriteMode>
    {
    };
    // Clear overrun / underrun
    struct OVRUDR : RegisterField<BCLRFR, 0, 1, WriteMode>
    {
    };
  };

  // BData register
  struct BDR : Register<0x40015c40, ReadWriteMode, 0x0>
  {
    // Data
    struct DATA : RegisterField<BDR, 0, 32, ReadWriteMode>
    {
    };
  };

// Large Registers

};


