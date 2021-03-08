/******************************************************************************
* Filename : dcmi_registers.hpp
*
* Details  : Digital camera interface
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct DCMI
{
  // control register 1
  struct CR : Register<0x50050000, ReadWriteMode, 0x0>
  {
    // Odd/Even Line Select
    struct OELS : RegisterField<CR, 20, 1, ReadMode>
    {
    };
    // Line Select mode
    struct LSM : RegisterField<CR, 19, 1, ReadMode>
    {
    };
    // Odd/Even Byte Select
    struct OEBS : RegisterField<CR, 18, 1, ReadMode>
    {
    };
    // Byte Select mode
    struct BSM : RegisterField<CR, 16, 2, ReadMode>
    {
    };
    // DCMI enable
    struct ENABLE : RegisterField<CR, 14, 1, ReadWriteMode>
    {
    };
    // Extended data mode
    struct EDM : RegisterField<CR, 10, 2, ReadWriteMode>
    {
    };
    // Frame capture rate control
    struct FCRC : RegisterField<CR, 8, 2, ReadWriteMode>
    {
    };
    // Vertical synchronization polarity
    struct VSPOL : RegisterField<CR, 7, 1, ReadWriteMode>
    {
    };
    // Horizontal synchronization polarity
    struct HSPOL : RegisterField<CR, 6, 1, ReadWriteMode>
    {
    };
    // Pixel clock polarity
    struct PCKPOL : RegisterField<CR, 5, 1, ReadWriteMode>
    {
    };
    // Embedded synchronization select
    struct ESS : RegisterField<CR, 4, 1, ReadWriteMode>
    {
    };
    // JPEG format
    struct JPEG : RegisterField<CR, 3, 1, ReadWriteMode>
    {
    };
    // Crop feature
    struct CROP : RegisterField<CR, 2, 1, ReadWriteMode>
    {
    };
    // Capture mode
    struct CM : RegisterField<CR, 1, 1, ReadWriteMode>
    {
    };
    // Capture enable
    struct CAPTURE : RegisterField<CR, 0, 1, ReadMode>
    {
    };
  };

  // status register
  struct SR : Register<0x50050004, ReadMode, 0x0>
  {
    // FIFO not empty
    struct FNE : RegisterField<SR, 2, 1, ReadMode>
    {
    };
    // VSYNC
    struct VSYNC : RegisterField<SR, 1, 1, ReadMode>
    {
    };
    // HSYNC
    struct HSYNC : RegisterField<SR, 0, 1, ReadMode>
    {
    };
  };

  // raw interrupt status register
  struct RIS : Register<0x50050008, ReadMode, 0x0>
  {
    // Line raw interrupt status
    struct LINE_RIS : RegisterField<RIS, 4, 1, ReadMode>
    {
    };
    // VSYNC raw interrupt status
    struct VSYNC_RIS : RegisterField<RIS, 3, 1, ReadMode>
    {
    };
    // Synchronization error raw interrupt status
    struct ERR_RIS : RegisterField<RIS, 2, 1, ReadMode>
    {
    };
    // Overrun raw interrupt status
    struct OVR_RIS : RegisterField<RIS, 1, 1, ReadMode>
    {
    };
    // Capture complete raw interrupt status
    struct FRAME_RIS : RegisterField<RIS, 0, 1, ReadMode>
    {
    };
  };

  // interrupt enable register
  struct IER : Register<0x5005000c, ReadWriteMode, 0x0>
  {
    // Line interrupt enable
    struct LINE_IE : RegisterField<IER, 4, 1, ReadWriteMode>
    {
    };
    // VSYNC interrupt enable
    struct VSYNC_IE : RegisterField<IER, 3, 1, ReadWriteMode>
    {
    };
    // Synchronization error interrupt enable
    struct ERR_IE : RegisterField<IER, 2, 1, ReadWriteMode>
    {
    };
    // Overrun interrupt enable
    struct OVR_IE : RegisterField<IER, 1, 1, ReadWriteMode>
    {
    };
    // Capture complete interrupt enable
    struct FRAME_IE : RegisterField<IER, 0, 1, ReadWriteMode>
    {
    };
  };

  // masked interrupt status register
  struct MIS : Register<0x50050010, ReadMode, 0x0>
  {
    // Line masked interrupt status
    struct LINE_MIS : RegisterField<MIS, 4, 1, ReadMode>
    {
    };
    // VSYNC masked interrupt status
    struct VSYNC_MIS : RegisterField<MIS, 3, 1, ReadMode>
    {
    };
    // Synchronization error masked interrupt status
    struct ERR_MIS : RegisterField<MIS, 2, 1, ReadMode>
    {
    };
    // Overrun masked interrupt status
    struct OVR_MIS : RegisterField<MIS, 1, 1, ReadMode>
    {
    };
    // Capture complete masked interrupt status
    struct FRAME_MIS : RegisterField<MIS, 0, 1, ReadMode>
    {
    };
  };

  // interrupt clear register
  struct ICR : Register<0x50050014, WriteMode, 0x0>
  {
    // line interrupt status clear
    struct LINE_ISC : RegisterField<ICR, 4, 1, WriteMode>
    {
    };
    // Vertical synch interrupt status clear
    struct VSYNC_ISC : RegisterField<ICR, 3, 1, WriteMode>
    {
    };
    // Synchronization error interrupt status clear
    struct ERR_ISC : RegisterField<ICR, 2, 1, WriteMode>
    {
    };
    // Overrun interrupt status clear
    struct OVR_ISC : RegisterField<ICR, 1, 1, WriteMode>
    {
    };
    // Capture complete interrupt status clear
    struct FRAME_ISC : RegisterField<ICR, 0, 1, WriteMode>
    {
    };
  };

  // embedded synchronization code register
  struct ESCR : Register<0x50050018, ReadWriteMode, 0x0>
  {
    // Frame end delimiter code
    struct FEC : RegisterField<ESCR, 24, 8, ReadWriteMode>
    {
    };
    // Line end delimiter code
    struct LEC : RegisterField<ESCR, 16, 8, ReadWriteMode>
    {
    };
    // Line start delimiter code
    struct LSC : RegisterField<ESCR, 8, 8, ReadWriteMode>
    {
    };
    // Frame start delimiter code
    struct FSC : RegisterField<ESCR, 0, 8, ReadWriteMode>
    {
    };
  };

  // embedded synchronization unmask register
  struct ESUR : Register<0x5005001c, ReadWriteMode, 0x0>
  {
    // Frame end delimiter unmask
    struct FEU : RegisterField<ESUR, 24, 8, ReadWriteMode>
    {
    };
    // Line end delimiter unmask
    struct LEU : RegisterField<ESUR, 16, 8, ReadWriteMode>
    {
    };
    // Line start delimiter unmask
    struct LSU : RegisterField<ESUR, 8, 8, ReadWriteMode>
    {
    };
    // Frame start delimiter unmask
    struct FSU : RegisterField<ESUR, 0, 8, ReadWriteMode>
    {
    };
  };

  // crop window start
  struct CWSTRT : Register<0x50050020, ReadWriteMode, 0x0>
  {
    // Vertical start line count
    struct VST : RegisterField<CWSTRT, 16, 13, ReadWriteMode>
    {
    };
    // Horizontal offset count
    struct HOFFCNT : RegisterField<CWSTRT, 0, 14, ReadWriteMode>
    {
    };
  };

  // crop window size
  struct CWSIZE : Register<0x50050024, ReadWriteMode, 0x0>
  {
    // Vertical line count
    struct VLINE : RegisterField<CWSIZE, 16, 14, ReadWriteMode>
    {
    };
    // Capture count
    struct CAPCNT : RegisterField<CWSIZE, 0, 14, ReadWriteMode>
    {
    };
  };

  // data register
  struct DR : Register<0x50050028, ReadMode, 0x0>
  {
    // Data byte 3
    struct Byte3 : RegisterField<DR, 24, 8, ReadMode>
    {
    };
    // Data byte 2
    struct Byte2 : RegisterField<DR, 16, 8, ReadMode>
    {
    };
    // Data byte 1
    struct Byte1 : RegisterField<DR, 8, 8, ReadMode>
    {
    };
    // Data byte 0
    struct Byte0 : RegisterField<DR, 0, 8, ReadMode>
    {
    };
  };

// Large Registers

};


