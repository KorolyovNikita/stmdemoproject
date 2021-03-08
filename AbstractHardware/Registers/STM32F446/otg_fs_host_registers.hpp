/******************************************************************************
* Filename : otg_fs_host_registers.hpp
*
* Details  : USB on the go full speed
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct OTG_FS_HOST
{
  // OTG_FS host configuration register (OTG_FS_HCFG)
  struct FS_HCFG : Register<0x50000400, ReadWriteMode, 0x0>
  {
    // FS- and LS-only support
    struct FSLSS : RegisterField<FS_HCFG, 2, 1, ReadMode>
    {
    };
    // FS/LS PHY clock select
    struct FSLSPCS : RegisterField<FS_HCFG, 0, 2, ReadWriteMode>
    {
    };
  };

  // OTG_FS Host frame interval register
  struct HFIR : Register<0x50000404, ReadWriteMode, 0xea60>
  {
    // Frame interval
    struct FRIVL : RegisterField<HFIR, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_FS host frame number/frame time remaining register (OTG_FS_HFNUM)
  struct FS_HFNUM : Register<0x50000408, ReadMode, 0x3fff>
  {
    // Frame time remaining
    struct FTREM : RegisterField<FS_HFNUM, 16, 16, ReadMode>
    {
    };
    // Frame number
    struct FRNUM : RegisterField<FS_HFNUM, 0, 16, ReadMode>
    {
    };
  };

  // OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS)
  struct FS_HPTXSTS : Register<0x50000410, ReadWriteMode, 0x80100>
  {
    // Top of the periodic transmit request queue
    struct PTXQTOP : RegisterField<FS_HPTXSTS, 24, 8, ReadMode>
    {
    };
    // Periodic transmit request queue space available
    struct PTXQSAV : RegisterField<FS_HPTXSTS, 16, 8, ReadMode>
    {
    };
    // Periodic transmit data FIFO space available
    struct PTXFSAVL : RegisterField<FS_HPTXSTS, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_FS Host all channels interrupt register
  struct HAINT : Register<0x50000414, ReadMode, 0x0>
  {
    // Channel interrupts
    struct _HAINT : RegisterField<HAINT, 0, 16, ReadMode>
    {
    };
  };

  // OTG_FS host all channels interrupt mask register
  struct HAINTMSK : Register<0x50000418, ReadWriteMode, 0x0>
  {
    // Channel interrupt mask
    struct HAINTM : RegisterField<HAINTMSK, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_FS host port control and status register (OTG_FS_HPRT)
  struct FS_HPRT : Register<0x50000440, ReadWriteMode, 0x0>
  {
    // Port speed
    struct PSPD : RegisterField<FS_HPRT, 17, 2, ReadMode>
    {
    };
    // Port test control
    struct PTCTL : RegisterField<FS_HPRT, 13, 4, ReadWriteMode>
    {
    };
    // Port power
    struct PPWR : RegisterField<FS_HPRT, 12, 1, ReadWriteMode>
    {
    };
    // Port line status
    struct PLSTS : RegisterField<FS_HPRT, 10, 2, ReadMode>
    {
    };
    // Port reset
    struct PRST : RegisterField<FS_HPRT, 8, 1, ReadWriteMode>
    {
    };
    // Port suspend
    struct PSUSP : RegisterField<FS_HPRT, 7, 1, ReadWriteMode>
    {
    };
    // Port resume
    struct PRES : RegisterField<FS_HPRT, 6, 1, ReadWriteMode>
    {
    };
    // Port overcurrent change
    struct POCCHNG : RegisterField<FS_HPRT, 5, 1, ReadWriteMode>
    {
    };
    // Port overcurrent active
    struct POCA : RegisterField<FS_HPRT, 4, 1, ReadMode>
    {
    };
    // Port enable/disable change
    struct PENCHNG : RegisterField<FS_HPRT, 3, 1, ReadWriteMode>
    {
    };
    // Port enable
    struct PENA : RegisterField<FS_HPRT, 2, 1, ReadWriteMode>
    {
    };
    // Port connect detected
    struct PCDET : RegisterField<FS_HPRT, 1, 1, ReadWriteMode>
    {
    };
    // Port connect status
    struct PCSTS : RegisterField<FS_HPRT, 0, 1, ReadMode>
    {
    };
  };

  // OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0)
  struct FS_HCCHAR0 : Register<0x50000500, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<FS_HCCHAR0, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<FS_HCCHAR0, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<FS_HCCHAR0, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<FS_HCCHAR0, 22, 7, ReadWriteMode>
    {
    };
    // Multicount
    struct MCNT : RegisterField<FS_HCCHAR0, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<FS_HCCHAR0, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<FS_HCCHAR0, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<FS_HCCHAR0, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<FS_HCCHAR0, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<FS_HCCHAR0, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0)
  struct FS_HCINT0 : Register<0x50000508, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<FS_HCINT0, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<FS_HCINT0, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<FS_HCINT0, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<FS_HCINT0, 7, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<FS_HCINT0, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<FS_HCINT0, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<FS_HCINT0, 3, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<FS_HCINT0, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<FS_HCINT0, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0)
  struct FS_HCINTMSK0 : Register<0x5000050c, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<FS_HCINTMSK0, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<FS_HCINTMSK0, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<FS_HCINTMSK0, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<FS_HCINTMSK0, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<FS_HCINTMSK0, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<FS_HCINTMSK0, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<FS_HCINTMSK0, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<FS_HCINTMSK0, 3, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<FS_HCINTMSK0, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<FS_HCINTMSK0, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-0 transfer size register
  struct FS_HCTSIZ0 : Register<0x50000510, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<FS_HCTSIZ0, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<FS_HCTSIZ0, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<FS_HCTSIZ0, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1)
  struct FS_HCCHAR1 : Register<0x50000520, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<FS_HCCHAR1, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<FS_HCCHAR1, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<FS_HCCHAR1, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<FS_HCCHAR1, 22, 7, ReadWriteMode>
    {
    };
    // Multicount
    struct MCNT : RegisterField<FS_HCCHAR1, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<FS_HCCHAR1, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<FS_HCCHAR1, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<FS_HCCHAR1, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<FS_HCCHAR1, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<FS_HCCHAR1, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1)
  struct FS_HCINT1 : Register<0x50000528, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<FS_HCINT1, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<FS_HCINT1, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<FS_HCINT1, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<FS_HCINT1, 7, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<FS_HCINT1, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<FS_HCINT1, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<FS_HCINT1, 3, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<FS_HCINT1, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<FS_HCINT1, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1)
  struct FS_HCINTMSK1 : Register<0x5000052c, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<FS_HCINTMSK1, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<FS_HCINTMSK1, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<FS_HCINTMSK1, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<FS_HCINTMSK1, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<FS_HCINTMSK1, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<FS_HCINTMSK1, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<FS_HCINTMSK1, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<FS_HCINTMSK1, 3, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<FS_HCINTMSK1, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<FS_HCINTMSK1, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-1 transfer size register
  struct FS_HCTSIZ1 : Register<0x50000530, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<FS_HCTSIZ1, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<FS_HCTSIZ1, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<FS_HCTSIZ1, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2)
  struct FS_HCCHAR2 : Register<0x50000540, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<FS_HCCHAR2, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<FS_HCCHAR2, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<FS_HCCHAR2, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<FS_HCCHAR2, 22, 7, ReadWriteMode>
    {
    };
    // Multicount
    struct MCNT : RegisterField<FS_HCCHAR2, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<FS_HCCHAR2, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<FS_HCCHAR2, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<FS_HCCHAR2, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<FS_HCCHAR2, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<FS_HCCHAR2, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2)
  struct FS_HCINT2 : Register<0x50000548, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<FS_HCINT2, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<FS_HCINT2, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<FS_HCINT2, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<FS_HCINT2, 7, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<FS_HCINT2, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<FS_HCINT2, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<FS_HCINT2, 3, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<FS_HCINT2, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<FS_HCINT2, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2)
  struct FS_HCINTMSK2 : Register<0x5000054c, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<FS_HCINTMSK2, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<FS_HCINTMSK2, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<FS_HCINTMSK2, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<FS_HCINTMSK2, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<FS_HCINTMSK2, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<FS_HCINTMSK2, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<FS_HCINTMSK2, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<FS_HCINTMSK2, 3, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<FS_HCINTMSK2, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<FS_HCINTMSK2, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-2 transfer size register
  struct FS_HCTSIZ2 : Register<0x50000550, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<FS_HCTSIZ2, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<FS_HCTSIZ2, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<FS_HCTSIZ2, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3)
  struct FS_HCCHAR3 : Register<0x50000560, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<FS_HCCHAR3, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<FS_HCCHAR3, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<FS_HCCHAR3, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<FS_HCCHAR3, 22, 7, ReadWriteMode>
    {
    };
    // Multicount
    struct MCNT : RegisterField<FS_HCCHAR3, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<FS_HCCHAR3, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<FS_HCCHAR3, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<FS_HCCHAR3, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<FS_HCCHAR3, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<FS_HCCHAR3, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3)
  struct FS_HCINT3 : Register<0x50000568, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<FS_HCINT3, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<FS_HCINT3, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<FS_HCINT3, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<FS_HCINT3, 7, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<FS_HCINT3, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<FS_HCINT3, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<FS_HCINT3, 3, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<FS_HCINT3, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<FS_HCINT3, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3)
  struct FS_HCINTMSK3 : Register<0x5000056c, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<FS_HCINTMSK3, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<FS_HCINTMSK3, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<FS_HCINTMSK3, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<FS_HCINTMSK3, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<FS_HCINTMSK3, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<FS_HCINTMSK3, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<FS_HCINTMSK3, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<FS_HCINTMSK3, 3, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<FS_HCINTMSK3, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<FS_HCINTMSK3, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-3 transfer size register
  struct FS_HCTSIZ3 : Register<0x50000570, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<FS_HCTSIZ3, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<FS_HCTSIZ3, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<FS_HCTSIZ3, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4)
  struct FS_HCCHAR4 : Register<0x50000580, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<FS_HCCHAR4, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<FS_HCCHAR4, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<FS_HCCHAR4, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<FS_HCCHAR4, 22, 7, ReadWriteMode>
    {
    };
    // Multicount
    struct MCNT : RegisterField<FS_HCCHAR4, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<FS_HCCHAR4, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<FS_HCCHAR4, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<FS_HCCHAR4, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<FS_HCCHAR4, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<FS_HCCHAR4, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4)
  struct FS_HCINT4 : Register<0x50000588, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<FS_HCINT4, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<FS_HCINT4, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<FS_HCINT4, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<FS_HCINT4, 7, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<FS_HCINT4, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<FS_HCINT4, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<FS_HCINT4, 3, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<FS_HCINT4, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<FS_HCINT4, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4)
  struct FS_HCINTMSK4 : Register<0x5000058c, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<FS_HCINTMSK4, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<FS_HCINTMSK4, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<FS_HCINTMSK4, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<FS_HCINTMSK4, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<FS_HCINTMSK4, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<FS_HCINTMSK4, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<FS_HCINTMSK4, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<FS_HCINTMSK4, 3, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<FS_HCINTMSK4, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<FS_HCINTMSK4, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-x transfer size register
  struct FS_HCTSIZ4 : Register<0x50000590, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<FS_HCTSIZ4, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<FS_HCTSIZ4, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<FS_HCTSIZ4, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5)
  struct FS_HCCHAR5 : Register<0x500005a0, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<FS_HCCHAR5, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<FS_HCCHAR5, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<FS_HCCHAR5, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<FS_HCCHAR5, 22, 7, ReadWriteMode>
    {
    };
    // Multicount
    struct MCNT : RegisterField<FS_HCCHAR5, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<FS_HCCHAR5, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<FS_HCCHAR5, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<FS_HCCHAR5, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<FS_HCCHAR5, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<FS_HCCHAR5, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5)
  struct FS_HCINT5 : Register<0x500005a8, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<FS_HCINT5, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<FS_HCINT5, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<FS_HCINT5, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<FS_HCINT5, 7, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<FS_HCINT5, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<FS_HCINT5, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<FS_HCINT5, 3, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<FS_HCINT5, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<FS_HCINT5, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5)
  struct FS_HCINTMSK5 : Register<0x500005ac, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<FS_HCINTMSK5, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<FS_HCINTMSK5, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<FS_HCINTMSK5, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<FS_HCINTMSK5, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<FS_HCINTMSK5, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<FS_HCINTMSK5, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<FS_HCINTMSK5, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<FS_HCINTMSK5, 3, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<FS_HCINTMSK5, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<FS_HCINTMSK5, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-5 transfer size register
  struct FS_HCTSIZ5 : Register<0x500005b0, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<FS_HCTSIZ5, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<FS_HCTSIZ5, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<FS_HCTSIZ5, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6)
  struct FS_HCCHAR6 : Register<0x500005c0, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<FS_HCCHAR6, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<FS_HCCHAR6, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<FS_HCCHAR6, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<FS_HCCHAR6, 22, 7, ReadWriteMode>
    {
    };
    // Multicount
    struct MCNT : RegisterField<FS_HCCHAR6, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<FS_HCCHAR6, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<FS_HCCHAR6, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<FS_HCCHAR6, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<FS_HCCHAR6, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<FS_HCCHAR6, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6)
  struct FS_HCINT6 : Register<0x500005c8, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<FS_HCINT6, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<FS_HCINT6, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<FS_HCINT6, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<FS_HCINT6, 7, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<FS_HCINT6, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<FS_HCINT6, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<FS_HCINT6, 3, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<FS_HCINT6, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<FS_HCINT6, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6)
  struct FS_HCINTMSK6 : Register<0x500005cc, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<FS_HCINTMSK6, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<FS_HCINTMSK6, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<FS_HCINTMSK6, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<FS_HCINTMSK6, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<FS_HCINTMSK6, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<FS_HCINTMSK6, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<FS_HCINTMSK6, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<FS_HCINTMSK6, 3, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<FS_HCINTMSK6, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<FS_HCINTMSK6, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-6 transfer size register
  struct FS_HCTSIZ6 : Register<0x500005d0, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<FS_HCTSIZ6, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<FS_HCTSIZ6, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<FS_HCTSIZ6, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7)
  struct FS_HCCHAR7 : Register<0x500005e0, ReadWriteMode, 0x0>
  {
    // Channel enable
    struct CHENA : RegisterField<FS_HCCHAR7, 31, 1, ReadWriteMode>
    {
    };
    // Channel disable
    struct CHDIS : RegisterField<FS_HCCHAR7, 30, 1, ReadWriteMode>
    {
    };
    // Odd frame
    struct ODDFRM : RegisterField<FS_HCCHAR7, 29, 1, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<FS_HCCHAR7, 22, 7, ReadWriteMode>
    {
    };
    // Multicount
    struct MCNT : RegisterField<FS_HCCHAR7, 20, 2, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<FS_HCCHAR7, 18, 2, ReadWriteMode>
    {
    };
    // Low-speed device
    struct LSDEV : RegisterField<FS_HCCHAR7, 17, 1, ReadWriteMode>
    {
    };
    // Endpoint direction
    struct EPDIR : RegisterField<FS_HCCHAR7, 15, 1, ReadWriteMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<FS_HCCHAR7, 11, 4, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<FS_HCCHAR7, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7)
  struct FS_HCINT7 : Register<0x500005e8, ReadWriteMode, 0x0>
  {
    // Data toggle error
    struct DTERR : RegisterField<FS_HCINT7, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun
    struct FRMOR : RegisterField<FS_HCINT7, 9, 1, ReadWriteMode>
    {
    };
    // Babble error
    struct BBERR : RegisterField<FS_HCINT7, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error
    struct TXERR : RegisterField<FS_HCINT7, 7, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt
    struct ACK : RegisterField<FS_HCINT7, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt
    struct NAK : RegisterField<FS_HCINT7, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt
    struct STALL : RegisterField<FS_HCINT7, 3, 1, ReadWriteMode>
    {
    };
    // Channel halted
    struct CHH : RegisterField<FS_HCINT7, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed
    struct XFRC : RegisterField<FS_HCINT7, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7)
  struct FS_HCINTMSK7 : Register<0x500005ec, ReadWriteMode, 0x0>
  {
    // Data toggle error mask
    struct DTERRM : RegisterField<FS_HCINTMSK7, 10, 1, ReadWriteMode>
    {
    };
    // Frame overrun mask
    struct FRMORM : RegisterField<FS_HCINTMSK7, 9, 1, ReadWriteMode>
    {
    };
    // Babble error mask
    struct BBERRM : RegisterField<FS_HCINTMSK7, 8, 1, ReadWriteMode>
    {
    };
    // Transaction error mask
    struct TXERRM : RegisterField<FS_HCINTMSK7, 7, 1, ReadWriteMode>
    {
    };
    // response received interrupt mask
    struct NYET : RegisterField<FS_HCINTMSK7, 6, 1, ReadWriteMode>
    {
    };
    // ACK response received/transmitted interrupt mask
    struct ACKM : RegisterField<FS_HCINTMSK7, 5, 1, ReadWriteMode>
    {
    };
    // NAK response received interrupt mask
    struct NAKM : RegisterField<FS_HCINTMSK7, 4, 1, ReadWriteMode>
    {
    };
    // STALL response received interrupt mask
    struct STALLM : RegisterField<FS_HCINTMSK7, 3, 1, ReadWriteMode>
    {
    };
    // Channel halted mask
    struct CHHM : RegisterField<FS_HCINTMSK7, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed mask
    struct XFRCM : RegisterField<FS_HCINTMSK7, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS host channel-7 transfer size register
  struct FS_HCTSIZ7 : Register<0x500005f0, ReadWriteMode, 0x0>
  {
    // Data PID
    struct DPID : RegisterField<FS_HCTSIZ7, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<FS_HCTSIZ7, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<FS_HCTSIZ7, 0, 19, ReadWriteMode>
    {
    };
  };

// Large Registers

};


