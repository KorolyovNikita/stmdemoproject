/******************************************************************************
* Filename : otg_fs_device_registers.hpp
*
* Details  : USB on the go full speed
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct OTG_FS_DEVICE
{
  // OTG_FS device configuration register (OTG_FS_DCFG)
  struct FS_DCFG : Register<0x50000800, ReadWriteMode, 0x2200000>
  {
    // Periodic frame interval
    struct PFIVL : RegisterField<FS_DCFG, 11, 2, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<FS_DCFG, 4, 7, ReadWriteMode>
    {
    };
    // Non-zero-length status OUT handshake
    struct NZLSOHSK : RegisterField<FS_DCFG, 2, 1, ReadWriteMode>
    {
    };
    // Device speed
    struct DSPD : RegisterField<FS_DCFG, 0, 2, ReadWriteMode>
    {
    };
  };

  // OTG_FS device control register (OTG_FS_DCTL)
  struct FS_DCTL : Register<0x50000804, ReadWriteMode, 0x0>
  {
    // Power-on programming done
    struct POPRGDNE : RegisterField<FS_DCTL, 11, 1, ReadWriteMode>
    {
    };
    // Clear global OUT NAK
    struct CGONAK : RegisterField<FS_DCTL, 10, 1, ReadWriteMode>
    {
    };
    // Set global OUT NAK
    struct SGONAK : RegisterField<FS_DCTL, 9, 1, ReadWriteMode>
    {
    };
    // Clear global IN NAK
    struct CGINAK : RegisterField<FS_DCTL, 8, 1, ReadWriteMode>
    {
    };
    // Set global IN NAK
    struct SGINAK : RegisterField<FS_DCTL, 7, 1, ReadWriteMode>
    {
    };
    // Test control
    struct TCTL : RegisterField<FS_DCTL, 4, 3, ReadWriteMode>
    {
    };
    // Global OUT NAK status
    struct GONSTS : RegisterField<FS_DCTL, 3, 1, ReadMode>
    {
    };
    // Global IN NAK status
    struct GINSTS : RegisterField<FS_DCTL, 2, 1, ReadMode>
    {
    };
    // Soft disconnect
    struct SDIS : RegisterField<FS_DCTL, 1, 1, ReadWriteMode>
    {
    };
    // Remote wakeup signaling
    struct RWUSIG : RegisterField<FS_DCTL, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS device status register (OTG_FS_DSTS)
  struct FS_DSTS : Register<0x50000808, ReadMode, 0x10>
  {
    // Frame number of the received SOF
    struct FNSOF : RegisterField<FS_DSTS, 8, 14, ReadMode>
    {
    };
    // Erratic error
    struct EERR : RegisterField<FS_DSTS, 3, 1, ReadMode>
    {
    };
    // Enumerated speed
    struct ENUMSPD : RegisterField<FS_DSTS, 1, 2, ReadMode>
    {
    };
    // Suspend status
    struct SUSPSTS : RegisterField<FS_DSTS, 0, 1, ReadMode>
    {
    };
  };

  // OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK)
  struct FS_DIEPMSK : Register<0x50000810, ReadWriteMode, 0x0>
  {
    // IN endpoint NAK effective mask
    struct INEPNEM : RegisterField<FS_DIEPMSK, 6, 1, ReadWriteMode>
    {
    };
    // IN token received with EP mismatch mask
    struct INEPNMM : RegisterField<FS_DIEPMSK, 5, 1, ReadWriteMode>
    {
    };
    // IN token received when TxFIFO empty mask
    struct ITTXFEMSK : RegisterField<FS_DIEPMSK, 4, 1, ReadWriteMode>
    {
    };
    // Timeout condition mask (Non-isochronous endpoints)
    struct TOM : RegisterField<FS_DIEPMSK, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt mask
    struct EPDM : RegisterField<FS_DIEPMSK, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt mask
    struct XFRCM : RegisterField<FS_DIEPMSK, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK)
  struct FS_DOEPMSK : Register<0x50000814, ReadWriteMode, 0x0>
  {
    // OUT token received when endpoint disabled mask
    struct OTEPDM : RegisterField<FS_DOEPMSK, 4, 1, ReadWriteMode>
    {
    };
    // SETUP phase done mask
    struct STUPM : RegisterField<FS_DOEPMSK, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt mask
    struct EPDM : RegisterField<FS_DOEPMSK, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt mask
    struct XFRCM : RegisterField<FS_DOEPMSK, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS device all endpoints interrupt register (OTG_FS_DAINT)
  struct FS_DAINT : Register<0x50000818, ReadMode, 0x0>
  {
    // OUT endpoint interrupt bits
    struct OEPINT : RegisterField<FS_DAINT, 16, 16, ReadMode>
    {
    };
    // IN endpoint interrupt bits
    struct IEPINT : RegisterField<FS_DAINT, 0, 16, ReadMode>
    {
    };
  };

  // OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK)
  struct FS_DAINTMSK : Register<0x5000081c, ReadWriteMode, 0x0>
  {
    // OUT endpoint interrupt bits
    struct OEPINT : RegisterField<FS_DAINTMSK, 16, 16, ReadWriteMode>
    {
    };
    // IN EP interrupt mask bits
    struct IEPM : RegisterField<FS_DAINTMSK, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_FS device VBUS discharge time register
  struct DVBUSDIS : Register<0x50000828, ReadWriteMode, 0x17d7>
  {
    // Device VBUS discharge time
    struct VBUSDT : RegisterField<DVBUSDIS, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_FS device VBUS pulsing time register
  struct DVBUSPULSE : Register<0x5000082c, ReadWriteMode, 0x5b8>
  {
    // Device VBUS pulsing time
    struct DVBUSP : RegisterField<DVBUSPULSE, 0, 12, ReadWriteMode>
    {
    };
  };

  // OTG_FS device IN endpoint FIFO empty interrupt mask register
  struct DIEPEMPMSK : Register<0x50000834, ReadWriteMode, 0x0>
  {
    // IN EP Tx FIFO empty interrupt mask bits
    struct INEPTXFEM : RegisterField<DIEPEMPMSK, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0)
  struct FS_DIEPCTL0 : Register<0x50000900, ReadWriteMode, 0x0>
  {
    // Endpoint enable
    struct EPENA : RegisterField<FS_DIEPCTL0, 31, 1, ReadMode>
    {
    };
    // Endpoint disable
    struct EPDIS : RegisterField<FS_DIEPCTL0, 30, 1, ReadMode>
    {
    };
    // Set NAK
    struct SNAK : RegisterField<FS_DIEPCTL0, 27, 1, WriteMode>
    {
    };
    // Clear NAK
    struct CNAK : RegisterField<FS_DIEPCTL0, 26, 1, WriteMode>
    {
    };
    // TxFIFO number
    struct TXFNUM : RegisterField<FS_DIEPCTL0, 22, 4, ReadWriteMode>
    {
    };
    // STALL handshake
    struct STALL : RegisterField<FS_DIEPCTL0, 21, 1, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<FS_DIEPCTL0, 18, 2, ReadMode>
    {
    };
    // NAK status
    struct NAKSTS : RegisterField<FS_DIEPCTL0, 17, 1, ReadMode>
    {
    };
    // USB active endpoint
    struct USBAEP : RegisterField<FS_DIEPCTL0, 15, 1, ReadMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<FS_DIEPCTL0, 0, 2, ReadWriteMode>
    {
    };
  };

  // device endpoint-x interrupt register
  struct DIEPINT0 : Register<0x50000908, ReadWriteMode, 0x80>
  {
    // TXFE
    struct TXFE : RegisterField<DIEPINT0, 7, 1, ReadMode>
    {
    };
    // INEPNE
    struct INEPNE : RegisterField<DIEPINT0, 6, 1, ReadWriteMode>
    {
    };
    // ITTXFE
    struct ITTXFE : RegisterField<DIEPINT0, 4, 1, ReadWriteMode>
    {
    };
    // TOC
    struct TOC : RegisterField<DIEPINT0, 3, 1, ReadWriteMode>
    {
    };
    // EPDISD
    struct EPDISD : RegisterField<DIEPINT0, 1, 1, ReadWriteMode>
    {
    };
    // XFRC
    struct XFRC : RegisterField<DIEPINT0, 0, 1, ReadWriteMode>
    {
    };
  };

  // device endpoint-0 transfer size register
  struct DIEPTSIZ0 : Register<0x50000910, ReadWriteMode, 0x0>
  {
    // Packet count
    struct PKTCNT : RegisterField<DIEPTSIZ0, 19, 2, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<DIEPTSIZ0, 0, 7, ReadWriteMode>
    {
    };
  };

  // OTG_FS device IN endpoint transmit FIFO status register
  struct DTXFSTS0 : Register<0x50000918, ReadMode, 0x0>
  {
    // IN endpoint TxFIFO space available
    struct INEPTFSAV : RegisterField<DTXFSTS0, 0, 16, ReadMode>
    {
    };
  };

  // OTG device endpoint-1 control register
  struct DIEPCTL1 : Register<0x50000920, ReadWriteMode, 0x0>
  {
    // EPENA
    struct EPENA : RegisterField<DIEPCTL1, 31, 1, ReadWriteMode>
    {
    };
    // EPDIS
    struct EPDIS : RegisterField<DIEPCTL1, 30, 1, ReadWriteMode>
    {
    };
    // SODDFRM/SD1PID
    struct SODDFRM_SD1PID : RegisterField<DIEPCTL1, 29, 1, WriteMode>
    {
    };
    // SD0PID/SEVNFRM
    struct SD0PID_SEVNFRM : RegisterField<DIEPCTL1, 28, 1, WriteMode>
    {
    };
    // SNAK
    struct SNAK : RegisterField<DIEPCTL1, 27, 1, WriteMode>
    {
    };
    // CNAK
    struct CNAK : RegisterField<DIEPCTL1, 26, 1, WriteMode>
    {
    };
    // TXFNUM
    struct TXFNUM : RegisterField<DIEPCTL1, 22, 4, ReadWriteMode>
    {
    };
    // Stall
    struct Stall : RegisterField<DIEPCTL1, 21, 1, ReadWriteMode>
    {
    };
    // EPTYP
    struct EPTYP : RegisterField<DIEPCTL1, 18, 2, ReadWriteMode>
    {
    };
    // NAKSTS
    struct NAKSTS : RegisterField<DIEPCTL1, 17, 1, ReadMode>
    {
    };
    // EONUM/DPID
    struct EONUM_DPID : RegisterField<DIEPCTL1, 16, 1, ReadMode>
    {
    };
    // USBAEP
    struct USBAEP : RegisterField<DIEPCTL1, 15, 1, ReadWriteMode>
    {
    };
    // MPSIZ
    struct MPSIZ : RegisterField<DIEPCTL1, 0, 11, ReadWriteMode>
    {
    };
  };

  // device endpoint-1 interrupt register
  struct DIEPINT1 : Register<0x50000928, ReadWriteMode, 0x80>
  {
    // TXFE
    struct TXFE : RegisterField<DIEPINT1, 7, 1, ReadMode>
    {
    };
    // INEPNE
    struct INEPNE : RegisterField<DIEPINT1, 6, 1, ReadWriteMode>
    {
    };
    // ITTXFE
    struct ITTXFE : RegisterField<DIEPINT1, 4, 1, ReadWriteMode>
    {
    };
    // TOC
    struct TOC : RegisterField<DIEPINT1, 3, 1, ReadWriteMode>
    {
    };
    // EPDISD
    struct EPDISD : RegisterField<DIEPINT1, 1, 1, ReadWriteMode>
    {
    };
    // XFRC
    struct XFRC : RegisterField<DIEPINT1, 0, 1, ReadWriteMode>
    {
    };
  };

  // device endpoint-1 transfer size register
  struct DIEPTSIZ1 : Register<0x50000930, ReadWriteMode, 0x0>
  {
    // Multi count
    struct MCNT : RegisterField<DIEPTSIZ1, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<DIEPTSIZ1, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<DIEPTSIZ1, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_FS device IN endpoint transmit FIFO status register
  struct DTXFSTS1 : Register<0x50000938, ReadMode, 0x0>
  {
    // IN endpoint TxFIFO space available
    struct INEPTFSAV : RegisterField<DTXFSTS1, 0, 16, ReadMode>
    {
    };
  };

  // OTG device endpoint-2 control register
  struct DIEPCTL2 : Register<0x50000940, ReadWriteMode, 0x0>
  {
    // EPENA
    struct EPENA : RegisterField<DIEPCTL2, 31, 1, ReadWriteMode>
    {
    };
    // EPDIS
    struct EPDIS : RegisterField<DIEPCTL2, 30, 1, ReadWriteMode>
    {
    };
    // SODDFRM
    struct SODDFRM : RegisterField<DIEPCTL2, 29, 1, WriteMode>
    {
    };
    // SD0PID/SEVNFRM
    struct SD0PID_SEVNFRM : RegisterField<DIEPCTL2, 28, 1, WriteMode>
    {
    };
    // SNAK
    struct SNAK : RegisterField<DIEPCTL2, 27, 1, WriteMode>
    {
    };
    // CNAK
    struct CNAK : RegisterField<DIEPCTL2, 26, 1, WriteMode>
    {
    };
    // TXFNUM
    struct TXFNUM : RegisterField<DIEPCTL2, 22, 4, ReadWriteMode>
    {
    };
    // Stall
    struct Stall : RegisterField<DIEPCTL2, 21, 1, ReadWriteMode>
    {
    };
    // EPTYP
    struct EPTYP : RegisterField<DIEPCTL2, 18, 2, ReadWriteMode>
    {
    };
    // NAKSTS
    struct NAKSTS : RegisterField<DIEPCTL2, 17, 1, ReadMode>
    {
    };
    // EONUM/DPID
    struct EONUM_DPID : RegisterField<DIEPCTL2, 16, 1, ReadMode>
    {
    };
    // USBAEP
    struct USBAEP : RegisterField<DIEPCTL2, 15, 1, ReadWriteMode>
    {
    };
    // MPSIZ
    struct MPSIZ : RegisterField<DIEPCTL2, 0, 11, ReadWriteMode>
    {
    };
  };

  // device endpoint-2 interrupt register
  struct DIEPINT2 : Register<0x50000948, ReadWriteMode, 0x80>
  {
    // TXFE
    struct TXFE : RegisterField<DIEPINT2, 7, 1, ReadMode>
    {
    };
    // INEPNE
    struct INEPNE : RegisterField<DIEPINT2, 6, 1, ReadWriteMode>
    {
    };
    // ITTXFE
    struct ITTXFE : RegisterField<DIEPINT2, 4, 1, ReadWriteMode>
    {
    };
    // TOC
    struct TOC : RegisterField<DIEPINT2, 3, 1, ReadWriteMode>
    {
    };
    // EPDISD
    struct EPDISD : RegisterField<DIEPINT2, 1, 1, ReadWriteMode>
    {
    };
    // XFRC
    struct XFRC : RegisterField<DIEPINT2, 0, 1, ReadWriteMode>
    {
    };
  };

  // device endpoint-2 transfer size register
  struct DIEPTSIZ2 : Register<0x50000950, ReadWriteMode, 0x0>
  {
    // Multi count
    struct MCNT : RegisterField<DIEPTSIZ2, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<DIEPTSIZ2, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<DIEPTSIZ2, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_FS device IN endpoint transmit FIFO status register
  struct DTXFSTS2 : Register<0x50000958, ReadMode, 0x0>
  {
    // IN endpoint TxFIFO space available
    struct INEPTFSAV : RegisterField<DTXFSTS2, 0, 16, ReadMode>
    {
    };
  };

  // OTG device endpoint-3 control register
  struct DIEPCTL3 : Register<0x50000960, ReadWriteMode, 0x0>
  {
    // EPENA
    struct EPENA : RegisterField<DIEPCTL3, 31, 1, ReadWriteMode>
    {
    };
    // EPDIS
    struct EPDIS : RegisterField<DIEPCTL3, 30, 1, ReadWriteMode>
    {
    };
    // SODDFRM
    struct SODDFRM : RegisterField<DIEPCTL3, 29, 1, WriteMode>
    {
    };
    // SD0PID/SEVNFRM
    struct SD0PID_SEVNFRM : RegisterField<DIEPCTL3, 28, 1, WriteMode>
    {
    };
    // SNAK
    struct SNAK : RegisterField<DIEPCTL3, 27, 1, WriteMode>
    {
    };
    // CNAK
    struct CNAK : RegisterField<DIEPCTL3, 26, 1, WriteMode>
    {
    };
    // TXFNUM
    struct TXFNUM : RegisterField<DIEPCTL3, 22, 4, ReadWriteMode>
    {
    };
    // Stall
    struct Stall : RegisterField<DIEPCTL3, 21, 1, ReadWriteMode>
    {
    };
    // EPTYP
    struct EPTYP : RegisterField<DIEPCTL3, 18, 2, ReadWriteMode>
    {
    };
    // NAKSTS
    struct NAKSTS : RegisterField<DIEPCTL3, 17, 1, ReadMode>
    {
    };
    // EONUM/DPID
    struct EONUM_DPID : RegisterField<DIEPCTL3, 16, 1, ReadMode>
    {
    };
    // USBAEP
    struct USBAEP : RegisterField<DIEPCTL3, 15, 1, ReadWriteMode>
    {
    };
    // MPSIZ
    struct MPSIZ : RegisterField<DIEPCTL3, 0, 11, ReadWriteMode>
    {
    };
  };

  // device endpoint-3 interrupt register
  struct DIEPINT3 : Register<0x50000968, ReadWriteMode, 0x80>
  {
    // TXFE
    struct TXFE : RegisterField<DIEPINT3, 7, 1, ReadMode>
    {
    };
    // INEPNE
    struct INEPNE : RegisterField<DIEPINT3, 6, 1, ReadWriteMode>
    {
    };
    // ITTXFE
    struct ITTXFE : RegisterField<DIEPINT3, 4, 1, ReadWriteMode>
    {
    };
    // TOC
    struct TOC : RegisterField<DIEPINT3, 3, 1, ReadWriteMode>
    {
    };
    // EPDISD
    struct EPDISD : RegisterField<DIEPINT3, 1, 1, ReadWriteMode>
    {
    };
    // XFRC
    struct XFRC : RegisterField<DIEPINT3, 0, 1, ReadWriteMode>
    {
    };
  };

  // device endpoint-3 transfer size register
  struct DIEPTSIZ3 : Register<0x50000970, ReadWriteMode, 0x0>
  {
    // Multi count
    struct MCNT : RegisterField<DIEPTSIZ3, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<DIEPTSIZ3, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<DIEPTSIZ3, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_FS device IN endpoint transmit FIFO status register
  struct DTXFSTS3 : Register<0x50000978, ReadMode, 0x0>
  {
    // IN endpoint TxFIFO space available
    struct INEPTFSAV : RegisterField<DTXFSTS3, 0, 16, ReadMode>
    {
    };
  };

  // device endpoint-0 control register
  struct DOEPCTL0 : Register<0x50000b00, ReadWriteMode, 0x8000>
  {
    // EPENA
    struct EPENA : RegisterField<DOEPCTL0, 31, 1, WriteMode>
    {
    };
    // EPDIS
    struct EPDIS : RegisterField<DOEPCTL0, 30, 1, ReadMode>
    {
    };
    // SNAK
    struct SNAK : RegisterField<DOEPCTL0, 27, 1, WriteMode>
    {
    };
    // CNAK
    struct CNAK : RegisterField<DOEPCTL0, 26, 1, WriteMode>
    {
    };
    // Stall
    struct Stall : RegisterField<DOEPCTL0, 21, 1, ReadWriteMode>
    {
    };
    // SNPM
    struct SNPM : RegisterField<DOEPCTL0, 20, 1, ReadWriteMode>
    {
    };
    // EPTYP
    struct EPTYP : RegisterField<DOEPCTL0, 18, 2, ReadMode>
    {
    };
    // NAKSTS
    struct NAKSTS : RegisterField<DOEPCTL0, 17, 1, ReadMode>
    {
    };
    // USBAEP
    struct USBAEP : RegisterField<DOEPCTL0, 15, 1, ReadMode>
    {
    };
    // MPSIZ
    struct MPSIZ : RegisterField<DOEPCTL0, 0, 2, ReadMode>
    {
    };
  };

  // device endpoint-0 interrupt register
  struct DOEPINT0 : Register<0x50000b08, ReadWriteMode, 0x80>
  {
    // B2BSTUP
    struct B2BSTUP : RegisterField<DOEPINT0, 6, 1, ReadWriteMode>
    {
    };
    // OTEPDIS
    struct OTEPDIS : RegisterField<DOEPINT0, 4, 1, ReadWriteMode>
    {
    };
    // STUP
    struct STUP : RegisterField<DOEPINT0, 3, 1, ReadWriteMode>
    {
    };
    // EPDISD
    struct EPDISD : RegisterField<DOEPINT0, 1, 1, ReadWriteMode>
    {
    };
    // XFRC
    struct XFRC : RegisterField<DOEPINT0, 0, 1, ReadWriteMode>
    {
    };
  };

  // device OUT endpoint-0 transfer size register
  struct DOEPTSIZ0 : Register<0x50000b10, ReadWriteMode, 0x0>
  {
    // SETUP packet count
    struct STUPCNT : RegisterField<DOEPTSIZ0, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<DOEPTSIZ0, 19, 1, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<DOEPTSIZ0, 0, 7, ReadWriteMode>
    {
    };
  };

  // device endpoint-1 control register
  struct DOEPCTL1 : Register<0x50000b20, ReadWriteMode, 0x0>
  {
    // EPENA
    struct EPENA : RegisterField<DOEPCTL1, 31, 1, ReadWriteMode>
    {
    };
    // EPDIS
    struct EPDIS : RegisterField<DOEPCTL1, 30, 1, ReadWriteMode>
    {
    };
    // SODDFRM
    struct SODDFRM : RegisterField<DOEPCTL1, 29, 1, WriteMode>
    {
    };
    // SD0PID/SEVNFRM
    struct SD0PID_SEVNFRM : RegisterField<DOEPCTL1, 28, 1, WriteMode>
    {
    };
    // SNAK
    struct SNAK : RegisterField<DOEPCTL1, 27, 1, WriteMode>
    {
    };
    // CNAK
    struct CNAK : RegisterField<DOEPCTL1, 26, 1, WriteMode>
    {
    };
    // Stall
    struct Stall : RegisterField<DOEPCTL1, 21, 1, ReadWriteMode>
    {
    };
    // SNPM
    struct SNPM : RegisterField<DOEPCTL1, 20, 1, ReadWriteMode>
    {
    };
    // EPTYP
    struct EPTYP : RegisterField<DOEPCTL1, 18, 2, ReadWriteMode>
    {
    };
    // NAKSTS
    struct NAKSTS : RegisterField<DOEPCTL1, 17, 1, ReadMode>
    {
    };
    // EONUM/DPID
    struct EONUM_DPID : RegisterField<DOEPCTL1, 16, 1, ReadMode>
    {
    };
    // USBAEP
    struct USBAEP : RegisterField<DOEPCTL1, 15, 1, ReadWriteMode>
    {
    };
    // MPSIZ
    struct MPSIZ : RegisterField<DOEPCTL1, 0, 11, ReadWriteMode>
    {
    };
  };

  // device endpoint-1 interrupt register
  struct DOEPINT1 : Register<0x50000b28, ReadWriteMode, 0x80>
  {
    // B2BSTUP
    struct B2BSTUP : RegisterField<DOEPINT1, 6, 1, ReadWriteMode>
    {
    };
    // OTEPDIS
    struct OTEPDIS : RegisterField<DOEPINT1, 4, 1, ReadWriteMode>
    {
    };
    // STUP
    struct STUP : RegisterField<DOEPINT1, 3, 1, ReadWriteMode>
    {
    };
    // EPDISD
    struct EPDISD : RegisterField<DOEPINT1, 1, 1, ReadWriteMode>
    {
    };
    // XFRC
    struct XFRC : RegisterField<DOEPINT1, 0, 1, ReadWriteMode>
    {
    };
  };

  // device OUT endpoint-1 transfer size register
  struct DOEPTSIZ1 : Register<0x50000b30, ReadWriteMode, 0x0>
  {
    // Received data PID/SETUP packet count
    struct RXDPID_STUPCNT : RegisterField<DOEPTSIZ1, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<DOEPTSIZ1, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<DOEPTSIZ1, 0, 19, ReadWriteMode>
    {
    };
  };

  // device endpoint-2 control register
  struct DOEPCTL2 : Register<0x50000b40, ReadWriteMode, 0x0>
  {
    // EPENA
    struct EPENA : RegisterField<DOEPCTL2, 31, 1, ReadWriteMode>
    {
    };
    // EPDIS
    struct EPDIS : RegisterField<DOEPCTL2, 30, 1, ReadWriteMode>
    {
    };
    // SODDFRM
    struct SODDFRM : RegisterField<DOEPCTL2, 29, 1, WriteMode>
    {
    };
    // SD0PID/SEVNFRM
    struct SD0PID_SEVNFRM : RegisterField<DOEPCTL2, 28, 1, WriteMode>
    {
    };
    // SNAK
    struct SNAK : RegisterField<DOEPCTL2, 27, 1, WriteMode>
    {
    };
    // CNAK
    struct CNAK : RegisterField<DOEPCTL2, 26, 1, WriteMode>
    {
    };
    // Stall
    struct Stall : RegisterField<DOEPCTL2, 21, 1, ReadWriteMode>
    {
    };
    // SNPM
    struct SNPM : RegisterField<DOEPCTL2, 20, 1, ReadWriteMode>
    {
    };
    // EPTYP
    struct EPTYP : RegisterField<DOEPCTL2, 18, 2, ReadWriteMode>
    {
    };
    // NAKSTS
    struct NAKSTS : RegisterField<DOEPCTL2, 17, 1, ReadMode>
    {
    };
    // EONUM/DPID
    struct EONUM_DPID : RegisterField<DOEPCTL2, 16, 1, ReadMode>
    {
    };
    // USBAEP
    struct USBAEP : RegisterField<DOEPCTL2, 15, 1, ReadWriteMode>
    {
    };
    // MPSIZ
    struct MPSIZ : RegisterField<DOEPCTL2, 0, 11, ReadWriteMode>
    {
    };
  };

  // device endpoint-2 interrupt register
  struct DOEPINT2 : Register<0x50000b48, ReadWriteMode, 0x80>
  {
    // B2BSTUP
    struct B2BSTUP : RegisterField<DOEPINT2, 6, 1, ReadWriteMode>
    {
    };
    // OTEPDIS
    struct OTEPDIS : RegisterField<DOEPINT2, 4, 1, ReadWriteMode>
    {
    };
    // STUP
    struct STUP : RegisterField<DOEPINT2, 3, 1, ReadWriteMode>
    {
    };
    // EPDISD
    struct EPDISD : RegisterField<DOEPINT2, 1, 1, ReadWriteMode>
    {
    };
    // XFRC
    struct XFRC : RegisterField<DOEPINT2, 0, 1, ReadWriteMode>
    {
    };
  };

  // device OUT endpoint-2 transfer size register
  struct DOEPTSIZ2 : Register<0x50000b50, ReadWriteMode, 0x0>
  {
    // Received data PID/SETUP packet count
    struct RXDPID_STUPCNT : RegisterField<DOEPTSIZ2, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<DOEPTSIZ2, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<DOEPTSIZ2, 0, 19, ReadWriteMode>
    {
    };
  };

  // device endpoint-3 control register
  struct DOEPCTL3 : Register<0x50000b60, ReadWriteMode, 0x0>
  {
    // EPENA
    struct EPENA : RegisterField<DOEPCTL3, 31, 1, ReadWriteMode>
    {
    };
    // EPDIS
    struct EPDIS : RegisterField<DOEPCTL3, 30, 1, ReadWriteMode>
    {
    };
    // SODDFRM
    struct SODDFRM : RegisterField<DOEPCTL3, 29, 1, WriteMode>
    {
    };
    // SD0PID/SEVNFRM
    struct SD0PID_SEVNFRM : RegisterField<DOEPCTL3, 28, 1, WriteMode>
    {
    };
    // SNAK
    struct SNAK : RegisterField<DOEPCTL3, 27, 1, WriteMode>
    {
    };
    // CNAK
    struct CNAK : RegisterField<DOEPCTL3, 26, 1, WriteMode>
    {
    };
    // Stall
    struct Stall : RegisterField<DOEPCTL3, 21, 1, ReadWriteMode>
    {
    };
    // SNPM
    struct SNPM : RegisterField<DOEPCTL3, 20, 1, ReadWriteMode>
    {
    };
    // EPTYP
    struct EPTYP : RegisterField<DOEPCTL3, 18, 2, ReadWriteMode>
    {
    };
    // NAKSTS
    struct NAKSTS : RegisterField<DOEPCTL3, 17, 1, ReadMode>
    {
    };
    // EONUM/DPID
    struct EONUM_DPID : RegisterField<DOEPCTL3, 16, 1, ReadMode>
    {
    };
    // USBAEP
    struct USBAEP : RegisterField<DOEPCTL3, 15, 1, ReadWriteMode>
    {
    };
    // MPSIZ
    struct MPSIZ : RegisterField<DOEPCTL3, 0, 11, ReadWriteMode>
    {
    };
  };

  // device endpoint-3 interrupt register
  struct DOEPINT3 : Register<0x50000b68, ReadWriteMode, 0x80>
  {
    // B2BSTUP
    struct B2BSTUP : RegisterField<DOEPINT3, 6, 1, ReadWriteMode>
    {
    };
    // OTEPDIS
    struct OTEPDIS : RegisterField<DOEPINT3, 4, 1, ReadWriteMode>
    {
    };
    // STUP
    struct STUP : RegisterField<DOEPINT3, 3, 1, ReadWriteMode>
    {
    };
    // EPDISD
    struct EPDISD : RegisterField<DOEPINT3, 1, 1, ReadWriteMode>
    {
    };
    // XFRC
    struct XFRC : RegisterField<DOEPINT3, 0, 1, ReadWriteMode>
    {
    };
  };

  // device OUT endpoint-3 transfer size register
  struct DOEPTSIZ3 : Register<0x50000b70, ReadWriteMode, 0x0>
  {
    // Received data PID/SETUP packet count
    struct RXDPID_STUPCNT : RegisterField<DOEPTSIZ3, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<DOEPTSIZ3, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<DOEPTSIZ3, 0, 19, ReadWriteMode>
    {
    };
  };

// Large Registers

};


