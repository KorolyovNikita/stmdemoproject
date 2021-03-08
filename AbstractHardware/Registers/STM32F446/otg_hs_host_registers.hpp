/******************************************************************************
* Filename : otg_hs_host_registers.hpp
*
* Details  : USB on the go high speed
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct OTG_HS_HOST
{
  // OTG_HS host configuration register
  struct OTG_HS_HCFG : Register<0x40040400, ReadWriteMode, 0x0>
  {
    // FS- and LS-only support
    struct FSLSS : RegisterField<OTG_HS_HCFG, 2, 1, ReadMode>
    {
    };
    // FS/LS PHY clock select
    struct FSLSPCS : RegisterField<OTG_HS_HCFG, 0, 2, ReadWriteMode>
    {
    };
  };

  // OTG_HS Host frame interval register
  struct OTG_HS_HFIR : Register<0x40040404, ReadWriteMode, 0xea60>
  {
    // Frame interval
    struct FRIVL : RegisterField<OTG_HS_HFIR, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_HS host frame number/frame time remaining register
  struct OTG_HS_HFNUM : Register<0x40040408, ReadMode, 0x3fff>
  {
    // Frame time remaining
    struct FTREM : RegisterField<OTG_HS_HFNUM, 16, 16, ReadMode>
    {
    };
    // Frame number
    struct FRNUM : RegisterField<OTG_HS_HFNUM, 0, 16, ReadMode>
    {
    };
  };

  // OTG_HS_Host periodic transmit FIFO/queue status register
  struct OTG_HS_HPTXSTS : Register<0x40040410, ReadWriteMode, 0x80100>
  {
    // Top of the periodic transmit request queue
    struct PTXQTOP : RegisterField<OTG_HS_HPTXSTS, 24, 8, ReadMode>
    {
    };
    // Periodic transmit request queue space available
    struct PTXQSAV : RegisterField<OTG_HS_HPTXSTS, 16, 8, ReadMode>
    {
    };
    // Periodic transmit data FIFO space available
    struct PTXFSAVL : RegisterField<OTG_HS_HPTXSTS, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_HS Host all channels interrupt register
  struct OTG_HS_HAINT : Register<0x40040414, ReadMode, 0x0>
  {
    // Channel interrupts
    struct HAINT : RegisterField<OTG_HS_HAINT, 0, 16, ReadMode>
    {
    };
  };

  // OTG_HS host all channels interrupt mask register
  struct OTG_HS_HAINTMSK : Register<0x40040418, ReadWriteMode, 0x0>
  {
    // Channel interrupt mask
    struct HAINTM : RegisterField<OTG_HS_HAINTMSK, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_HS host port control and status register
  struct OTG_HS_HPRT : Register<0x40040440, ReadWriteMode, 0x0>
  {
    // Port speed
    struct PSPD : RegisterField<OTG_HS_HPRT, 17, 2, ReadMode>
    {
    };
    // Port test control
    struct PTCTL : RegisterField<OTG_HS_HPRT, 13, 4, ReadWriteMode>
    {
    };
    // Port power
    struct PPWR : RegisterField<OTG_HS_HPRT, 12, 1, ReadWriteMode>
    {
    };
    // Port line status
    struct PLSTS : RegisterField<OTG_HS_HPRT, 10, 2, ReadMode>
    {
    };
    // Port reset
    struct PRST : RegisterField<OTG_HS_HPRT, 8, 1, ReadWriteMode>
    {
    };
    // Port suspend
    struct PSUSP : RegisterField<OTG_HS_HPRT, 7, 1, ReadWriteMode>
    {
    };
    // Port resume
    struct PRES : RegisterField<OTG_HS_HPRT, 6, 1, ReadWriteMode>
    {
    };
    // Port overcurrent change
    struct POCCHNG : RegisterField<OTG_HS_HPRT, 5, 1, ReadWriteMode>
    {
    };
    // Port overcurrent active
    struct POCA : RegisterField<OTG_HS_HPRT, 4, 1, ReadMode>
    {
    };
    // Port enable/disable change
    struct PENCHNG : RegisterField<OTG_HS_HPRT, 3, 1, ReadWriteMode>
    {
    };
    // Port enable
    struct PENA : RegisterField<OTG_HS_HPRT, 2, 1, ReadWriteMode>
    {
    };
    // Port connect detected
    struct PCDET : RegisterField<OTG_HS_HPRT, 1, 1, ReadWriteMode>
    {
    };
    // Port connect status
    struct PCSTS : RegisterField<OTG_HS_HPRT, 0, 1, ReadMode>
    {
    };
  };

  // OTG_HS host channel-0 characteristics register
  struct OTG_HS_HCCHAR0 : Register<0x40040500, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<OTG_HS_HCCHAR0, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<OTG_HS_HCCHAR0, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<OTG_HS_HCCHAR0, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<OTG_HS_HCCHAR0, 22, 7, ReadWriteMode>
    {
    };
    // Multi Count (MC) / Error Count (EC)
    struct MC : RegisterField<OTG_HS_HCCHAR0, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_HCCHAR0, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<OTG_HS_HCCHAR0, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<OTG_HS_HCCHAR0, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<OTG_HS_HCCHAR0, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_HCCHAR0, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-0 split control register
  struct OTG_HS_HCSPLT0 : Register<0x40040504, ReadWriteMode, 0x0>
  {
    // Split enable
    struct SPLITEN : RegisterField<OTG_HS_HCSPLT0, 31, 1, ReadWriteMode>
    {
    };
    // Do complete split
    struct COMPLSPLT : RegisterField<OTG_HS_HCSPLT0, 16, 1, ReadWriteMode>
    {
    };
    // XACTPOS
    struct XACTPOS : RegisterField<OTG_HS_HCSPLT0, 14, 2, ReadWriteMode>
    {
    };
    // Hub address
    struct HUBADDR : RegisterField<OTG_HS_HCSPLT0, 7, 7, ReadWriteMode>
    {
    };
    // Port address
    struct PRTADDR : RegisterField<OTG_HS_HCSPLT0, 0, 7, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-11 interrupt register
  struct OTG_HS_HCINT0 : Register<0x40040508, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<OTG_HS_HCINT0, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<OTG_HS_HCINT0, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<OTG_HS_HCINT0, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<OTG_HS_HCINT0, 7, 1, ReadWriteMode>
    {
    };
    // Response received interrupt
    struct NYET : RegisterField<OTG_HS_HCINT0, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<OTG_HS_HCINT0, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<OTG_HS_HCINT0, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<OTG_HS_HCINT0, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINT0, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<OTG_HS_HCINT0, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<OTG_HS_HCINT0, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-11 interrupt mask register
  struct OTG_HS_HCINTMSK0 : Register<0x4004050c, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<OTG_HS_HCINTMSK0, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<OTG_HS_HCINTMSK0, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<OTG_HS_HCINTMSK0, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<OTG_HS_HCINTMSK0, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<OTG_HS_HCINTMSK0, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<OTG_HS_HCINTMSK0, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<OTG_HS_HCINTMSK0, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<OTG_HS_HCINTMSK0, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINTMSK0, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<OTG_HS_HCINTMSK0, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<OTG_HS_HCINTMSK0, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-11 transfer size register
  struct OTG_HS_HCTSIZ0 : Register<0x40040510, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<OTG_HS_HCTSIZ0, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_HCTSIZ0, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_HCTSIZ0, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-0 DMA address register
  struct OTG_HS_HCDMA0 : Register<0x40040514, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_HCDMA0, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-1 characteristics register
  struct OTG_HS_HCCHAR1 : Register<0x40040520, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<OTG_HS_HCCHAR1, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<OTG_HS_HCCHAR1, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<OTG_HS_HCCHAR1, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<OTG_HS_HCCHAR1, 22, 7, ReadWriteMode>
    {
    };
    // Multi Count (MC) / Error Count (EC)
    struct MC : RegisterField<OTG_HS_HCCHAR1, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_HCCHAR1, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<OTG_HS_HCCHAR1, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<OTG_HS_HCCHAR1, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<OTG_HS_HCCHAR1, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_HCCHAR1, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-1 split control register
  struct OTG_HS_HCSPLT1 : Register<0x40040524, ReadWriteMode, 0x0>
  {
    // Split enable
    struct SPLITEN : RegisterField<OTG_HS_HCSPLT1, 31, 1, ReadWriteMode>
    {
    };
    // Do complete split
    struct COMPLSPLT : RegisterField<OTG_HS_HCSPLT1, 16, 1, ReadWriteMode>
    {
    };
    // XACTPOS
    struct XACTPOS : RegisterField<OTG_HS_HCSPLT1, 14, 2, ReadWriteMode>
    {
    };
    // Hub address
    struct HUBADDR : RegisterField<OTG_HS_HCSPLT1, 7, 7, ReadWriteMode>
    {
    };
    // Port address
    struct PRTADDR : RegisterField<OTG_HS_HCSPLT1, 0, 7, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-1 interrupt register
  struct OTG_HS_HCINT1 : Register<0x40040528, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<OTG_HS_HCINT1, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<OTG_HS_HCINT1, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<OTG_HS_HCINT1, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<OTG_HS_HCINT1, 7, 1, ReadWriteMode>
    {
    };
    // Response received interrupt
    struct NYET : RegisterField<OTG_HS_HCINT1, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<OTG_HS_HCINT1, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<OTG_HS_HCINT1, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<OTG_HS_HCINT1, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINT1, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<OTG_HS_HCINT1, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<OTG_HS_HCINT1, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-1 interrupt mask register
  struct OTG_HS_HCINTMSK1 : Register<0x4004052c, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<OTG_HS_HCINTMSK1, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<OTG_HS_HCINTMSK1, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<OTG_HS_HCINTMSK1, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<OTG_HS_HCINTMSK1, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<OTG_HS_HCINTMSK1, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<OTG_HS_HCINTMSK1, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<OTG_HS_HCINTMSK1, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<OTG_HS_HCINTMSK1, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINTMSK1, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<OTG_HS_HCINTMSK1, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<OTG_HS_HCINTMSK1, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-1 transfer size register
  struct OTG_HS_HCTSIZ1 : Register<0x40040530, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<OTG_HS_HCTSIZ1, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_HCTSIZ1, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_HCTSIZ1, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-1 DMA address register
  struct OTG_HS_HCDMA1 : Register<0x40040534, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_HCDMA1, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-2 characteristics register
  struct OTG_HS_HCCHAR2 : Register<0x40040540, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<OTG_HS_HCCHAR2, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<OTG_HS_HCCHAR2, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<OTG_HS_HCCHAR2, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<OTG_HS_HCCHAR2, 22, 7, ReadWriteMode>
    {
    };
    // Multi Count (MC) / Error Count (EC)
    struct MC : RegisterField<OTG_HS_HCCHAR2, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_HCCHAR2, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<OTG_HS_HCCHAR2, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<OTG_HS_HCCHAR2, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<OTG_HS_HCCHAR2, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_HCCHAR2, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-2 split control register
  struct OTG_HS_HCSPLT2 : Register<0x40040544, ReadWriteMode, 0x0>
  {
    // Split enable
    struct SPLITEN : RegisterField<OTG_HS_HCSPLT2, 31, 1, ReadWriteMode>
    {
    };
    // Do complete split
    struct COMPLSPLT : RegisterField<OTG_HS_HCSPLT2, 16, 1, ReadWriteMode>
    {
    };
    // XACTPOS
    struct XACTPOS : RegisterField<OTG_HS_HCSPLT2, 14, 2, ReadWriteMode>
    {
    };
    // Hub address
    struct HUBADDR : RegisterField<OTG_HS_HCSPLT2, 7, 7, ReadWriteMode>
    {
    };
    // Port address
    struct PRTADDR : RegisterField<OTG_HS_HCSPLT2, 0, 7, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-2 interrupt register
  struct OTG_HS_HCINT2 : Register<0x40040548, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<OTG_HS_HCINT2, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<OTG_HS_HCINT2, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<OTG_HS_HCINT2, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<OTG_HS_HCINT2, 7, 1, ReadWriteMode>
    {
    };
    // Response received interrupt
    struct NYET : RegisterField<OTG_HS_HCINT2, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<OTG_HS_HCINT2, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<OTG_HS_HCINT2, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<OTG_HS_HCINT2, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINT2, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<OTG_HS_HCINT2, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<OTG_HS_HCINT2, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-2 interrupt mask register
  struct OTG_HS_HCINTMSK2 : Register<0x4004054c, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<OTG_HS_HCINTMSK2, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<OTG_HS_HCINTMSK2, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<OTG_HS_HCINTMSK2, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<OTG_HS_HCINTMSK2, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<OTG_HS_HCINTMSK2, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<OTG_HS_HCINTMSK2, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<OTG_HS_HCINTMSK2, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<OTG_HS_HCINTMSK2, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINTMSK2, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<OTG_HS_HCINTMSK2, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<OTG_HS_HCINTMSK2, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-2 transfer size register
  struct OTG_HS_HCTSIZ2 : Register<0x40040550, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<OTG_HS_HCTSIZ2, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_HCTSIZ2, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_HCTSIZ2, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-2 DMA address register
  struct OTG_HS_HCDMA2 : Register<0x40040554, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_HCDMA2, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-3 characteristics register
  struct OTG_HS_HCCHAR3 : Register<0x40040560, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<OTG_HS_HCCHAR3, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<OTG_HS_HCCHAR3, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<OTG_HS_HCCHAR3, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<OTG_HS_HCCHAR3, 22, 7, ReadWriteMode>
    {
    };
    // Multi Count (MC) / Error Count (EC)
    struct MC : RegisterField<OTG_HS_HCCHAR3, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_HCCHAR3, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<OTG_HS_HCCHAR3, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<OTG_HS_HCCHAR3, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<OTG_HS_HCCHAR3, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_HCCHAR3, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-3 split control register
  struct OTG_HS_HCSPLT3 : Register<0x40040564, ReadWriteMode, 0x0>
  {
    // Split enable
    struct SPLITEN : RegisterField<OTG_HS_HCSPLT3, 31, 1, ReadWriteMode>
    {
    };
    // Do complete split
    struct COMPLSPLT : RegisterField<OTG_HS_HCSPLT3, 16, 1, ReadWriteMode>
    {
    };
    // XACTPOS
    struct XACTPOS : RegisterField<OTG_HS_HCSPLT3, 14, 2, ReadWriteMode>
    {
    };
    // Hub address
    struct HUBADDR : RegisterField<OTG_HS_HCSPLT3, 7, 7, ReadWriteMode>
    {
    };
    // Port address
    struct PRTADDR : RegisterField<OTG_HS_HCSPLT3, 0, 7, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-3 interrupt register
  struct OTG_HS_HCINT3 : Register<0x40040568, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<OTG_HS_HCINT3, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<OTG_HS_HCINT3, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<OTG_HS_HCINT3, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<OTG_HS_HCINT3, 7, 1, ReadWriteMode>
    {
    };
    // Response received interrupt
    struct NYET : RegisterField<OTG_HS_HCINT3, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<OTG_HS_HCINT3, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<OTG_HS_HCINT3, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<OTG_HS_HCINT3, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINT3, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<OTG_HS_HCINT3, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<OTG_HS_HCINT3, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-3 interrupt mask register
  struct OTG_HS_HCINTMSK3 : Register<0x4004056c, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<OTG_HS_HCINTMSK3, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<OTG_HS_HCINTMSK3, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<OTG_HS_HCINTMSK3, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<OTG_HS_HCINTMSK3, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<OTG_HS_HCINTMSK3, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<OTG_HS_HCINTMSK3, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<OTG_HS_HCINTMSK3, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<OTG_HS_HCINTMSK3, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINTMSK3, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<OTG_HS_HCINTMSK3, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<OTG_HS_HCINTMSK3, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-3 transfer size register
  struct OTG_HS_HCTSIZ3 : Register<0x40040570, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<OTG_HS_HCTSIZ3, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_HCTSIZ3, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_HCTSIZ3, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-3 DMA address register
  struct OTG_HS_HCDMA3 : Register<0x40040574, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_HCDMA3, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-4 characteristics register
  struct OTG_HS_HCCHAR4 : Register<0x40040580, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<OTG_HS_HCCHAR4, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<OTG_HS_HCCHAR4, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<OTG_HS_HCCHAR4, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<OTG_HS_HCCHAR4, 22, 7, ReadWriteMode>
    {
    };
    // Multi Count (MC) / Error Count (EC)
    struct MC : RegisterField<OTG_HS_HCCHAR4, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_HCCHAR4, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<OTG_HS_HCCHAR4, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<OTG_HS_HCCHAR4, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<OTG_HS_HCCHAR4, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_HCCHAR4, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-4 split control register
  struct OTG_HS_HCSPLT4 : Register<0x40040584, ReadWriteMode, 0x0>
  {
    // Split enable
    struct SPLITEN : RegisterField<OTG_HS_HCSPLT4, 31, 1, ReadWriteMode>
    {
    };
    // Do complete split
    struct COMPLSPLT : RegisterField<OTG_HS_HCSPLT4, 16, 1, ReadWriteMode>
    {
    };
    // XACTPOS
    struct XACTPOS : RegisterField<OTG_HS_HCSPLT4, 14, 2, ReadWriteMode>
    {
    };
    // Hub address
    struct HUBADDR : RegisterField<OTG_HS_HCSPLT4, 7, 7, ReadWriteMode>
    {
    };
    // Port address
    struct PRTADDR : RegisterField<OTG_HS_HCSPLT4, 0, 7, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-4 interrupt register
  struct OTG_HS_HCINT4 : Register<0x40040588, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<OTG_HS_HCINT4, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<OTG_HS_HCINT4, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<OTG_HS_HCINT4, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<OTG_HS_HCINT4, 7, 1, ReadWriteMode>
    {
    };
    // Response received interrupt
    struct NYET : RegisterField<OTG_HS_HCINT4, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<OTG_HS_HCINT4, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<OTG_HS_HCINT4, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<OTG_HS_HCINT4, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINT4, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<OTG_HS_HCINT4, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<OTG_HS_HCINT4, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-4 interrupt mask register
  struct OTG_HS_HCINTMSK4 : Register<0x4004058c, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<OTG_HS_HCINTMSK4, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<OTG_HS_HCINTMSK4, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<OTG_HS_HCINTMSK4, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<OTG_HS_HCINTMSK4, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<OTG_HS_HCINTMSK4, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<OTG_HS_HCINTMSK4, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<OTG_HS_HCINTMSK4, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<OTG_HS_HCINTMSK4, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINTMSK4, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<OTG_HS_HCINTMSK4, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<OTG_HS_HCINTMSK4, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-4 transfer size register
  struct OTG_HS_HCTSIZ4 : Register<0x40040590, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<OTG_HS_HCTSIZ4, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_HCTSIZ4, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_HCTSIZ4, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-4 DMA address register
  struct OTG_HS_HCDMA4 : Register<0x40040594, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_HCDMA4, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-5 characteristics register
  struct OTG_HS_HCCHAR5 : Register<0x400405a0, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<OTG_HS_HCCHAR5, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<OTG_HS_HCCHAR5, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<OTG_HS_HCCHAR5, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<OTG_HS_HCCHAR5, 22, 7, ReadWriteMode>
    {
    };
    // Multi Count (MC) / Error Count (EC)
    struct MC : RegisterField<OTG_HS_HCCHAR5, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_HCCHAR5, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<OTG_HS_HCCHAR5, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<OTG_HS_HCCHAR5, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<OTG_HS_HCCHAR5, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_HCCHAR5, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-5 split control register
  struct OTG_HS_HCSPLT5 : Register<0x400405a4, ReadWriteMode, 0x0>
  {
    // Split enable
    struct SPLITEN : RegisterField<OTG_HS_HCSPLT5, 31, 1, ReadWriteMode>
    {
    };
    // Do complete split
    struct COMPLSPLT : RegisterField<OTG_HS_HCSPLT5, 16, 1, ReadWriteMode>
    {
    };
    // XACTPOS
    struct XACTPOS : RegisterField<OTG_HS_HCSPLT5, 14, 2, ReadWriteMode>
    {
    };
    // Hub address
    struct HUBADDR : RegisterField<OTG_HS_HCSPLT5, 7, 7, ReadWriteMode>
    {
    };
    // Port address
    struct PRTADDR : RegisterField<OTG_HS_HCSPLT5, 0, 7, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-5 interrupt register
  struct OTG_HS_HCINT5 : Register<0x400405a8, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<OTG_HS_HCINT5, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<OTG_HS_HCINT5, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<OTG_HS_HCINT5, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<OTG_HS_HCINT5, 7, 1, ReadWriteMode>
    {
    };
    // Response received interrupt
    struct NYET : RegisterField<OTG_HS_HCINT5, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<OTG_HS_HCINT5, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<OTG_HS_HCINT5, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<OTG_HS_HCINT5, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINT5, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<OTG_HS_HCINT5, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<OTG_HS_HCINT5, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-5 interrupt mask register
  struct OTG_HS_HCINTMSK5 : Register<0x400405ac, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<OTG_HS_HCINTMSK5, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<OTG_HS_HCINTMSK5, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<OTG_HS_HCINTMSK5, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<OTG_HS_HCINTMSK5, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<OTG_HS_HCINTMSK5, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<OTG_HS_HCINTMSK5, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<OTG_HS_HCINTMSK5, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<OTG_HS_HCINTMSK5, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINTMSK5, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<OTG_HS_HCINTMSK5, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<OTG_HS_HCINTMSK5, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-5 transfer size register
  struct OTG_HS_HCTSIZ5 : Register<0x400405b0, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<OTG_HS_HCTSIZ5, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_HCTSIZ5, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_HCTSIZ5, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-5 DMA address register
  struct OTG_HS_HCDMA5 : Register<0x400405b4, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_HCDMA5, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-6 characteristics register
  struct OTG_HS_HCCHAR6 : Register<0x400405c0, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<OTG_HS_HCCHAR6, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<OTG_HS_HCCHAR6, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<OTG_HS_HCCHAR6, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<OTG_HS_HCCHAR6, 22, 7, ReadWriteMode>
    {
    };
    // Multi Count (MC) / Error Count (EC)
    struct MC : RegisterField<OTG_HS_HCCHAR6, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_HCCHAR6, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<OTG_HS_HCCHAR6, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<OTG_HS_HCCHAR6, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<OTG_HS_HCCHAR6, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_HCCHAR6, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-6 split control register
  struct OTG_HS_HCSPLT6 : Register<0x400405c4, ReadWriteMode, 0x0>
  {
    // Split enable
    struct SPLITEN : RegisterField<OTG_HS_HCSPLT6, 31, 1, ReadWriteMode>
    {
    };
    // Do complete split
    struct COMPLSPLT : RegisterField<OTG_HS_HCSPLT6, 16, 1, ReadWriteMode>
    {
    };
    // XACTPOS
    struct XACTPOS : RegisterField<OTG_HS_HCSPLT6, 14, 2, ReadWriteMode>
    {
    };
    // Hub address
    struct HUBADDR : RegisterField<OTG_HS_HCSPLT6, 7, 7, ReadWriteMode>
    {
    };
    // Port address
    struct PRTADDR : RegisterField<OTG_HS_HCSPLT6, 0, 7, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-6 interrupt register
  struct OTG_HS_HCINT6 : Register<0x400405c8, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<OTG_HS_HCINT6, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<OTG_HS_HCINT6, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<OTG_HS_HCINT6, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<OTG_HS_HCINT6, 7, 1, ReadWriteMode>
    {
    };
    // Response received interrupt
    struct NYET : RegisterField<OTG_HS_HCINT6, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<OTG_HS_HCINT6, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<OTG_HS_HCINT6, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<OTG_HS_HCINT6, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINT6, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<OTG_HS_HCINT6, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<OTG_HS_HCINT6, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-6 interrupt mask register
  struct OTG_HS_HCINTMSK6 : Register<0x400405cc, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<OTG_HS_HCINTMSK6, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<OTG_HS_HCINTMSK6, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<OTG_HS_HCINTMSK6, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<OTG_HS_HCINTMSK6, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<OTG_HS_HCINTMSK6, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<OTG_HS_HCINTMSK6, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<OTG_HS_HCINTMSK6, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<OTG_HS_HCINTMSK6, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINTMSK6, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<OTG_HS_HCINTMSK6, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<OTG_HS_HCINTMSK6, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-6 transfer size register
  struct OTG_HS_HCTSIZ6 : Register<0x400405d0, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<OTG_HS_HCTSIZ6, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_HCTSIZ6, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_HCTSIZ6, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-6 DMA address register
  struct OTG_HS_HCDMA6 : Register<0x400405d4, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_HCDMA6, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-7 characteristics register
  struct OTG_HS_HCCHAR7 : Register<0x400405e0, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<OTG_HS_HCCHAR7, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<OTG_HS_HCCHAR7, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<OTG_HS_HCCHAR7, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<OTG_HS_HCCHAR7, 22, 7, ReadWriteMode>
    {
    };
    // Multi Count (MC) / Error Count (EC)
    struct MC : RegisterField<OTG_HS_HCCHAR7, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_HCCHAR7, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<OTG_HS_HCCHAR7, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<OTG_HS_HCCHAR7, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<OTG_HS_HCCHAR7, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_HCCHAR7, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-7 split control register
  struct OTG_HS_HCSPLT7 : Register<0x400405e4, ReadWriteMode, 0x0>
  {
    // Split enable
    struct SPLITEN : RegisterField<OTG_HS_HCSPLT7, 31, 1, ReadWriteMode>
    {
    };
    // Do complete split
    struct COMPLSPLT : RegisterField<OTG_HS_HCSPLT7, 16, 1, ReadWriteMode>
    {
    };
    // XACTPOS
    struct XACTPOS : RegisterField<OTG_HS_HCSPLT7, 14, 2, ReadWriteMode>
    {
    };
    // Hub address
    struct HUBADDR : RegisterField<OTG_HS_HCSPLT7, 7, 7, ReadWriteMode>
    {
    };
    // Port address
    struct PRTADDR : RegisterField<OTG_HS_HCSPLT7, 0, 7, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-7 interrupt register
  struct OTG_HS_HCINT7 : Register<0x400405e8, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<OTG_HS_HCINT7, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<OTG_HS_HCINT7, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<OTG_HS_HCINT7, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<OTG_HS_HCINT7, 7, 1, ReadWriteMode>
    {
    };
    // Response received interrupt
    struct NYET : RegisterField<OTG_HS_HCINT7, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<OTG_HS_HCINT7, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<OTG_HS_HCINT7, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<OTG_HS_HCINT7, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINT7, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<OTG_HS_HCINT7, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<OTG_HS_HCINT7, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-7 interrupt mask register
  struct OTG_HS_HCINTMSK7 : Register<0x400405ec, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<OTG_HS_HCINTMSK7, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<OTG_HS_HCINTMSK7, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<OTG_HS_HCINTMSK7, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<OTG_HS_HCINTMSK7, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<OTG_HS_HCINTMSK7, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<OTG_HS_HCINTMSK7, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<OTG_HS_HCINTMSK7, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<OTG_HS_HCINTMSK7, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINTMSK7, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<OTG_HS_HCINTMSK7, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<OTG_HS_HCINTMSK7, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-7 transfer size register
  struct OTG_HS_HCTSIZ7 : Register<0x400405f0, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<OTG_HS_HCTSIZ7, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_HCTSIZ7, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_HCTSIZ7, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-7 DMA address register
  struct OTG_HS_HCDMA7 : Register<0x400405f4, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_HCDMA7, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-8 characteristics register
  struct OTG_HS_HCCHAR8 : Register<0x40040600, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<OTG_HS_HCCHAR8, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<OTG_HS_HCCHAR8, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<OTG_HS_HCCHAR8, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<OTG_HS_HCCHAR8, 22, 7, ReadWriteMode>
    {
    };
    // Multi Count (MC) / Error Count (EC)
    struct MC : RegisterField<OTG_HS_HCCHAR8, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_HCCHAR8, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<OTG_HS_HCCHAR8, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<OTG_HS_HCCHAR8, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<OTG_HS_HCCHAR8, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_HCCHAR8, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-8 split control register
  struct OTG_HS_HCSPLT8 : Register<0x40040604, ReadWriteMode, 0x0>
  {
    // Split enable
    struct SPLITEN : RegisterField<OTG_HS_HCSPLT8, 31, 1, ReadWriteMode>
    {
    };
    // Do complete split
    struct COMPLSPLT : RegisterField<OTG_HS_HCSPLT8, 16, 1, ReadWriteMode>
    {
    };
    // XACTPOS
    struct XACTPOS : RegisterField<OTG_HS_HCSPLT8, 14, 2, ReadWriteMode>
    {
    };
    // Hub address
    struct HUBADDR : RegisterField<OTG_HS_HCSPLT8, 7, 7, ReadWriteMode>
    {
    };
    // Port address
    struct PRTADDR : RegisterField<OTG_HS_HCSPLT8, 0, 7, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-8 interrupt register
  struct OTG_HS_HCINT8 : Register<0x40040608, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<OTG_HS_HCINT8, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<OTG_HS_HCINT8, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<OTG_HS_HCINT8, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<OTG_HS_HCINT8, 7, 1, ReadWriteMode>
    {
    };
    // Response received interrupt
    struct NYET : RegisterField<OTG_HS_HCINT8, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<OTG_HS_HCINT8, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<OTG_HS_HCINT8, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<OTG_HS_HCINT8, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINT8, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<OTG_HS_HCINT8, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<OTG_HS_HCINT8, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-8 interrupt mask register
  struct OTG_HS_HCINTMSK8 : Register<0x4004060c, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<OTG_HS_HCINTMSK8, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<OTG_HS_HCINTMSK8, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<OTG_HS_HCINTMSK8, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<OTG_HS_HCINTMSK8, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<OTG_HS_HCINTMSK8, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<OTG_HS_HCINTMSK8, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<OTG_HS_HCINTMSK8, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<OTG_HS_HCINTMSK8, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINTMSK8, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<OTG_HS_HCINTMSK8, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<OTG_HS_HCINTMSK8, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-8 transfer size register
  struct OTG_HS_HCTSIZ8 : Register<0x40040610, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<OTG_HS_HCTSIZ8, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_HCTSIZ8, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_HCTSIZ8, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-8 DMA address register
  struct OTG_HS_HCDMA8 : Register<0x40040614, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_HCDMA8, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-9 characteristics register
  struct OTG_HS_HCCHAR9 : Register<0x40040620, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<OTG_HS_HCCHAR9, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<OTG_HS_HCCHAR9, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<OTG_HS_HCCHAR9, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<OTG_HS_HCCHAR9, 22, 7, ReadWriteMode>
    {
    };
    // Multi Count (MC) / Error Count (EC)
    struct MC : RegisterField<OTG_HS_HCCHAR9, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_HCCHAR9, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<OTG_HS_HCCHAR9, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<OTG_HS_HCCHAR9, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<OTG_HS_HCCHAR9, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_HCCHAR9, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-9 split control register
  struct OTG_HS_HCSPLT9 : Register<0x40040624, ReadWriteMode, 0x0>
  {
    // Split enable
    struct SPLITEN : RegisterField<OTG_HS_HCSPLT9, 31, 1, ReadWriteMode>
    {
    };
    // Do complete split
    struct COMPLSPLT : RegisterField<OTG_HS_HCSPLT9, 16, 1, ReadWriteMode>
    {
    };
    // XACTPOS
    struct XACTPOS : RegisterField<OTG_HS_HCSPLT9, 14, 2, ReadWriteMode>
    {
    };
    // Hub address
    struct HUBADDR : RegisterField<OTG_HS_HCSPLT9, 7, 7, ReadWriteMode>
    {
    };
    // Port address
    struct PRTADDR : RegisterField<OTG_HS_HCSPLT9, 0, 7, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-9 interrupt register
  struct OTG_HS_HCINT9 : Register<0x40040628, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<OTG_HS_HCINT9, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<OTG_HS_HCINT9, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<OTG_HS_HCINT9, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<OTG_HS_HCINT9, 7, 1, ReadWriteMode>
    {
    };
    // Response received interrupt
    struct NYET : RegisterField<OTG_HS_HCINT9, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<OTG_HS_HCINT9, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<OTG_HS_HCINT9, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<OTG_HS_HCINT9, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINT9, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<OTG_HS_HCINT9, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<OTG_HS_HCINT9, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-9 interrupt mask register
  struct OTG_HS_HCINTMSK9 : Register<0x4004062c, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<OTG_HS_HCINTMSK9, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<OTG_HS_HCINTMSK9, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<OTG_HS_HCINTMSK9, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<OTG_HS_HCINTMSK9, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<OTG_HS_HCINTMSK9, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<OTG_HS_HCINTMSK9, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<OTG_HS_HCINTMSK9, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<OTG_HS_HCINTMSK9, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINTMSK9, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<OTG_HS_HCINTMSK9, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<OTG_HS_HCINTMSK9, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-9 transfer size register
  struct OTG_HS_HCTSIZ9 : Register<0x40040630, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<OTG_HS_HCTSIZ9, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_HCTSIZ9, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_HCTSIZ9, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-9 DMA address register
  struct OTG_HS_HCDMA9 : Register<0x40040634, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_HCDMA9, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-10 characteristics register
  struct OTG_HS_HCCHAR10 : Register<0x40040640, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<OTG_HS_HCCHAR10, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<OTG_HS_HCCHAR10, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<OTG_HS_HCCHAR10, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<OTG_HS_HCCHAR10, 22, 7, ReadWriteMode>
    {
    };
    // Multi Count (MC) / Error Count (EC)
    struct MC : RegisterField<OTG_HS_HCCHAR10, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_HCCHAR10, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<OTG_HS_HCCHAR10, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<OTG_HS_HCCHAR10, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<OTG_HS_HCCHAR10, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_HCCHAR10, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-10 split control register
  struct OTG_HS_HCSPLT10 : Register<0x40040644, ReadWriteMode, 0x0>
  {
    // Split enable
    struct SPLITEN : RegisterField<OTG_HS_HCSPLT10, 31, 1, ReadWriteMode>
    {
    };
    // Do complete split
    struct COMPLSPLT : RegisterField<OTG_HS_HCSPLT10, 16, 1, ReadWriteMode>
    {
    };
    // XACTPOS
    struct XACTPOS : RegisterField<OTG_HS_HCSPLT10, 14, 2, ReadWriteMode>
    {
    };
    // Hub address
    struct HUBADDR : RegisterField<OTG_HS_HCSPLT10, 7, 7, ReadWriteMode>
    {
    };
    // Port address
    struct PRTADDR : RegisterField<OTG_HS_HCSPLT10, 0, 7, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-10 interrupt register
  struct OTG_HS_HCINT10 : Register<0x40040648, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<OTG_HS_HCINT10, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<OTG_HS_HCINT10, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<OTG_HS_HCINT10, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<OTG_HS_HCINT10, 7, 1, ReadWriteMode>
    {
    };
    // Response received interrupt
    struct NYET : RegisterField<OTG_HS_HCINT10, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<OTG_HS_HCINT10, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<OTG_HS_HCINT10, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<OTG_HS_HCINT10, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINT10, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<OTG_HS_HCINT10, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<OTG_HS_HCINT10, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-10 interrupt mask register
  struct OTG_HS_HCINTMSK10 : Register<0x4004064c, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<OTG_HS_HCINTMSK10, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<OTG_HS_HCINTMSK10, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<OTG_HS_HCINTMSK10, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<OTG_HS_HCINTMSK10, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<OTG_HS_HCINTMSK10, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<OTG_HS_HCINTMSK10, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<OTG_HS_HCINTMSK10, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<OTG_HS_HCINTMSK10, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINTMSK10, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<OTG_HS_HCINTMSK10, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<OTG_HS_HCINTMSK10, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-10 transfer size register
  struct OTG_HS_HCTSIZ10 : Register<0x40040650, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<OTG_HS_HCTSIZ10, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_HCTSIZ10, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_HCTSIZ10, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-10 DMA address register
  struct OTG_HS_HCDMA10 : Register<0x40040654, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_HCDMA10, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-11 characteristics register
  struct OTG_HS_HCCHAR11 : Register<0x40040660, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<OTG_HS_HCCHAR11, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<OTG_HS_HCCHAR11, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<OTG_HS_HCCHAR11, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<OTG_HS_HCCHAR11, 22, 7, ReadWriteMode>
    {
    };
    // Multi Count (MC) / Error Count (EC)
    struct MC : RegisterField<OTG_HS_HCCHAR11, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_HCCHAR11, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<OTG_HS_HCCHAR11, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<OTG_HS_HCCHAR11, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<OTG_HS_HCCHAR11, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_HCCHAR11, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-11 split control register
  struct OTG_HS_HCSPLT11 : Register<0x40040664, ReadWriteMode, 0x0>
  {
    // Split enable
    struct SPLITEN : RegisterField<OTG_HS_HCSPLT11, 31, 1, ReadWriteMode>
    {
    };
    // Do complete split
    struct COMPLSPLT : RegisterField<OTG_HS_HCSPLT11, 16, 1, ReadWriteMode>
    {
    };
    // XACTPOS
    struct XACTPOS : RegisterField<OTG_HS_HCSPLT11, 14, 2, ReadWriteMode>
    {
    };
    // Hub address
    struct HUBADDR : RegisterField<OTG_HS_HCSPLT11, 7, 7, ReadWriteMode>
    {
    };
    // Port address
    struct PRTADDR : RegisterField<OTG_HS_HCSPLT11, 0, 7, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-11 interrupt register
  struct OTG_HS_HCINT11 : Register<0x40040668, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<OTG_HS_HCINT11, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<OTG_HS_HCINT11, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<OTG_HS_HCINT11, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<OTG_HS_HCINT11, 7, 1, ReadWriteMode>
    {
    };
    // Response received interrupt
    struct NYET : RegisterField<OTG_HS_HCINT11, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<OTG_HS_HCINT11, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<OTG_HS_HCINT11, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<OTG_HS_HCINT11, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINT11, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<OTG_HS_HCINT11, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<OTG_HS_HCINT11, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-11 interrupt mask register
  struct OTG_HS_HCINTMSK11 : Register<0x4004066c, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<OTG_HS_HCINTMSK11, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<OTG_HS_HCINTMSK11, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<OTG_HS_HCINTMSK11, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<OTG_HS_HCINTMSK11, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<OTG_HS_HCINTMSK11, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<OTG_HS_HCINTMSK11, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<OTG_HS_HCINTMSK11, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<OTG_HS_HCINTMSK11, 3, 1, ReadWriteMode>
    {
    };
    // AHB error
    struct AHBERR : RegisterField<OTG_HS_HCINTMSK11, 2, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<OTG_HS_HCINTMSK11, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<OTG_HS_HCINTMSK11, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-11 transfer size register
  struct OTG_HS_HCTSIZ11 : Register<0x40040670, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<OTG_HS_HCTSIZ11, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_HCTSIZ11, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_HCTSIZ11, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS host channel-11 DMA address register
  struct OTG_HS_HCDMA11 : Register<0x40040674, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_HCDMA11, 0, 32, ReadWriteMode>
    {
    };
  };

// Large Registers

};


