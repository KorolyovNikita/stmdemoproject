/******************************************************************************
* Filename : otg_hs_global_registers.hpp
*
* Details  : USB on the go high speed
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct OTG_HS_GLOBAL
{
  // OTG_HS control and status register
  struct OTG_HS_GOTGCTL : Register<0x40040000, ReadWriteMode, 0x800>
  {
    // B-session valid
    struct BSVLD : RegisterField<OTG_HS_GOTGCTL, 19, 1, ReadMode>
    {
    };
    // A-session valid
    struct ASVLD : RegisterField<OTG_HS_GOTGCTL, 18, 1, ReadMode>
    {
    };
    // Long/short debounce time
    struct DBCT : RegisterField<OTG_HS_GOTGCTL, 17, 1, ReadMode>
    {
    };
    // Connector ID status
    struct CIDSTS : RegisterField<OTG_HS_GOTGCTL, 16, 1, ReadMode>
    {
    };
    // Device HNP enabled
    struct DHNPEN : RegisterField<OTG_HS_GOTGCTL, 11, 1, ReadWriteMode>
    {
    };
    // Host set HNP enable
    struct HSHNPEN : RegisterField<OTG_HS_GOTGCTL, 10, 1, ReadWriteMode>
    {
    };
    // HNP request
    struct HNPRQ : RegisterField<OTG_HS_GOTGCTL, 9, 1, ReadWriteMode>
    {
    };
    // Host negotiation success
    struct HNGSCS : RegisterField<OTG_HS_GOTGCTL, 8, 1, ReadMode>
    {
    };
    // Session request
    struct SRQ : RegisterField<OTG_HS_GOTGCTL, 1, 1, ReadWriteMode>
    {
    };
    // Session request success
    struct SRQSCS : RegisterField<OTG_HS_GOTGCTL, 0, 1, ReadMode>
    {
    };
  };

  // OTG_HS interrupt register
  struct OTG_HS_GOTGINT : Register<0x40040004, ReadWriteMode, 0x0>
  {
    // Debounce done
    struct DBCDNE : RegisterField<OTG_HS_GOTGINT, 19, 1, ReadWriteMode>
    {
    };
    // A-device timeout change
    struct ADTOCHG : RegisterField<OTG_HS_GOTGINT, 18, 1, ReadWriteMode>
    {
    };
    // Host negotiation detected
    struct HNGDET : RegisterField<OTG_HS_GOTGINT, 17, 1, ReadWriteMode>
    {
    };
    // Host negotiation success status change
    struct HNSSCHG : RegisterField<OTG_HS_GOTGINT, 9, 1, ReadWriteMode>
    {
    };
    // Session request success status change
    struct SRSSCHG : RegisterField<OTG_HS_GOTGINT, 8, 1, ReadWriteMode>
    {
    };
    // Session end detected
    struct SEDET : RegisterField<OTG_HS_GOTGINT, 2, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS AHB configuration register
  struct OTG_HS_GAHBCFG : Register<0x40040008, ReadWriteMode, 0x0>
  {
    // Periodic TxFIFO empty level
    struct PTXFELVL : RegisterField<OTG_HS_GAHBCFG, 8, 1, ReadWriteMode>
    {
    };
    // TxFIFO empty level
    struct TXFELVL : RegisterField<OTG_HS_GAHBCFG, 7, 1, ReadWriteMode>
    {
    };
    // DMA enable
    struct DMAEN : RegisterField<OTG_HS_GAHBCFG, 5, 1, ReadWriteMode>
    {
    };
    // Burst length/type
    struct HBSTLEN : RegisterField<OTG_HS_GAHBCFG, 1, 4, ReadWriteMode>
    {
    };
    // Global interrupt mask
    struct GINT : RegisterField<OTG_HS_GAHBCFG, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS USB configuration register
  struct OTG_HS_GUSBCFG : Register<0x4004000c, ReadWriteMode, 0xa00>
  {
    // Corrupt Tx packet
    struct CTXPKT : RegisterField<OTG_HS_GUSBCFG, 31, 1, ReadWriteMode>
    {
    };
    // Forced peripheral mode
    struct FDMOD : RegisterField<OTG_HS_GUSBCFG, 30, 1, ReadWriteMode>
    {
    };
    // Forced host mode
    struct FHMOD : RegisterField<OTG_HS_GUSBCFG, 29, 1, ReadWriteMode>
    {
    };
    // ULPI interface protect disable
    struct ULPIIPD : RegisterField<OTG_HS_GUSBCFG, 25, 1, ReadWriteMode>
    {
    };
    // Indicator pass through
    struct PTCI : RegisterField<OTG_HS_GUSBCFG, 24, 1, ReadWriteMode>
    {
    };
    // Indicator complement
    struct PCCI : RegisterField<OTG_HS_GUSBCFG, 23, 1, ReadWriteMode>
    {
    };
    // TermSel DLine pulsing selection
    struct TSDPS : RegisterField<OTG_HS_GUSBCFG, 22, 1, ReadWriteMode>
    {
    };
    // ULPI external VBUS indicator
    struct ULPIEVBUSI : RegisterField<OTG_HS_GUSBCFG, 21, 1, ReadWriteMode>
    {
    };
    // ULPI External VBUS Drive
    struct ULPIEVBUSD : RegisterField<OTG_HS_GUSBCFG, 20, 1, ReadWriteMode>
    {
    };
    // ULPI Clock SuspendM
    struct ULPICSM : RegisterField<OTG_HS_GUSBCFG, 19, 1, ReadWriteMode>
    {
    };
    // ULPI Auto-resume
    struct ULPIAR : RegisterField<OTG_HS_GUSBCFG, 18, 1, ReadWriteMode>
    {
    };
    // ULPI FS/LS select
    struct ULPIFSLS : RegisterField<OTG_HS_GUSBCFG, 17, 1, ReadWriteMode>
    {
    };
    // PHY Low-power clock select
    struct PHYLPCS : RegisterField<OTG_HS_GUSBCFG, 15, 1, ReadWriteMode>
    {
    };
    // USB turnaround time
    struct TRDT : RegisterField<OTG_HS_GUSBCFG, 10, 4, ReadWriteMode>
    {
    };
    // HNP-capable
    struct HNPCAP : RegisterField<OTG_HS_GUSBCFG, 9, 1, ReadWriteMode>
    {
    };
    // SRP-capable
    struct SRPCAP : RegisterField<OTG_HS_GUSBCFG, 8, 1, ReadWriteMode>
    {
    };
    // USB 2.0 high-speed ULPI PHY or USB 1.1 full-speed serial transceiver select
    struct PHYSEL : RegisterField<OTG_HS_GUSBCFG, 6, 1, WriteMode>
    {
    };
    // FS timeout calibration
    struct TOCAL : RegisterField<OTG_HS_GUSBCFG, 0, 3, ReadWriteMode>
    {
    };
  };

  // OTG_HS reset register
  struct OTG_HS_GRSTCTL : Register<0x40040010, ReadWriteMode, 0x20000000>
  {
    // AHB master idle
    struct AHBIDL : RegisterField<OTG_HS_GRSTCTL, 31, 1, ReadMode>
    {
    };
    // DMA request signal
    struct DMAREQ : RegisterField<OTG_HS_GRSTCTL, 30, 1, ReadMode>
    {
    };
    // TxFIFO number
    struct TXFNUM : RegisterField<OTG_HS_GRSTCTL, 6, 5, ReadWriteMode>
    {
    };
    // TxFIFO flush
    struct TXFFLSH : RegisterField<OTG_HS_GRSTCTL, 5, 1, ReadWriteMode>
    {
    };
    // RxFIFO flush
    struct RXFFLSH : RegisterField<OTG_HS_GRSTCTL, 4, 1, ReadWriteMode>
    {
    };
    // Host frame counter reset
    struct FCRST : RegisterField<OTG_HS_GRSTCTL, 2, 1, ReadWriteMode>
    {
    };
    // HCLK soft reset
    struct HSRST : RegisterField<OTG_HS_GRSTCTL, 1, 1, ReadWriteMode>
    {
    };
    // Core soft reset
    struct CSRST : RegisterField<OTG_HS_GRSTCTL, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS core interrupt register
  struct OTG_HS_GINTSTS : Register<0x40040014, ReadWriteMode, 0x4000020>
  {
    // Resume/remote wakeup detected interrupt
    struct WKUINT : RegisterField<OTG_HS_GINTSTS, 31, 1, ReadWriteMode>
    {
    };
    // Session request/new session detected interrupt
    struct SRQINT : RegisterField<OTG_HS_GINTSTS, 30, 1, ReadWriteMode>
    {
    };
    // Disconnect detected interrupt
    struct DISCINT : RegisterField<OTG_HS_GINTSTS, 29, 1, ReadWriteMode>
    {
    };
    // Connector ID status change
    struct CIDSCHG : RegisterField<OTG_HS_GINTSTS, 28, 1, ReadWriteMode>
    {
    };
    // Periodic TxFIFO empty
    struct PTXFE : RegisterField<OTG_HS_GINTSTS, 26, 1, ReadMode>
    {
    };
    // Host channels interrupt
    struct HCINT : RegisterField<OTG_HS_GINTSTS, 25, 1, ReadMode>
    {
    };
    // Host port interrupt
    struct HPRTINT : RegisterField<OTG_HS_GINTSTS, 24, 1, ReadMode>
    {
    };
    // Data fetch suspended
    struct DATAFSUSP : RegisterField<OTG_HS_GINTSTS, 22, 1, ReadWriteMode>
    {
    };
    // Incomplete periodic transfer
    struct PXFR_INCOMPISOOUT : RegisterField<OTG_HS_GINTSTS, 21, 1, ReadWriteMode>
    {
    };
    // Incomplete isochronous IN transfer
    struct IISOIXFR : RegisterField<OTG_HS_GINTSTS, 20, 1, ReadWriteMode>
    {
    };
    // OUT endpoint interrupt
    struct OEPINT : RegisterField<OTG_HS_GINTSTS, 19, 1, ReadMode>
    {
    };
    // IN endpoint interrupt
    struct IEPINT : RegisterField<OTG_HS_GINTSTS, 18, 1, ReadMode>
    {
    };
    // End of periodic frame interrupt
    struct EOPF : RegisterField<OTG_HS_GINTSTS, 15, 1, ReadWriteMode>
    {
    };
    // Isochronous OUT packet dropped interrupt
    struct ISOODRP : RegisterField<OTG_HS_GINTSTS, 14, 1, ReadWriteMode>
    {
    };
    // Enumeration done
    struct ENUMDNE : RegisterField<OTG_HS_GINTSTS, 13, 1, ReadWriteMode>
    {
    };
    // USB reset
    struct USBRST : RegisterField<OTG_HS_GINTSTS, 12, 1, ReadWriteMode>
    {
    };
    // USB suspend
    struct USBSUSP : RegisterField<OTG_HS_GINTSTS, 11, 1, ReadWriteMode>
    {
    };
    // Early suspend
    struct ESUSP : RegisterField<OTG_HS_GINTSTS, 10, 1, ReadWriteMode>
    {
    };
    // Global OUT NAK effective
    struct BOUTNAKEFF : RegisterField<OTG_HS_GINTSTS, 7, 1, ReadMode>
    {
    };
    // Global IN nonperiodic NAK effective
    struct GINAKEFF : RegisterField<OTG_HS_GINTSTS, 6, 1, ReadMode>
    {
    };
    // Nonperiodic TxFIFO empty
    struct NPTXFE : RegisterField<OTG_HS_GINTSTS, 5, 1, ReadMode>
    {
    };
    // RxFIFO nonempty
    struct RXFLVL : RegisterField<OTG_HS_GINTSTS, 4, 1, ReadMode>
    {
    };
    // Start of frame
    struct SOF : RegisterField<OTG_HS_GINTSTS, 3, 1, ReadWriteMode>
    {
    };
    // OTG interrupt
    struct OTGINT : RegisterField<OTG_HS_GINTSTS, 2, 1, ReadMode>
    {
    };
    // Mode mismatch interrupt
    struct MMIS : RegisterField<OTG_HS_GINTSTS, 1, 1, ReadWriteMode>
    {
    };
    // Current mode of operation
    struct CMOD : RegisterField<OTG_HS_GINTSTS, 0, 1, ReadMode>
    {
    };
  };

  // OTG_HS interrupt mask register
  struct OTG_HS_GINTMSK : Register<0x40040018, ReadWriteMode, 0x0>
  {
    // Resume/remote wakeup detected interrupt mask
    struct WUIM : RegisterField<OTG_HS_GINTMSK, 31, 1, ReadWriteMode>
    {
    };
    // Session request/new session detected interrupt mask
    struct SRQIM : RegisterField<OTG_HS_GINTMSK, 30, 1, ReadWriteMode>
    {
    };
    // Disconnect detected interrupt mask
    struct DISCINT : RegisterField<OTG_HS_GINTMSK, 29, 1, ReadWriteMode>
    {
    };
    // Connector ID status change mask
    struct CIDSCHGM : RegisterField<OTG_HS_GINTMSK, 28, 1, ReadWriteMode>
    {
    };
    // Periodic TxFIFO empty mask
    struct PTXFEM : RegisterField<OTG_HS_GINTMSK, 26, 1, ReadWriteMode>
    {
    };
    // Host channels interrupt mask
    struct HCIM : RegisterField<OTG_HS_GINTMSK, 25, 1, ReadWriteMode>
    {
    };
    // Host port interrupt mask
    struct PRTIM : RegisterField<OTG_HS_GINTMSK, 24, 1, ReadMode>
    {
    };
    // Data fetch suspended mask
    struct FSUSPM : RegisterField<OTG_HS_GINTMSK, 22, 1, ReadWriteMode>
    {
    };
    // Incomplete periodic transfer mask
    struct PXFRM_IISOOXFRM : RegisterField<OTG_HS_GINTMSK, 21, 1, ReadWriteMode>
    {
    };
    // Incomplete isochronous IN transfer mask
    struct IISOIXFRM : RegisterField<OTG_HS_GINTMSK, 20, 1, ReadWriteMode>
    {
    };
    // OUT endpoints interrupt mask
    struct OEPINT : RegisterField<OTG_HS_GINTMSK, 19, 1, ReadWriteMode>
    {
    };
    // IN endpoints interrupt mask
    struct IEPINT : RegisterField<OTG_HS_GINTMSK, 18, 1, ReadWriteMode>
    {
    };
    // Endpoint mismatch interrupt mask
    struct EPMISM : RegisterField<OTG_HS_GINTMSK, 17, 1, ReadWriteMode>
    {
    };
    // End of periodic frame interrupt mask
    struct EOPFM : RegisterField<OTG_HS_GINTMSK, 15, 1, ReadWriteMode>
    {
    };
    // Isochronous OUT packet dropped interrupt mask
    struct ISOODRPM : RegisterField<OTG_HS_GINTMSK, 14, 1, ReadWriteMode>
    {
    };
    // Enumeration done mask
    struct ENUMDNEM : RegisterField<OTG_HS_GINTMSK, 13, 1, ReadWriteMode>
    {
    };
    // USB reset mask
    struct USBRST : RegisterField<OTG_HS_GINTMSK, 12, 1, ReadWriteMode>
    {
    };
    // USB suspend mask
    struct USBSUSPM : RegisterField<OTG_HS_GINTMSK, 11, 1, ReadWriteMode>
    {
    };
    // Early suspend mask
    struct ESUSPM : RegisterField<OTG_HS_GINTMSK, 10, 1, ReadWriteMode>
    {
    };
    // Global OUT NAK effective mask
    struct GONAKEFFM : RegisterField<OTG_HS_GINTMSK, 7, 1, ReadWriteMode>
    {
    };
    // Global nonperiodic IN NAK effective mask
    struct GINAKEFFM : RegisterField<OTG_HS_GINTMSK, 6, 1, ReadWriteMode>
    {
    };
    // Nonperiodic TxFIFO empty mask
    struct NPTXFEM : RegisterField<OTG_HS_GINTMSK, 5, 1, ReadWriteMode>
    {
    };
    // Receive FIFO nonempty mask
    struct RXFLVLM : RegisterField<OTG_HS_GINTMSK, 4, 1, ReadWriteMode>
    {
    };
    // Start of frame mask
    struct SOFM : RegisterField<OTG_HS_GINTMSK, 3, 1, ReadWriteMode>
    {
    };
    // OTG interrupt mask
    struct OTGINT : RegisterField<OTG_HS_GINTMSK, 2, 1, ReadWriteMode>
    {
    };
    // Mode mismatch interrupt mask
    struct MMISM : RegisterField<OTG_HS_GINTMSK, 1, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS Receive status debug read register (host mode)
  struct OTG_HS_GRXSTSR_Host : Register<0x4004001c, ReadMode, 0x0>
  {
    // Packet status
    struct PKTSTS : RegisterField<OTG_HS_GRXSTSR_Host, 17, 4, ReadMode>
    {
    };
    // Data PID
    struct DPID : RegisterField<OTG_HS_GRXSTSR_Host, 15, 2, ReadMode>
    {
    };
    // Byte count
    struct BCNT : RegisterField<OTG_HS_GRXSTSR_Host, 4, 11, ReadMode>
    {
    };
    // Channel number
    struct CHNUM : RegisterField<OTG_HS_GRXSTSR_Host, 0, 4, ReadMode>
    {
    };
  };

  // OTG_HS Receive status debug read register (peripheral mode mode)
  struct OTG_HS_GRXSTSR_Peripheral : Register<0x4004001c, ReadMode, 0x0>
  {
    // Frame number
    struct FRMNUM : RegisterField<OTG_HS_GRXSTSR_Peripheral, 21, 4, ReadMode>
    {
    };
    // Packet status
    struct PKTSTS : RegisterField<OTG_HS_GRXSTSR_Peripheral, 17, 4, ReadMode>
    {
    };
    // Data PID
    struct DPID : RegisterField<OTG_HS_GRXSTSR_Peripheral, 15, 2, ReadMode>
    {
    };
    // Byte count
    struct BCNT : RegisterField<OTG_HS_GRXSTSR_Peripheral, 4, 11, ReadMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<OTG_HS_GRXSTSR_Peripheral, 0, 4, ReadMode>
    {
    };
  };

  // OTG_HS status read and pop register (host mode)
  struct OTG_HS_GRXSTSP_Host : Register<0x40040020, ReadMode, 0x0>
  {
    // Packet status
    struct PKTSTS : RegisterField<OTG_HS_GRXSTSP_Host, 17, 4, ReadMode>
    {
    };
    // Data PID
    struct DPID : RegisterField<OTG_HS_GRXSTSP_Host, 15, 2, ReadMode>
    {
    };
    // Byte count
    struct BCNT : RegisterField<OTG_HS_GRXSTSP_Host, 4, 11, ReadMode>
    {
    };
    // Channel number
    struct CHNUM : RegisterField<OTG_HS_GRXSTSP_Host, 0, 4, ReadMode>
    {
    };
  };

  // OTG_HS status read and pop register (peripheral mode)
  struct OTG_HS_GRXSTSP_Peripheral : Register<0x40040020, ReadMode, 0x0>
  {
    // Frame number
    struct FRMNUM : RegisterField<OTG_HS_GRXSTSP_Peripheral, 21, 4, ReadMode>
    {
    };
    // Packet status
    struct PKTSTS : RegisterField<OTG_HS_GRXSTSP_Peripheral, 17, 4, ReadMode>
    {
    };
    // Data PID
    struct DPID : RegisterField<OTG_HS_GRXSTSP_Peripheral, 15, 2, ReadMode>
    {
    };
    // Byte count
    struct BCNT : RegisterField<OTG_HS_GRXSTSP_Peripheral, 4, 11, ReadMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<OTG_HS_GRXSTSP_Peripheral, 0, 4, ReadMode>
    {
    };
  };

  // OTG_HS Receive FIFO size register
  struct OTG_HS_GRXFSIZ : Register<0x40040024, ReadWriteMode, 0x200>
  {
    // RxFIFO depth
    struct RXFD : RegisterField<OTG_HS_GRXFSIZ, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_HS nonperiodic transmit FIFO size register (host mode)
  struct OTG_HS_GNPTXFSIZ_Host : Register<0x40040028, ReadWriteMode, 0x200>
  {
    // Nonperiodic TxFIFO depth
    struct NPTXFD : RegisterField<OTG_HS_GNPTXFSIZ_Host, 16, 16, ReadWriteMode>
    {
    };
    // Nonperiodic transmit RAM start address
    struct NPTXFSA : RegisterField<OTG_HS_GNPTXFSIZ_Host, 0, 16, ReadWriteMode>
    {
    };
  };

  // Endpoint 0 transmit FIFO size (peripheral mode)
  struct OTG_HS_TX0FSIZ_Peripheral : Register<0x40040028, ReadWriteMode, 0x200>
  {
    // Endpoint 0 TxFIFO depth
    struct TX0FD : RegisterField<OTG_HS_TX0FSIZ_Peripheral, 16, 16, ReadWriteMode>
    {
    };
    // Endpoint 0 transmit RAM start address
    struct TX0FSA : RegisterField<OTG_HS_TX0FSIZ_Peripheral, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_HS nonperiodic transmit FIFO/queue status register
  struct OTG_HS_GNPTXSTS : Register<0x4004002c, ReadMode, 0x80200>
  {
    // Top of the nonperiodic transmit request queue
    struct NPTXQTOP : RegisterField<OTG_HS_GNPTXSTS, 24, 7, ReadMode>
    {
    };
    // Nonperiodic transmit request queue space available
    struct NPTQXSAV : RegisterField<OTG_HS_GNPTXSTS, 16, 8, ReadMode>
    {
    };
    // Nonperiodic TxFIFO space available
    struct NPTXFSAV : RegisterField<OTG_HS_GNPTXSTS, 0, 16, ReadMode>
    {
    };
  };

  // OTG_HS general core configuration register
  struct OTG_HS_GCCFG : Register<0x40040038, ReadWriteMode, 0x0>
  {
    // VBUS sensing disable option
    struct NOVBUSSENS : RegisterField<OTG_HS_GCCFG, 21, 1, ReadWriteMode>
    {
    };
    // SOF output enable
    struct SOFOUTEN : RegisterField<OTG_HS_GCCFG, 20, 1, ReadWriteMode>
    {
    };
    // Enable the VBUS sensing device
    struct VBUSBSEN : RegisterField<OTG_HS_GCCFG, 19, 1, ReadWriteMode>
    {
    };
    // Enable the VBUS sensing device
    struct VBUSASEN : RegisterField<OTG_HS_GCCFG, 18, 1, ReadWriteMode>
    {
    };
    // Enable I2C bus connection for the external I2C PHY interface
    struct I2CPADEN : RegisterField<OTG_HS_GCCFG, 17, 1, ReadWriteMode>
    {
    };
    // Power down
    struct PWRDWN : RegisterField<OTG_HS_GCCFG, 16, 1, ReadWriteMode>
    {
    };
  };

  // OTG_HS core ID register
  struct OTG_HS_CID : Register<0x4004003c, ReadWriteMode, 0x1200>
  {
    // Product ID field
    struct PRODUCT_ID : RegisterField<OTG_HS_CID, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_HS Host periodic transmit FIFO size register
  struct OTG_HS_HPTXFSIZ : Register<0x40040100, ReadWriteMode, 0x2000600>
  {
    // Host periodic TxFIFO depth
    struct PTXFD : RegisterField<OTG_HS_HPTXFSIZ, 16, 16, ReadWriteMode>
    {
    };
    // Host periodic TxFIFO start address
    struct PTXSA : RegisterField<OTG_HS_HPTXFSIZ, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_HS device IN endpoint transmit FIFO size register
  struct OTG_HS_DIEPTXF1 : Register<0x40040104, ReadWriteMode, 0x2000400>
  {
    // IN endpoint TxFIFO depth
    struct INEPTXFD : RegisterField<OTG_HS_DIEPTXF1, 16, 16, ReadWriteMode>
    {
    };
    // IN endpoint FIFOx transmit RAM start address
    struct INEPTXSA : RegisterField<OTG_HS_DIEPTXF1, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_HS device IN endpoint transmit FIFO size register
  struct OTG_HS_DIEPTXF2 : Register<0x40040108, ReadWriteMode, 0x2000400>
  {
    // IN endpoint TxFIFO depth
    struct INEPTXFD : RegisterField<OTG_HS_DIEPTXF2, 16, 16, ReadWriteMode>
    {
    };
    // IN endpoint FIFOx transmit RAM start address
    struct INEPTXSA : RegisterField<OTG_HS_DIEPTXF2, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_HS device IN endpoint transmit FIFO size register
  struct OTG_HS_DIEPTXF3 : Register<0x4004011c, ReadWriteMode, 0x2000400>
  {
    // IN endpoint TxFIFO depth
    struct INEPTXFD : RegisterField<OTG_HS_DIEPTXF3, 16, 16, ReadWriteMode>
    {
    };
    // IN endpoint FIFOx transmit RAM start address
    struct INEPTXSA : RegisterField<OTG_HS_DIEPTXF3, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_HS device IN endpoint transmit FIFO size register
  struct OTG_HS_DIEPTXF4 : Register<0x40040120, ReadWriteMode, 0x2000400>
  {
    // IN endpoint TxFIFO depth
    struct INEPTXFD : RegisterField<OTG_HS_DIEPTXF4, 16, 16, ReadWriteMode>
    {
    };
    // IN endpoint FIFOx transmit RAM start address
    struct INEPTXSA : RegisterField<OTG_HS_DIEPTXF4, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_HS device IN endpoint transmit FIFO size register
  struct OTG_HS_DIEPTXF5 : Register<0x40040124, ReadWriteMode, 0x2000400>
  {
    // IN endpoint TxFIFO depth
    struct INEPTXFD : RegisterField<OTG_HS_DIEPTXF5, 16, 16, ReadWriteMode>
    {
    };
    // IN endpoint FIFOx transmit RAM start address
    struct INEPTXSA : RegisterField<OTG_HS_DIEPTXF5, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_HS device IN endpoint transmit FIFO size register
  struct OTG_HS_DIEPTXF6 : Register<0x40040128, ReadWriteMode, 0x2000400>
  {
    // IN endpoint TxFIFO depth
    struct INEPTXFD : RegisterField<OTG_HS_DIEPTXF6, 16, 16, ReadWriteMode>
    {
    };
    // IN endpoint FIFOx transmit RAM start address
    struct INEPTXSA : RegisterField<OTG_HS_DIEPTXF6, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_HS device IN endpoint transmit FIFO size register
  struct OTG_HS_DIEPTXF7 : Register<0x4004012c, ReadWriteMode, 0x2000400>
  {
    // IN endpoint TxFIFO depth
    struct INEPTXFD : RegisterField<OTG_HS_DIEPTXF7, 16, 16, ReadWriteMode>
    {
    };
    // IN endpoint FIFOx transmit RAM start address
    struct INEPTXSA : RegisterField<OTG_HS_DIEPTXF7, 0, 16, ReadWriteMode>
    {
    };
  };

// Large Registers

};


