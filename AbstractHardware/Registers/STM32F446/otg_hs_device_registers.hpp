/******************************************************************************
* Filename : otg_hs_device_registers.hpp
*
* Details  : USB on the go high speed
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct OTG_HS_DEVICE
{
  // OTG_HS device configuration register
  struct OTG_HS_DCFG : Register<0x40040800, ReadWriteMode, 0x2200000>
  {
    // Periodic scheduling interval
    struct PERSCHIVL : RegisterField<OTG_HS_DCFG, 24, 2, ReadWriteMode>
    {
    };
    // Periodic (micro)frame interval
    struct PFIVL : RegisterField<OTG_HS_DCFG, 11, 2, ReadWriteMode>
    {
    };
    // Device address
    struct DAD : RegisterField<OTG_HS_DCFG, 4, 7, ReadWriteMode>
    {
    };
    // Nonzero-length status OUT handshake
    struct NZLSOHSK : RegisterField<OTG_HS_DCFG, 2, 1, ReadWriteMode>
    {
    };
    // Device speed
    struct DSPD : RegisterField<OTG_HS_DCFG, 0, 2, ReadWriteMode>
    {
    };
  };

  // OTG_HS device control register
  struct OTG_HS_DCTL : Register<0x40040804, ReadWriteMode, 0x0>
  {
    // Power-on programming done
    struct POPRGDNE : RegisterField<OTG_HS_DCTL, 11, 1, ReadWriteMode>
    {
    };
    // Clear global OUT NAK
    struct CGONAK : RegisterField<OTG_HS_DCTL, 10, 1, WriteMode>
    {
    };
    // Set global OUT NAK
    struct SGONAK : RegisterField<OTG_HS_DCTL, 9, 1, WriteMode>
    {
    };
    // Clear global IN NAK
    struct CGINAK : RegisterField<OTG_HS_DCTL, 8, 1, WriteMode>
    {
    };
    // Set global IN NAK
    struct SGINAK : RegisterField<OTG_HS_DCTL, 7, 1, WriteMode>
    {
    };
    // Test control
    struct TCTL : RegisterField<OTG_HS_DCTL, 4, 3, ReadWriteMode>
    {
    };
    // Global OUT NAK status
    struct GONSTS : RegisterField<OTG_HS_DCTL, 3, 1, ReadMode>
    {
    };
    // Global IN NAK status
    struct GINSTS : RegisterField<OTG_HS_DCTL, 2, 1, ReadMode>
    {
    };
    // Soft disconnect
    struct SDIS : RegisterField<OTG_HS_DCTL, 1, 1, ReadWriteMode>
    {
    };
    // Remote wakeup signaling
    struct RWUSIG : RegisterField<OTG_HS_DCTL, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device status register
  struct OTG_HS_DSTS : Register<0x40040808, ReadMode, 0x10>
  {
    // Frame number of the received SOF
    struct FNSOF : RegisterField<OTG_HS_DSTS, 8, 14, ReadMode>
    {
    };
    // Erratic error
    struct EERR : RegisterField<OTG_HS_DSTS, 3, 1, ReadMode>
    {
    };
    // Enumerated speed
    struct ENUMSPD : RegisterField<OTG_HS_DSTS, 1, 2, ReadMode>
    {
    };
    // Suspend status
    struct SUSPSTS : RegisterField<OTG_HS_DSTS, 0, 1, ReadMode>
    {
    };
  };

  // OTG_HS device IN endpoint common interrupt mask register
  struct OTG_HS_DIEPMSK : Register<0x40040810, ReadWriteMode, 0x0>
  {
    // BNA interrupt mask
    struct BIM : RegisterField<OTG_HS_DIEPMSK, 9, 1, ReadWriteMode>
    {
    };
    // FIFO underrun mask
    struct TXFURM : RegisterField<OTG_HS_DIEPMSK, 8, 1, ReadWriteMode>
    {
    };
    // IN endpoint NAK effective mask
    struct INEPNEM : RegisterField<OTG_HS_DIEPMSK, 6, 1, ReadWriteMode>
    {
    };
    // IN token received with EP mismatch mask
    struct INEPNMM : RegisterField<OTG_HS_DIEPMSK, 5, 1, ReadWriteMode>
    {
    };
    // IN token received when TxFIFO empty mask
    struct ITTXFEMSK : RegisterField<OTG_HS_DIEPMSK, 4, 1, ReadWriteMode>
    {
    };
    // Timeout condition mask (nonisochronous endpoints)
    struct TOM : RegisterField<OTG_HS_DIEPMSK, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt mask
    struct EPDM : RegisterField<OTG_HS_DIEPMSK, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt mask
    struct XFRCM : RegisterField<OTG_HS_DIEPMSK, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device OUT endpoint common interrupt mask register
  struct OTG_HS_DOEPMSK : Register<0x40040814, ReadWriteMode, 0x0>
  {
    // BNA interrupt mask
    struct BOIM : RegisterField<OTG_HS_DOEPMSK, 9, 1, ReadWriteMode>
    {
    };
    // OUT packet error mask
    struct OPEM : RegisterField<OTG_HS_DOEPMSK, 8, 1, ReadWriteMode>
    {
    };
    // Back-to-back SETUP packets received mask
    struct B2BSTUP : RegisterField<OTG_HS_DOEPMSK, 6, 1, ReadWriteMode>
    {
    };
    // OUT token received when endpoint disabled mask
    struct OTEPDM : RegisterField<OTG_HS_DOEPMSK, 4, 1, ReadWriteMode>
    {
    };
    // SETUP phase done mask
    struct STUPM : RegisterField<OTG_HS_DOEPMSK, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt mask
    struct EPDM : RegisterField<OTG_HS_DOEPMSK, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt mask
    struct XFRCM : RegisterField<OTG_HS_DOEPMSK, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device all endpoints interrupt register
  struct OTG_HS_DAINT : Register<0x40040818, ReadMode, 0x0>
  {
    // OUT endpoint interrupt bits
    struct OEPINT : RegisterField<OTG_HS_DAINT, 16, 16, ReadMode>
    {
    };
    // IN endpoint interrupt bits
    struct IEPINT : RegisterField<OTG_HS_DAINT, 0, 16, ReadMode>
    {
    };
  };

  // OTG_HS all endpoints interrupt mask register
  struct OTG_HS_DAINTMSK : Register<0x4004081c, ReadWriteMode, 0x0>
  {
    // OUT EP interrupt mask bits
    struct OEPM : RegisterField<OTG_HS_DAINTMSK, 16, 16, ReadWriteMode>
    {
    };
    // IN EP interrupt mask bits
    struct IEPM : RegisterField<OTG_HS_DAINTMSK, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_HS device VBUS discharge time register
  struct OTG_HS_DVBUSDIS : Register<0x40040828, ReadWriteMode, 0x17d7>
  {
    // Device VBUS discharge time
    struct VBUSDT : RegisterField<OTG_HS_DVBUSDIS, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_HS device VBUS pulsing time register
  struct OTG_HS_DVBUSPULSE : Register<0x4004082c, ReadWriteMode, 0x5b8>
  {
    // Device VBUS pulsing time
    struct DVBUSP : RegisterField<OTG_HS_DVBUSPULSE, 0, 12, ReadWriteMode>
    {
    };
  };

  // OTG_HS Device threshold control register
  struct OTG_HS_DTHRCTL : Register<0x40040830, ReadWriteMode, 0x0>
  {
    // Arbiter parking enable
    struct ARPEN : RegisterField<OTG_HS_DTHRCTL, 27, 1, ReadWriteMode>
    {
    };
    // Receive threshold length
    struct RXTHRLEN : RegisterField<OTG_HS_DTHRCTL, 17, 9, ReadWriteMode>
    {
    };
    // Receive threshold enable
    struct RXTHREN : RegisterField<OTG_HS_DTHRCTL, 16, 1, ReadWriteMode>
    {
    };
    // Transmit threshold length
    struct TXTHRLEN : RegisterField<OTG_HS_DTHRCTL, 2, 9, ReadWriteMode>
    {
    };
    // ISO IN endpoint threshold enable
    struct ISOTHREN : RegisterField<OTG_HS_DTHRCTL, 1, 1, ReadWriteMode>
    {
    };
    // Nonisochronous IN endpoints threshold enable
    struct NONISOTHREN : RegisterField<OTG_HS_DTHRCTL, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device IN endpoint FIFO empty interrupt mask register
  struct OTG_HS_DIEPEMPMSK : Register<0x40040834, ReadWriteMode, 0x0>
  {
    // IN EP Tx FIFO empty interrupt mask bits
    struct INEPTXFEM : RegisterField<OTG_HS_DIEPEMPMSK, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_HS device each endpoint interrupt register
  struct OTG_HS_DEACHINT : Register<0x40040838, ReadWriteMode, 0x0>
  {
    // OUT endpoint 1 interrupt bit
    struct OEP1INT : RegisterField<OTG_HS_DEACHINT, 17, 1, ReadWriteMode>
    {
    };
    // IN endpoint 1interrupt bit
    struct IEP1INT : RegisterField<OTG_HS_DEACHINT, 1, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device each endpoint interrupt register mask
  struct OTG_HS_DEACHINTMSK : Register<0x4004083c, ReadWriteMode, 0x0>
  {
    // OUT Endpoint 1 interrupt mask bit
    struct OEP1INTM : RegisterField<OTG_HS_DEACHINTMSK, 17, 1, ReadWriteMode>
    {
    };
    // IN Endpoint 1 interrupt mask bit
    struct IEP1INTM : RegisterField<OTG_HS_DEACHINTMSK, 1, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device each in endpoint-1 interrupt register
  struct OTG_HS_DIEPEACHMSK1 : Register<0x40040840, ReadWriteMode, 0x0>
  {
    // NAK interrupt mask
    struct NAKM : RegisterField<OTG_HS_DIEPEACHMSK1, 13, 1, ReadWriteMode>
    {
    };
    // BNA interrupt mask
    struct BIM : RegisterField<OTG_HS_DIEPEACHMSK1, 9, 1, ReadWriteMode>
    {
    };
    // FIFO underrun mask
    struct TXFURM : RegisterField<OTG_HS_DIEPEACHMSK1, 8, 1, ReadWriteMode>
    {
    };
    // IN endpoint NAK effective mask
    struct INEPNEM : RegisterField<OTG_HS_DIEPEACHMSK1, 6, 1, ReadWriteMode>
    {
    };
    // IN token received with EP mismatch mask
    struct INEPNMM : RegisterField<OTG_HS_DIEPEACHMSK1, 5, 1, ReadWriteMode>
    {
    };
    // IN token received when TxFIFO empty mask
    struct ITTXFEMSK : RegisterField<OTG_HS_DIEPEACHMSK1, 4, 1, ReadWriteMode>
    {
    };
    // Timeout condition mask (nonisochronous endpoints)
    struct TOM : RegisterField<OTG_HS_DIEPEACHMSK1, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt mask
    struct EPDM : RegisterField<OTG_HS_DIEPEACHMSK1, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt mask
    struct XFRCM : RegisterField<OTG_HS_DIEPEACHMSK1, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device each OUT endpoint-1 interrupt register
  struct OTG_HS_DOEPEACHMSK1 : Register<0x40040880, ReadWriteMode, 0x0>
  {
    // NYET interrupt mask
    struct NYETM : RegisterField<OTG_HS_DOEPEACHMSK1, 14, 1, ReadWriteMode>
    {
    };
    // NAK interrupt mask
    struct NAKM : RegisterField<OTG_HS_DOEPEACHMSK1, 13, 1, ReadWriteMode>
    {
    };
    // Bubble error interrupt mask
    struct BERRM : RegisterField<OTG_HS_DOEPEACHMSK1, 12, 1, ReadWriteMode>
    {
    };
    // BNA interrupt mask
    struct BIM : RegisterField<OTG_HS_DOEPEACHMSK1, 9, 1, ReadWriteMode>
    {
    };
    // OUT packet error mask
    struct TXFURM : RegisterField<OTG_HS_DOEPEACHMSK1, 8, 1, ReadWriteMode>
    {
    };
    // IN endpoint NAK effective mask
    struct INEPNEM : RegisterField<OTG_HS_DOEPEACHMSK1, 6, 1, ReadWriteMode>
    {
    };
    // IN token received with EP mismatch mask
    struct INEPNMM : RegisterField<OTG_HS_DOEPEACHMSK1, 5, 1, ReadWriteMode>
    {
    };
    // IN token received when TxFIFO empty mask
    struct ITTXFEMSK : RegisterField<OTG_HS_DOEPEACHMSK1, 4, 1, ReadWriteMode>
    {
    };
    // Timeout condition mask
    struct TOM : RegisterField<OTG_HS_DOEPEACHMSK1, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt mask
    struct EPDM : RegisterField<OTG_HS_DOEPEACHMSK1, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt mask
    struct XFRCM : RegisterField<OTG_HS_DOEPEACHMSK1, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG device endpoint-0 control register
  struct OTG_HS_DIEPCTL0 : Register<0x40040900, ReadWriteMode, 0x0>
  {
    // Endpoint enable
    struct EPENA : RegisterField<OTG_HS_DIEPCTL0, 31, 1, ReadWriteMode>
    {
    };
    // Endpoint disable
    struct EPDIS : RegisterField<OTG_HS_DIEPCTL0, 30, 1, ReadWriteMode>
    {
    };
    // Set odd frame
    struct SODDFRM : RegisterField<OTG_HS_DIEPCTL0, 29, 1, WriteMode>
    {
    };
    // Set DATA0 PID
    struct SD0PID_SEVNFRM : RegisterField<OTG_HS_DIEPCTL0, 28, 1, WriteMode>
    {
    };
    // Set NAK
    struct SNAK : RegisterField<OTG_HS_DIEPCTL0, 27, 1, WriteMode>
    {
    };
    // Clear NAK
    struct CNAK : RegisterField<OTG_HS_DIEPCTL0, 26, 1, WriteMode>
    {
    };
    // TxFIFO number
    struct TXFNUM : RegisterField<OTG_HS_DIEPCTL0, 22, 4, ReadWriteMode>
    {
    };
    // STALL handshake
    struct Stall : RegisterField<OTG_HS_DIEPCTL0, 21, 1, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_DIEPCTL0, 18, 2, ReadWriteMode>
    {
    };
    // NAK status
    struct NAKSTS : RegisterField<OTG_HS_DIEPCTL0, 17, 1, ReadMode>
    {
    };
    // Even/odd frame
    struct EONUM_DPID : RegisterField<OTG_HS_DIEPCTL0, 16, 1, ReadMode>
    {
    };
    // USB active endpoint
    struct USBAEP : RegisterField<OTG_HS_DIEPCTL0, 15, 1, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_DIEPCTL0, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG device endpoint-0 interrupt register
  struct OTG_HS_DIEPINT0 : Register<0x40040908, ReadWriteMode, 0x80>
  {
    // NAK interrupt
    struct NAK : RegisterField<OTG_HS_DIEPINT0, 13, 1, ReadWriteMode>
    {
    };
    // Babble error interrupt
    struct BERR : RegisterField<OTG_HS_DIEPINT0, 12, 1, ReadWriteMode>
    {
    };
    // Packet dropped status
    struct PKTDRPSTS : RegisterField<OTG_HS_DIEPINT0, 11, 1, ReadWriteMode>
    {
    };
    // Buffer not available interrupt
    struct BNA : RegisterField<OTG_HS_DIEPINT0, 9, 1, ReadWriteMode>
    {
    };
    // Transmit Fifo Underrun
    struct TXFIFOUDRN : RegisterField<OTG_HS_DIEPINT0, 8, 1, ReadWriteMode>
    {
    };
    // Transmit FIFO empty
    struct TXFE : RegisterField<OTG_HS_DIEPINT0, 7, 1, ReadMode>
    {
    };
    // IN endpoint NAK effective
    struct INEPNE : RegisterField<OTG_HS_DIEPINT0, 6, 1, ReadWriteMode>
    {
    };
    // IN token received when TxFIFO is empty
    struct ITTXFE : RegisterField<OTG_HS_DIEPINT0, 4, 1, ReadWriteMode>
    {
    };
    // Timeout condition
    struct TOC : RegisterField<OTG_HS_DIEPINT0, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt
    struct EPDISD : RegisterField<OTG_HS_DIEPINT0, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt
    struct XFRC : RegisterField<OTG_HS_DIEPINT0, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device IN endpoint 0 transfer size register
  struct OTG_HS_DIEPTSIZ0 : Register<0x40040910, ReadWriteMode, 0x0>
  {
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_DIEPTSIZ0, 19, 2, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_DIEPTSIZ0, 0, 7, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-1 DMA address register
  struct OTG_HS_DIEPDMA1 : Register<0x40040914, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_DIEPDMA1, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS device IN endpoint transmit FIFO status register
  struct OTG_HS_DTXFSTS0 : Register<0x40040918, ReadMode, 0x0>
  {
    // IN endpoint TxFIFO space avail
    struct INEPTFSAV : RegisterField<OTG_HS_DTXFSTS0, 0, 16, ReadMode>
    {
    };
  };

  // OTG device endpoint-1 control register
  struct OTG_HS_DIEPCTL1 : Register<0x40040920, ReadWriteMode, 0x0>
  {
    // Endpoint enable
    struct EPENA : RegisterField<OTG_HS_DIEPCTL1, 31, 1, ReadWriteMode>
    {
    };
    // Endpoint disable
    struct EPDIS : RegisterField<OTG_HS_DIEPCTL1, 30, 1, ReadWriteMode>
    {
    };
    // Set odd frame
    struct SODDFRM : RegisterField<OTG_HS_DIEPCTL1, 29, 1, WriteMode>
    {
    };
    // Set DATA0 PID
    struct SD0PID_SEVNFRM : RegisterField<OTG_HS_DIEPCTL1, 28, 1, WriteMode>
    {
    };
    // Set NAK
    struct SNAK : RegisterField<OTG_HS_DIEPCTL1, 27, 1, WriteMode>
    {
    };
    // Clear NAK
    struct CNAK : RegisterField<OTG_HS_DIEPCTL1, 26, 1, WriteMode>
    {
    };
    // TxFIFO number
    struct TXFNUM : RegisterField<OTG_HS_DIEPCTL1, 22, 4, ReadWriteMode>
    {
    };
    // STALL handshake
    struct Stall : RegisterField<OTG_HS_DIEPCTL1, 21, 1, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_DIEPCTL1, 18, 2, ReadWriteMode>
    {
    };
    // NAK status
    struct NAKSTS : RegisterField<OTG_HS_DIEPCTL1, 17, 1, ReadMode>
    {
    };
    // Even/odd frame
    struct EONUM_DPID : RegisterField<OTG_HS_DIEPCTL1, 16, 1, ReadMode>
    {
    };
    // USB active endpoint
    struct USBAEP : RegisterField<OTG_HS_DIEPCTL1, 15, 1, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_DIEPCTL1, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG device endpoint-1 interrupt register
  struct OTG_HS_DIEPINT1 : Register<0x40040928, ReadWriteMode, 0x0>
  {
    // NAK interrupt
    struct NAK : RegisterField<OTG_HS_DIEPINT1, 13, 1, ReadWriteMode>
    {
    };
    // Babble error interrupt
    struct BERR : RegisterField<OTG_HS_DIEPINT1, 12, 1, ReadWriteMode>
    {
    };
    // Packet dropped status
    struct PKTDRPSTS : RegisterField<OTG_HS_DIEPINT1, 11, 1, ReadWriteMode>
    {
    };
    // Buffer not available interrupt
    struct BNA : RegisterField<OTG_HS_DIEPINT1, 9, 1, ReadWriteMode>
    {
    };
    // Transmit Fifo Underrun
    struct TXFIFOUDRN : RegisterField<OTG_HS_DIEPINT1, 8, 1, ReadWriteMode>
    {
    };
    // Transmit FIFO empty
    struct TXFE : RegisterField<OTG_HS_DIEPINT1, 7, 1, ReadMode>
    {
    };
    // IN endpoint NAK effective
    struct INEPNE : RegisterField<OTG_HS_DIEPINT1, 6, 1, ReadWriteMode>
    {
    };
    // IN token received when TxFIFO is empty
    struct ITTXFE : RegisterField<OTG_HS_DIEPINT1, 4, 1, ReadWriteMode>
    {
    };
    // Timeout condition
    struct TOC : RegisterField<OTG_HS_DIEPINT1, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt
    struct EPDISD : RegisterField<OTG_HS_DIEPINT1, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt
    struct XFRC : RegisterField<OTG_HS_DIEPINT1, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint transfer size register
  struct OTG_HS_DIEPTSIZ1 : Register<0x40040930, ReadWriteMode, 0x0>
  {
    // Multi count
    struct MCNT : RegisterField<OTG_HS_DIEPTSIZ1, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_DIEPTSIZ1, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_DIEPTSIZ1, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-2 DMA address register
  struct OTG_HS_DIEPDMA2 : Register<0x40040934, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_DIEPDMA2, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS device IN endpoint transmit FIFO status register
  struct OTG_HS_DTXFSTS1 : Register<0x40040938, ReadMode, 0x0>
  {
    // IN endpoint TxFIFO space avail
    struct INEPTFSAV : RegisterField<OTG_HS_DTXFSTS1, 0, 16, ReadMode>
    {
    };
  };

  // OTG device endpoint-2 control register
  struct OTG_HS_DIEPCTL2 : Register<0x40040940, ReadWriteMode, 0x0>
  {
    // Endpoint enable
    struct EPENA : RegisterField<OTG_HS_DIEPCTL2, 31, 1, ReadWriteMode>
    {
    };
    // Endpoint disable
    struct EPDIS : RegisterField<OTG_HS_DIEPCTL2, 30, 1, ReadWriteMode>
    {
    };
    // Set odd frame
    struct SODDFRM : RegisterField<OTG_HS_DIEPCTL2, 29, 1, WriteMode>
    {
    };
    // Set DATA0 PID
    struct SD0PID_SEVNFRM : RegisterField<OTG_HS_DIEPCTL2, 28, 1, WriteMode>
    {
    };
    // Set NAK
    struct SNAK : RegisterField<OTG_HS_DIEPCTL2, 27, 1, WriteMode>
    {
    };
    // Clear NAK
    struct CNAK : RegisterField<OTG_HS_DIEPCTL2, 26, 1, WriteMode>
    {
    };
    // TxFIFO number
    struct TXFNUM : RegisterField<OTG_HS_DIEPCTL2, 22, 4, ReadWriteMode>
    {
    };
    // STALL handshake
    struct Stall : RegisterField<OTG_HS_DIEPCTL2, 21, 1, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_DIEPCTL2, 18, 2, ReadWriteMode>
    {
    };
    // NAK status
    struct NAKSTS : RegisterField<OTG_HS_DIEPCTL2, 17, 1, ReadMode>
    {
    };
    // Even/odd frame
    struct EONUM_DPID : RegisterField<OTG_HS_DIEPCTL2, 16, 1, ReadMode>
    {
    };
    // USB active endpoint
    struct USBAEP : RegisterField<OTG_HS_DIEPCTL2, 15, 1, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_DIEPCTL2, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG device endpoint-2 interrupt register
  struct OTG_HS_DIEPINT2 : Register<0x40040948, ReadWriteMode, 0x0>
  {
    // NAK interrupt
    struct NAK : RegisterField<OTG_HS_DIEPINT2, 13, 1, ReadWriteMode>
    {
    };
    // Babble error interrupt
    struct BERR : RegisterField<OTG_HS_DIEPINT2, 12, 1, ReadWriteMode>
    {
    };
    // Packet dropped status
    struct PKTDRPSTS : RegisterField<OTG_HS_DIEPINT2, 11, 1, ReadWriteMode>
    {
    };
    // Buffer not available interrupt
    struct BNA : RegisterField<OTG_HS_DIEPINT2, 9, 1, ReadWriteMode>
    {
    };
    // Transmit Fifo Underrun
    struct TXFIFOUDRN : RegisterField<OTG_HS_DIEPINT2, 8, 1, ReadWriteMode>
    {
    };
    // Transmit FIFO empty
    struct TXFE : RegisterField<OTG_HS_DIEPINT2, 7, 1, ReadMode>
    {
    };
    // IN endpoint NAK effective
    struct INEPNE : RegisterField<OTG_HS_DIEPINT2, 6, 1, ReadWriteMode>
    {
    };
    // IN token received when TxFIFO is empty
    struct ITTXFE : RegisterField<OTG_HS_DIEPINT2, 4, 1, ReadWriteMode>
    {
    };
    // Timeout condition
    struct TOC : RegisterField<OTG_HS_DIEPINT2, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt
    struct EPDISD : RegisterField<OTG_HS_DIEPINT2, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt
    struct XFRC : RegisterField<OTG_HS_DIEPINT2, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint transfer size register
  struct OTG_HS_DIEPTSIZ2 : Register<0x40040950, ReadWriteMode, 0x0>
  {
    // Multi count
    struct MCNT : RegisterField<OTG_HS_DIEPTSIZ2, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_DIEPTSIZ2, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_DIEPTSIZ2, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-3 DMA address register
  struct OTG_HS_DIEPDMA3 : Register<0x40040954, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_DIEPDMA3, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS device IN endpoint transmit FIFO status register
  struct OTG_HS_DTXFSTS2 : Register<0x40040958, ReadMode, 0x0>
  {
    // IN endpoint TxFIFO space avail
    struct INEPTFSAV : RegisterField<OTG_HS_DTXFSTS2, 0, 16, ReadMode>
    {
    };
  };

  // OTG device endpoint-3 control register
  struct OTG_HS_DIEPCTL3 : Register<0x40040960, ReadWriteMode, 0x0>
  {
    // Endpoint enable
    struct EPENA : RegisterField<OTG_HS_DIEPCTL3, 31, 1, ReadWriteMode>
    {
    };
    // Endpoint disable
    struct EPDIS : RegisterField<OTG_HS_DIEPCTL3, 30, 1, ReadWriteMode>
    {
    };
    // Set odd frame
    struct SODDFRM : RegisterField<OTG_HS_DIEPCTL3, 29, 1, WriteMode>
    {
    };
    // Set DATA0 PID
    struct SD0PID_SEVNFRM : RegisterField<OTG_HS_DIEPCTL3, 28, 1, WriteMode>
    {
    };
    // Set NAK
    struct SNAK : RegisterField<OTG_HS_DIEPCTL3, 27, 1, WriteMode>
    {
    };
    // Clear NAK
    struct CNAK : RegisterField<OTG_HS_DIEPCTL3, 26, 1, WriteMode>
    {
    };
    // TxFIFO number
    struct TXFNUM : RegisterField<OTG_HS_DIEPCTL3, 22, 4, ReadWriteMode>
    {
    };
    // STALL handshake
    struct Stall : RegisterField<OTG_HS_DIEPCTL3, 21, 1, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_DIEPCTL3, 18, 2, ReadWriteMode>
    {
    };
    // NAK status
    struct NAKSTS : RegisterField<OTG_HS_DIEPCTL3, 17, 1, ReadMode>
    {
    };
    // Even/odd frame
    struct EONUM_DPID : RegisterField<OTG_HS_DIEPCTL3, 16, 1, ReadMode>
    {
    };
    // USB active endpoint
    struct USBAEP : RegisterField<OTG_HS_DIEPCTL3, 15, 1, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_DIEPCTL3, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG device endpoint-3 interrupt register
  struct OTG_HS_DIEPINT3 : Register<0x40040968, ReadWriteMode, 0x0>
  {
    // NAK interrupt
    struct NAK : RegisterField<OTG_HS_DIEPINT3, 13, 1, ReadWriteMode>
    {
    };
    // Babble error interrupt
    struct BERR : RegisterField<OTG_HS_DIEPINT3, 12, 1, ReadWriteMode>
    {
    };
    // Packet dropped status
    struct PKTDRPSTS : RegisterField<OTG_HS_DIEPINT3, 11, 1, ReadWriteMode>
    {
    };
    // Buffer not available interrupt
    struct BNA : RegisterField<OTG_HS_DIEPINT3, 9, 1, ReadWriteMode>
    {
    };
    // Transmit Fifo Underrun
    struct TXFIFOUDRN : RegisterField<OTG_HS_DIEPINT3, 8, 1, ReadWriteMode>
    {
    };
    // Transmit FIFO empty
    struct TXFE : RegisterField<OTG_HS_DIEPINT3, 7, 1, ReadMode>
    {
    };
    // IN endpoint NAK effective
    struct INEPNE : RegisterField<OTG_HS_DIEPINT3, 6, 1, ReadWriteMode>
    {
    };
    // IN token received when TxFIFO is empty
    struct ITTXFE : RegisterField<OTG_HS_DIEPINT3, 4, 1, ReadWriteMode>
    {
    };
    // Timeout condition
    struct TOC : RegisterField<OTG_HS_DIEPINT3, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt
    struct EPDISD : RegisterField<OTG_HS_DIEPINT3, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt
    struct XFRC : RegisterField<OTG_HS_DIEPINT3, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint transfer size register
  struct OTG_HS_DIEPTSIZ3 : Register<0x40040970, ReadWriteMode, 0x0>
  {
    // Multi count
    struct MCNT : RegisterField<OTG_HS_DIEPTSIZ3, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_DIEPTSIZ3, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_DIEPTSIZ3, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-4 DMA address register
  struct OTG_HS_DIEPDMA4 : Register<0x40040974, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_DIEPDMA4, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS device IN endpoint transmit FIFO status register
  struct OTG_HS_DTXFSTS3 : Register<0x40040978, ReadMode, 0x0>
  {
    // IN endpoint TxFIFO space avail
    struct INEPTFSAV : RegisterField<OTG_HS_DTXFSTS3, 0, 16, ReadMode>
    {
    };
  };

  // OTG device endpoint-4 control register
  struct OTG_HS_DIEPCTL4 : Register<0x40040980, ReadWriteMode, 0x0>
  {
    // Endpoint enable
    struct EPENA : RegisterField<OTG_HS_DIEPCTL4, 31, 1, ReadWriteMode>
    {
    };
    // Endpoint disable
    struct EPDIS : RegisterField<OTG_HS_DIEPCTL4, 30, 1, ReadWriteMode>
    {
    };
    // Set odd frame
    struct SODDFRM : RegisterField<OTG_HS_DIEPCTL4, 29, 1, WriteMode>
    {
    };
    // Set DATA0 PID
    struct SD0PID_SEVNFRM : RegisterField<OTG_HS_DIEPCTL4, 28, 1, WriteMode>
    {
    };
    // Set NAK
    struct SNAK : RegisterField<OTG_HS_DIEPCTL4, 27, 1, WriteMode>
    {
    };
    // Clear NAK
    struct CNAK : RegisterField<OTG_HS_DIEPCTL4, 26, 1, WriteMode>
    {
    };
    // TxFIFO number
    struct TXFNUM : RegisterField<OTG_HS_DIEPCTL4, 22, 4, ReadWriteMode>
    {
    };
    // STALL handshake
    struct Stall : RegisterField<OTG_HS_DIEPCTL4, 21, 1, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_DIEPCTL4, 18, 2, ReadWriteMode>
    {
    };
    // NAK status
    struct NAKSTS : RegisterField<OTG_HS_DIEPCTL4, 17, 1, ReadMode>
    {
    };
    // Even/odd frame
    struct EONUM_DPID : RegisterField<OTG_HS_DIEPCTL4, 16, 1, ReadMode>
    {
    };
    // USB active endpoint
    struct USBAEP : RegisterField<OTG_HS_DIEPCTL4, 15, 1, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_DIEPCTL4, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG device endpoint-4 interrupt register
  struct OTG_HS_DIEPINT4 : Register<0x40040988, ReadWriteMode, 0x0>
  {
    // NAK interrupt
    struct NAK : RegisterField<OTG_HS_DIEPINT4, 13, 1, ReadWriteMode>
    {
    };
    // Babble error interrupt
    struct BERR : RegisterField<OTG_HS_DIEPINT4, 12, 1, ReadWriteMode>
    {
    };
    // Packet dropped status
    struct PKTDRPSTS : RegisterField<OTG_HS_DIEPINT4, 11, 1, ReadWriteMode>
    {
    };
    // Buffer not available interrupt
    struct BNA : RegisterField<OTG_HS_DIEPINT4, 9, 1, ReadWriteMode>
    {
    };
    // Transmit Fifo Underrun
    struct TXFIFOUDRN : RegisterField<OTG_HS_DIEPINT4, 8, 1, ReadWriteMode>
    {
    };
    // Transmit FIFO empty
    struct TXFE : RegisterField<OTG_HS_DIEPINT4, 7, 1, ReadMode>
    {
    };
    // IN endpoint NAK effective
    struct INEPNE : RegisterField<OTG_HS_DIEPINT4, 6, 1, ReadWriteMode>
    {
    };
    // IN token received when TxFIFO is empty
    struct ITTXFE : RegisterField<OTG_HS_DIEPINT4, 4, 1, ReadWriteMode>
    {
    };
    // Timeout condition
    struct TOC : RegisterField<OTG_HS_DIEPINT4, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt
    struct EPDISD : RegisterField<OTG_HS_DIEPINT4, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt
    struct XFRC : RegisterField<OTG_HS_DIEPINT4, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint transfer size register
  struct OTG_HS_DIEPTSIZ4 : Register<0x40040990, ReadWriteMode, 0x0>
  {
    // Multi count
    struct MCNT : RegisterField<OTG_HS_DIEPTSIZ4, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_DIEPTSIZ4, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_DIEPTSIZ4, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-5 DMA address register
  struct OTG_HS_DIEPDMA5 : Register<0x40040994, ReadWriteMode, 0x0>
  {
    // DMA address
    struct DMAADDR : RegisterField<OTG_HS_DIEPDMA5, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS device IN endpoint transmit FIFO status register
  struct OTG_HS_DTXFSTS4 : Register<0x40040998, ReadMode, 0x0>
  {
    // IN endpoint TxFIFO space avail
    struct INEPTFSAV : RegisterField<OTG_HS_DTXFSTS4, 0, 16, ReadMode>
    {
    };
  };

  // OTG device endpoint-5 control register
  struct OTG_HS_DIEPCTL5 : Register<0x400409a0, ReadWriteMode, 0x0>
  {
    // Endpoint enable
    struct EPENA : RegisterField<OTG_HS_DIEPCTL5, 31, 1, ReadWriteMode>
    {
    };
    // Endpoint disable
    struct EPDIS : RegisterField<OTG_HS_DIEPCTL5, 30, 1, ReadWriteMode>
    {
    };
    // Set odd frame
    struct SODDFRM : RegisterField<OTG_HS_DIEPCTL5, 29, 1, WriteMode>
    {
    };
    // Set DATA0 PID
    struct SD0PID_SEVNFRM : RegisterField<OTG_HS_DIEPCTL5, 28, 1, WriteMode>
    {
    };
    // Set NAK
    struct SNAK : RegisterField<OTG_HS_DIEPCTL5, 27, 1, WriteMode>
    {
    };
    // Clear NAK
    struct CNAK : RegisterField<OTG_HS_DIEPCTL5, 26, 1, WriteMode>
    {
    };
    // TxFIFO number
    struct TXFNUM : RegisterField<OTG_HS_DIEPCTL5, 22, 4, ReadWriteMode>
    {
    };
    // STALL handshake
    struct Stall : RegisterField<OTG_HS_DIEPCTL5, 21, 1, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_DIEPCTL5, 18, 2, ReadWriteMode>
    {
    };
    // NAK status
    struct NAKSTS : RegisterField<OTG_HS_DIEPCTL5, 17, 1, ReadMode>
    {
    };
    // Even/odd frame
    struct EONUM_DPID : RegisterField<OTG_HS_DIEPCTL5, 16, 1, ReadMode>
    {
    };
    // USB active endpoint
    struct USBAEP : RegisterField<OTG_HS_DIEPCTL5, 15, 1, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_DIEPCTL5, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG device endpoint-5 interrupt register
  struct OTG_HS_DIEPINT5 : Register<0x400409a8, ReadWriteMode, 0x0>
  {
    // NAK interrupt
    struct NAK : RegisterField<OTG_HS_DIEPINT5, 13, 1, ReadWriteMode>
    {
    };
    // Babble error interrupt
    struct BERR : RegisterField<OTG_HS_DIEPINT5, 12, 1, ReadWriteMode>
    {
    };
    // Packet dropped status
    struct PKTDRPSTS : RegisterField<OTG_HS_DIEPINT5, 11, 1, ReadWriteMode>
    {
    };
    // Buffer not available interrupt
    struct BNA : RegisterField<OTG_HS_DIEPINT5, 9, 1, ReadWriteMode>
    {
    };
    // Transmit Fifo Underrun
    struct TXFIFOUDRN : RegisterField<OTG_HS_DIEPINT5, 8, 1, ReadWriteMode>
    {
    };
    // Transmit FIFO empty
    struct TXFE : RegisterField<OTG_HS_DIEPINT5, 7, 1, ReadMode>
    {
    };
    // IN endpoint NAK effective
    struct INEPNE : RegisterField<OTG_HS_DIEPINT5, 6, 1, ReadWriteMode>
    {
    };
    // IN token received when TxFIFO is empty
    struct ITTXFE : RegisterField<OTG_HS_DIEPINT5, 4, 1, ReadWriteMode>
    {
    };
    // Timeout condition
    struct TOC : RegisterField<OTG_HS_DIEPINT5, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt
    struct EPDISD : RegisterField<OTG_HS_DIEPINT5, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt
    struct XFRC : RegisterField<OTG_HS_DIEPINT5, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint transfer size register
  struct OTG_HS_DIEPTSIZ5 : Register<0x400409b0, ReadWriteMode, 0x0>
  {
    // Multi count
    struct MCNT : RegisterField<OTG_HS_DIEPTSIZ5, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_DIEPTSIZ5, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_DIEPTSIZ5, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS device IN endpoint transmit FIFO status register
  struct OTG_HS_DTXFSTS5 : Register<0x400409b8, ReadMode, 0x0>
  {
    // IN endpoint TxFIFO space avail
    struct INEPTFSAV : RegisterField<OTG_HS_DTXFSTS5, 0, 16, ReadMode>
    {
    };
  };

  // OTG device endpoint-6 control register
  struct OTG_HS_DIEPCTL6 : Register<0x400409c0, ReadWriteMode, 0x0>
  {
    // Endpoint enable
    struct EPENA : RegisterField<OTG_HS_DIEPCTL6, 31, 1, ReadWriteMode>
    {
    };
    // Endpoint disable
    struct EPDIS : RegisterField<OTG_HS_DIEPCTL6, 30, 1, ReadWriteMode>
    {
    };
    // Set odd frame
    struct SODDFRM : RegisterField<OTG_HS_DIEPCTL6, 29, 1, WriteMode>
    {
    };
    // Set DATA0 PID
    struct SD0PID_SEVNFRM : RegisterField<OTG_HS_DIEPCTL6, 28, 1, WriteMode>
    {
    };
    // Set NAK
    struct SNAK : RegisterField<OTG_HS_DIEPCTL6, 27, 1, WriteMode>
    {
    };
    // Clear NAK
    struct CNAK : RegisterField<OTG_HS_DIEPCTL6, 26, 1, WriteMode>
    {
    };
    // TxFIFO number
    struct TXFNUM : RegisterField<OTG_HS_DIEPCTL6, 22, 4, ReadWriteMode>
    {
    };
    // STALL handshake
    struct Stall : RegisterField<OTG_HS_DIEPCTL6, 21, 1, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_DIEPCTL6, 18, 2, ReadWriteMode>
    {
    };
    // NAK status
    struct NAKSTS : RegisterField<OTG_HS_DIEPCTL6, 17, 1, ReadMode>
    {
    };
    // Even/odd frame
    struct EONUM_DPID : RegisterField<OTG_HS_DIEPCTL6, 16, 1, ReadMode>
    {
    };
    // USB active endpoint
    struct USBAEP : RegisterField<OTG_HS_DIEPCTL6, 15, 1, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_DIEPCTL6, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG device endpoint-6 interrupt register
  struct OTG_HS_DIEPINT6 : Register<0x400409c8, ReadWriteMode, 0x0>
  {
    // NAK interrupt
    struct NAK : RegisterField<OTG_HS_DIEPINT6, 13, 1, ReadWriteMode>
    {
    };
    // Babble error interrupt
    struct BERR : RegisterField<OTG_HS_DIEPINT6, 12, 1, ReadWriteMode>
    {
    };
    // Packet dropped status
    struct PKTDRPSTS : RegisterField<OTG_HS_DIEPINT6, 11, 1, ReadWriteMode>
    {
    };
    // Buffer not available interrupt
    struct BNA : RegisterField<OTG_HS_DIEPINT6, 9, 1, ReadWriteMode>
    {
    };
    // Transmit Fifo Underrun
    struct TXFIFOUDRN : RegisterField<OTG_HS_DIEPINT6, 8, 1, ReadWriteMode>
    {
    };
    // Transmit FIFO empty
    struct TXFE : RegisterField<OTG_HS_DIEPINT6, 7, 1, ReadMode>
    {
    };
    // IN endpoint NAK effective
    struct INEPNE : RegisterField<OTG_HS_DIEPINT6, 6, 1, ReadWriteMode>
    {
    };
    // IN token received when TxFIFO is empty
    struct ITTXFE : RegisterField<OTG_HS_DIEPINT6, 4, 1, ReadWriteMode>
    {
    };
    // Timeout condition
    struct TOC : RegisterField<OTG_HS_DIEPINT6, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt
    struct EPDISD : RegisterField<OTG_HS_DIEPINT6, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt
    struct XFRC : RegisterField<OTG_HS_DIEPINT6, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG device endpoint-7 control register
  struct OTG_HS_DIEPCTL7 : Register<0x400409e0, ReadWriteMode, 0x0>
  {
    // Endpoint enable
    struct EPENA : RegisterField<OTG_HS_DIEPCTL7, 31, 1, ReadWriteMode>
    {
    };
    // Endpoint disable
    struct EPDIS : RegisterField<OTG_HS_DIEPCTL7, 30, 1, ReadWriteMode>
    {
    };
    // Set odd frame
    struct SODDFRM : RegisterField<OTG_HS_DIEPCTL7, 29, 1, WriteMode>
    {
    };
    // Set DATA0 PID
    struct SD0PID_SEVNFRM : RegisterField<OTG_HS_DIEPCTL7, 28, 1, WriteMode>
    {
    };
    // Set NAK
    struct SNAK : RegisterField<OTG_HS_DIEPCTL7, 27, 1, WriteMode>
    {
    };
    // Clear NAK
    struct CNAK : RegisterField<OTG_HS_DIEPCTL7, 26, 1, WriteMode>
    {
    };
    // TxFIFO number
    struct TXFNUM : RegisterField<OTG_HS_DIEPCTL7, 22, 4, ReadWriteMode>
    {
    };
    // STALL handshake
    struct Stall : RegisterField<OTG_HS_DIEPCTL7, 21, 1, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_DIEPCTL7, 18, 2, ReadWriteMode>
    {
    };
    // NAK status
    struct NAKSTS : RegisterField<OTG_HS_DIEPCTL7, 17, 1, ReadMode>
    {
    };
    // Even/odd frame
    struct EONUM_DPID : RegisterField<OTG_HS_DIEPCTL7, 16, 1, ReadMode>
    {
    };
    // USB active endpoint
    struct USBAEP : RegisterField<OTG_HS_DIEPCTL7, 15, 1, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_DIEPCTL7, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG device endpoint-7 interrupt register
  struct OTG_HS_DIEPINT7 : Register<0x400409e8, ReadWriteMode, 0x0>
  {
    // NAK interrupt
    struct NAK : RegisterField<OTG_HS_DIEPINT7, 13, 1, ReadWriteMode>
    {
    };
    // Babble error interrupt
    struct BERR : RegisterField<OTG_HS_DIEPINT7, 12, 1, ReadWriteMode>
    {
    };
    // Packet dropped status
    struct PKTDRPSTS : RegisterField<OTG_HS_DIEPINT7, 11, 1, ReadWriteMode>
    {
    };
    // Buffer not available interrupt
    struct BNA : RegisterField<OTG_HS_DIEPINT7, 9, 1, ReadWriteMode>
    {
    };
    // Transmit Fifo Underrun
    struct TXFIFOUDRN : RegisterField<OTG_HS_DIEPINT7, 8, 1, ReadWriteMode>
    {
    };
    // Transmit FIFO empty
    struct TXFE : RegisterField<OTG_HS_DIEPINT7, 7, 1, ReadMode>
    {
    };
    // IN endpoint NAK effective
    struct INEPNE : RegisterField<OTG_HS_DIEPINT7, 6, 1, ReadWriteMode>
    {
    };
    // IN token received when TxFIFO is empty
    struct ITTXFE : RegisterField<OTG_HS_DIEPINT7, 4, 1, ReadWriteMode>
    {
    };
    // Timeout condition
    struct TOC : RegisterField<OTG_HS_DIEPINT7, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt
    struct EPDISD : RegisterField<OTG_HS_DIEPINT7, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt
    struct XFRC : RegisterField<OTG_HS_DIEPINT7, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device control OUT endpoint 0 control register
  struct OTG_HS_DOEPCTL0 : Register<0x40040b00, ReadWriteMode, 0x8000>
  {
    // Endpoint enable
    struct EPENA : RegisterField<OTG_HS_DOEPCTL0, 31, 1, WriteMode>
    {
    };
    // Endpoint disable
    struct EPDIS : RegisterField<OTG_HS_DOEPCTL0, 30, 1, ReadMode>
    {
    };
    // Set NAK
    struct SNAK : RegisterField<OTG_HS_DOEPCTL0, 27, 1, WriteMode>
    {
    };
    // Clear NAK
    struct CNAK : RegisterField<OTG_HS_DOEPCTL0, 26, 1, WriteMode>
    {
    };
    // STALL handshake
    struct Stall : RegisterField<OTG_HS_DOEPCTL0, 21, 1, ReadWriteMode>
    {
    };
    // Snoop mode
    struct SNPM : RegisterField<OTG_HS_DOEPCTL0, 20, 1, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_DOEPCTL0, 18, 2, ReadMode>
    {
    };
    // NAK status
    struct NAKSTS : RegisterField<OTG_HS_DOEPCTL0, 17, 1, ReadMode>
    {
    };
    // USB active endpoint
    struct USBAEP : RegisterField<OTG_HS_DOEPCTL0, 15, 1, ReadMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_DOEPCTL0, 0, 2, ReadMode>
    {
    };
  };

  // OTG_HS device endpoint-0 interrupt register
  struct OTG_HS_DOEPINT0 : Register<0x40040b08, ReadWriteMode, 0x80>
  {
    // NYET interrupt
    struct NYET : RegisterField<OTG_HS_DOEPINT0, 14, 1, ReadWriteMode>
    {
    };
    // Back-to-back SETUP packets received
    struct B2BSTUP : RegisterField<OTG_HS_DOEPINT0, 6, 1, ReadWriteMode>
    {
    };
    // OUT token received when endpoint disabled
    struct OTEPDIS : RegisterField<OTG_HS_DOEPINT0, 4, 1, ReadWriteMode>
    {
    };
    // SETUP phase done
    struct STUP : RegisterField<OTG_HS_DOEPINT0, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt
    struct EPDISD : RegisterField<OTG_HS_DOEPINT0, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt
    struct XFRC : RegisterField<OTG_HS_DOEPINT0, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-1 transfer size register
  struct OTG_HS_DOEPTSIZ0 : Register<0x40040b10, ReadWriteMode, 0x0>
  {
    // SETUP packet count
    struct STUPCNT : RegisterField<OTG_HS_DOEPTSIZ0, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_DOEPTSIZ0, 19, 1, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_DOEPTSIZ0, 0, 7, ReadWriteMode>
    {
    };
  };

  // OTG device endpoint-1 control register
  struct OTG_HS_DOEPCTL1 : Register<0x40040b20, ReadWriteMode, 0x0>
  {
    // Endpoint enable
    struct EPENA : RegisterField<OTG_HS_DOEPCTL1, 31, 1, ReadWriteMode>
    {
    };
    // Endpoint disable
    struct EPDIS : RegisterField<OTG_HS_DOEPCTL1, 30, 1, ReadWriteMode>
    {
    };
    // Set odd frame
    struct SODDFRM : RegisterField<OTG_HS_DOEPCTL1, 29, 1, WriteMode>
    {
    };
    // Set DATA0 PID/Set even frame
    struct SD0PID_SEVNFRM : RegisterField<OTG_HS_DOEPCTL1, 28, 1, WriteMode>
    {
    };
    // Set NAK
    struct SNAK : RegisterField<OTG_HS_DOEPCTL1, 27, 1, WriteMode>
    {
    };
    // Clear NAK
    struct CNAK : RegisterField<OTG_HS_DOEPCTL1, 26, 1, WriteMode>
    {
    };
    // STALL handshake
    struct Stall : RegisterField<OTG_HS_DOEPCTL1, 21, 1, ReadWriteMode>
    {
    };
    // Snoop mode
    struct SNPM : RegisterField<OTG_HS_DOEPCTL1, 20, 1, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_DOEPCTL1, 18, 2, ReadWriteMode>
    {
    };
    // NAK status
    struct NAKSTS : RegisterField<OTG_HS_DOEPCTL1, 17, 1, ReadMode>
    {
    };
    // Even odd frame/Endpoint data PID
    struct EONUM_DPID : RegisterField<OTG_HS_DOEPCTL1, 16, 1, ReadMode>
    {
    };
    // USB active endpoint
    struct USBAEP : RegisterField<OTG_HS_DOEPCTL1, 15, 1, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_DOEPCTL1, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-1 interrupt register
  struct OTG_HS_DOEPINT1 : Register<0x40040b28, ReadWriteMode, 0x0>
  {
    // NYET interrupt
    struct NYET : RegisterField<OTG_HS_DOEPINT1, 14, 1, ReadWriteMode>
    {
    };
    // Back-to-back SETUP packets received
    struct B2BSTUP : RegisterField<OTG_HS_DOEPINT1, 6, 1, ReadWriteMode>
    {
    };
    // OUT token received when endpoint disabled
    struct OTEPDIS : RegisterField<OTG_HS_DOEPINT1, 4, 1, ReadWriteMode>
    {
    };
    // SETUP phase done
    struct STUP : RegisterField<OTG_HS_DOEPINT1, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt
    struct EPDISD : RegisterField<OTG_HS_DOEPINT1, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt
    struct XFRC : RegisterField<OTG_HS_DOEPINT1, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-2 transfer size register
  struct OTG_HS_DOEPTSIZ1 : Register<0x40040b30, ReadWriteMode, 0x0>
  {
    // Received data PID/SETUP packet count
    struct RXDPID_STUPCNT : RegisterField<OTG_HS_DOEPTSIZ1, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_DOEPTSIZ1, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_DOEPTSIZ1, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG device endpoint-2 control register
  struct OTG_HS_DOEPCTL2 : Register<0x40040b40, ReadWriteMode, 0x0>
  {
    // Endpoint enable
    struct EPENA : RegisterField<OTG_HS_DOEPCTL2, 31, 1, ReadWriteMode>
    {
    };
    // Endpoint disable
    struct EPDIS : RegisterField<OTG_HS_DOEPCTL2, 30, 1, ReadWriteMode>
    {
    };
    // Set odd frame
    struct SODDFRM : RegisterField<OTG_HS_DOEPCTL2, 29, 1, WriteMode>
    {
    };
    // Set DATA0 PID/Set even frame
    struct SD0PID_SEVNFRM : RegisterField<OTG_HS_DOEPCTL2, 28, 1, WriteMode>
    {
    };
    // Set NAK
    struct SNAK : RegisterField<OTG_HS_DOEPCTL2, 27, 1, WriteMode>
    {
    };
    // Clear NAK
    struct CNAK : RegisterField<OTG_HS_DOEPCTL2, 26, 1, WriteMode>
    {
    };
    // STALL handshake
    struct Stall : RegisterField<OTG_HS_DOEPCTL2, 21, 1, ReadWriteMode>
    {
    };
    // Snoop mode
    struct SNPM : RegisterField<OTG_HS_DOEPCTL2, 20, 1, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_DOEPCTL2, 18, 2, ReadWriteMode>
    {
    };
    // NAK status
    struct NAKSTS : RegisterField<OTG_HS_DOEPCTL2, 17, 1, ReadMode>
    {
    };
    // Even odd frame/Endpoint data PID
    struct EONUM_DPID : RegisterField<OTG_HS_DOEPCTL2, 16, 1, ReadMode>
    {
    };
    // USB active endpoint
    struct USBAEP : RegisterField<OTG_HS_DOEPCTL2, 15, 1, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_DOEPCTL2, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-2 interrupt register
  struct OTG_HS_DOEPINT2 : Register<0x40040b48, ReadWriteMode, 0x0>
  {
    // NYET interrupt
    struct NYET : RegisterField<OTG_HS_DOEPINT2, 14, 1, ReadWriteMode>
    {
    };
    // Back-to-back SETUP packets received
    struct B2BSTUP : RegisterField<OTG_HS_DOEPINT2, 6, 1, ReadWriteMode>
    {
    };
    // OUT token received when endpoint disabled
    struct OTEPDIS : RegisterField<OTG_HS_DOEPINT2, 4, 1, ReadWriteMode>
    {
    };
    // SETUP phase done
    struct STUP : RegisterField<OTG_HS_DOEPINT2, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt
    struct EPDISD : RegisterField<OTG_HS_DOEPINT2, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt
    struct XFRC : RegisterField<OTG_HS_DOEPINT2, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-3 transfer size register
  struct OTG_HS_DOEPTSIZ2 : Register<0x40040b50, ReadWriteMode, 0x0>
  {
    // Received data PID/SETUP packet count
    struct RXDPID_STUPCNT : RegisterField<OTG_HS_DOEPTSIZ2, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_DOEPTSIZ2, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_DOEPTSIZ2, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG device endpoint-3 control register
  struct OTG_HS_DOEPCTL3 : Register<0x40040b60, ReadWriteMode, 0x0>
  {
    // Endpoint enable
    struct EPENA : RegisterField<OTG_HS_DOEPCTL3, 31, 1, ReadWriteMode>
    {
    };
    // Endpoint disable
    struct EPDIS : RegisterField<OTG_HS_DOEPCTL3, 30, 1, ReadWriteMode>
    {
    };
    // Set odd frame
    struct SODDFRM : RegisterField<OTG_HS_DOEPCTL3, 29, 1, WriteMode>
    {
    };
    // Set DATA0 PID/Set even frame
    struct SD0PID_SEVNFRM : RegisterField<OTG_HS_DOEPCTL3, 28, 1, WriteMode>
    {
    };
    // Set NAK
    struct SNAK : RegisterField<OTG_HS_DOEPCTL3, 27, 1, WriteMode>
    {
    };
    // Clear NAK
    struct CNAK : RegisterField<OTG_HS_DOEPCTL3, 26, 1, WriteMode>
    {
    };
    // STALL handshake
    struct Stall : RegisterField<OTG_HS_DOEPCTL3, 21, 1, ReadWriteMode>
    {
    };
    // Snoop mode
    struct SNPM : RegisterField<OTG_HS_DOEPCTL3, 20, 1, ReadWriteMode>
    {
    };
    // Endpoint type
    struct EPTYP : RegisterField<OTG_HS_DOEPCTL3, 18, 2, ReadWriteMode>
    {
    };
    // NAK status
    struct NAKSTS : RegisterField<OTG_HS_DOEPCTL3, 17, 1, ReadMode>
    {
    };
    // Even odd frame/Endpoint data PID
    struct EONUM_DPID : RegisterField<OTG_HS_DOEPCTL3, 16, 1, ReadMode>
    {
    };
    // USB active endpoint
    struct USBAEP : RegisterField<OTG_HS_DOEPCTL3, 15, 1, ReadWriteMode>
    {
    };
    // Maximum packet size
    struct MPSIZ : RegisterField<OTG_HS_DOEPCTL3, 0, 11, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-3 interrupt register
  struct OTG_HS_DOEPINT3 : Register<0x40040b68, ReadWriteMode, 0x0>
  {
    // NYET interrupt
    struct NYET : RegisterField<OTG_HS_DOEPINT3, 14, 1, ReadWriteMode>
    {
    };
    // Back-to-back SETUP packets received
    struct B2BSTUP : RegisterField<OTG_HS_DOEPINT3, 6, 1, ReadWriteMode>
    {
    };
    // OUT token received when endpoint disabled
    struct OTEPDIS : RegisterField<OTG_HS_DOEPINT3, 4, 1, ReadWriteMode>
    {
    };
    // SETUP phase done
    struct STUP : RegisterField<OTG_HS_DOEPINT3, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt
    struct EPDISD : RegisterField<OTG_HS_DOEPINT3, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt
    struct XFRC : RegisterField<OTG_HS_DOEPINT3, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-4 transfer size register
  struct OTG_HS_DOEPTSIZ3 : Register<0x40040b70, ReadWriteMode, 0x0>
  {
    // Received data PID/SETUP packet count
    struct RXDPID_STUPCNT : RegisterField<OTG_HS_DOEPTSIZ3, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_DOEPTSIZ3, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_DOEPTSIZ3, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-4 interrupt register
  struct OTG_HS_DOEPINT4 : Register<0x40040b88, ReadWriteMode, 0x0>
  {
    // NYET interrupt
    struct NYET : RegisterField<OTG_HS_DOEPINT4, 14, 1, ReadWriteMode>
    {
    };
    // Back-to-back SETUP packets received
    struct B2BSTUP : RegisterField<OTG_HS_DOEPINT4, 6, 1, ReadWriteMode>
    {
    };
    // OUT token received when endpoint disabled
    struct OTEPDIS : RegisterField<OTG_HS_DOEPINT4, 4, 1, ReadWriteMode>
    {
    };
    // SETUP phase done
    struct STUP : RegisterField<OTG_HS_DOEPINT4, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt
    struct EPDISD : RegisterField<OTG_HS_DOEPINT4, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt
    struct XFRC : RegisterField<OTG_HS_DOEPINT4, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-5 transfer size register
  struct OTG_HS_DOEPTSIZ4 : Register<0x40040b90, ReadWriteMode, 0x0>
  {
    // Received data PID/SETUP packet count
    struct RXDPID_STUPCNT : RegisterField<OTG_HS_DOEPTSIZ4, 29, 2, ReadWriteMode>
    {
    };
    // Packet count
    struct PKTCNT : RegisterField<OTG_HS_DOEPTSIZ4, 19, 10, ReadWriteMode>
    {
    };
    // Transfer size
    struct XFRSIZ : RegisterField<OTG_HS_DOEPTSIZ4, 0, 19, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-5 interrupt register
  struct OTG_HS_DOEPINT5 : Register<0x40040ba8, ReadWriteMode, 0x0>
  {
    // NYET interrupt
    struct NYET : RegisterField<OTG_HS_DOEPINT5, 14, 1, ReadWriteMode>
    {
    };
    // Back-to-back SETUP packets received
    struct B2BSTUP : RegisterField<OTG_HS_DOEPINT5, 6, 1, ReadWriteMode>
    {
    };
    // OUT token received when endpoint disabled
    struct OTEPDIS : RegisterField<OTG_HS_DOEPINT5, 4, 1, ReadWriteMode>
    {
    };
    // SETUP phase done
    struct STUP : RegisterField<OTG_HS_DOEPINT5, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt
    struct EPDISD : RegisterField<OTG_HS_DOEPINT5, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt
    struct XFRC : RegisterField<OTG_HS_DOEPINT5, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-6 interrupt register
  struct OTG_HS_DOEPINT6 : Register<0x40040bc8, ReadWriteMode, 0x0>
  {
    // NYET interrupt
    struct NYET : RegisterField<OTG_HS_DOEPINT6, 14, 1, ReadWriteMode>
    {
    };
    // Back-to-back SETUP packets received
    struct B2BSTUP : RegisterField<OTG_HS_DOEPINT6, 6, 1, ReadWriteMode>
    {
    };
    // OUT token received when endpoint disabled
    struct OTEPDIS : RegisterField<OTG_HS_DOEPINT6, 4, 1, ReadWriteMode>
    {
    };
    // SETUP phase done
    struct STUP : RegisterField<OTG_HS_DOEPINT6, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt
    struct EPDISD : RegisterField<OTG_HS_DOEPINT6, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt
    struct XFRC : RegisterField<OTG_HS_DOEPINT6, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS device endpoint-7 interrupt register
  struct OTG_HS_DOEPINT7 : Register<0x40040be8, ReadWriteMode, 0x0>
  {
    // NYET interrupt
    struct NYET : RegisterField<OTG_HS_DOEPINT7, 14, 1, ReadWriteMode>
    {
    };
    // Back-to-back SETUP packets received
    struct B2BSTUP : RegisterField<OTG_HS_DOEPINT7, 6, 1, ReadWriteMode>
    {
    };
    // OUT token received when endpoint disabled
    struct OTEPDIS : RegisterField<OTG_HS_DOEPINT7, 4, 1, ReadWriteMode>
    {
    };
    // SETUP phase done
    struct STUP : RegisterField<OTG_HS_DOEPINT7, 3, 1, ReadWriteMode>
    {
    };
    // Endpoint disabled interrupt
    struct EPDISD : RegisterField<OTG_HS_DOEPINT7, 1, 1, ReadWriteMode>
    {
    };
    // Transfer completed interrupt
    struct XFRC : RegisterField<OTG_HS_DOEPINT7, 0, 1, ReadWriteMode>
    {
    };
  };

// Large Registers

};


