/******************************************************************************
* Filename : otg_fs_global_registers.hpp
*
* Details  : USB on the go full speed
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct OTG_FS_GLOBAL
{
  // OTG_FS control and status register (OTG_FS_GOTGCTL)
  struct FS_GOTGCTL : Register<0x50000000, ReadWriteMode, 0x800>
  {
    // B-session valid
    struct BSVLD : RegisterField<FS_GOTGCTL, 19, 1, ReadMode>
    {
    };
    // A-session valid
    struct ASVLD : RegisterField<FS_GOTGCTL, 18, 1, ReadMode>
    {
    };
    // Long/short debounce time
    struct DBCT : RegisterField<FS_GOTGCTL, 17, 1, ReadMode>
    {
    };
    // Connector ID status
    struct CIDSTS : RegisterField<FS_GOTGCTL, 16, 1, ReadMode>
    {
    };
    // Device HNP enabled
    struct DHNPEN : RegisterField<FS_GOTGCTL, 11, 1, ReadWriteMode>
    {
    };
    // Host set HNP enable
    struct HSHNPEN : RegisterField<FS_GOTGCTL, 10, 1, ReadWriteMode>
    {
    };
    // HNP request
    struct HNPRQ : RegisterField<FS_GOTGCTL, 9, 1, ReadWriteMode>
    {
    };
    // Host negotiation success
    struct HNGSCS : RegisterField<FS_GOTGCTL, 8, 1, ReadMode>
    {
    };
    // Session request
    struct SRQ : RegisterField<FS_GOTGCTL, 1, 1, ReadWriteMode>
    {
    };
    // Session request success
    struct SRQSCS : RegisterField<FS_GOTGCTL, 0, 1, ReadMode>
    {
    };
  };

  // OTG_FS interrupt register (OTG_FS_GOTGINT)
  struct FS_GOTGINT : Register<0x50000004, ReadWriteMode, 0x0>
  {
    // Debounce done
    struct DBCDNE : RegisterField<FS_GOTGINT, 19, 1, ReadWriteMode>
    {
    };
    // A-device timeout change
    struct ADTOCHG : RegisterField<FS_GOTGINT, 18, 1, ReadWriteMode>
    {
    };
    // Host negotiation detected
    struct HNGDET : RegisterField<FS_GOTGINT, 17, 1, ReadWriteMode>
    {
    };
    // Host negotiation success status change
    struct HNSSCHG : RegisterField<FS_GOTGINT, 9, 1, ReadWriteMode>
    {
    };
    // Session request success status change
    struct SRSSCHG : RegisterField<FS_GOTGINT, 8, 1, ReadWriteMode>
    {
    };
    // Session end detected
    struct SEDET : RegisterField<FS_GOTGINT, 2, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS AHB configuration register (OTG_FS_GAHBCFG)
  struct FS_GAHBCFG : Register<0x50000008, ReadWriteMode, 0x0>
  {
    // Periodic TxFIFO empty level
    struct PTXFELVL : RegisterField<FS_GAHBCFG, 8, 1, ReadWriteMode>
    {
    };
    // TxFIFO empty level
    struct TXFELVL : RegisterField<FS_GAHBCFG, 7, 1, ReadWriteMode>
    {
    };
    // Global interrupt mask
    struct GINT : RegisterField<FS_GAHBCFG, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS USB configuration register (OTG_FS_GUSBCFG)
  struct FS_GUSBCFG : Register<0x5000000c, ReadWriteMode, 0xa00>
  {
    // Corrupt Tx packet
    struct CTXPKT : RegisterField<FS_GUSBCFG, 31, 1, ReadWriteMode>
    {
    };
    // Force device mode
    struct FDMOD : RegisterField<FS_GUSBCFG, 30, 1, ReadWriteMode>
    {
    };
    // Force host mode
    struct FHMOD : RegisterField<FS_GUSBCFG, 29, 1, ReadWriteMode>
    {
    };
    // USB turnaround time
    struct TRDT : RegisterField<FS_GUSBCFG, 10, 4, ReadWriteMode>
    {
    };
    // HNP-capable
    struct HNPCAP : RegisterField<FS_GUSBCFG, 9, 1, ReadWriteMode>
    {
    };
    // SRP-capable
    struct SRPCAP : RegisterField<FS_GUSBCFG, 8, 1, ReadWriteMode>
    {
    };
    // Full Speed serial transceiver select
    struct PHYSEL : RegisterField<FS_GUSBCFG, 6, 1, WriteMode>
    {
    };
    // FS timeout calibration
    struct TOCAL : RegisterField<FS_GUSBCFG, 0, 3, ReadWriteMode>
    {
    };
  };

  // OTG_FS reset register (OTG_FS_GRSTCTL)
  struct FS_GRSTCTL : Register<0x50000010, ReadWriteMode, 0x20000000>
  {
    // AHB master idle
    struct AHBIDL : RegisterField<FS_GRSTCTL, 31, 1, ReadMode>
    {
    };
    // TxFIFO number
    struct TXFNUM : RegisterField<FS_GRSTCTL, 6, 5, ReadWriteMode>
    {
    };
    // TxFIFO flush
    struct TXFFLSH : RegisterField<FS_GRSTCTL, 5, 1, ReadWriteMode>
    {
    };
    // RxFIFO flush
    struct RXFFLSH : RegisterField<FS_GRSTCTL, 4, 1, ReadWriteMode>
    {
    };
    // Host frame counter reset
    struct FCRST : RegisterField<FS_GRSTCTL, 2, 1, ReadWriteMode>
    {
    };
    // HCLK soft reset
    struct HSRST : RegisterField<FS_GRSTCTL, 1, 1, ReadWriteMode>
    {
    };
    // Core soft reset
    struct CSRST : RegisterField<FS_GRSTCTL, 0, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS core interrupt register (OTG_FS_GINTSTS)
  struct FS_GINTSTS : Register<0x50000014, ReadWriteMode, 0x4000020>
  {
    // Resume/remote wakeup detected interrupt
    struct WKUPINT : RegisterField<FS_GINTSTS, 31, 1, ReadWriteMode>
    {
    };
    // Session request/new session detected interrupt
    struct SRQINT : RegisterField<FS_GINTSTS, 30, 1, ReadWriteMode>
    {
    };
    // Disconnect detected interrupt
    struct DISCINT : RegisterField<FS_GINTSTS, 29, 1, ReadWriteMode>
    {
    };
    // Connector ID status change
    struct CIDSCHG : RegisterField<FS_GINTSTS, 28, 1, ReadWriteMode>
    {
    };
    // Periodic TxFIFO empty
    struct PTXFE : RegisterField<FS_GINTSTS, 26, 1, ReadMode>
    {
    };
    // Host channels interrupt
    struct HCINT : RegisterField<FS_GINTSTS, 25, 1, ReadMode>
    {
    };
    // Host port interrupt
    struct HPRTINT : RegisterField<FS_GINTSTS, 24, 1, ReadMode>
    {
    };
    // Incomplete periodic transfer(Host mode)/Incomplete isochronous OUT transfer(Device mode)
    struct IPXFR_INCOMPISOOUT : RegisterField<FS_GINTSTS, 21, 1, ReadWriteMode>
    {
    };
    // Incomplete isochronous IN transfer
    struct IISOIXFR : RegisterField<FS_GINTSTS, 20, 1, ReadWriteMode>
    {
    };
    // OUT endpoint interrupt
    struct OEPINT : RegisterField<FS_GINTSTS, 19, 1, ReadMode>
    {
    };
    // IN endpoint interrupt
    struct IEPINT : RegisterField<FS_GINTSTS, 18, 1, ReadMode>
    {
    };
    // End of periodic frame interrupt
    struct EOPF : RegisterField<FS_GINTSTS, 15, 1, ReadWriteMode>
    {
    };
    // Isochronous OUT packet dropped interrupt
    struct ISOODRP : RegisterField<FS_GINTSTS, 14, 1, ReadWriteMode>
    {
    };
    // Enumeration done
    struct ENUMDNE : RegisterField<FS_GINTSTS, 13, 1, ReadWriteMode>
    {
    };
    // USB reset
    struct USBRST : RegisterField<FS_GINTSTS, 12, 1, ReadWriteMode>
    {
    };
    // USB suspend
    struct USBSUSP : RegisterField<FS_GINTSTS, 11, 1, ReadWriteMode>
    {
    };
    // Early suspend
    struct ESUSP : RegisterField<FS_GINTSTS, 10, 1, ReadWriteMode>
    {
    };
    // Global OUT NAK effective
    struct GOUTNAKEFF : RegisterField<FS_GINTSTS, 7, 1, ReadMode>
    {
    };
    // Global IN non-periodic NAK effective
    struct GINAKEFF : RegisterField<FS_GINTSTS, 6, 1, ReadMode>
    {
    };
    // Non-periodic TxFIFO empty
    struct NPTXFE : RegisterField<FS_GINTSTS, 5, 1, ReadMode>
    {
    };
    // RxFIFO non-empty
    struct RXFLVL : RegisterField<FS_GINTSTS, 4, 1, ReadMode>
    {
    };
    // Start of frame
    struct SOF : RegisterField<FS_GINTSTS, 3, 1, ReadWriteMode>
    {
    };
    // OTG interrupt
    struct OTGINT : RegisterField<FS_GINTSTS, 2, 1, ReadMode>
    {
    };
    // Mode mismatch interrupt
    struct MMIS : RegisterField<FS_GINTSTS, 1, 1, ReadWriteMode>
    {
    };
    // Current mode of operation
    struct CMOD : RegisterField<FS_GINTSTS, 0, 1, ReadMode>
    {
    };
  };

  // OTG_FS interrupt mask register (OTG_FS_GINTMSK)
  struct FS_GINTMSK : Register<0x50000018, ReadWriteMode, 0x0>
  {
    // Resume/remote wakeup detected interrupt mask
    struct WUIM : RegisterField<FS_GINTMSK, 31, 1, ReadWriteMode>
    {
    };
    // Session request/new session detected interrupt mask
    struct SRQIM : RegisterField<FS_GINTMSK, 30, 1, ReadWriteMode>
    {
    };
    // Disconnect detected interrupt mask
    struct DISCINT : RegisterField<FS_GINTMSK, 29, 1, ReadWriteMode>
    {
    };
    // Connector ID status change mask
    struct CIDSCHGM : RegisterField<FS_GINTMSK, 28, 1, ReadWriteMode>
    {
    };
    // Periodic TxFIFO empty mask
    struct PTXFEM : RegisterField<FS_GINTMSK, 26, 1, ReadWriteMode>
    {
    };
    // Host channels interrupt mask
    struct HCIM : RegisterField<FS_GINTMSK, 25, 1, ReadWriteMode>
    {
    };
    // Host port interrupt mask
    struct PRTIM : RegisterField<FS_GINTMSK, 24, 1, ReadMode>
    {
    };
    // Incomplete periodic transfer mask(Host mode)/Incomplete isochronous OUT transfer mask(Device mode)
    struct IPXFRM_IISOOXFRM : RegisterField<FS_GINTMSK, 21, 1, ReadWriteMode>
    {
    };
    // Incomplete isochronous IN transfer mask
    struct IISOIXFRM : RegisterField<FS_GINTMSK, 20, 1, ReadWriteMode>
    {
    };
    // OUT endpoints interrupt mask
    struct OEPINT : RegisterField<FS_GINTMSK, 19, 1, ReadWriteMode>
    {
    };
    // IN endpoints interrupt mask
    struct IEPINT : RegisterField<FS_GINTMSK, 18, 1, ReadWriteMode>
    {
    };
    // Endpoint mismatch interrupt mask
    struct EPMISM : RegisterField<FS_GINTMSK, 17, 1, ReadWriteMode>
    {
    };
    // End of periodic frame interrupt mask
    struct EOPFM : RegisterField<FS_GINTMSK, 15, 1, ReadWriteMode>
    {
    };
    // Isochronous OUT packet dropped interrupt mask
    struct ISOODRPM : RegisterField<FS_GINTMSK, 14, 1, ReadWriteMode>
    {
    };
    // Enumeration done mask
    struct ENUMDNEM : RegisterField<FS_GINTMSK, 13, 1, ReadWriteMode>
    {
    };
    // USB reset mask
    struct USBRST : RegisterField<FS_GINTMSK, 12, 1, ReadWriteMode>
    {
    };
    // USB suspend mask
    struct USBSUSPM : RegisterField<FS_GINTMSK, 11, 1, ReadWriteMode>
    {
    };
    // Early suspend mask
    struct ESUSPM : RegisterField<FS_GINTMSK, 10, 1, ReadWriteMode>
    {
    };
    // Global OUT NAK effective mask
    struct GONAKEFFM : RegisterField<FS_GINTMSK, 7, 1, ReadWriteMode>
    {
    };
    // Global non-periodic IN NAK effective mask
    struct GINAKEFFM : RegisterField<FS_GINTMSK, 6, 1, ReadWriteMode>
    {
    };
    // Non-periodic TxFIFO empty mask
    struct NPTXFEM : RegisterField<FS_GINTMSK, 5, 1, ReadWriteMode>
    {
    };
    // Receive FIFO non-empty mask
    struct RXFLVLM : RegisterField<FS_GINTMSK, 4, 1, ReadWriteMode>
    {
    };
    // Start of frame mask
    struct SOFM : RegisterField<FS_GINTMSK, 3, 1, ReadWriteMode>
    {
    };
    // OTG interrupt mask
    struct OTGINT : RegisterField<FS_GINTMSK, 2, 1, ReadWriteMode>
    {
    };
    // Mode mismatch interrupt mask
    struct MMISM : RegisterField<FS_GINTMSK, 1, 1, ReadWriteMode>
    {
    };
  };

  // OTG_FS Receive status debug read(Device mode)
  struct FS_GRXSTSR_Device : Register<0x5000001c, ReadMode, 0x0>
  {
    // Frame number
    struct FRMNUM : RegisterField<FS_GRXSTSR_Device, 21, 4, ReadMode>
    {
    };
    // Packet status
    struct PKTSTS : RegisterField<FS_GRXSTSR_Device, 17, 4, ReadMode>
    {
    };
    // Data PID
    struct DPID : RegisterField<FS_GRXSTSR_Device, 15, 2, ReadMode>
    {
    };
    // Byte count
    struct BCNT : RegisterField<FS_GRXSTSR_Device, 4, 11, ReadMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<FS_GRXSTSR_Device, 0, 4, ReadMode>
    {
    };
  };

  // OTG_FS Receive status debug read(Host mode)
  struct FS_GRXSTSR_Host : Register<0x5000001c, ReadMode, 0x0>
  {
    // Frame number
    struct FRMNUM : RegisterField<FS_GRXSTSR_Host, 21, 4, ReadMode>
    {
    };
    // Packet status
    struct PKTSTS : RegisterField<FS_GRXSTSR_Host, 17, 4, ReadMode>
    {
    };
    // Data PID
    struct DPID : RegisterField<FS_GRXSTSR_Host, 15, 2, ReadMode>
    {
    };
    // Byte count
    struct BCNT : RegisterField<FS_GRXSTSR_Host, 4, 11, ReadMode>
    {
    };
    // Endpoint number
    struct EPNUM : RegisterField<FS_GRXSTSR_Host, 0, 4, ReadMode>
    {
    };
  };

  // OTG_FS Receive FIFO size register (OTG_FS_GRXFSIZ)
  struct FS_GRXFSIZ : Register<0x50000024, ReadWriteMode, 0x200>
  {
    // RxFIFO depth
    struct RXFD : RegisterField<FS_GRXFSIZ, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_FS non-periodic transmit FIFO size register (Device mode)
  struct FS_GNPTXFSIZ_Device : Register<0x50000028, ReadWriteMode, 0x200>
  {
    // Endpoint 0 TxFIFO depth
    struct TX0FD : RegisterField<FS_GNPTXFSIZ_Device, 16, 16, ReadWriteMode>
    {
    };
    // Endpoint 0 transmit RAM start address
    struct TX0FSA : RegisterField<FS_GNPTXFSIZ_Device, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_FS non-periodic transmit FIFO size register (Host mode)
  struct FS_GNPTXFSIZ_Host : Register<0x50000028, ReadWriteMode, 0x200>
  {
    // Non-periodic TxFIFO depth
    struct NPTXFD : RegisterField<FS_GNPTXFSIZ_Host, 16, 16, ReadWriteMode>
    {
    };
    // Non-periodic transmit RAM start address
    struct NPTXFSA : RegisterField<FS_GNPTXFSIZ_Host, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS)
  struct FS_GNPTXSTS : Register<0x5000002c, ReadMode, 0x80200>
  {
    // Top of the non-periodic transmit request queue
    struct NPTXQTOP : RegisterField<FS_GNPTXSTS, 24, 7, ReadMode>
    {
    };
    // Non-periodic transmit request queue space available
    struct NPTQXSAV : RegisterField<FS_GNPTXSTS, 16, 8, ReadMode>
    {
    };
    // Non-periodic TxFIFO space available
    struct NPTXFSAV : RegisterField<FS_GNPTXSTS, 0, 16, ReadMode>
    {
    };
  };

  // OTG_FS general core configuration register (OTG_FS_GCCFG)
  struct FS_GCCFG : Register<0x50000038, ReadWriteMode, 0x0>
  {
    // SOF output enable
    struct SOFOUTEN : RegisterField<FS_GCCFG, 20, 1, ReadWriteMode>
    {
    };
    // Enable the VBUS sensing device
    struct VBUSBSEN : RegisterField<FS_GCCFG, 19, 1, ReadWriteMode>
    {
    };
    // Enable the VBUS sensing device
    struct VBUSASEN : RegisterField<FS_GCCFG, 18, 1, ReadWriteMode>
    {
    };
    // Power down
    struct PWRDWN : RegisterField<FS_GCCFG, 16, 1, ReadWriteMode>
    {
    };
  };

  // core ID register
  struct FS_CID : Register<0x5000003c, ReadWriteMode, 0x1000>
  {
    // Product ID field
    struct PRODUCT_ID : RegisterField<FS_CID, 0, 32, ReadWriteMode>
    {
    };
  };

  // OTG_FS Host periodic transmit FIFO size register (OTG_FS_HPTXFSIZ)
  struct FS_HPTXFSIZ : Register<0x50000100, ReadWriteMode, 0x2000600>
  {
    // Host periodic TxFIFO depth
    struct PTXFSIZ : RegisterField<FS_HPTXFSIZ, 16, 16, ReadWriteMode>
    {
    };
    // Host periodic TxFIFO start address
    struct PTXSA : RegisterField<FS_HPTXFSIZ, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF2)
  struct FS_DIEPTXF1 : Register<0x50000104, ReadWriteMode, 0x2000400>
  {
    // IN endpoint TxFIFO depth
    struct INEPTXFD : RegisterField<FS_DIEPTXF1, 16, 16, ReadWriteMode>
    {
    };
    // IN endpoint FIFO2 transmit RAM start address
    struct INEPTXSA : RegisterField<FS_DIEPTXF1, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF3)
  struct FS_DIEPTXF2 : Register<0x50000108, ReadWriteMode, 0x2000400>
  {
    // IN endpoint TxFIFO depth
    struct INEPTXFD : RegisterField<FS_DIEPTXF2, 16, 16, ReadWriteMode>
    {
    };
    // IN endpoint FIFO3 transmit RAM start address
    struct INEPTXSA : RegisterField<FS_DIEPTXF2, 0, 16, ReadWriteMode>
    {
    };
  };

  // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF4)
  struct FS_DIEPTXF3 : Register<0x5000010c, ReadWriteMode, 0x2000400>
  {
    // IN endpoint TxFIFO depth
    struct INEPTXFD : RegisterField<FS_DIEPTXF3, 16, 16, ReadWriteMode>
    {
    };
    // IN endpoint FIFO4 transmit RAM start address
    struct INEPTXSA : RegisterField<FS_DIEPTXF3, 0, 16, ReadWriteMode>
    {
    };
  };

// Large Registers

};


