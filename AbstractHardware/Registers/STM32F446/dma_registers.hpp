/******************************************************************************
* Filename : dma_registers.hpp
*
* Details  : DMA controller
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct DMA2
{
  static constexpr auto periphNum = 2;

  // low interrupt status register
  struct LISR : Register<0x40026400, ReadMode, 0x0>
  {
    // Stream x transfer complete interrupt flag (x = 3..0)
    struct TCIF3 : RegisterField<LISR, 27, 1, ReadMode>
    {
    };
    // Stream x half transfer interrupt flag (x=3..0)
    struct HTIF3 : RegisterField<LISR, 26, 1, ReadMode>
    {
    };
    // Stream x transfer error interrupt flag (x=3..0)
    struct TEIF3 : RegisterField<LISR, 25, 1, ReadMode>
    {
    };
    // Stream x direct mode error interrupt flag (x=3..0)
    struct DMEIF3 : RegisterField<LISR, 24, 1, ReadMode>
    {
    };
    // Stream x FIFO error interrupt flag (x=3..0)
    struct FEIF3 : RegisterField<LISR, 22, 1, ReadMode>
    {
    };
    // Stream x transfer complete interrupt flag (x = 3..0)
    struct TCIF2 : RegisterField<LISR, 21, 1, ReadMode>
    {
    };
    // Stream x half transfer interrupt flag (x=3..0)
    struct HTIF2 : RegisterField<LISR, 20, 1, ReadMode>
    {
    };
    // Stream x transfer error interrupt flag (x=3..0)
    struct TEIF2 : RegisterField<LISR, 19, 1, ReadMode>
    {
    };
    // Stream x direct mode error interrupt flag (x=3..0)
    struct DMEIF2 : RegisterField<LISR, 18, 1, ReadMode>
    {
    };
    // Stream x FIFO error interrupt flag (x=3..0)
    struct FEIF2 : RegisterField<LISR, 16, 1, ReadMode>
    {
    };
    // Stream x transfer complete interrupt flag (x = 3..0)
    struct TCIF1 : RegisterField<LISR, 11, 1, ReadMode>
    {
    };
    // Stream x half transfer interrupt flag (x=3..0)
    struct HTIF1 : RegisterField<LISR, 10, 1, ReadMode>
    {
    };
    // Stream x transfer error interrupt flag (x=3..0)
    struct TEIF1 : RegisterField<LISR, 9, 1, ReadMode>
    {
    };
    // Stream x direct mode error interrupt flag (x=3..0)
    struct DMEIF1 : RegisterField<LISR, 8, 1, ReadMode>
    {
    };
    // Stream x FIFO error interrupt flag (x=3..0)
    struct FEIF1 : RegisterField<LISR, 6, 1, ReadMode>
    {
    };
    // Stream x transfer complete interrupt flag (x = 3..0)
    struct TCIF0 : RegisterField<LISR, 5, 1, ReadMode>
    {
    };
    // Stream x half transfer interrupt flag (x=3..0)
    struct HTIF0 : RegisterField<LISR, 4, 1, ReadMode>
    {
    };
    // Stream x transfer error interrupt flag (x=3..0)
    struct TEIF0 : RegisterField<LISR, 3, 1, ReadMode>
    {
    };
    // Stream x direct mode error interrupt flag (x=3..0)
    struct DMEIF0 : RegisterField<LISR, 2, 1, ReadMode>
    {
    };
    // Stream x FIFO error interrupt flag (x=3..0)
    struct FEIF0 : RegisterField<LISR, 0, 1, ReadMode>
    {
    };
  };

  // high interrupt status register
  struct HISR : Register<0x40026404, ReadMode, 0x0>
  {
    // Stream x transfer complete interrupt flag (x=7..4)
    struct TCIF7 : RegisterField<HISR, 27, 1, ReadMode>
    {
    };
    // Stream x half transfer interrupt flag (x=7..4)
    struct HTIF7 : RegisterField<HISR, 26, 1, ReadMode>
    {
    };
    // Stream x transfer error interrupt flag (x=7..4)
    struct TEIF7 : RegisterField<HISR, 25, 1, ReadMode>
    {
    };
    // Stream x direct mode error interrupt flag (x=7..4)
    struct DMEIF7 : RegisterField<HISR, 24, 1, ReadMode>
    {
    };
    // Stream x FIFO error interrupt flag (x=7..4)
    struct FEIF7 : RegisterField<HISR, 22, 1, ReadMode>
    {
    };
    // Stream x transfer complete interrupt flag (x=7..4)
    struct TCIF6 : RegisterField<HISR, 21, 1, ReadMode>
    {
    };
    // Stream x half transfer interrupt flag (x=7..4)
    struct HTIF6 : RegisterField<HISR, 20, 1, ReadMode>
    {
    };
    // Stream x transfer error interrupt flag (x=7..4)
    struct TEIF6 : RegisterField<HISR, 19, 1, ReadMode>
    {
    };
    // Stream x direct mode error interrupt flag (x=7..4)
    struct DMEIF6 : RegisterField<HISR, 18, 1, ReadMode>
    {
    };
    // Stream x FIFO error interrupt flag (x=7..4)
    struct FEIF6 : RegisterField<HISR, 16, 1, ReadMode>
    {
    };
    // Stream x transfer complete interrupt flag (x=7..4)
    struct TCIF5 : RegisterField<HISR, 11, 1, ReadMode>
    {
    };
    // Stream x half transfer interrupt flag (x=7..4)
    struct HTIF5 : RegisterField<HISR, 10, 1, ReadMode>
    {
    };
    // Stream x transfer error interrupt flag (x=7..4)
    struct TEIF5 : RegisterField<HISR, 9, 1, ReadMode>
    {
    };
    // Stream x direct mode error interrupt flag (x=7..4)
    struct DMEIF5 : RegisterField<HISR, 8, 1, ReadMode>
    {
    };
    // Stream x FIFO error interrupt flag (x=7..4)
    struct FEIF5 : RegisterField<HISR, 6, 1, ReadMode>
    {
    };
    // Stream x transfer complete interrupt flag (x=7..4)
    struct TCIF4 : RegisterField<HISR, 5, 1, ReadMode>
    {
    };
    // Stream x half transfer interrupt flag (x=7..4)
    struct HTIF4 : RegisterField<HISR, 4, 1, ReadMode>
    {
    };
    // Stream x transfer error interrupt flag (x=7..4)
    struct TEIF4 : RegisterField<HISR, 3, 1, ReadMode>
    {
    };
    // Stream x direct mode error interrupt flag (x=7..4)
    struct DMEIF4 : RegisterField<HISR, 2, 1, ReadMode>
    {
    };
    // Stream x FIFO error interrupt flag (x=7..4)
    struct FEIF4 : RegisterField<HISR, 0, 1, ReadMode>
    {
    };
  };

  // low interrupt flag clear register
  struct LIFCR : Register<0x40026408, ReadWriteMode, 0x0>
  {
    // Stream x clear transfer complete interrupt flag (x = 3..0)
    struct CTCIF3 : RegisterField<LIFCR, 27, 1, ReadWriteMode>
    {
    };
    // Stream x clear half transfer interrupt flag (x = 3..0)
    struct CHTIF3 : RegisterField<LIFCR, 26, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer error interrupt flag (x = 3..0)
    struct CTEIF3 : RegisterField<LIFCR, 25, 1, ReadWriteMode>
    {
    };
    // Stream x clear direct mode error interrupt flag (x = 3..0)
    struct CDMEIF3 : RegisterField<LIFCR, 24, 1, ReadWriteMode>
    {
    };
    // Stream x clear FIFO error interrupt flag (x = 3..0)
    struct CFEIF3 : RegisterField<LIFCR, 22, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer complete interrupt flag (x = 3..0)
    struct CTCIF2 : RegisterField<LIFCR, 21, 1, ReadWriteMode>
    {
    };
    // Stream x clear half transfer interrupt flag (x = 3..0)
    struct CHTIF2 : RegisterField<LIFCR, 20, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer error interrupt flag (x = 3..0)
    struct CTEIF2 : RegisterField<LIFCR, 19, 1, ReadWriteMode>
    {
    };
    // Stream x clear direct mode error interrupt flag (x = 3..0)
    struct CDMEIF2 : RegisterField<LIFCR, 18, 1, ReadWriteMode>
    {
    };
    // Stream x clear FIFO error interrupt flag (x = 3..0)
    struct CFEIF2 : RegisterField<LIFCR, 16, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer complete interrupt flag (x = 3..0)
    struct CTCIF1 : RegisterField<LIFCR, 11, 1, ReadWriteMode>
    {
    };
    // Stream x clear half transfer interrupt flag (x = 3..0)
    struct CHTIF1 : RegisterField<LIFCR, 10, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer error interrupt flag (x = 3..0)
    struct CTEIF1 : RegisterField<LIFCR, 9, 1, ReadWriteMode>
    {
    };
    // Stream x clear direct mode error interrupt flag (x = 3..0)
    struct CDMEIF1 : RegisterField<LIFCR, 8, 1, ReadWriteMode>
    {
    };
    // Stream x clear FIFO error interrupt flag (x = 3..0)
    struct CFEIF1 : RegisterField<LIFCR, 6, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer complete interrupt flag (x = 3..0)
    struct CTCIF0 : RegisterField<LIFCR, 5, 1, ReadWriteMode>
    {
    };
    // Stream x clear half transfer interrupt flag (x = 3..0)
    struct CHTIF0 : RegisterField<LIFCR, 4, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer error interrupt flag (x = 3..0)
    struct CTEIF0 : RegisterField<LIFCR, 3, 1, ReadWriteMode>
    {
    };
    // Stream x clear direct mode error interrupt flag (x = 3..0)
    struct CDMEIF0 : RegisterField<LIFCR, 2, 1, ReadWriteMode>
    {
    };
    // Stream x clear FIFO error interrupt flag (x = 3..0)
    struct CFEIF0 : RegisterField<LIFCR, 0, 1, ReadWriteMode>
    {
    };
  };

  // high interrupt flag clear register
  struct HIFCR : Register<0x4002640c, ReadWriteMode, 0x0>
  {
    // Stream x clear transfer complete interrupt flag (x = 7..4)
    struct CTCIF7 : RegisterField<HIFCR, 27, 1, ReadWriteMode>
    {
    };
    // Stream x clear half transfer interrupt flag (x = 7..4)
    struct CHTIF7 : RegisterField<HIFCR, 26, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer error interrupt flag (x = 7..4)
    struct CTEIF7 : RegisterField<HIFCR, 25, 1, ReadWriteMode>
    {
    };
    // Stream x clear direct mode error interrupt flag (x = 7..4)
    struct CDMEIF7 : RegisterField<HIFCR, 24, 1, ReadWriteMode>
    {
    };
    // Stream x clear FIFO error interrupt flag (x = 7..4)
    struct CFEIF7 : RegisterField<HIFCR, 22, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer complete interrupt flag (x = 7..4)
    struct CTCIF6 : RegisterField<HIFCR, 21, 1, ReadWriteMode>
    {
    };
    // Stream x clear half transfer interrupt flag (x = 7..4)
    struct CHTIF6 : RegisterField<HIFCR, 20, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer error interrupt flag (x = 7..4)
    struct CTEIF6 : RegisterField<HIFCR, 19, 1, ReadWriteMode>
    {
    };
    // Stream x clear direct mode error interrupt flag (x = 7..4)
    struct CDMEIF6 : RegisterField<HIFCR, 18, 1, ReadWriteMode>
    {
    };
    // Stream x clear FIFO error interrupt flag (x = 7..4)
    struct CFEIF6 : RegisterField<HIFCR, 16, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer complete interrupt flag (x = 7..4)
    struct CTCIF5 : RegisterField<HIFCR, 11, 1, ReadWriteMode>
    {
    };
    // Stream x clear half transfer interrupt flag (x = 7..4)
    struct CHTIF5 : RegisterField<HIFCR, 10, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer error interrupt flag (x = 7..4)
    struct CTEIF5 : RegisterField<HIFCR, 9, 1, ReadWriteMode>
    {
    };
    // Stream x clear direct mode error interrupt flag (x = 7..4)
    struct CDMEIF5 : RegisterField<HIFCR, 8, 1, ReadWriteMode>
    {
    };
    // Stream x clear FIFO error interrupt flag (x = 7..4)
    struct CFEIF5 : RegisterField<HIFCR, 6, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer complete interrupt flag (x = 7..4)
    struct CTCIF4 : RegisterField<HIFCR, 5, 1, ReadWriteMode>
    {
    };
    // Stream x clear half transfer interrupt flag (x = 7..4)
    struct CHTIF4 : RegisterField<HIFCR, 4, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer error interrupt flag (x = 7..4)
    struct CTEIF4 : RegisterField<HIFCR, 3, 1, ReadWriteMode>
    {
    };
    // Stream x clear direct mode error interrupt flag (x = 7..4)
    struct CDMEIF4 : RegisterField<HIFCR, 2, 1, ReadWriteMode>
    {
    };
    // Stream x clear FIFO error interrupt flag (x = 7..4)
    struct CFEIF4 : RegisterField<HIFCR, 0, 1, ReadWriteMode>
    {
    };
  };

  // stream x configuration register
  struct S0CR : Register<0x40026410, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<S0CR, 25, 3, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 7)>>
      using Channel = FieldValue<CHSEL, val>;
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<S0CR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<S0CR, 21, 2, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<S0CR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<S0CR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<S0CR, 16, 2, ReadWriteMode>
    {
      using Low = FieldValue<PL, 0U>;
      using Medium = FieldValue<PL, 1U>;
      using High = FieldValue<PL, 2U>;
      using Very_high = FieldValue<PL, 3U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 3)>>
      using Priority = FieldValue<PL, val>;
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<S0CR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<S0CR, 13, 2, ReadWriteMode>
    {
      using Byte = FieldValue<MSIZE, 0U>;
      using Half_Word = FieldValue<MSIZE, 1U>;
      using Word = FieldValue<MSIZE, 2U>;
    };
    // Peripheral data size
    struct PSIZE : RegisterField<S0CR, 11, 2, ReadWriteMode>
    {
      using Byte = FieldValue<PSIZE, 0U>;
      using Half_Word = FieldValue<PSIZE, 1U>;
      using Word = FieldValue<PSIZE, 2U>;
    };
    // Memory increment mode
    struct MINC : RegisterField<S0CR, 10, 1, ReadWriteMode>
    {
      using Fixed = FieldValue<MINC, 0U>;
      using Incremented = FieldValue<MINC, 1U>;
    };
    // Peripheral increment mode
    struct PINC : RegisterField<S0CR, 9, 1, ReadWriteMode>
    {
      using Fixed = FieldValue<PINC, 0U>;
      using Incremented = FieldValue<PINC, 1U>;
    };
    // Circular mode
    struct CIRC : RegisterField<S0CR, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<CIRC, 0U>;
      using Enable = FieldValue<CIRC, 1U>;
    };
    // Data transfer direction
    struct DIR : RegisterField<S0CR, 6, 2, ReadWriteMode>
    {
      using peripheral_to_memory = FieldValue<DIR, 0U>;
      using memory_to_peripheral = FieldValue<DIR, 1U>;
      using memory_to_memory = FieldValue<DIR, 2U>;
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<S0CR, 5, 1, ReadWriteMode>
    {
      using DMA = FieldValue<PFCTRL, 0U>;
      using Peripheral = FieldValue<PFCTRL, 1U>;
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<S0CR, 4, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TCIE, 0U>;
      using Enable = FieldValue<TCIE, 1U>;
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<S0CR, 3, 1, ReadWriteMode>
    {
      using Disable = FieldValue<HTIE, 0U>;
      using Enable = FieldValue<HTIE, 1U>;
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<S0CR, 2, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TEIE, 0U>;
      using Enable = FieldValue<TEIE, 1U>;
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<S0CR, 1, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMEIE, 0U>;
      using Enable = FieldValue<DMEIE, 1U>;
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<S0CR, 0, 1, ReadWriteMode>
    {
      using Disable = FieldValue<EN, 0U>;
      using Enable = FieldValue<EN, 1U>;
    };
  };

  // stream x configuration register
  template<auto num>
  struct SxCR : Register<0x40026410 + 24 * num, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<SxCR, 25, 3, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 7)>>
      using Channel = FieldValue<CHSEL, val>;
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<SxCR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<SxCR, 21, 2, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<SxCR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<SxCR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<SxCR, 16, 2, ReadWriteMode>
    {
      using Low = FieldValue<PL, 0U>;
      using Medium = FieldValue<PL, 1U>;
      using High = FieldValue<PL, 2U>;
      using Very_high = FieldValue<PL, 3U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 3)>>
      using Priority = FieldValue<PL, val>;
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<SxCR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<SxCR, 13, 2, ReadWriteMode>
    {
      using Byte = FieldValue<MSIZE, 0U>;
      using Half_Word = FieldValue<MSIZE, 1U>;
      using Word = FieldValue<MSIZE, 2U>;
    };
    // Peripheral data size
    struct PSIZE : RegisterField<SxCR, 11, 2, ReadWriteMode>
    {
      using Byte = FieldValue<PSIZE, 0U>;
      using Half_Word = FieldValue<PSIZE, 1U>;
      using Word = FieldValue<PSIZE, 2U>;
    };
    // Memory increment mode
    struct MINC : RegisterField<SxCR, 10, 1, ReadWriteMode>
    {
      using Fixed = FieldValue<MINC, 0U>;
      using Incremented = FieldValue<MINC, 1U>;
    };
    // Peripheral increment mode
    struct PINC : RegisterField<SxCR, 9, 1, ReadWriteMode>
    {
      using Fixed = FieldValue<PINC, 0U>;
      using Incremented = FieldValue<PINC, 1U>;
    };
    // Circular mode
    struct CIRC : RegisterField<SxCR, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<CIRC, 0U>;
      using Enable = FieldValue<CIRC, 1U>;
    };
    // Data transfer direction
    struct DIR : RegisterField<SxCR, 6, 2, ReadWriteMode>
    {
      using peripheral_to_memory = FieldValue<DIR, 0U>;
      using memory_to_peripheral = FieldValue<DIR, 1U>;
      using memory_to_memory = FieldValue<DIR, 2U>;
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<SxCR, 5, 1, ReadWriteMode>
    {
      using DMA = FieldValue<PFCTRL, 0U>;
      using Peripheral = FieldValue<PFCTRL, 1U>;
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<SxCR, 4, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TCIE, 0U>;
      using Enable = FieldValue<TCIE, 1U>;
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<SxCR, 3, 1, ReadWriteMode>
    {
      using Disable = FieldValue<HTIE, 0U>;
      using Enable = FieldValue<HTIE, 1U>;
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<SxCR, 2, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TEIE, 0U>;
      using Enable = FieldValue<TEIE, 1U>;
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<SxCR, 1, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMEIE, 0U>;
      using Enable = FieldValue<DMEIE, 1U>;
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<SxCR, 0, 1, ReadWriteMode>
    {
      using Disable = FieldValue<EN, 0U>;
      using Enable = FieldValue<EN, 1U>;
    };
  };

  // stream x number of data register
  struct S0NDTR : Register<0x40026414, ReadWriteMode, 0x0>
  {
    // Number of data items to transfer
    struct NDT : RegisterField<S0NDTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // stream x peripheral address register
  struct S0PAR : Register<0x40026418, ReadWriteMode, 0x0>
  {
    // Peripheral address
    struct PA : RegisterField<S0PAR, 0, 32, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 4294967295)>>
      using Address = FieldValue<PA, val>;
    };
  };

  // stream x memory 0 address register
  struct S0M0AR : Register<0x4002641c, ReadWriteMode, 0x0>
  {
    // Memory 0 address
    struct M0A : RegisterField<S0M0AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 1 address register
  struct S0M1AR : Register<0x40026420, ReadWriteMode, 0x0>
  {
    // Memory 1 address (used in case of Double buffer mode)
    struct M1A : RegisterField<S0M1AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x FIFO control register
  struct S0FCR : Register<0x40026424, ReadWriteMode, 0x21>
  {
    // FIFO error interrupt enable
    struct FEIE : RegisterField<S0FCR, 7, 1, ReadWriteMode>
    {
    };
    // FIFO status
    struct FS : RegisterField<S0FCR, 3, 3, ReadMode>
    {
    };
    // Direct mode disable
    struct DMDIS : RegisterField<S0FCR, 2, 1, ReadWriteMode>
    {
    };
    // FIFO threshold selection
    struct FTH : RegisterField<S0FCR, 0, 2, ReadWriteMode>
    {
    };
  };

  // stream x configuration register
  struct S1CR : Register<0x40026428, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<S1CR, 25, 3, ReadWriteMode>
    {
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<S1CR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<S1CR, 21, 2, ReadWriteMode>
    {
    };
    // ACK
    struct ACK : RegisterField<S1CR, 20, 1, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<S1CR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<S1CR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<S1CR, 16, 2, ReadWriteMode>
    {
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<S1CR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<S1CR, 13, 2, ReadWriteMode>
    {
    };
    // Peripheral data size
    struct PSIZE : RegisterField<S1CR, 11, 2, ReadWriteMode>
    {
    };
    // Memory increment mode
    struct MINC : RegisterField<S1CR, 10, 1, ReadWriteMode>
    {
    };
    // Peripheral increment mode
    struct PINC : RegisterField<S1CR, 9, 1, ReadWriteMode>
    {
    };
    // Circular mode
    struct CIRC : RegisterField<S1CR, 8, 1, ReadWriteMode>
    {
    };
    // Data transfer direction
    struct DIR : RegisterField<S1CR, 6, 2, ReadWriteMode>
    {
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<S1CR, 5, 1, ReadWriteMode>
    {
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<S1CR, 4, 1, ReadWriteMode>
    {
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<S1CR, 3, 1, ReadWriteMode>
    {
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<S1CR, 2, 1, ReadWriteMode>
    {
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<S1CR, 1, 1, ReadWriteMode>
    {
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<S1CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // stream x number of data register
  struct S1NDTR : Register<0x4002642c, ReadWriteMode, 0x0>
  {
    // Number of data items to transfer
    struct NDT : RegisterField<S1NDTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // stream x peripheral address register
  struct S1PAR : Register<0x40026430, ReadWriteMode, 0x0>
  {
    // Peripheral address
    struct PA : RegisterField<S1PAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 0 address register
  struct S1M0AR : Register<0x40026434, ReadWriteMode, 0x0>
  {
    // Memory 0 address
    struct M0A : RegisterField<S1M0AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 1 address register
  struct S1M1AR : Register<0x40026438, ReadWriteMode, 0x0>
  {
    // Memory 1 address (used in case of Double buffer mode)
    struct M1A : RegisterField<S1M1AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x FIFO control register
  struct S1FCR : Register<0x4002643c, ReadWriteMode, 0x21>
  {
    // FIFO error interrupt enable
    struct FEIE : RegisterField<S1FCR, 7, 1, ReadWriteMode>
    {
    };
    // FIFO status
    struct FS : RegisterField<S1FCR, 3, 3, ReadMode>
    {
    };
    // Direct mode disable
    struct DMDIS : RegisterField<S1FCR, 2, 1, ReadWriteMode>
    {
    };
    // FIFO threshold selection
    struct FTH : RegisterField<S1FCR, 0, 2, ReadWriteMode>
    {
    };
  };

  // stream x configuration register
  struct S2CR : Register<0x40026440, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<S2CR, 25, 3, ReadWriteMode>
    {
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<S2CR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<S2CR, 21, 2, ReadWriteMode>
    {
    };
    // ACK
    struct ACK : RegisterField<S2CR, 20, 1, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<S2CR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<S2CR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<S2CR, 16, 2, ReadWriteMode>
    {
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<S2CR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<S2CR, 13, 2, ReadWriteMode>
    {
    };
    // Peripheral data size
    struct PSIZE : RegisterField<S2CR, 11, 2, ReadWriteMode>
    {
    };
    // Memory increment mode
    struct MINC : RegisterField<S2CR, 10, 1, ReadWriteMode>
    {
    };
    // Peripheral increment mode
    struct PINC : RegisterField<S2CR, 9, 1, ReadWriteMode>
    {
    };
    // Circular mode
    struct CIRC : RegisterField<S2CR, 8, 1, ReadWriteMode>
    {
    };
    // Data transfer direction
    struct DIR : RegisterField<S2CR, 6, 2, ReadWriteMode>
    {
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<S2CR, 5, 1, ReadWriteMode>
    {
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<S2CR, 4, 1, ReadWriteMode>
    {
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<S2CR, 3, 1, ReadWriteMode>
    {
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<S2CR, 2, 1, ReadWriteMode>
    {
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<S2CR, 1, 1, ReadWriteMode>
    {
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<S2CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // stream x number of data register
  struct S2NDTR : Register<0x40026444, ReadWriteMode, 0x0>
  {
    // Number of data items to transfer
    struct NDT : RegisterField<S2NDTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // stream x peripheral address register
  struct S2PAR : Register<0x40026448, ReadWriteMode, 0x0>
  {
    // Peripheral address
    struct PA : RegisterField<S2PAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 0 address register
  struct S2M0AR : Register<0x4002644c, ReadWriteMode, 0x0>
  {
    // Memory 0 address
    struct M0A : RegisterField<S2M0AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 1 address register
  struct S2M1AR : Register<0x40026450, ReadWriteMode, 0x0>
  {
    // Memory 1 address (used in case of Double buffer mode)
    struct M1A : RegisterField<S2M1AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x FIFO control register
  struct S2FCR : Register<0x40026454, ReadWriteMode, 0x21>
  {
    // FIFO error interrupt enable
    struct FEIE : RegisterField<S2FCR, 7, 1, ReadWriteMode>
    {
    };
    // FIFO status
    struct FS : RegisterField<S2FCR, 3, 3, ReadMode>
    {
    };
    // Direct mode disable
    struct DMDIS : RegisterField<S2FCR, 2, 1, ReadWriteMode>
    {
    };
    // FIFO threshold selection
    struct FTH : RegisterField<S2FCR, 0, 2, ReadWriteMode>
    {
    };
  };

  // stream x configuration register
  struct S3CR : Register<0x40026458, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<S3CR, 25, 3, ReadWriteMode>
    {
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<S3CR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<S3CR, 21, 2, ReadWriteMode>
    {
    };
    // ACK
    struct ACK : RegisterField<S3CR, 20, 1, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<S3CR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<S3CR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<S3CR, 16, 2, ReadWriteMode>
    {
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<S3CR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<S3CR, 13, 2, ReadWriteMode>
    {
    };
    // Peripheral data size
    struct PSIZE : RegisterField<S3CR, 11, 2, ReadWriteMode>
    {
    };
    // Memory increment mode
    struct MINC : RegisterField<S3CR, 10, 1, ReadWriteMode>
    {
    };
    // Peripheral increment mode
    struct PINC : RegisterField<S3CR, 9, 1, ReadWriteMode>
    {
    };
    // Circular mode
    struct CIRC : RegisterField<S3CR, 8, 1, ReadWriteMode>
    {
    };
    // Data transfer direction
    struct DIR : RegisterField<S3CR, 6, 2, ReadWriteMode>
    {
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<S3CR, 5, 1, ReadWriteMode>
    {
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<S3CR, 4, 1, ReadWriteMode>
    {
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<S3CR, 3, 1, ReadWriteMode>
    {
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<S3CR, 2, 1, ReadWriteMode>
    {
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<S3CR, 1, 1, ReadWriteMode>
    {
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<S3CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // stream x number of data register
  struct S3NDTR : Register<0x4002645c, ReadWriteMode, 0x0>
  {
    // Number of data items to transfer
    struct NDT : RegisterField<S3NDTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // stream x peripheral address register
  struct S3PAR : Register<0x40026460, ReadWriteMode, 0x0>
  {
    // Peripheral address
    struct PA : RegisterField<S3PAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 0 address register
  struct S3M0AR : Register<0x40026464, ReadWriteMode, 0x0>
  {
    // Memory 0 address
    struct M0A : RegisterField<S3M0AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 1 address register
  struct S3M1AR : Register<0x40026468, ReadWriteMode, 0x0>
  {
    // Memory 1 address (used in case of Double buffer mode)
    struct M1A : RegisterField<S3M1AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x FIFO control register
  struct S3FCR : Register<0x4002646c, ReadWriteMode, 0x21>
  {
    // FIFO error interrupt enable
    struct FEIE : RegisterField<S3FCR, 7, 1, ReadWriteMode>
    {
    };
    // FIFO status
    struct FS : RegisterField<S3FCR, 3, 3, ReadMode>
    {
    };
    // Direct mode disable
    struct DMDIS : RegisterField<S3FCR, 2, 1, ReadWriteMode>
    {
    };
    // FIFO threshold selection
    struct FTH : RegisterField<S3FCR, 0, 2, ReadWriteMode>
    {
    };
  };

  // stream x configuration register
  struct S4CR : Register<0x40026470, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<S4CR, 25, 3, ReadWriteMode>
    {
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<S4CR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<S4CR, 21, 2, ReadWriteMode>
    {
    };
    // ACK
    struct ACK : RegisterField<S4CR, 20, 1, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<S4CR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<S4CR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<S4CR, 16, 2, ReadWriteMode>
    {
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<S4CR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<S4CR, 13, 2, ReadWriteMode>
    {
    };
    // Peripheral data size
    struct PSIZE : RegisterField<S4CR, 11, 2, ReadWriteMode>
    {
    };
    // Memory increment mode
    struct MINC : RegisterField<S4CR, 10, 1, ReadWriteMode>
    {
    };
    // Peripheral increment mode
    struct PINC : RegisterField<S4CR, 9, 1, ReadWriteMode>
    {
    };
    // Circular mode
    struct CIRC : RegisterField<S4CR, 8, 1, ReadWriteMode>
    {
    };
    // Data transfer direction
    struct DIR : RegisterField<S4CR, 6, 2, ReadWriteMode>
    {
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<S4CR, 5, 1, ReadWriteMode>
    {
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<S4CR, 4, 1, ReadWriteMode>
    {
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<S4CR, 3, 1, ReadWriteMode>
    {
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<S4CR, 2, 1, ReadWriteMode>
    {
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<S4CR, 1, 1, ReadWriteMode>
    {
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<S4CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // stream x number of data register
  struct S4NDTR : Register<0x40026474, ReadWriteMode, 0x0>
  {
    // Number of data items to transfer
    struct NDT : RegisterField<S4NDTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // stream x peripheral address register
  struct S4PAR : Register<0x40026478, ReadWriteMode, 0x0>
  {
    // Peripheral address
    struct PA : RegisterField<S4PAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 0 address register
  struct S4M0AR : Register<0x4002647c, ReadWriteMode, 0x0>
  {
    // Memory 0 address
    struct M0A : RegisterField<S4M0AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 1 address register
  struct S4M1AR : Register<0x40026480, ReadWriteMode, 0x0>
  {
    // Memory 1 address (used in case of Double buffer mode)
    struct M1A : RegisterField<S4M1AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x FIFO control register
  struct S4FCR : Register<0x40026484, ReadWriteMode, 0x21>
  {
    // FIFO error interrupt enable
    struct FEIE : RegisterField<S4FCR, 7, 1, ReadWriteMode>
    {
    };
    // FIFO status
    struct FS : RegisterField<S4FCR, 3, 3, ReadMode>
    {
    };
    // Direct mode disable
    struct DMDIS : RegisterField<S4FCR, 2, 1, ReadWriteMode>
    {
    };
    // FIFO threshold selection
    struct FTH : RegisterField<S4FCR, 0, 2, ReadWriteMode>
    {
    };
  };

  // stream x configuration register
  struct S5CR : Register<0x40026488, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<S5CR, 25, 3, ReadWriteMode>
    {
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<S5CR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<S5CR, 21, 2, ReadWriteMode>
    {
    };
    // ACK
    struct ACK : RegisterField<S5CR, 20, 1, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<S5CR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<S5CR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<S5CR, 16, 2, ReadWriteMode>
    {
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<S5CR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<S5CR, 13, 2, ReadWriteMode>
    {
    };
    // Peripheral data size
    struct PSIZE : RegisterField<S5CR, 11, 2, ReadWriteMode>
    {
    };
    // Memory increment mode
    struct MINC : RegisterField<S5CR, 10, 1, ReadWriteMode>
    {
    };
    // Peripheral increment mode
    struct PINC : RegisterField<S5CR, 9, 1, ReadWriteMode>
    {
    };
    // Circular mode
    struct CIRC : RegisterField<S5CR, 8, 1, ReadWriteMode>
    {
    };
    // Data transfer direction
    struct DIR : RegisterField<S5CR, 6, 2, ReadWriteMode>
    {
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<S5CR, 5, 1, ReadWriteMode>
    {
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<S5CR, 4, 1, ReadWriteMode>
    {
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<S5CR, 3, 1, ReadWriteMode>
    {
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<S5CR, 2, 1, ReadWriteMode>
    {
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<S5CR, 1, 1, ReadWriteMode>
    {
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<S5CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // stream x number of data register
  struct S5NDTR : Register<0x4002648c, ReadWriteMode, 0x0>
  {
    // Number of data items to transfer
    struct NDT : RegisterField<S5NDTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // stream x peripheral address register
  struct S5PAR : Register<0x40026490, ReadWriteMode, 0x0>
  {
    // Peripheral address
    struct PA : RegisterField<S5PAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 0 address register
  struct S5M0AR : Register<0x40026494, ReadWriteMode, 0x0>
  {
    // Memory 0 address
    struct M0A : RegisterField<S5M0AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 1 address register
  struct S5M1AR : Register<0x40026498, ReadWriteMode, 0x0>
  {
    // Memory 1 address (used in case of Double buffer mode)
    struct M1A : RegisterField<S5M1AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x FIFO control register
  struct S5FCR : Register<0x4002649c, ReadWriteMode, 0x21>
  {
    // FIFO error interrupt enable
    struct FEIE : RegisterField<S5FCR, 7, 1, ReadWriteMode>
    {
    };
    // FIFO status
    struct FS : RegisterField<S5FCR, 3, 3, ReadMode>
    {
    };
    // Direct mode disable
    struct DMDIS : RegisterField<S5FCR, 2, 1, ReadWriteMode>
    {
    };
    // FIFO threshold selection
    struct FTH : RegisterField<S5FCR, 0, 2, ReadWriteMode>
    {
    };
  };

  // stream x configuration register
  struct S6CR : Register<0x400264a0, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<S6CR, 25, 3, ReadWriteMode>
    {
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<S6CR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<S6CR, 21, 2, ReadWriteMode>
    {
    };
    // ACK
    struct ACK : RegisterField<S6CR, 20, 1, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<S6CR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<S6CR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<S6CR, 16, 2, ReadWriteMode>
    {
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<S6CR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<S6CR, 13, 2, ReadWriteMode>
    {
    };
    // Peripheral data size
    struct PSIZE : RegisterField<S6CR, 11, 2, ReadWriteMode>
    {
    };
    // Memory increment mode
    struct MINC : RegisterField<S6CR, 10, 1, ReadWriteMode>
    {
    };
    // Peripheral increment mode
    struct PINC : RegisterField<S6CR, 9, 1, ReadWriteMode>
    {
    };
    // Circular mode
    struct CIRC : RegisterField<S6CR, 8, 1, ReadWriteMode>
    {
    };
    // Data transfer direction
    struct DIR : RegisterField<S6CR, 6, 2, ReadWriteMode>
    {
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<S6CR, 5, 1, ReadWriteMode>
    {
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<S6CR, 4, 1, ReadWriteMode>
    {
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<S6CR, 3, 1, ReadWriteMode>
    {
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<S6CR, 2, 1, ReadWriteMode>
    {
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<S6CR, 1, 1, ReadWriteMode>
    {
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<S6CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // stream x number of data register
  struct S6NDTR : Register<0x400264a4, ReadWriteMode, 0x0>
  {
    // Number of data items to transfer
    struct NDT : RegisterField<S6NDTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // stream x peripheral address register
  struct S6PAR : Register<0x400264a8, ReadWriteMode, 0x0>
  {
    // Peripheral address
    struct PA : RegisterField<S6PAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 0 address register
  struct S6M0AR : Register<0x400264ac, ReadWriteMode, 0x0>
  {
    // Memory 0 address
    struct M0A : RegisterField<S6M0AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 1 address register
  struct S6M1AR : Register<0x400264b0, ReadWriteMode, 0x0>
  {
    // Memory 1 address (used in case of Double buffer mode)
    struct M1A : RegisterField<S6M1AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x FIFO control register
  struct S6FCR : Register<0x400264b4, ReadWriteMode, 0x21>
  {
    // FIFO error interrupt enable
    struct FEIE : RegisterField<S6FCR, 7, 1, ReadWriteMode>
    {
    };
    // FIFO status
    struct FS : RegisterField<S6FCR, 3, 3, ReadMode>
    {
    };
    // Direct mode disable
    struct DMDIS : RegisterField<S6FCR, 2, 1, ReadWriteMode>
    {
    };
    // FIFO threshold selection
    struct FTH : RegisterField<S6FCR, 0, 2, ReadWriteMode>
    {
    };
  };

  // stream x configuration register
  struct S7CR : Register<0x400264b8, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<S7CR, 25, 3, ReadWriteMode>
    {
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<S7CR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<S7CR, 21, 2, ReadWriteMode>
    {
    };
    // ACK
    struct ACK : RegisterField<S7CR, 20, 1, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<S7CR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<S7CR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<S7CR, 16, 2, ReadWriteMode>
    {
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<S7CR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<S7CR, 13, 2, ReadWriteMode>
    {
    };
    // Peripheral data size
    struct PSIZE : RegisterField<S7CR, 11, 2, ReadWriteMode>
    {
    };
    // Memory increment mode
    struct MINC : RegisterField<S7CR, 10, 1, ReadWriteMode>
    {
    };
    // Peripheral increment mode
    struct PINC : RegisterField<S7CR, 9, 1, ReadWriteMode>
    {
    };
    // Circular mode
    struct CIRC : RegisterField<S7CR, 8, 1, ReadWriteMode>
    {
    };
    // Data transfer direction
    struct DIR : RegisterField<S7CR, 6, 2, ReadWriteMode>
    {
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<S7CR, 5, 1, ReadWriteMode>
    {
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<S7CR, 4, 1, ReadWriteMode>
    {
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<S7CR, 3, 1, ReadWriteMode>
    {
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<S7CR, 2, 1, ReadWriteMode>
    {
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<S7CR, 1, 1, ReadWriteMode>
    {
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<S7CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // stream x number of data register
  struct S7NDTR : Register<0x400264bc, ReadWriteMode, 0x0>
  {
    // Number of data items to transfer
    struct NDT : RegisterField<S7NDTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // stream x peripheral address register
  struct S7PAR : Register<0x400264c0, ReadWriteMode, 0x0>
  {
    // Peripheral address
    struct PA : RegisterField<S7PAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 0 address register
  struct S7M0AR : Register<0x400264c4, ReadWriteMode, 0x0>
  {
    // Memory 0 address
    struct M0A : RegisterField<S7M0AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 1 address register
  struct S7M1AR : Register<0x400264c8, ReadWriteMode, 0x0>
  {
    // Memory 1 address (used in case of Double buffer mode)
    struct M1A : RegisterField<S7M1AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x FIFO control register
  struct S7FCR : Register<0x400264cc, ReadWriteMode, 0x21>
  {
    // FIFO error interrupt enable
    struct FEIE : RegisterField<S7FCR, 7, 1, ReadWriteMode>
    {
    };
    // FIFO status
    struct FS : RegisterField<S7FCR, 3, 3, ReadMode>
    {
    };
    // Direct mode disable
    struct DMDIS : RegisterField<S7FCR, 2, 1, ReadWriteMode>
    {
    };
    // FIFO threshold selection
    struct FTH : RegisterField<S7FCR, 0, 2, ReadWriteMode>
    {
    };
  };

// Large Registers

  // low interrupt status register
  template<auto num>
  struct ISR_FEIF : RegisterField<Register<0x40026400 + 4 * (num / 4), ReadMode, 0x21>, 0 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadMode>
  {
  };

  // low interrupt status register
  template<auto num>
  struct ISR_DMEIF : RegisterField<Register<0x40026400 + 4 * (num / 4), ReadMode, 0x21>, 2 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadMode>
  {
  };

  // low interrupt status register
  template<auto num>
  struct ISR_TEIF : RegisterField<Register<0x40026400 + 4 * (num / 4), ReadMode, 0x21>, 3 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadMode>
  {
  };

  // low interrupt status register
  template<auto num>
  struct ISR_HTIF : RegisterField<Register<0x40026400 + 4 * (num / 4), ReadMode, 0x21>, 4 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadMode>
  {
  };

  // low interrupt status register
  template<auto num>
  struct ISR_TCIF : RegisterField<Register<0x40026400 + 4 * (num / 4), ReadMode, 0x21>, 5 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadMode>
  {
  };

  // low interrupt flag clear register
  template<auto num>
  struct IFCR_CFEIF : RegisterField<Register<0x40026408 + 4 * (num / 4), ReadWriteMode, 0x21>, 0 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadWriteMode>
  {
  };

  // low interrupt flag clear register
  template<auto num>
  struct IFCR_CDMEIF : RegisterField<Register<0x40026408 + 4 * (num / 4), ReadWriteMode, 0x21>, 2 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadWriteMode>
  {
  };

  // low interrupt flag clear register
  template<auto num>
  struct IFCR_CTEIF : RegisterField<Register<0x40026408 + 4 * (num / 4), ReadWriteMode, 0x21>, 3 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadWriteMode>
  {
  };

  // low interrupt flag clear register
  template<auto num>
  struct IFCR_CHTIF : RegisterField<Register<0x40026408 + 4 * (num / 4), ReadWriteMode, 0x21>, 4 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadWriteMode>
  {
  };

  // low interrupt flag clear register
  template<auto num>
  struct IFCR_CTCIF : RegisterField<Register<0x40026408 + 4 * (num / 4), ReadWriteMode, 0x21>, 5 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadWriteMode>
  {
  };

  // stream x number of data register
  template<auto num>
  struct SxNDTR : RegisterField<Register<0x40026414 + 24 * (num / 1), ReadWriteMode, 0x21>, 16 * (num % 1), 16, ReadWriteMode>
  {
  };

  // stream x peripheral address register
  template<auto num>
  struct SxPAR : RegisterField<Register<0x40026418 + 24 * (num / 1), ReadWriteMode, 0x21>, 32 * (num % 1), 32, ReadWriteMode>
  {
    template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 4294967295)>>
    using Address = FieldValue<SxPAR, val>;
  };

  // stream x memory 0 address register
  template<auto num>
  struct SxM0AR : RegisterField<Register<0x4002641c + 24 * (num / 1), ReadWriteMode, 0x21>, 32 * (num % 1), 32, ReadWriteMode>
  {
  };

  // stream x memory 1 address register
  template<auto num>
  struct SxM1AR : RegisterField<Register<0x40026420 + 24 * (num / 1), ReadWriteMode, 0x21>, 32 * (num % 1), 32, ReadWriteMode>
  {
  };

};


struct DMA1
{
  static constexpr auto periphNum = 1;

  // low interrupt status register
  struct LISR : Register<0x40026000, ReadMode, 0x0>
  {
    // Stream x transfer complete interrupt flag (x = 3..0)
    struct TCIF3 : RegisterField<LISR, 27, 1, ReadMode>
    {
    };
    // Stream x half transfer interrupt flag (x=3..0)
    struct HTIF3 : RegisterField<LISR, 26, 1, ReadMode>
    {
    };
    // Stream x transfer error interrupt flag (x=3..0)
    struct TEIF3 : RegisterField<LISR, 25, 1, ReadMode>
    {
    };
    // Stream x direct mode error interrupt flag (x=3..0)
    struct DMEIF3 : RegisterField<LISR, 24, 1, ReadMode>
    {
    };
    // Stream x FIFO error interrupt flag (x=3..0)
    struct FEIF3 : RegisterField<LISR, 22, 1, ReadMode>
    {
    };
    // Stream x transfer complete interrupt flag (x = 3..0)
    struct TCIF2 : RegisterField<LISR, 21, 1, ReadMode>
    {
    };
    // Stream x half transfer interrupt flag (x=3..0)
    struct HTIF2 : RegisterField<LISR, 20, 1, ReadMode>
    {
    };
    // Stream x transfer error interrupt flag (x=3..0)
    struct TEIF2 : RegisterField<LISR, 19, 1, ReadMode>
    {
    };
    // Stream x direct mode error interrupt flag (x=3..0)
    struct DMEIF2 : RegisterField<LISR, 18, 1, ReadMode>
    {
    };
    // Stream x FIFO error interrupt flag (x=3..0)
    struct FEIF2 : RegisterField<LISR, 16, 1, ReadMode>
    {
    };
    // Stream x transfer complete interrupt flag (x = 3..0)
    struct TCIF1 : RegisterField<LISR, 11, 1, ReadMode>
    {
    };
    // Stream x half transfer interrupt flag (x=3..0)
    struct HTIF1 : RegisterField<LISR, 10, 1, ReadMode>
    {
    };
    // Stream x transfer error interrupt flag (x=3..0)
    struct TEIF1 : RegisterField<LISR, 9, 1, ReadMode>
    {
    };
    // Stream x direct mode error interrupt flag (x=3..0)
    struct DMEIF1 : RegisterField<LISR, 8, 1, ReadMode>
    {
    };
    // Stream x FIFO error interrupt flag (x=3..0)
    struct FEIF1 : RegisterField<LISR, 6, 1, ReadMode>
    {
    };
    // Stream x transfer complete interrupt flag (x = 3..0)
    struct TCIF0 : RegisterField<LISR, 5, 1, ReadMode>
    {
    };
    // Stream x half transfer interrupt flag (x=3..0)
    struct HTIF0 : RegisterField<LISR, 4, 1, ReadMode>
    {
    };
    // Stream x transfer error interrupt flag (x=3..0)
    struct TEIF0 : RegisterField<LISR, 3, 1, ReadMode>
    {
    };
    // Stream x direct mode error interrupt flag (x=3..0)
    struct DMEIF0 : RegisterField<LISR, 2, 1, ReadMode>
    {
    };
    // Stream x FIFO error interrupt flag (x=3..0)
    struct FEIF0 : RegisterField<LISR, 0, 1, ReadMode>
    {
    };
  };

  // high interrupt status register
  struct HISR : Register<0x40026004, ReadMode, 0x0>
  {
    // Stream x transfer complete interrupt flag (x=7..4)
    struct TCIF7 : RegisterField<HISR, 27, 1, ReadMode>
    {
    };
    // Stream x half transfer interrupt flag (x=7..4)
    struct HTIF7 : RegisterField<HISR, 26, 1, ReadMode>
    {
    };
    // Stream x transfer error interrupt flag (x=7..4)
    struct TEIF7 : RegisterField<HISR, 25, 1, ReadMode>
    {
    };
    // Stream x direct mode error interrupt flag (x=7..4)
    struct DMEIF7 : RegisterField<HISR, 24, 1, ReadMode>
    {
    };
    // Stream x FIFO error interrupt flag (x=7..4)
    struct FEIF7 : RegisterField<HISR, 22, 1, ReadMode>
    {
    };
    // Stream x transfer complete interrupt flag (x=7..4)
    struct TCIF6 : RegisterField<HISR, 21, 1, ReadMode>
    {
    };
    // Stream x half transfer interrupt flag (x=7..4)
    struct HTIF6 : RegisterField<HISR, 20, 1, ReadMode>
    {
    };
    // Stream x transfer error interrupt flag (x=7..4)
    struct TEIF6 : RegisterField<HISR, 19, 1, ReadMode>
    {
    };
    // Stream x direct mode error interrupt flag (x=7..4)
    struct DMEIF6 : RegisterField<HISR, 18, 1, ReadMode>
    {
    };
    // Stream x FIFO error interrupt flag (x=7..4)
    struct FEIF6 : RegisterField<HISR, 16, 1, ReadMode>
    {
    };
    // Stream x transfer complete interrupt flag (x=7..4)
    struct TCIF5 : RegisterField<HISR, 11, 1, ReadMode>
    {
    };
    // Stream x half transfer interrupt flag (x=7..4)
    struct HTIF5 : RegisterField<HISR, 10, 1, ReadMode>
    {
    };
    // Stream x transfer error interrupt flag (x=7..4)
    struct TEIF5 : RegisterField<HISR, 9, 1, ReadMode>
    {
    };
    // Stream x direct mode error interrupt flag (x=7..4)
    struct DMEIF5 : RegisterField<HISR, 8, 1, ReadMode>
    {
    };
    // Stream x FIFO error interrupt flag (x=7..4)
    struct FEIF5 : RegisterField<HISR, 6, 1, ReadMode>
    {
    };
    // Stream x transfer complete interrupt flag (x=7..4)
    struct TCIF4 : RegisterField<HISR, 5, 1, ReadMode>
    {
    };
    // Stream x half transfer interrupt flag (x=7..4)
    struct HTIF4 : RegisterField<HISR, 4, 1, ReadMode>
    {
    };
    // Stream x transfer error interrupt flag (x=7..4)
    struct TEIF4 : RegisterField<HISR, 3, 1, ReadMode>
    {
    };
    // Stream x direct mode error interrupt flag (x=7..4)
    struct DMEIF4 : RegisterField<HISR, 2, 1, ReadMode>
    {
    };
    // Stream x FIFO error interrupt flag (x=7..4)
    struct FEIF4 : RegisterField<HISR, 0, 1, ReadMode>
    {
    };
  };

  // low interrupt flag clear register
  struct LIFCR : Register<0x40026008, ReadWriteMode, 0x0>
  {
    // Stream x clear transfer complete interrupt flag (x = 3..0)
    struct CTCIF3 : RegisterField<LIFCR, 27, 1, ReadWriteMode>
    {
    };
    // Stream x clear half transfer interrupt flag (x = 3..0)
    struct CHTIF3 : RegisterField<LIFCR, 26, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer error interrupt flag (x = 3..0)
    struct CTEIF3 : RegisterField<LIFCR, 25, 1, ReadWriteMode>
    {
    };
    // Stream x clear direct mode error interrupt flag (x = 3..0)
    struct CDMEIF3 : RegisterField<LIFCR, 24, 1, ReadWriteMode>
    {
    };
    // Stream x clear FIFO error interrupt flag (x = 3..0)
    struct CFEIF3 : RegisterField<LIFCR, 22, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer complete interrupt flag (x = 3..0)
    struct CTCIF2 : RegisterField<LIFCR, 21, 1, ReadWriteMode>
    {
    };
    // Stream x clear half transfer interrupt flag (x = 3..0)
    struct CHTIF2 : RegisterField<LIFCR, 20, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer error interrupt flag (x = 3..0)
    struct CTEIF2 : RegisterField<LIFCR, 19, 1, ReadWriteMode>
    {
    };
    // Stream x clear direct mode error interrupt flag (x = 3..0)
    struct CDMEIF2 : RegisterField<LIFCR, 18, 1, ReadWriteMode>
    {
    };
    // Stream x clear FIFO error interrupt flag (x = 3..0)
    struct CFEIF2 : RegisterField<LIFCR, 16, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer complete interrupt flag (x = 3..0)
    struct CTCIF1 : RegisterField<LIFCR, 11, 1, ReadWriteMode>
    {
    };
    // Stream x clear half transfer interrupt flag (x = 3..0)
    struct CHTIF1 : RegisterField<LIFCR, 10, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer error interrupt flag (x = 3..0)
    struct CTEIF1 : RegisterField<LIFCR, 9, 1, ReadWriteMode>
    {
    };
    // Stream x clear direct mode error interrupt flag (x = 3..0)
    struct CDMEIF1 : RegisterField<LIFCR, 8, 1, ReadWriteMode>
    {
    };
    // Stream x clear FIFO error interrupt flag (x = 3..0)
    struct CFEIF1 : RegisterField<LIFCR, 6, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer complete interrupt flag (x = 3..0)
    struct CTCIF0 : RegisterField<LIFCR, 5, 1, ReadWriteMode>
    {
    };
    // Stream x clear half transfer interrupt flag (x = 3..0)
    struct CHTIF0 : RegisterField<LIFCR, 4, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer error interrupt flag (x = 3..0)
    struct CTEIF0 : RegisterField<LIFCR, 3, 1, ReadWriteMode>
    {
    };
    // Stream x clear direct mode error interrupt flag (x = 3..0)
    struct CDMEIF0 : RegisterField<LIFCR, 2, 1, ReadWriteMode>
    {
    };
    // Stream x clear FIFO error interrupt flag (x = 3..0)
    struct CFEIF0 : RegisterField<LIFCR, 0, 1, ReadWriteMode>
    {
    };
  };

  // high interrupt flag clear register
  struct HIFCR : Register<0x4002600c, ReadWriteMode, 0x0>
  {
    // Stream x clear transfer complete interrupt flag (x = 7..4)
    struct CTCIF7 : RegisterField<HIFCR, 27, 1, ReadWriteMode>
    {
    };
    // Stream x clear half transfer interrupt flag (x = 7..4)
    struct CHTIF7 : RegisterField<HIFCR, 26, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer error interrupt flag (x = 7..4)
    struct CTEIF7 : RegisterField<HIFCR, 25, 1, ReadWriteMode>
    {
    };
    // Stream x clear direct mode error interrupt flag (x = 7..4)
    struct CDMEIF7 : RegisterField<HIFCR, 24, 1, ReadWriteMode>
    {
    };
    // Stream x clear FIFO error interrupt flag (x = 7..4)
    struct CFEIF7 : RegisterField<HIFCR, 22, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer complete interrupt flag (x = 7..4)
    struct CTCIF6 : RegisterField<HIFCR, 21, 1, ReadWriteMode>
    {
    };
    // Stream x clear half transfer interrupt flag (x = 7..4)
    struct CHTIF6 : RegisterField<HIFCR, 20, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer error interrupt flag (x = 7..4)
    struct CTEIF6 : RegisterField<HIFCR, 19, 1, ReadWriteMode>
    {
    };
    // Stream x clear direct mode error interrupt flag (x = 7..4)
    struct CDMEIF6 : RegisterField<HIFCR, 18, 1, ReadWriteMode>
    {
    };
    // Stream x clear FIFO error interrupt flag (x = 7..4)
    struct CFEIF6 : RegisterField<HIFCR, 16, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer complete interrupt flag (x = 7..4)
    struct CTCIF5 : RegisterField<HIFCR, 11, 1, ReadWriteMode>
    {
    };
    // Stream x clear half transfer interrupt flag (x = 7..4)
    struct CHTIF5 : RegisterField<HIFCR, 10, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer error interrupt flag (x = 7..4)
    struct CTEIF5 : RegisterField<HIFCR, 9, 1, ReadWriteMode>
    {
    };
    // Stream x clear direct mode error interrupt flag (x = 7..4)
    struct CDMEIF5 : RegisterField<HIFCR, 8, 1, ReadWriteMode>
    {
    };
    // Stream x clear FIFO error interrupt flag (x = 7..4)
    struct CFEIF5 : RegisterField<HIFCR, 6, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer complete interrupt flag (x = 7..4)
    struct CTCIF4 : RegisterField<HIFCR, 5, 1, ReadWriteMode>
    {
    };
    // Stream x clear half transfer interrupt flag (x = 7..4)
    struct CHTIF4 : RegisterField<HIFCR, 4, 1, ReadWriteMode>
    {
    };
    // Stream x clear transfer error interrupt flag (x = 7..4)
    struct CTEIF4 : RegisterField<HIFCR, 3, 1, ReadWriteMode>
    {
    };
    // Stream x clear direct mode error interrupt flag (x = 7..4)
    struct CDMEIF4 : RegisterField<HIFCR, 2, 1, ReadWriteMode>
    {
    };
    // Stream x clear FIFO error interrupt flag (x = 7..4)
    struct CFEIF4 : RegisterField<HIFCR, 0, 1, ReadWriteMode>
    {
    };
  };

  // stream x configuration register
  struct S0CR : Register<0x40026010, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<S0CR, 25, 3, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 7)>>
      using Channel = FieldValue<CHSEL, val>;
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<S0CR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<S0CR, 21, 2, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<S0CR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<S0CR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<S0CR, 16, 2, ReadWriteMode>
    {
      using Low = FieldValue<PL, 0U>;
      using Medium = FieldValue<PL, 1U>;
      using High = FieldValue<PL, 2U>;
      using Very_high = FieldValue<PL, 3U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 3)>>
      using Priority = FieldValue<PL, val>;
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<S0CR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<S0CR, 13, 2, ReadWriteMode>
    {
      using Byte = FieldValue<MSIZE, 0U>;
      using Half_Word = FieldValue<MSIZE, 1U>;
      using Word = FieldValue<MSIZE, 2U>;
    };
    // Peripheral data size
    struct PSIZE : RegisterField<S0CR, 11, 2, ReadWriteMode>
    {
      using Byte = FieldValue<PSIZE, 0U>;
      using Half_Word = FieldValue<PSIZE, 1U>;
      using Word = FieldValue<PSIZE, 2U>;
    };
    // Memory increment mode
    struct MINC : RegisterField<S0CR, 10, 1, ReadWriteMode>
    {
      using Fixed = FieldValue<MINC, 0U>;
      using Incremented = FieldValue<MINC, 1U>;
    };
    // Peripheral increment mode
    struct PINC : RegisterField<S0CR, 9, 1, ReadWriteMode>
    {
      using Fixed = FieldValue<PINC, 0U>;
      using Incremented = FieldValue<PINC, 1U>;
    };
    // Circular mode
    struct CIRC : RegisterField<S0CR, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<CIRC, 0U>;
      using Enable = FieldValue<CIRC, 1U>;
    };
    // Data transfer direction
    struct DIR : RegisterField<S0CR, 6, 2, ReadWriteMode>
    {
      using peripheral_to_memory = FieldValue<DIR, 0U>;
      using memory_to_peripheral = FieldValue<DIR, 1U>;
      using memory_to_memory = FieldValue<DIR, 2U>;
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<S0CR, 5, 1, ReadWriteMode>
    {
      using DMA = FieldValue<PFCTRL, 0U>;
      using Peripheral = FieldValue<PFCTRL, 1U>;
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<S0CR, 4, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TCIE, 0U>;
      using Enable = FieldValue<TCIE, 1U>;
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<S0CR, 3, 1, ReadWriteMode>
    {
      using Disable = FieldValue<HTIE, 0U>;
      using Enable = FieldValue<HTIE, 1U>;
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<S0CR, 2, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TEIE, 0U>;
      using Enable = FieldValue<TEIE, 1U>;
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<S0CR, 1, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMEIE, 0U>;
      using Enable = FieldValue<DMEIE, 1U>;
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<S0CR, 0, 1, ReadWriteMode>
    {
      using Disable = FieldValue<EN, 0U>;
      using Enable = FieldValue<EN, 1U>;
    };
  };

  // stream x configuration register
  template<auto num>
  struct SxCR : Register<0x40026010 + 24 * num, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<SxCR, 25, 3, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 7)>>
      using Channel = FieldValue<CHSEL, val>;
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<SxCR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<SxCR, 21, 2, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<SxCR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<SxCR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<SxCR, 16, 2, ReadWriteMode>
    {
      using Low = FieldValue<PL, 0U>;
      using Medium = FieldValue<PL, 1U>;
      using High = FieldValue<PL, 2U>;
      using Very_high = FieldValue<PL, 3U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 3)>>
      using Priority = FieldValue<PL, val>;
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<SxCR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<SxCR, 13, 2, ReadWriteMode>
    {
      using Byte = FieldValue<MSIZE, 0U>;
      using Half_Word = FieldValue<MSIZE, 1U>;
      using Word = FieldValue<MSIZE, 2U>;
    };
    // Peripheral data size
    struct PSIZE : RegisterField<SxCR, 11, 2, ReadWriteMode>
    {
      using Byte = FieldValue<PSIZE, 0U>;
      using Half_Word = FieldValue<PSIZE, 1U>;
      using Word = FieldValue<PSIZE, 2U>;
    };
    // Memory increment mode
    struct MINC : RegisterField<SxCR, 10, 1, ReadWriteMode>
    {
      using Fixed = FieldValue<MINC, 0U>;
      using Incremented = FieldValue<MINC, 1U>;
    };
    // Peripheral increment mode
    struct PINC : RegisterField<SxCR, 9, 1, ReadWriteMode>
    {
      using Fixed = FieldValue<PINC, 0U>;
      using Incremented = FieldValue<PINC, 1U>;
    };
    // Circular mode
    struct CIRC : RegisterField<SxCR, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<CIRC, 0U>;
      using Enable = FieldValue<CIRC, 1U>;
    };
    // Data transfer direction
    struct DIR : RegisterField<SxCR, 6, 2, ReadWriteMode>
    {
      using peripheral_to_memory = FieldValue<DIR, 0U>;
      using memory_to_peripheral = FieldValue<DIR, 1U>;
      using memory_to_memory = FieldValue<DIR, 2U>;
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<SxCR, 5, 1, ReadWriteMode>
    {
      using DMA = FieldValue<PFCTRL, 0U>;
      using Peripheral = FieldValue<PFCTRL, 1U>;
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<SxCR, 4, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TCIE, 0U>;
      using Enable = FieldValue<TCIE, 1U>;
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<SxCR, 3, 1, ReadWriteMode>
    {
      using Disable = FieldValue<HTIE, 0U>;
      using Enable = FieldValue<HTIE, 1U>;
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<SxCR, 2, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TEIE, 0U>;
      using Enable = FieldValue<TEIE, 1U>;
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<SxCR, 1, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMEIE, 0U>;
      using Enable = FieldValue<DMEIE, 1U>;
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<SxCR, 0, 1, ReadWriteMode>
    {
      using Disable = FieldValue<EN, 0U>;
      using Enable = FieldValue<EN, 1U>;
    };
  };

  // stream x number of data register
  struct S0NDTR : Register<0x40026014, ReadWriteMode, 0x0>
  {
    // Number of data items to transfer
    struct NDT : RegisterField<S0NDTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // stream x peripheral address register
  struct S0PAR : Register<0x40026018, ReadWriteMode, 0x0>
  {
    // Peripheral address
    struct PA : RegisterField<S0PAR, 0, 32, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 4294967295)>>
      using Address = FieldValue<PA, val>;
    };
  };

  // stream x memory 0 address register
  struct S0M0AR : Register<0x4002601c, ReadWriteMode, 0x0>
  {
    // Memory 0 address
    struct M0A : RegisterField<S0M0AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 1 address register
  struct S0M1AR : Register<0x40026020, ReadWriteMode, 0x0>
  {
    // Memory 1 address (used in case of Double buffer mode)
    struct M1A : RegisterField<S0M1AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x FIFO control register
  struct S0FCR : Register<0x40026024, ReadWriteMode, 0x21>
  {
    // FIFO error interrupt enable
    struct FEIE : RegisterField<S0FCR, 7, 1, ReadWriteMode>
    {
    };
    // FIFO status
    struct FS : RegisterField<S0FCR, 3, 3, ReadMode>
    {
    };
    // Direct mode disable
    struct DMDIS : RegisterField<S0FCR, 2, 1, ReadWriteMode>
    {
    };
    // FIFO threshold selection
    struct FTH : RegisterField<S0FCR, 0, 2, ReadWriteMode>
    {
    };
  };

  // stream x configuration register
  struct S1CR : Register<0x40026028, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<S1CR, 25, 3, ReadWriteMode>
    {
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<S1CR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<S1CR, 21, 2, ReadWriteMode>
    {
    };
    // ACK
    struct ACK : RegisterField<S1CR, 20, 1, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<S1CR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<S1CR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<S1CR, 16, 2, ReadWriteMode>
    {
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<S1CR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<S1CR, 13, 2, ReadWriteMode>
    {
    };
    // Peripheral data size
    struct PSIZE : RegisterField<S1CR, 11, 2, ReadWriteMode>
    {
    };
    // Memory increment mode
    struct MINC : RegisterField<S1CR, 10, 1, ReadWriteMode>
    {
    };
    // Peripheral increment mode
    struct PINC : RegisterField<S1CR, 9, 1, ReadWriteMode>
    {
    };
    // Circular mode
    struct CIRC : RegisterField<S1CR, 8, 1, ReadWriteMode>
    {
    };
    // Data transfer direction
    struct DIR : RegisterField<S1CR, 6, 2, ReadWriteMode>
    {
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<S1CR, 5, 1, ReadWriteMode>
    {
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<S1CR, 4, 1, ReadWriteMode>
    {
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<S1CR, 3, 1, ReadWriteMode>
    {
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<S1CR, 2, 1, ReadWriteMode>
    {
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<S1CR, 1, 1, ReadWriteMode>
    {
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<S1CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // stream x number of data register
  struct S1NDTR : Register<0x4002602c, ReadWriteMode, 0x0>
  {
    // Number of data items to transfer
    struct NDT : RegisterField<S1NDTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // stream x peripheral address register
  struct S1PAR : Register<0x40026030, ReadWriteMode, 0x0>
  {
    // Peripheral address
    struct PA : RegisterField<S1PAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 0 address register
  struct S1M0AR : Register<0x40026034, ReadWriteMode, 0x0>
  {
    // Memory 0 address
    struct M0A : RegisterField<S1M0AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 1 address register
  struct S1M1AR : Register<0x40026038, ReadWriteMode, 0x0>
  {
    // Memory 1 address (used in case of Double buffer mode)
    struct M1A : RegisterField<S1M1AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x FIFO control register
  struct S1FCR : Register<0x4002603c, ReadWriteMode, 0x21>
  {
    // FIFO error interrupt enable
    struct FEIE : RegisterField<S1FCR, 7, 1, ReadWriteMode>
    {
    };
    // FIFO status
    struct FS : RegisterField<S1FCR, 3, 3, ReadMode>
    {
    };
    // Direct mode disable
    struct DMDIS : RegisterField<S1FCR, 2, 1, ReadWriteMode>
    {
    };
    // FIFO threshold selection
    struct FTH : RegisterField<S1FCR, 0, 2, ReadWriteMode>
    {
    };
  };

  // stream x configuration register
  struct S2CR : Register<0x40026040, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<S2CR, 25, 3, ReadWriteMode>
    {
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<S2CR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<S2CR, 21, 2, ReadWriteMode>
    {
    };
    // ACK
    struct ACK : RegisterField<S2CR, 20, 1, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<S2CR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<S2CR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<S2CR, 16, 2, ReadWriteMode>
    {
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<S2CR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<S2CR, 13, 2, ReadWriteMode>
    {
    };
    // Peripheral data size
    struct PSIZE : RegisterField<S2CR, 11, 2, ReadWriteMode>
    {
    };
    // Memory increment mode
    struct MINC : RegisterField<S2CR, 10, 1, ReadWriteMode>
    {
    };
    // Peripheral increment mode
    struct PINC : RegisterField<S2CR, 9, 1, ReadWriteMode>
    {
    };
    // Circular mode
    struct CIRC : RegisterField<S2CR, 8, 1, ReadWriteMode>
    {
    };
    // Data transfer direction
    struct DIR : RegisterField<S2CR, 6, 2, ReadWriteMode>
    {
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<S2CR, 5, 1, ReadWriteMode>
    {
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<S2CR, 4, 1, ReadWriteMode>
    {
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<S2CR, 3, 1, ReadWriteMode>
    {
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<S2CR, 2, 1, ReadWriteMode>
    {
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<S2CR, 1, 1, ReadWriteMode>
    {
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<S2CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // stream x number of data register
  struct S2NDTR : Register<0x40026044, ReadWriteMode, 0x0>
  {
    // Number of data items to transfer
    struct NDT : RegisterField<S2NDTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // stream x peripheral address register
  struct S2PAR : Register<0x40026048, ReadWriteMode, 0x0>
  {
    // Peripheral address
    struct PA : RegisterField<S2PAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 0 address register
  struct S2M0AR : Register<0x4002604c, ReadWriteMode, 0x0>
  {
    // Memory 0 address
    struct M0A : RegisterField<S2M0AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 1 address register
  struct S2M1AR : Register<0x40026050, ReadWriteMode, 0x0>
  {
    // Memory 1 address (used in case of Double buffer mode)
    struct M1A : RegisterField<S2M1AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x FIFO control register
  struct S2FCR : Register<0x40026054, ReadWriteMode, 0x21>
  {
    // FIFO error interrupt enable
    struct FEIE : RegisterField<S2FCR, 7, 1, ReadWriteMode>
    {
    };
    // FIFO status
    struct FS : RegisterField<S2FCR, 3, 3, ReadMode>
    {
    };
    // Direct mode disable
    struct DMDIS : RegisterField<S2FCR, 2, 1, ReadWriteMode>
    {
    };
    // FIFO threshold selection
    struct FTH : RegisterField<S2FCR, 0, 2, ReadWriteMode>
    {
    };
  };

  // stream x configuration register
  struct S3CR : Register<0x40026058, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<S3CR, 25, 3, ReadWriteMode>
    {
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<S3CR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<S3CR, 21, 2, ReadWriteMode>
    {
    };
    // ACK
    struct ACK : RegisterField<S3CR, 20, 1, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<S3CR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<S3CR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<S3CR, 16, 2, ReadWriteMode>
    {
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<S3CR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<S3CR, 13, 2, ReadWriteMode>
    {
    };
    // Peripheral data size
    struct PSIZE : RegisterField<S3CR, 11, 2, ReadWriteMode>
    {
    };
    // Memory increment mode
    struct MINC : RegisterField<S3CR, 10, 1, ReadWriteMode>
    {
    };
    // Peripheral increment mode
    struct PINC : RegisterField<S3CR, 9, 1, ReadWriteMode>
    {
    };
    // Circular mode
    struct CIRC : RegisterField<S3CR, 8, 1, ReadWriteMode>
    {
    };
    // Data transfer direction
    struct DIR : RegisterField<S3CR, 6, 2, ReadWriteMode>
    {
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<S3CR, 5, 1, ReadWriteMode>
    {
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<S3CR, 4, 1, ReadWriteMode>
    {
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<S3CR, 3, 1, ReadWriteMode>
    {
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<S3CR, 2, 1, ReadWriteMode>
    {
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<S3CR, 1, 1, ReadWriteMode>
    {
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<S3CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // stream x number of data register
  struct S3NDTR : Register<0x4002605c, ReadWriteMode, 0x0>
  {
    // Number of data items to transfer
    struct NDT : RegisterField<S3NDTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // stream x peripheral address register
  struct S3PAR : Register<0x40026060, ReadWriteMode, 0x0>
  {
    // Peripheral address
    struct PA : RegisterField<S3PAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 0 address register
  struct S3M0AR : Register<0x40026064, ReadWriteMode, 0x0>
  {
    // Memory 0 address
    struct M0A : RegisterField<S3M0AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 1 address register
  struct S3M1AR : Register<0x40026068, ReadWriteMode, 0x0>
  {
    // Memory 1 address (used in case of Double buffer mode)
    struct M1A : RegisterField<S3M1AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x FIFO control register
  struct S3FCR : Register<0x4002606c, ReadWriteMode, 0x21>
  {
    // FIFO error interrupt enable
    struct FEIE : RegisterField<S3FCR, 7, 1, ReadWriteMode>
    {
    };
    // FIFO status
    struct FS : RegisterField<S3FCR, 3, 3, ReadMode>
    {
    };
    // Direct mode disable
    struct DMDIS : RegisterField<S3FCR, 2, 1, ReadWriteMode>
    {
    };
    // FIFO threshold selection
    struct FTH : RegisterField<S3FCR, 0, 2, ReadWriteMode>
    {
    };
  };

  // stream x configuration register
  struct S4CR : Register<0x40026070, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<S4CR, 25, 3, ReadWriteMode>
    {
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<S4CR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<S4CR, 21, 2, ReadWriteMode>
    {
    };
    // ACK
    struct ACK : RegisterField<S4CR, 20, 1, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<S4CR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<S4CR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<S4CR, 16, 2, ReadWriteMode>
    {
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<S4CR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<S4CR, 13, 2, ReadWriteMode>
    {
    };
    // Peripheral data size
    struct PSIZE : RegisterField<S4CR, 11, 2, ReadWriteMode>
    {
    };
    // Memory increment mode
    struct MINC : RegisterField<S4CR, 10, 1, ReadWriteMode>
    {
    };
    // Peripheral increment mode
    struct PINC : RegisterField<S4CR, 9, 1, ReadWriteMode>
    {
    };
    // Circular mode
    struct CIRC : RegisterField<S4CR, 8, 1, ReadWriteMode>
    {
    };
    // Data transfer direction
    struct DIR : RegisterField<S4CR, 6, 2, ReadWriteMode>
    {
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<S4CR, 5, 1, ReadWriteMode>
    {
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<S4CR, 4, 1, ReadWriteMode>
    {
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<S4CR, 3, 1, ReadWriteMode>
    {
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<S4CR, 2, 1, ReadWriteMode>
    {
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<S4CR, 1, 1, ReadWriteMode>
    {
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<S4CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // stream x number of data register
  struct S4NDTR : Register<0x40026074, ReadWriteMode, 0x0>
  {
    // Number of data items to transfer
    struct NDT : RegisterField<S4NDTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // stream x peripheral address register
  struct S4PAR : Register<0x40026078, ReadWriteMode, 0x0>
  {
    // Peripheral address
    struct PA : RegisterField<S4PAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 0 address register
  struct S4M0AR : Register<0x4002607c, ReadWriteMode, 0x0>
  {
    // Memory 0 address
    struct M0A : RegisterField<S4M0AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 1 address register
  struct S4M1AR : Register<0x40026080, ReadWriteMode, 0x0>
  {
    // Memory 1 address (used in case of Double buffer mode)
    struct M1A : RegisterField<S4M1AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x FIFO control register
  struct S4FCR : Register<0x40026084, ReadWriteMode, 0x21>
  {
    // FIFO error interrupt enable
    struct FEIE : RegisterField<S4FCR, 7, 1, ReadWriteMode>
    {
    };
    // FIFO status
    struct FS : RegisterField<S4FCR, 3, 3, ReadMode>
    {
    };
    // Direct mode disable
    struct DMDIS : RegisterField<S4FCR, 2, 1, ReadWriteMode>
    {
    };
    // FIFO threshold selection
    struct FTH : RegisterField<S4FCR, 0, 2, ReadWriteMode>
    {
    };
  };

  // stream x configuration register
  struct S5CR : Register<0x40026088, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<S5CR, 25, 3, ReadWriteMode>
    {
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<S5CR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<S5CR, 21, 2, ReadWriteMode>
    {
    };
    // ACK
    struct ACK : RegisterField<S5CR, 20, 1, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<S5CR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<S5CR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<S5CR, 16, 2, ReadWriteMode>
    {
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<S5CR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<S5CR, 13, 2, ReadWriteMode>
    {
    };
    // Peripheral data size
    struct PSIZE : RegisterField<S5CR, 11, 2, ReadWriteMode>
    {
    };
    // Memory increment mode
    struct MINC : RegisterField<S5CR, 10, 1, ReadWriteMode>
    {
    };
    // Peripheral increment mode
    struct PINC : RegisterField<S5CR, 9, 1, ReadWriteMode>
    {
    };
    // Circular mode
    struct CIRC : RegisterField<S5CR, 8, 1, ReadWriteMode>
    {
    };
    // Data transfer direction
    struct DIR : RegisterField<S5CR, 6, 2, ReadWriteMode>
    {
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<S5CR, 5, 1, ReadWriteMode>
    {
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<S5CR, 4, 1, ReadWriteMode>
    {
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<S5CR, 3, 1, ReadWriteMode>
    {
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<S5CR, 2, 1, ReadWriteMode>
    {
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<S5CR, 1, 1, ReadWriteMode>
    {
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<S5CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // stream x number of data register
  struct S5NDTR : Register<0x4002608c, ReadWriteMode, 0x0>
  {
    // Number of data items to transfer
    struct NDT : RegisterField<S5NDTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // stream x peripheral address register
  struct S5PAR : Register<0x40026090, ReadWriteMode, 0x0>
  {
    // Peripheral address
    struct PA : RegisterField<S5PAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 0 address register
  struct S5M0AR : Register<0x40026094, ReadWriteMode, 0x0>
  {
    // Memory 0 address
    struct M0A : RegisterField<S5M0AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 1 address register
  struct S5M1AR : Register<0x40026098, ReadWriteMode, 0x0>
  {
    // Memory 1 address (used in case of Double buffer mode)
    struct M1A : RegisterField<S5M1AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x FIFO control register
  struct S5FCR : Register<0x4002609c, ReadWriteMode, 0x21>
  {
    // FIFO error interrupt enable
    struct FEIE : RegisterField<S5FCR, 7, 1, ReadWriteMode>
    {
    };
    // FIFO status
    struct FS : RegisterField<S5FCR, 3, 3, ReadMode>
    {
    };
    // Direct mode disable
    struct DMDIS : RegisterField<S5FCR, 2, 1, ReadWriteMode>
    {
    };
    // FIFO threshold selection
    struct FTH : RegisterField<S5FCR, 0, 2, ReadWriteMode>
    {
    };
  };

  // stream x configuration register
  struct S6CR : Register<0x400260a0, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<S6CR, 25, 3, ReadWriteMode>
    {
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<S6CR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<S6CR, 21, 2, ReadWriteMode>
    {
    };
    // ACK
    struct ACK : RegisterField<S6CR, 20, 1, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<S6CR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<S6CR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<S6CR, 16, 2, ReadWriteMode>
    {
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<S6CR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<S6CR, 13, 2, ReadWriteMode>
    {
    };
    // Peripheral data size
    struct PSIZE : RegisterField<S6CR, 11, 2, ReadWriteMode>
    {
    };
    // Memory increment mode
    struct MINC : RegisterField<S6CR, 10, 1, ReadWriteMode>
    {
    };
    // Peripheral increment mode
    struct PINC : RegisterField<S6CR, 9, 1, ReadWriteMode>
    {
    };
    // Circular mode
    struct CIRC : RegisterField<S6CR, 8, 1, ReadWriteMode>
    {
    };
    // Data transfer direction
    struct DIR : RegisterField<S6CR, 6, 2, ReadWriteMode>
    {
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<S6CR, 5, 1, ReadWriteMode>
    {
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<S6CR, 4, 1, ReadWriteMode>
    {
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<S6CR, 3, 1, ReadWriteMode>
    {
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<S6CR, 2, 1, ReadWriteMode>
    {
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<S6CR, 1, 1, ReadWriteMode>
    {
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<S6CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // stream x number of data register
  struct S6NDTR : Register<0x400260a4, ReadWriteMode, 0x0>
  {
    // Number of data items to transfer
    struct NDT : RegisterField<S6NDTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // stream x peripheral address register
  struct S6PAR : Register<0x400260a8, ReadWriteMode, 0x0>
  {
    // Peripheral address
    struct PA : RegisterField<S6PAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 0 address register
  struct S6M0AR : Register<0x400260ac, ReadWriteMode, 0x0>
  {
    // Memory 0 address
    struct M0A : RegisterField<S6M0AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 1 address register
  struct S6M1AR : Register<0x400260b0, ReadWriteMode, 0x0>
  {
    // Memory 1 address (used in case of Double buffer mode)
    struct M1A : RegisterField<S6M1AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x FIFO control register
  struct S6FCR : Register<0x400260b4, ReadWriteMode, 0x21>
  {
    // FIFO error interrupt enable
    struct FEIE : RegisterField<S6FCR, 7, 1, ReadWriteMode>
    {
    };
    // FIFO status
    struct FS : RegisterField<S6FCR, 3, 3, ReadMode>
    {
    };
    // Direct mode disable
    struct DMDIS : RegisterField<S6FCR, 2, 1, ReadWriteMode>
    {
    };
    // FIFO threshold selection
    struct FTH : RegisterField<S6FCR, 0, 2, ReadWriteMode>
    {
    };
  };

  // stream x configuration register
  struct S7CR : Register<0x400260b8, ReadWriteMode, 0x0>
  {
    // Channel selection
    struct CHSEL : RegisterField<S7CR, 25, 3, ReadWriteMode>
    {
    };
    // Memory burst transfer configuration
    struct MBURST : RegisterField<S7CR, 23, 2, ReadWriteMode>
    {
    };
    // Peripheral burst transfer configuration
    struct PBURST : RegisterField<S7CR, 21, 2, ReadWriteMode>
    {
    };
    // ACK
    struct ACK : RegisterField<S7CR, 20, 1, ReadWriteMode>
    {
    };
    // Current target (only in double buffer mode)
    struct CT : RegisterField<S7CR, 19, 1, ReadWriteMode>
    {
    };
    // Double buffer mode
    struct DBM : RegisterField<S7CR, 18, 1, ReadWriteMode>
    {
    };
    // Priority level
    struct PL : RegisterField<S7CR, 16, 2, ReadWriteMode>
    {
    };
    // Peripheral increment offset size
    struct PINCOS : RegisterField<S7CR, 15, 1, ReadWriteMode>
    {
    };
    // Memory data size
    struct MSIZE : RegisterField<S7CR, 13, 2, ReadWriteMode>
    {
    };
    // Peripheral data size
    struct PSIZE : RegisterField<S7CR, 11, 2, ReadWriteMode>
    {
    };
    // Memory increment mode
    struct MINC : RegisterField<S7CR, 10, 1, ReadWriteMode>
    {
    };
    // Peripheral increment mode
    struct PINC : RegisterField<S7CR, 9, 1, ReadWriteMode>
    {
    };
    // Circular mode
    struct CIRC : RegisterField<S7CR, 8, 1, ReadWriteMode>
    {
    };
    // Data transfer direction
    struct DIR : RegisterField<S7CR, 6, 2, ReadWriteMode>
    {
    };
    // Peripheral flow controller
    struct PFCTRL : RegisterField<S7CR, 5, 1, ReadWriteMode>
    {
    };
    // Transfer complete interrupt enable
    struct TCIE : RegisterField<S7CR, 4, 1, ReadWriteMode>
    {
    };
    // Half transfer interrupt enable
    struct HTIE : RegisterField<S7CR, 3, 1, ReadWriteMode>
    {
    };
    // Transfer error interrupt enable
    struct TEIE : RegisterField<S7CR, 2, 1, ReadWriteMode>
    {
    };
    // Direct mode error interrupt enable
    struct DMEIE : RegisterField<S7CR, 1, 1, ReadWriteMode>
    {
    };
    // Stream enable / flag stream ready when read low
    struct EN : RegisterField<S7CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // stream x number of data register
  struct S7NDTR : Register<0x400260bc, ReadWriteMode, 0x0>
  {
    // Number of data items to transfer
    struct NDT : RegisterField<S7NDTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // stream x peripheral address register
  struct S7PAR : Register<0x400260c0, ReadWriteMode, 0x0>
  {
    // Peripheral address
    struct PA : RegisterField<S7PAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 0 address register
  struct S7M0AR : Register<0x400260c4, ReadWriteMode, 0x0>
  {
    // Memory 0 address
    struct M0A : RegisterField<S7M0AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x memory 1 address register
  struct S7M1AR : Register<0x400260c8, ReadWriteMode, 0x0>
  {
    // Memory 1 address (used in case of Double buffer mode)
    struct M1A : RegisterField<S7M1AR, 0, 32, ReadWriteMode>
    {
    };
  };

  // stream x FIFO control register
  struct S7FCR : Register<0x400260cc, ReadWriteMode, 0x21>
  {
    // FIFO error interrupt enable
    struct FEIE : RegisterField<S7FCR, 7, 1, ReadWriteMode>
    {
    };
    // FIFO status
    struct FS : RegisterField<S7FCR, 3, 3, ReadMode>
    {
    };
    // Direct mode disable
    struct DMDIS : RegisterField<S7FCR, 2, 1, ReadWriteMode>
    {
    };
    // FIFO threshold selection
    struct FTH : RegisterField<S7FCR, 0, 2, ReadWriteMode>
    {
    };
  };

// Large Registers

  // low interrupt status register
  template<auto num>
  struct ISR_FEIF : RegisterField<Register<0x40026000 + 4 * (num / 4), ReadMode, 0x21>, 0 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadMode>
  {
  };

  // low interrupt status register
  template<auto num>
  struct ISR_DMEIF : RegisterField<Register<0x40026000 + 4 * (num / 4), ReadMode, 0x21>, 2 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadMode>
  {
  };

  // low interrupt status register
  template<auto num>
  struct ISR_TEIF : RegisterField<Register<0x40026000 + 4 * (num / 4), ReadMode, 0x21>, 3 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadMode>
  {
  };

  // low interrupt status register
  template<auto num>
  struct ISR_HTIF : RegisterField<Register<0x40026000 + 4 * (num / 4), ReadMode, 0x21>, 4 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadMode>
  {
  };

  // low interrupt status register
  template<auto num>
  struct ISR_TCIF : RegisterField<Register<0x40026000 + 4 * (num / 4), ReadMode, 0x21>, 5 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadMode>
  {
  };

  // low interrupt flag clear register
  template<auto num>
  struct IFCR_CFEIF : RegisterField<Register<0x40026008 + 4 * (num / 4), ReadWriteMode, 0x21>, 0 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadWriteMode>
  {
  };

  // low interrupt flag clear register
  template<auto num>
  struct IFCR_CDMEIF : RegisterField<Register<0x40026008 + 4 * (num / 4), ReadWriteMode, 0x21>, 2 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadWriteMode>
  {
  };

  // low interrupt flag clear register
  template<auto num>
  struct IFCR_CTEIF : RegisterField<Register<0x40026008 + 4 * (num / 4), ReadWriteMode, 0x21>, 3 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadWriteMode>
  {
  };

  // low interrupt flag clear register
  template<auto num>
  struct IFCR_CHTIF : RegisterField<Register<0x40026008 + 4 * (num / 4), ReadWriteMode, 0x21>, 4 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadWriteMode>
  {
  };

  // low interrupt flag clear register
  template<auto num>
  struct IFCR_CTCIF : RegisterField<Register<0x40026008 + 4 * (num / 4), ReadWriteMode, 0x21>, 5 + (6 * (num%4) + 4 * ((num%4) == 2)), 8, ReadWriteMode>
  {
  };

  // stream x number of data register
  template<auto num>
  struct SxNDTR : RegisterField<Register<0x40026014 + 24 * (num / 1), ReadWriteMode, 0x21>, 16 * (num % 1), 16, ReadWriteMode>
  {
  };

  // stream x peripheral address register
  template<auto num>
  struct SxPAR : RegisterField<Register<0x40026018 + 24 * (num / 1), ReadWriteMode, 0x21>, 32 * (num % 1), 32, ReadWriteMode>
  {
    template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 4294967295)>>
    using Address = FieldValue<SxPAR, val>;
  };

  // stream x memory 0 address register
  template<auto num>
  struct SxM0AR : RegisterField<Register<0x4002601c + 24 * (num / 1), ReadWriteMode, 0x21>, 32 * (num % 1), 32, ReadWriteMode>
  {
  };

  // stream x memory 1 address register
  template<auto num>
  struct SxM1AR : RegisterField<Register<0x40026020 + 24 * (num / 1), ReadWriteMode, 0x21>, 32 * (num % 1), 32, ReadWriteMode>
  {
  };

};


