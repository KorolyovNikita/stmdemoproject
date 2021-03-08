/******************************************************************************
* Filename : can_registers.hpp
*
* Details  : Controller area network
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct CAN1
{
  static constexpr auto periphNum = 1;

  // master control register
  struct MCR : Register<0x40006400, ReadWriteMode, 0x10002>
  {
    // DBF
    struct DBF : RegisterField<MCR, 16, 1, ReadWriteMode>
    {
    };
    // RESET
    struct RESET : RegisterField<MCR, 15, 1, ReadWriteMode>
    {
    };
    // TTCM
    struct TTCM : RegisterField<MCR, 7, 1, ReadWriteMode>
    {
    };
    // ABOM
    struct ABOM : RegisterField<MCR, 6, 1, ReadWriteMode>
    {
    };
    // AWUM
    struct AWUM : RegisterField<MCR, 5, 1, ReadWriteMode>
    {
    };
    // NART
    struct NART : RegisterField<MCR, 4, 1, ReadWriteMode>
    {
    };
    // RFLM
    struct RFLM : RegisterField<MCR, 3, 1, ReadWriteMode>
    {
    };
    // TXFP
    struct TXFP : RegisterField<MCR, 2, 1, ReadWriteMode>
    {
    };
    // SLEEP
    struct SLEEP : RegisterField<MCR, 1, 1, ReadWriteMode>
    {
    };
    // INRQ
    struct INRQ : RegisterField<MCR, 0, 1, ReadWriteMode>
    {
    };
  };

  // master status register
  struct MSR : Register<0x40006404, ReadWriteMode, 0xc02>
  {
    // RX
    struct RX : RegisterField<MSR, 11, 1, ReadMode>
    {
    };
    // SAMP
    struct SAMP : RegisterField<MSR, 10, 1, ReadMode>
    {
    };
    // RXM
    struct RXM : RegisterField<MSR, 9, 1, ReadMode>
    {
    };
    // TXM
    struct TXM : RegisterField<MSR, 8, 1, ReadMode>
    {
    };
    // SLAKI
    struct SLAKI : RegisterField<MSR, 4, 1, ReadWriteMode>
    {
    };
    // WKUI
    struct WKUI : RegisterField<MSR, 3, 1, ReadWriteMode>
    {
    };
    // ERRI
    struct ERRI : RegisterField<MSR, 2, 1, ReadWriteMode>
    {
    };
    // SLAK
    struct SLAK : RegisterField<MSR, 1, 1, ReadMode>
    {
    };
    // INAK
    struct INAK : RegisterField<MSR, 0, 1, ReadMode>
    {
    };
  };

  // transmit status register
  struct TSR : Register<0x40006408, ReadWriteMode, 0x1c000000>
  {
    // Lowest priority flag for mailbox 2
    struct LOW2 : RegisterField<TSR, 31, 1, ReadMode>
    {
    };
    // Lowest priority flag for mailbox 1
    struct LOW1 : RegisterField<TSR, 30, 1, ReadMode>
    {
    };
    // Lowest priority flag for mailbox 0
    struct LOW0 : RegisterField<TSR, 29, 1, ReadMode>
    {
    };
    // Lowest priority flag for mailbox 2
    struct TME2 : RegisterField<TSR, 28, 1, ReadMode>
    {
    };
    // Lowest priority flag for mailbox 1
    struct TME1 : RegisterField<TSR, 27, 1, ReadMode>
    {
    };
    // Lowest priority flag for mailbox 0
    struct TME0 : RegisterField<TSR, 26, 1, ReadMode>
    {
    };
    // CODE
    struct CODE : RegisterField<TSR, 24, 2, ReadMode>
    {
    };
    // ABRQ2
    struct ABRQ2 : RegisterField<TSR, 23, 1, ReadWriteMode>
    {
    };
    // TERR2
    struct TERR2 : RegisterField<TSR, 19, 1, ReadWriteMode>
    {
    };
    // ALST2
    struct ALST2 : RegisterField<TSR, 18, 1, ReadWriteMode>
    {
    };
    // TXOK2
    struct TXOK2 : RegisterField<TSR, 17, 1, ReadWriteMode>
    {
    };
    // RQCP2
    struct RQCP2 : RegisterField<TSR, 16, 1, ReadWriteMode>
    {
    };
    // ABRQ1
    struct ABRQ1 : RegisterField<TSR, 15, 1, ReadWriteMode>
    {
    };
    // TERR1
    struct TERR1 : RegisterField<TSR, 11, 1, ReadWriteMode>
    {
    };
    // ALST1
    struct ALST1 : RegisterField<TSR, 10, 1, ReadWriteMode>
    {
    };
    // TXOK1
    struct TXOK1 : RegisterField<TSR, 9, 1, ReadWriteMode>
    {
    };
    // RQCP1
    struct RQCP1 : RegisterField<TSR, 8, 1, ReadWriteMode>
    {
    };
    // ABRQ0
    struct ABRQ0 : RegisterField<TSR, 7, 1, ReadWriteMode>
    {
    };
    // TERR0
    struct TERR0 : RegisterField<TSR, 3, 1, ReadWriteMode>
    {
    };
    // ALST0
    struct ALST0 : RegisterField<TSR, 2, 1, ReadWriteMode>
    {
    };
    // TXOK0
    struct TXOK0 : RegisterField<TSR, 1, 1, ReadWriteMode>
    {
    };
    // RQCP0
    struct RQCP0 : RegisterField<TSR, 0, 1, ReadWriteMode>
    {
    };
  };

  // receive FIFO 0 register
  struct RF0R : Register<0x4000640c, ReadWriteMode, 0x0>
  {
    // RFOM0
    struct RFOM0 : RegisterField<RF0R, 5, 1, ReadWriteMode>
    {
    };
    // FOVR0
    struct FOVR0 : RegisterField<RF0R, 4, 1, ReadWriteMode>
    {
    };
    // FULL0
    struct FULL0 : RegisterField<RF0R, 3, 1, ReadWriteMode>
    {
    };
    // FMP0
    struct FMP0 : RegisterField<RF0R, 0, 2, ReadMode>
    {
    };
  };

  // receive FIFO 1 register
  struct RF1R : Register<0x40006410, ReadWriteMode, 0x0>
  {
    // RFOM1
    struct RFOM1 : RegisterField<RF1R, 5, 1, ReadWriteMode>
    {
    };
    // FOVR1
    struct FOVR1 : RegisterField<RF1R, 4, 1, ReadWriteMode>
    {
    };
    // FULL1
    struct FULL1 : RegisterField<RF1R, 3, 1, ReadWriteMode>
    {
    };
    // FMP1
    struct FMP1 : RegisterField<RF1R, 0, 2, ReadMode>
    {
    };
  };

  // interrupt enable register
  struct IER : Register<0x40006414, ReadWriteMode, 0x0>
  {
    // SLKIE
    struct SLKIE : RegisterField<IER, 17, 1, ReadWriteMode>
    {
    };
    // WKUIE
    struct WKUIE : RegisterField<IER, 16, 1, ReadWriteMode>
    {
    };
    // ERRIE
    struct ERRIE : RegisterField<IER, 15, 1, ReadWriteMode>
    {
    };
    // LECIE
    struct LECIE : RegisterField<IER, 11, 1, ReadWriteMode>
    {
    };
    // BOFIE
    struct BOFIE : RegisterField<IER, 10, 1, ReadWriteMode>
    {
    };
    // EPVIE
    struct EPVIE : RegisterField<IER, 9, 1, ReadWriteMode>
    {
    };
    // EWGIE
    struct EWGIE : RegisterField<IER, 8, 1, ReadWriteMode>
    {
    };
    // FOVIE1
    struct FOVIE1 : RegisterField<IER, 6, 1, ReadWriteMode>
    {
    };
    // FFIE1
    struct FFIE1 : RegisterField<IER, 5, 1, ReadWriteMode>
    {
    };
    // FMPIE1
    struct FMPIE1 : RegisterField<IER, 4, 1, ReadWriteMode>
    {
    };
    // FOVIE0
    struct FOVIE0 : RegisterField<IER, 3, 1, ReadWriteMode>
    {
    };
    // FFIE0
    struct FFIE0 : RegisterField<IER, 2, 1, ReadWriteMode>
    {
    };
    // FMPIE0
    struct FMPIE0 : RegisterField<IER, 1, 1, ReadWriteMode>
    {
    };
    // TMEIE
    struct TMEIE : RegisterField<IER, 0, 1, ReadWriteMode>
    {
    };
  };

  // interrupt enable register
  struct ESR : Register<0x40006418, ReadWriteMode, 0x0>
  {
    // REC
    struct REC : RegisterField<ESR, 24, 8, ReadMode>
    {
    };
    // TEC
    struct TEC : RegisterField<ESR, 16, 8, ReadMode>
    {
    };
    // LEC
    struct LEC : RegisterField<ESR, 4, 3, ReadWriteMode>
    {
    };
    // BOFF
    struct BOFF : RegisterField<ESR, 2, 1, ReadMode>
    {
    };
    // EPVF
    struct EPVF : RegisterField<ESR, 1, 1, ReadMode>
    {
    };
    // EWGF
    struct EWGF : RegisterField<ESR, 0, 1, ReadMode>
    {
    };
  };

  // bit timing register
  struct BTR : Register<0x4000641c, ReadWriteMode, 0x0>
  {
    // SILM
    struct SILM : RegisterField<BTR, 31, 1, ReadWriteMode>
    {
    };
    // LBKM
    struct LBKM : RegisterField<BTR, 30, 1, ReadWriteMode>
    {
    };
    // SJW
    struct SJW : RegisterField<BTR, 24, 2, ReadWriteMode>
    {
    };
    // TS2
    struct TS2 : RegisterField<BTR, 20, 3, ReadWriteMode>
    {
    };
    // TS1
    struct TS1 : RegisterField<BTR, 16, 4, ReadWriteMode>
    {
    };
    // BRP
    struct BRP : RegisterField<BTR, 0, 10, ReadWriteMode>
    {
    };
  };

  // TX mailbox identifier register
  struct TI0R : Register<0x40006580, ReadWriteMode, 0x0>
  {
    // STID
    struct STID : RegisterField<TI0R, 21, 11, ReadWriteMode>
    {
    };
    // EXID
    struct EXID : RegisterField<TI0R, 3, 18, ReadWriteMode>
    {
    };
    // IDE
    struct IDE : RegisterField<TI0R, 2, 1, ReadWriteMode>
    {
    };
    // RTR
    struct RTR : RegisterField<TI0R, 1, 1, ReadWriteMode>
    {
    };
    // TXRQ
    struct TXRQ : RegisterField<TI0R, 0, 1, ReadWriteMode>
    {
    };
  };

  // mailbox data length control and time stamp register
  struct TDT0R : Register<0x40006584, ReadWriteMode, 0x0>
  {
    // TIME
    struct TIME : RegisterField<TDT0R, 16, 16, ReadWriteMode>
    {
    };
    // TGT
    struct TGT : RegisterField<TDT0R, 8, 1, ReadWriteMode>
    {
    };
    // DLC
    struct DLC : RegisterField<TDT0R, 0, 4, ReadWriteMode>
    {
    };
  };

  // mailbox data low register
  struct TDL0R : Register<0x40006588, ReadWriteMode, 0x0>
  {
    // DATA3
    struct DATA3 : RegisterField<TDL0R, 24, 8, ReadWriteMode>
    {
    };
    // DATA2
    struct DATA2 : RegisterField<TDL0R, 16, 8, ReadWriteMode>
    {
    };
    // DATA1
    struct DATA1 : RegisterField<TDL0R, 8, 8, ReadWriteMode>
    {
    };
    // DATA0
    struct DATA0 : RegisterField<TDL0R, 0, 8, ReadWriteMode>
    {
    };
  };

  // mailbox data high register
  struct TDH0R : Register<0x4000658c, ReadWriteMode, 0x0>
  {
    // DATA7
    struct DATA7 : RegisterField<TDH0R, 24, 8, ReadWriteMode>
    {
    };
    // DATA6
    struct DATA6 : RegisterField<TDH0R, 16, 8, ReadWriteMode>
    {
    };
    // DATA5
    struct DATA5 : RegisterField<TDH0R, 8, 8, ReadWriteMode>
    {
    };
    // DATA4
    struct DATA4 : RegisterField<TDH0R, 0, 8, ReadWriteMode>
    {
    };
  };

  // mailbox identifier register
  struct TI1R : Register<0x40006590, ReadWriteMode, 0x0>
  {
    // STID
    struct STID : RegisterField<TI1R, 21, 11, ReadWriteMode>
    {
    };
    // EXID
    struct EXID : RegisterField<TI1R, 3, 18, ReadWriteMode>
    {
    };
    // IDE
    struct IDE : RegisterField<TI1R, 2, 1, ReadWriteMode>
    {
    };
    // RTR
    struct RTR : RegisterField<TI1R, 1, 1, ReadWriteMode>
    {
    };
    // TXRQ
    struct TXRQ : RegisterField<TI1R, 0, 1, ReadWriteMode>
    {
    };
  };

  // mailbox data length control and time stamp register
  struct TDT1R : Register<0x40006594, ReadWriteMode, 0x0>
  {
    // TIME
    struct TIME : RegisterField<TDT1R, 16, 16, ReadWriteMode>
    {
    };
    // TGT
    struct TGT : RegisterField<TDT1R, 8, 1, ReadWriteMode>
    {
    };
    // DLC
    struct DLC : RegisterField<TDT1R, 0, 4, ReadWriteMode>
    {
    };
  };

  // mailbox data low register
  struct TDL1R : Register<0x40006598, ReadWriteMode, 0x0>
  {
    // DATA3
    struct DATA3 : RegisterField<TDL1R, 24, 8, ReadWriteMode>
    {
    };
    // DATA2
    struct DATA2 : RegisterField<TDL1R, 16, 8, ReadWriteMode>
    {
    };
    // DATA1
    struct DATA1 : RegisterField<TDL1R, 8, 8, ReadWriteMode>
    {
    };
    // DATA0
    struct DATA0 : RegisterField<TDL1R, 0, 8, ReadWriteMode>
    {
    };
  };

  // mailbox data high register
  struct TDH1R : Register<0x4000659c, ReadWriteMode, 0x0>
  {
    // DATA7
    struct DATA7 : RegisterField<TDH1R, 24, 8, ReadWriteMode>
    {
    };
    // DATA6
    struct DATA6 : RegisterField<TDH1R, 16, 8, ReadWriteMode>
    {
    };
    // DATA5
    struct DATA5 : RegisterField<TDH1R, 8, 8, ReadWriteMode>
    {
    };
    // DATA4
    struct DATA4 : RegisterField<TDH1R, 0, 8, ReadWriteMode>
    {
    };
  };

  // mailbox identifier register
  struct TI2R : Register<0x400065a0, ReadWriteMode, 0x0>
  {
    // STID
    struct STID : RegisterField<TI2R, 21, 11, ReadWriteMode>
    {
    };
    // EXID
    struct EXID : RegisterField<TI2R, 3, 18, ReadWriteMode>
    {
    };
    // IDE
    struct IDE : RegisterField<TI2R, 2, 1, ReadWriteMode>
    {
    };
    // RTR
    struct RTR : RegisterField<TI2R, 1, 1, ReadWriteMode>
    {
    };
    // TXRQ
    struct TXRQ : RegisterField<TI2R, 0, 1, ReadWriteMode>
    {
    };
  };

  // mailbox data length control and time stamp register
  struct TDT2R : Register<0x400065a4, ReadWriteMode, 0x0>
  {
    // TIME
    struct TIME : RegisterField<TDT2R, 16, 16, ReadWriteMode>
    {
    };
    // TGT
    struct TGT : RegisterField<TDT2R, 8, 1, ReadWriteMode>
    {
    };
    // DLC
    struct DLC : RegisterField<TDT2R, 0, 4, ReadWriteMode>
    {
    };
  };

  // mailbox data low register
  struct TDL2R : Register<0x400065a8, ReadWriteMode, 0x0>
  {
    // DATA3
    struct DATA3 : RegisterField<TDL2R, 24, 8, ReadWriteMode>
    {
    };
    // DATA2
    struct DATA2 : RegisterField<TDL2R, 16, 8, ReadWriteMode>
    {
    };
    // DATA1
    struct DATA1 : RegisterField<TDL2R, 8, 8, ReadWriteMode>
    {
    };
    // DATA0
    struct DATA0 : RegisterField<TDL2R, 0, 8, ReadWriteMode>
    {
    };
  };

  // mailbox data high register
  struct TDH2R : Register<0x400065ac, ReadWriteMode, 0x0>
  {
    // DATA7
    struct DATA7 : RegisterField<TDH2R, 24, 8, ReadWriteMode>
    {
    };
    // DATA6
    struct DATA6 : RegisterField<TDH2R, 16, 8, ReadWriteMode>
    {
    };
    // DATA5
    struct DATA5 : RegisterField<TDH2R, 8, 8, ReadWriteMode>
    {
    };
    // DATA4
    struct DATA4 : RegisterField<TDH2R, 0, 8, ReadWriteMode>
    {
    };
  };

  // receive FIFO mailbox identifier register
  struct RI0R : Register<0x400065b0, ReadMode, 0x0>
  {
    // STID
    struct STID : RegisterField<RI0R, 21, 11, ReadMode>
    {
    };
    // EXID
    struct EXID : RegisterField<RI0R, 3, 18, ReadMode>
    {
    };
    // IDE
    struct IDE : RegisterField<RI0R, 2, 1, ReadMode>
    {
    };
    // RTR
    struct RTR : RegisterField<RI0R, 1, 1, ReadMode>
    {
    };
  };

  // mailbox data high register
  struct RDT0R : Register<0x400065b4, ReadMode, 0x0>
  {
    // TIME
    struct TIME : RegisterField<RDT0R, 16, 16, ReadMode>
    {
    };
    // FMI
    struct FMI : RegisterField<RDT0R, 8, 8, ReadMode>
    {
    };
    // DLC
    struct DLC : RegisterField<RDT0R, 0, 4, ReadMode>
    {
    };
  };

  // mailbox data high register
  struct RDL0R : Register<0x400065b8, ReadMode, 0x0>
  {
    // DATA3
    struct DATA3 : RegisterField<RDL0R, 24, 8, ReadMode>
    {
    };
    // DATA2
    struct DATA2 : RegisterField<RDL0R, 16, 8, ReadMode>
    {
    };
    // DATA1
    struct DATA1 : RegisterField<RDL0R, 8, 8, ReadMode>
    {
    };
    // DATA0
    struct DATA0 : RegisterField<RDL0R, 0, 8, ReadMode>
    {
    };
  };

  // receive FIFO mailbox data high register
  struct RDH0R : Register<0x400065bc, ReadMode, 0x0>
  {
    // DATA7
    struct DATA7 : RegisterField<RDH0R, 24, 8, ReadMode>
    {
    };
    // DATA6
    struct DATA6 : RegisterField<RDH0R, 16, 8, ReadMode>
    {
    };
    // DATA5
    struct DATA5 : RegisterField<RDH0R, 8, 8, ReadMode>
    {
    };
    // DATA4
    struct DATA4 : RegisterField<RDH0R, 0, 8, ReadMode>
    {
    };
  };

  // mailbox data high register
  struct RI1R : Register<0x400065c0, ReadMode, 0x0>
  {
    // STID
    struct STID : RegisterField<RI1R, 21, 11, ReadMode>
    {
    };
    // EXID
    struct EXID : RegisterField<RI1R, 3, 18, ReadMode>
    {
    };
    // IDE
    struct IDE : RegisterField<RI1R, 2, 1, ReadMode>
    {
    };
    // RTR
    struct RTR : RegisterField<RI1R, 1, 1, ReadMode>
    {
    };
  };

  // mailbox data high register
  struct RDT1R : Register<0x400065c4, ReadMode, 0x0>
  {
    // TIME
    struct TIME : RegisterField<RDT1R, 16, 16, ReadMode>
    {
    };
    // FMI
    struct FMI : RegisterField<RDT1R, 8, 8, ReadMode>
    {
    };
    // DLC
    struct DLC : RegisterField<RDT1R, 0, 4, ReadMode>
    {
    };
  };

  // mailbox data high register
  struct RDL1R : Register<0x400065c8, ReadMode, 0x0>
  {
    // DATA3
    struct DATA3 : RegisterField<RDL1R, 24, 8, ReadMode>
    {
    };
    // DATA2
    struct DATA2 : RegisterField<RDL1R, 16, 8, ReadMode>
    {
    };
    // DATA1
    struct DATA1 : RegisterField<RDL1R, 8, 8, ReadMode>
    {
    };
    // DATA0
    struct DATA0 : RegisterField<RDL1R, 0, 8, ReadMode>
    {
    };
  };

  // mailbox data high register
  struct RDH1R : Register<0x400065cc, ReadMode, 0x0>
  {
    // DATA7
    struct DATA7 : RegisterField<RDH1R, 24, 8, ReadMode>
    {
    };
    // DATA6
    struct DATA6 : RegisterField<RDH1R, 16, 8, ReadMode>
    {
    };
    // DATA5
    struct DATA5 : RegisterField<RDH1R, 8, 8, ReadMode>
    {
    };
    // DATA4
    struct DATA4 : RegisterField<RDH1R, 0, 8, ReadMode>
    {
    };
  };

  // filter master register
  struct FMR : Register<0x40006600, ReadWriteMode, 0x2a1c0e01>
  {
    // CAN2SB
    struct CAN2SB : RegisterField<FMR, 8, 6, ReadWriteMode>
    {
    };
    // FINIT
    struct FINIT : RegisterField<FMR, 0, 1, ReadWriteMode>
    {
    };
  };

  // filter mode register
  struct FM1R : Register<0x40006604, ReadWriteMode, 0x0>
  {
    // Filter mode
    struct FBM27 : RegisterField<FM1R, 27, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM26 : RegisterField<FM1R, 26, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM25 : RegisterField<FM1R, 25, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM24 : RegisterField<FM1R, 24, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM23 : RegisterField<FM1R, 23, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM22 : RegisterField<FM1R, 22, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM21 : RegisterField<FM1R, 21, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM20 : RegisterField<FM1R, 20, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM19 : RegisterField<FM1R, 19, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM18 : RegisterField<FM1R, 18, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM17 : RegisterField<FM1R, 17, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM16 : RegisterField<FM1R, 16, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM15 : RegisterField<FM1R, 15, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM14 : RegisterField<FM1R, 14, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM13 : RegisterField<FM1R, 13, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM12 : RegisterField<FM1R, 12, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM11 : RegisterField<FM1R, 11, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM10 : RegisterField<FM1R, 10, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM9 : RegisterField<FM1R, 9, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM8 : RegisterField<FM1R, 8, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM7 : RegisterField<FM1R, 7, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM6 : RegisterField<FM1R, 6, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM5 : RegisterField<FM1R, 5, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM4 : RegisterField<FM1R, 4, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM3 : RegisterField<FM1R, 3, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM2 : RegisterField<FM1R, 2, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM1 : RegisterField<FM1R, 1, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM0 : RegisterField<FM1R, 0, 1, ReadWriteMode>
    {
    };
  };

  // filter scale register
  struct FS1R : Register<0x4000660c, ReadWriteMode, 0x0>
  {
    // Filter scale configuration
    struct FSC27 : RegisterField<FS1R, 27, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC26 : RegisterField<FS1R, 26, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC25 : RegisterField<FS1R, 25, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC24 : RegisterField<FS1R, 24, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC23 : RegisterField<FS1R, 23, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC22 : RegisterField<FS1R, 22, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC21 : RegisterField<FS1R, 21, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC20 : RegisterField<FS1R, 20, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC19 : RegisterField<FS1R, 19, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC18 : RegisterField<FS1R, 18, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC17 : RegisterField<FS1R, 17, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC16 : RegisterField<FS1R, 16, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC15 : RegisterField<FS1R, 15, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC14 : RegisterField<FS1R, 14, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC13 : RegisterField<FS1R, 13, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC12 : RegisterField<FS1R, 12, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC11 : RegisterField<FS1R, 11, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC10 : RegisterField<FS1R, 10, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC9 : RegisterField<FS1R, 9, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC8 : RegisterField<FS1R, 8, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC7 : RegisterField<FS1R, 7, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC6 : RegisterField<FS1R, 6, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC5 : RegisterField<FS1R, 5, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC4 : RegisterField<FS1R, 4, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC3 : RegisterField<FS1R, 3, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC2 : RegisterField<FS1R, 2, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC1 : RegisterField<FS1R, 1, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC0 : RegisterField<FS1R, 0, 1, ReadWriteMode>
    {
    };
  };

  // filter FIFO assignment register
  struct FFA1R : Register<0x40006614, ReadWriteMode, 0x0>
  {
    // Filter FIFO assignment for filter 27
    struct FFA27 : RegisterField<FFA1R, 27, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 26
    struct FFA26 : RegisterField<FFA1R, 26, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 25
    struct FFA25 : RegisterField<FFA1R, 25, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 24
    struct FFA24 : RegisterField<FFA1R, 24, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 23
    struct FFA23 : RegisterField<FFA1R, 23, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 22
    struct FFA22 : RegisterField<FFA1R, 22, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 21
    struct FFA21 : RegisterField<FFA1R, 21, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 20
    struct FFA20 : RegisterField<FFA1R, 20, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 19
    struct FFA19 : RegisterField<FFA1R, 19, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 18
    struct FFA18 : RegisterField<FFA1R, 18, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 17
    struct FFA17 : RegisterField<FFA1R, 17, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 16
    struct FFA16 : RegisterField<FFA1R, 16, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 15
    struct FFA15 : RegisterField<FFA1R, 15, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 14
    struct FFA14 : RegisterField<FFA1R, 14, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 13
    struct FFA13 : RegisterField<FFA1R, 13, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 12
    struct FFA12 : RegisterField<FFA1R, 12, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 11
    struct FFA11 : RegisterField<FFA1R, 11, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 10
    struct FFA10 : RegisterField<FFA1R, 10, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 9
    struct FFA9 : RegisterField<FFA1R, 9, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 8
    struct FFA8 : RegisterField<FFA1R, 8, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 7
    struct FFA7 : RegisterField<FFA1R, 7, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 6
    struct FFA6 : RegisterField<FFA1R, 6, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 5
    struct FFA5 : RegisterField<FFA1R, 5, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 4
    struct FFA4 : RegisterField<FFA1R, 4, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 3
    struct FFA3 : RegisterField<FFA1R, 3, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 2
    struct FFA2 : RegisterField<FFA1R, 2, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 1
    struct FFA1 : RegisterField<FFA1R, 1, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 0
    struct FFA0 : RegisterField<FFA1R, 0, 1, ReadWriteMode>
    {
    };
  };

  // filter activation register
  struct FA1R : Register<0x4000661c, ReadWriteMode, 0x0>
  {
    // Filter active
    struct FACT27 : RegisterField<FA1R, 27, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT26 : RegisterField<FA1R, 26, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT25 : RegisterField<FA1R, 25, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT24 : RegisterField<FA1R, 24, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT23 : RegisterField<FA1R, 23, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT22 : RegisterField<FA1R, 22, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT21 : RegisterField<FA1R, 21, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT20 : RegisterField<FA1R, 20, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT19 : RegisterField<FA1R, 19, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT18 : RegisterField<FA1R, 18, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT17 : RegisterField<FA1R, 17, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT16 : RegisterField<FA1R, 16, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT15 : RegisterField<FA1R, 15, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT14 : RegisterField<FA1R, 14, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT13 : RegisterField<FA1R, 13, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT12 : RegisterField<FA1R, 12, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT11 : RegisterField<FA1R, 11, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT10 : RegisterField<FA1R, 10, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT9 : RegisterField<FA1R, 9, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT8 : RegisterField<FA1R, 8, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT7 : RegisterField<FA1R, 7, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT6 : RegisterField<FA1R, 6, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT5 : RegisterField<FA1R, 5, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT4 : RegisterField<FA1R, 4, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT3 : RegisterField<FA1R, 3, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT2 : RegisterField<FA1R, 2, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT1 : RegisterField<FA1R, 1, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT0 : RegisterField<FA1R, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 0 register 1
  struct F0R1 : Register<0x40006640, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F0R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F0R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F0R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F0R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F0R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F0R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F0R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F0R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F0R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F0R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F0R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F0R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F0R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F0R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F0R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F0R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F0R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F0R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F0R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F0R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F0R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F0R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F0R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F0R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F0R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F0R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F0R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F0R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F0R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F0R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F0R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F0R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 0 register 2
  struct F0R2 : Register<0x40006644, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F0R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F0R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F0R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F0R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F0R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F0R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F0R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F0R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F0R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F0R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F0R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F0R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F0R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F0R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F0R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F0R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F0R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F0R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F0R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F0R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F0R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F0R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F0R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F0R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F0R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F0R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F0R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F0R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F0R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F0R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F0R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F0R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 1 register 1
  struct F1R1 : Register<0x40006648, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F1R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F1R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F1R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F1R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F1R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F1R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F1R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F1R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F1R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F1R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F1R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F1R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F1R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F1R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F1R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F1R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F1R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F1R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F1R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F1R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F1R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F1R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F1R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F1R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F1R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F1R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F1R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F1R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F1R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F1R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F1R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F1R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 1 register 2
  struct F1R2 : Register<0x4000664c, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F1R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F1R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F1R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F1R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F1R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F1R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F1R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F1R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F1R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F1R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F1R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F1R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F1R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F1R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F1R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F1R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F1R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F1R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F1R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F1R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F1R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F1R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F1R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F1R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F1R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F1R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F1R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F1R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F1R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F1R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F1R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F1R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 2 register 1
  struct F2R1 : Register<0x40006650, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F2R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F2R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F2R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F2R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F2R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F2R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F2R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F2R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F2R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F2R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F2R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F2R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F2R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F2R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F2R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F2R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F2R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F2R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F2R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F2R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F2R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F2R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F2R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F2R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F2R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F2R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F2R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F2R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F2R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F2R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F2R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F2R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 2 register 2
  struct F2R2 : Register<0x40006654, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F2R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F2R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F2R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F2R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F2R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F2R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F2R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F2R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F2R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F2R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F2R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F2R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F2R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F2R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F2R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F2R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F2R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F2R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F2R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F2R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F2R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F2R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F2R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F2R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F2R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F2R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F2R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F2R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F2R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F2R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F2R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F2R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 3 register 1
  struct F3R1 : Register<0x40006658, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F3R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F3R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F3R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F3R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F3R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F3R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F3R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F3R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F3R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F3R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F3R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F3R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F3R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F3R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F3R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F3R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F3R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F3R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F3R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F3R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F3R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F3R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F3R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F3R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F3R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F3R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F3R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F3R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F3R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F3R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F3R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F3R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 3 register 2
  struct F3R2 : Register<0x4000665c, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F3R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F3R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F3R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F3R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F3R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F3R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F3R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F3R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F3R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F3R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F3R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F3R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F3R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F3R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F3R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F3R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F3R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F3R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F3R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F3R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F3R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F3R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F3R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F3R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F3R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F3R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F3R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F3R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F3R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F3R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F3R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F3R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 4 register 1
  struct F4R1 : Register<0x40006660, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F4R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F4R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F4R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F4R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F4R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F4R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F4R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F4R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F4R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F4R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F4R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F4R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F4R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F4R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F4R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F4R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F4R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F4R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F4R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F4R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F4R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F4R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F4R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F4R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F4R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F4R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F4R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F4R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F4R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F4R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F4R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F4R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 4 register 2
  struct F4R2 : Register<0x40006664, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F4R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F4R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F4R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F4R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F4R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F4R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F4R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F4R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F4R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F4R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F4R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F4R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F4R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F4R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F4R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F4R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F4R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F4R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F4R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F4R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F4R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F4R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F4R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F4R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F4R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F4R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F4R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F4R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F4R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F4R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F4R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F4R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 5 register 1
  struct F5R1 : Register<0x40006668, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F5R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F5R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F5R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F5R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F5R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F5R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F5R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F5R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F5R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F5R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F5R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F5R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F5R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F5R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F5R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F5R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F5R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F5R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F5R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F5R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F5R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F5R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F5R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F5R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F5R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F5R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F5R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F5R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F5R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F5R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F5R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F5R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 5 register 2
  struct F5R2 : Register<0x4000666c, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F5R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F5R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F5R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F5R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F5R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F5R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F5R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F5R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F5R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F5R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F5R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F5R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F5R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F5R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F5R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F5R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F5R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F5R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F5R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F5R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F5R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F5R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F5R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F5R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F5R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F5R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F5R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F5R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F5R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F5R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F5R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F5R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 6 register 1
  struct F6R1 : Register<0x40006670, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F6R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F6R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F6R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F6R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F6R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F6R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F6R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F6R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F6R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F6R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F6R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F6R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F6R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F6R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F6R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F6R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F6R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F6R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F6R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F6R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F6R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F6R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F6R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F6R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F6R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F6R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F6R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F6R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F6R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F6R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F6R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F6R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 6 register 2
  struct F6R2 : Register<0x40006674, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F6R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F6R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F6R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F6R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F6R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F6R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F6R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F6R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F6R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F6R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F6R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F6R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F6R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F6R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F6R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F6R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F6R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F6R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F6R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F6R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F6R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F6R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F6R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F6R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F6R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F6R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F6R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F6R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F6R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F6R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F6R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F6R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 7 register 1
  struct F7R1 : Register<0x40006678, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F7R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F7R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F7R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F7R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F7R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F7R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F7R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F7R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F7R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F7R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F7R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F7R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F7R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F7R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F7R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F7R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F7R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F7R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F7R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F7R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F7R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F7R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F7R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F7R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F7R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F7R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F7R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F7R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F7R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F7R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F7R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F7R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 7 register 2
  struct F7R2 : Register<0x4000667c, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F7R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F7R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F7R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F7R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F7R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F7R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F7R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F7R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F7R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F7R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F7R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F7R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F7R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F7R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F7R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F7R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F7R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F7R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F7R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F7R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F7R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F7R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F7R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F7R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F7R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F7R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F7R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F7R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F7R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F7R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F7R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F7R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 8 register 1
  struct F8R1 : Register<0x40006680, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F8R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F8R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F8R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F8R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F8R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F8R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F8R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F8R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F8R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F8R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F8R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F8R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F8R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F8R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F8R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F8R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F8R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F8R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F8R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F8R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F8R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F8R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F8R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F8R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F8R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F8R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F8R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F8R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F8R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F8R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F8R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F8R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 8 register 2
  struct F8R2 : Register<0x40006684, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F8R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F8R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F8R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F8R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F8R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F8R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F8R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F8R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F8R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F8R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F8R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F8R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F8R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F8R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F8R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F8R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F8R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F8R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F8R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F8R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F8R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F8R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F8R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F8R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F8R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F8R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F8R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F8R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F8R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F8R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F8R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F8R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 9 register 1
  struct F9R1 : Register<0x40006688, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F9R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F9R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F9R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F9R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F9R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F9R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F9R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F9R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F9R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F9R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F9R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F9R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F9R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F9R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F9R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F9R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F9R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F9R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F9R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F9R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F9R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F9R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F9R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F9R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F9R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F9R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F9R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F9R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F9R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F9R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F9R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F9R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 9 register 2
  struct F9R2 : Register<0x4000668c, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F9R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F9R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F9R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F9R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F9R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F9R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F9R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F9R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F9R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F9R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F9R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F9R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F9R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F9R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F9R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F9R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F9R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F9R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F9R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F9R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F9R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F9R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F9R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F9R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F9R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F9R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F9R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F9R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F9R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F9R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F9R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F9R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 10 register 1
  struct F10R1 : Register<0x40006690, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F10R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F10R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F10R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F10R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F10R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F10R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F10R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F10R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F10R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F10R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F10R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F10R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F10R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F10R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F10R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F10R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F10R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F10R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F10R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F10R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F10R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F10R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F10R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F10R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F10R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F10R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F10R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F10R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F10R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F10R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F10R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F10R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 10 register 2
  struct F10R2 : Register<0x40006694, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F10R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F10R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F10R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F10R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F10R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F10R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F10R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F10R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F10R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F10R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F10R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F10R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F10R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F10R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F10R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F10R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F10R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F10R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F10R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F10R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F10R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F10R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F10R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F10R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F10R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F10R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F10R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F10R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F10R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F10R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F10R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F10R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 11 register 1
  struct F11R1 : Register<0x40006698, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F11R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F11R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F11R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F11R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F11R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F11R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F11R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F11R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F11R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F11R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F11R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F11R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F11R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F11R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F11R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F11R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F11R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F11R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F11R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F11R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F11R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F11R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F11R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F11R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F11R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F11R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F11R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F11R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F11R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F11R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F11R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F11R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 11 register 2
  struct F11R2 : Register<0x4000669c, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F11R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F11R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F11R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F11R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F11R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F11R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F11R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F11R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F11R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F11R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F11R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F11R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F11R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F11R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F11R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F11R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F11R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F11R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F11R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F11R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F11R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F11R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F11R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F11R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F11R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F11R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F11R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F11R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F11R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F11R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F11R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F11R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 4 register 1
  struct F12R1 : Register<0x400066a0, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F12R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F12R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F12R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F12R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F12R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F12R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F12R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F12R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F12R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F12R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F12R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F12R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F12R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F12R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F12R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F12R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F12R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F12R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F12R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F12R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F12R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F12R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F12R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F12R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F12R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F12R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F12R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F12R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F12R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F12R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F12R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F12R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 12 register 2
  struct F12R2 : Register<0x400066a4, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F12R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F12R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F12R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F12R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F12R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F12R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F12R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F12R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F12R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F12R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F12R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F12R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F12R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F12R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F12R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F12R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F12R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F12R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F12R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F12R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F12R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F12R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F12R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F12R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F12R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F12R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F12R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F12R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F12R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F12R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F12R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F12R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 13 register 1
  struct F13R1 : Register<0x400066a8, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F13R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F13R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F13R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F13R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F13R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F13R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F13R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F13R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F13R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F13R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F13R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F13R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F13R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F13R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F13R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F13R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F13R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F13R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F13R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F13R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F13R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F13R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F13R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F13R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F13R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F13R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F13R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F13R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F13R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F13R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F13R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F13R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 13 register 2
  struct F13R2 : Register<0x400066ac, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F13R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F13R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F13R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F13R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F13R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F13R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F13R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F13R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F13R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F13R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F13R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F13R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F13R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F13R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F13R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F13R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F13R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F13R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F13R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F13R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F13R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F13R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F13R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F13R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F13R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F13R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F13R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F13R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F13R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F13R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F13R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F13R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 14 register 1
  struct F14R1 : Register<0x400066b0, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F14R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F14R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F14R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F14R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F14R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F14R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F14R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F14R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F14R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F14R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F14R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F14R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F14R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F14R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F14R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F14R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F14R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F14R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F14R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F14R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F14R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F14R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F14R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F14R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F14R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F14R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F14R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F14R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F14R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F14R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F14R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F14R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 14 register 2
  struct F14R2 : Register<0x400066b4, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F14R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F14R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F14R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F14R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F14R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F14R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F14R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F14R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F14R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F14R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F14R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F14R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F14R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F14R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F14R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F14R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F14R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F14R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F14R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F14R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F14R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F14R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F14R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F14R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F14R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F14R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F14R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F14R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F14R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F14R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F14R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F14R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 15 register 1
  struct F15R1 : Register<0x400066b8, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F15R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F15R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F15R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F15R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F15R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F15R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F15R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F15R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F15R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F15R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F15R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F15R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F15R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F15R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F15R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F15R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F15R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F15R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F15R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F15R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F15R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F15R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F15R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F15R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F15R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F15R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F15R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F15R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F15R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F15R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F15R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F15R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 15 register 2
  struct F15R2 : Register<0x400066bc, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F15R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F15R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F15R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F15R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F15R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F15R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F15R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F15R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F15R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F15R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F15R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F15R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F15R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F15R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F15R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F15R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F15R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F15R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F15R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F15R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F15R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F15R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F15R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F15R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F15R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F15R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F15R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F15R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F15R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F15R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F15R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F15R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 16 register 1
  struct F16R1 : Register<0x400066c0, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F16R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F16R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F16R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F16R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F16R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F16R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F16R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F16R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F16R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F16R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F16R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F16R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F16R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F16R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F16R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F16R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F16R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F16R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F16R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F16R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F16R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F16R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F16R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F16R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F16R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F16R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F16R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F16R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F16R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F16R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F16R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F16R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 16 register 2
  struct F16R2 : Register<0x400066c4, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F16R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F16R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F16R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F16R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F16R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F16R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F16R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F16R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F16R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F16R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F16R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F16R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F16R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F16R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F16R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F16R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F16R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F16R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F16R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F16R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F16R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F16R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F16R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F16R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F16R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F16R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F16R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F16R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F16R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F16R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F16R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F16R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 17 register 1
  struct F17R1 : Register<0x400066c8, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F17R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F17R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F17R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F17R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F17R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F17R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F17R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F17R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F17R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F17R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F17R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F17R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F17R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F17R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F17R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F17R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F17R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F17R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F17R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F17R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F17R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F17R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F17R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F17R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F17R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F17R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F17R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F17R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F17R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F17R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F17R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F17R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 17 register 2
  struct F17R2 : Register<0x400066cc, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F17R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F17R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F17R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F17R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F17R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F17R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F17R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F17R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F17R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F17R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F17R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F17R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F17R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F17R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F17R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F17R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F17R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F17R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F17R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F17R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F17R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F17R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F17R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F17R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F17R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F17R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F17R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F17R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F17R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F17R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F17R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F17R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 18 register 1
  struct F18R1 : Register<0x400066d0, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F18R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F18R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F18R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F18R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F18R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F18R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F18R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F18R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F18R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F18R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F18R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F18R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F18R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F18R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F18R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F18R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F18R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F18R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F18R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F18R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F18R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F18R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F18R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F18R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F18R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F18R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F18R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F18R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F18R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F18R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F18R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F18R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 18 register 2
  struct F18R2 : Register<0x400066d4, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F18R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F18R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F18R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F18R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F18R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F18R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F18R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F18R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F18R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F18R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F18R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F18R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F18R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F18R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F18R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F18R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F18R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F18R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F18R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F18R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F18R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F18R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F18R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F18R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F18R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F18R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F18R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F18R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F18R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F18R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F18R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F18R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 19 register 1
  struct F19R1 : Register<0x400066d8, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F19R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F19R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F19R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F19R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F19R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F19R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F19R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F19R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F19R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F19R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F19R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F19R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F19R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F19R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F19R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F19R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F19R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F19R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F19R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F19R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F19R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F19R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F19R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F19R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F19R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F19R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F19R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F19R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F19R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F19R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F19R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F19R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 19 register 2
  struct F19R2 : Register<0x400066dc, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F19R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F19R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F19R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F19R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F19R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F19R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F19R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F19R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F19R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F19R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F19R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F19R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F19R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F19R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F19R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F19R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F19R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F19R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F19R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F19R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F19R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F19R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F19R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F19R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F19R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F19R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F19R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F19R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F19R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F19R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F19R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F19R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 20 register 1
  struct F20R1 : Register<0x400066e0, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F20R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F20R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F20R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F20R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F20R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F20R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F20R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F20R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F20R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F20R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F20R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F20R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F20R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F20R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F20R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F20R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F20R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F20R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F20R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F20R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F20R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F20R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F20R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F20R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F20R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F20R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F20R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F20R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F20R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F20R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F20R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F20R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 20 register 2
  struct F20R2 : Register<0x400066e4, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F20R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F20R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F20R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F20R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F20R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F20R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F20R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F20R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F20R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F20R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F20R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F20R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F20R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F20R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F20R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F20R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F20R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F20R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F20R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F20R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F20R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F20R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F20R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F20R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F20R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F20R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F20R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F20R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F20R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F20R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F20R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F20R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 21 register 1
  struct F21R1 : Register<0x400066e8, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F21R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F21R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F21R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F21R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F21R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F21R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F21R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F21R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F21R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F21R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F21R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F21R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F21R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F21R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F21R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F21R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F21R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F21R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F21R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F21R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F21R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F21R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F21R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F21R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F21R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F21R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F21R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F21R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F21R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F21R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F21R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F21R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 21 register 2
  struct F21R2 : Register<0x400066ec, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F21R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F21R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F21R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F21R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F21R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F21R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F21R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F21R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F21R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F21R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F21R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F21R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F21R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F21R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F21R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F21R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F21R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F21R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F21R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F21R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F21R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F21R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F21R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F21R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F21R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F21R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F21R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F21R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F21R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F21R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F21R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F21R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 22 register 1
  struct F22R1 : Register<0x400066f0, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F22R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F22R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F22R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F22R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F22R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F22R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F22R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F22R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F22R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F22R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F22R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F22R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F22R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F22R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F22R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F22R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F22R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F22R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F22R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F22R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F22R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F22R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F22R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F22R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F22R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F22R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F22R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F22R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F22R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F22R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F22R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F22R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 22 register 2
  struct F22R2 : Register<0x400066f4, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F22R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F22R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F22R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F22R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F22R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F22R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F22R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F22R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F22R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F22R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F22R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F22R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F22R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F22R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F22R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F22R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F22R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F22R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F22R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F22R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F22R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F22R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F22R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F22R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F22R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F22R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F22R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F22R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F22R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F22R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F22R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F22R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 23 register 1
  struct F23R1 : Register<0x400066f8, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F23R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F23R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F23R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F23R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F23R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F23R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F23R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F23R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F23R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F23R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F23R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F23R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F23R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F23R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F23R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F23R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F23R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F23R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F23R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F23R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F23R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F23R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F23R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F23R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F23R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F23R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F23R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F23R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F23R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F23R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F23R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F23R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 23 register 2
  struct F23R2 : Register<0x400066fc, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F23R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F23R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F23R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F23R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F23R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F23R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F23R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F23R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F23R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F23R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F23R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F23R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F23R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F23R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F23R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F23R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F23R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F23R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F23R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F23R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F23R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F23R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F23R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F23R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F23R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F23R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F23R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F23R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F23R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F23R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F23R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F23R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 24 register 1
  struct F24R1 : Register<0x40006700, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F24R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F24R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F24R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F24R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F24R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F24R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F24R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F24R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F24R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F24R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F24R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F24R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F24R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F24R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F24R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F24R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F24R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F24R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F24R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F24R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F24R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F24R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F24R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F24R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F24R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F24R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F24R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F24R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F24R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F24R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F24R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F24R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 24 register 2
  struct F24R2 : Register<0x40006704, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F24R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F24R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F24R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F24R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F24R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F24R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F24R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F24R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F24R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F24R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F24R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F24R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F24R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F24R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F24R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F24R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F24R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F24R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F24R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F24R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F24R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F24R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F24R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F24R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F24R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F24R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F24R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F24R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F24R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F24R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F24R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F24R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 25 register 1
  struct F25R1 : Register<0x40006708, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F25R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F25R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F25R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F25R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F25R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F25R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F25R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F25R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F25R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F25R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F25R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F25R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F25R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F25R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F25R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F25R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F25R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F25R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F25R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F25R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F25R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F25R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F25R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F25R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F25R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F25R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F25R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F25R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F25R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F25R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F25R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F25R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 25 register 2
  struct F25R2 : Register<0x4000670c, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F25R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F25R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F25R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F25R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F25R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F25R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F25R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F25R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F25R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F25R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F25R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F25R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F25R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F25R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F25R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F25R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F25R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F25R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F25R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F25R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F25R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F25R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F25R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F25R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F25R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F25R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F25R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F25R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F25R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F25R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F25R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F25R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 26 register 1
  struct F26R1 : Register<0x40006710, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F26R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F26R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F26R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F26R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F26R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F26R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F26R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F26R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F26R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F26R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F26R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F26R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F26R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F26R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F26R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F26R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F26R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F26R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F26R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F26R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F26R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F26R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F26R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F26R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F26R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F26R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F26R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F26R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F26R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F26R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F26R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F26R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 26 register 2
  struct F26R2 : Register<0x40006714, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F26R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F26R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F26R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F26R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F26R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F26R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F26R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F26R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F26R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F26R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F26R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F26R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F26R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F26R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F26R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F26R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F26R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F26R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F26R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F26R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F26R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F26R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F26R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F26R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F26R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F26R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F26R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F26R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F26R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F26R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F26R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F26R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 27 register 1
  struct F27R1 : Register<0x40006718, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F27R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F27R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F27R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F27R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F27R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F27R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F27R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F27R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F27R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F27R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F27R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F27R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F27R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F27R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F27R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F27R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F27R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F27R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F27R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F27R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F27R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F27R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F27R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F27R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F27R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F27R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F27R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F27R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F27R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F27R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F27R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F27R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 27 register 2
  struct F27R2 : Register<0x4000671c, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F27R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F27R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F27R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F27R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F27R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F27R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F27R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F27R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F27R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F27R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F27R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F27R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F27R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F27R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F27R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F27R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F27R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F27R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F27R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F27R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F27R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F27R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F27R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F27R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F27R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F27R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F27R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F27R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F27R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F27R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F27R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F27R2, 0, 1, ReadWriteMode>
    {
    };
  };

// Large Registers

};


struct CAN2
{
  static constexpr auto periphNum = 2;

  // master control register
  struct MCR : Register<0x40006800, ReadWriteMode, 0x10002>
  {
    // DBF
    struct DBF : RegisterField<MCR, 16, 1, ReadWriteMode>
    {
    };
    // RESET
    struct RESET : RegisterField<MCR, 15, 1, ReadWriteMode>
    {
    };
    // TTCM
    struct TTCM : RegisterField<MCR, 7, 1, ReadWriteMode>
    {
    };
    // ABOM
    struct ABOM : RegisterField<MCR, 6, 1, ReadWriteMode>
    {
    };
    // AWUM
    struct AWUM : RegisterField<MCR, 5, 1, ReadWriteMode>
    {
    };
    // NART
    struct NART : RegisterField<MCR, 4, 1, ReadWriteMode>
    {
    };
    // RFLM
    struct RFLM : RegisterField<MCR, 3, 1, ReadWriteMode>
    {
    };
    // TXFP
    struct TXFP : RegisterField<MCR, 2, 1, ReadWriteMode>
    {
    };
    // SLEEP
    struct SLEEP : RegisterField<MCR, 1, 1, ReadWriteMode>
    {
    };
    // INRQ
    struct INRQ : RegisterField<MCR, 0, 1, ReadWriteMode>
    {
    };
  };

  // master status register
  struct MSR : Register<0x40006804, ReadWriteMode, 0xc02>
  {
    // RX
    struct RX : RegisterField<MSR, 11, 1, ReadMode>
    {
    };
    // SAMP
    struct SAMP : RegisterField<MSR, 10, 1, ReadMode>
    {
    };
    // RXM
    struct RXM : RegisterField<MSR, 9, 1, ReadMode>
    {
    };
    // TXM
    struct TXM : RegisterField<MSR, 8, 1, ReadMode>
    {
    };
    // SLAKI
    struct SLAKI : RegisterField<MSR, 4, 1, ReadWriteMode>
    {
    };
    // WKUI
    struct WKUI : RegisterField<MSR, 3, 1, ReadWriteMode>
    {
    };
    // ERRI
    struct ERRI : RegisterField<MSR, 2, 1, ReadWriteMode>
    {
    };
    // SLAK
    struct SLAK : RegisterField<MSR, 1, 1, ReadMode>
    {
    };
    // INAK
    struct INAK : RegisterField<MSR, 0, 1, ReadMode>
    {
    };
  };

  // transmit status register
  struct TSR : Register<0x40006808, ReadWriteMode, 0x1c000000>
  {
    // Lowest priority flag for mailbox 2
    struct LOW2 : RegisterField<TSR, 31, 1, ReadMode>
    {
    };
    // Lowest priority flag for mailbox 1
    struct LOW1 : RegisterField<TSR, 30, 1, ReadMode>
    {
    };
    // Lowest priority flag for mailbox 0
    struct LOW0 : RegisterField<TSR, 29, 1, ReadMode>
    {
    };
    // Lowest priority flag for mailbox 2
    struct TME2 : RegisterField<TSR, 28, 1, ReadMode>
    {
    };
    // Lowest priority flag for mailbox 1
    struct TME1 : RegisterField<TSR, 27, 1, ReadMode>
    {
    };
    // Lowest priority flag for mailbox 0
    struct TME0 : RegisterField<TSR, 26, 1, ReadMode>
    {
    };
    // CODE
    struct CODE : RegisterField<TSR, 24, 2, ReadMode>
    {
    };
    // ABRQ2
    struct ABRQ2 : RegisterField<TSR, 23, 1, ReadWriteMode>
    {
    };
    // TERR2
    struct TERR2 : RegisterField<TSR, 19, 1, ReadWriteMode>
    {
    };
    // ALST2
    struct ALST2 : RegisterField<TSR, 18, 1, ReadWriteMode>
    {
    };
    // TXOK2
    struct TXOK2 : RegisterField<TSR, 17, 1, ReadWriteMode>
    {
    };
    // RQCP2
    struct RQCP2 : RegisterField<TSR, 16, 1, ReadWriteMode>
    {
    };
    // ABRQ1
    struct ABRQ1 : RegisterField<TSR, 15, 1, ReadWriteMode>
    {
    };
    // TERR1
    struct TERR1 : RegisterField<TSR, 11, 1, ReadWriteMode>
    {
    };
    // ALST1
    struct ALST1 : RegisterField<TSR, 10, 1, ReadWriteMode>
    {
    };
    // TXOK1
    struct TXOK1 : RegisterField<TSR, 9, 1, ReadWriteMode>
    {
    };
    // RQCP1
    struct RQCP1 : RegisterField<TSR, 8, 1, ReadWriteMode>
    {
    };
    // ABRQ0
    struct ABRQ0 : RegisterField<TSR, 7, 1, ReadWriteMode>
    {
    };
    // TERR0
    struct TERR0 : RegisterField<TSR, 3, 1, ReadWriteMode>
    {
    };
    // ALST0
    struct ALST0 : RegisterField<TSR, 2, 1, ReadWriteMode>
    {
    };
    // TXOK0
    struct TXOK0 : RegisterField<TSR, 1, 1, ReadWriteMode>
    {
    };
    // RQCP0
    struct RQCP0 : RegisterField<TSR, 0, 1, ReadWriteMode>
    {
    };
  };

  // receive FIFO 0 register
  struct RF0R : Register<0x4000680c, ReadWriteMode, 0x0>
  {
    // RFOM0
    struct RFOM0 : RegisterField<RF0R, 5, 1, ReadWriteMode>
    {
    };
    // FOVR0
    struct FOVR0 : RegisterField<RF0R, 4, 1, ReadWriteMode>
    {
    };
    // FULL0
    struct FULL0 : RegisterField<RF0R, 3, 1, ReadWriteMode>
    {
    };
    // FMP0
    struct FMP0 : RegisterField<RF0R, 0, 2, ReadMode>
    {
    };
  };

  // receive FIFO 1 register
  struct RF1R : Register<0x40006810, ReadWriteMode, 0x0>
  {
    // RFOM1
    struct RFOM1 : RegisterField<RF1R, 5, 1, ReadWriteMode>
    {
    };
    // FOVR1
    struct FOVR1 : RegisterField<RF1R, 4, 1, ReadWriteMode>
    {
    };
    // FULL1
    struct FULL1 : RegisterField<RF1R, 3, 1, ReadWriteMode>
    {
    };
    // FMP1
    struct FMP1 : RegisterField<RF1R, 0, 2, ReadMode>
    {
    };
  };

  // interrupt enable register
  struct IER : Register<0x40006814, ReadWriteMode, 0x0>
  {
    // SLKIE
    struct SLKIE : RegisterField<IER, 17, 1, ReadWriteMode>
    {
    };
    // WKUIE
    struct WKUIE : RegisterField<IER, 16, 1, ReadWriteMode>
    {
    };
    // ERRIE
    struct ERRIE : RegisterField<IER, 15, 1, ReadWriteMode>
    {
    };
    // LECIE
    struct LECIE : RegisterField<IER, 11, 1, ReadWriteMode>
    {
    };
    // BOFIE
    struct BOFIE : RegisterField<IER, 10, 1, ReadWriteMode>
    {
    };
    // EPVIE
    struct EPVIE : RegisterField<IER, 9, 1, ReadWriteMode>
    {
    };
    // EWGIE
    struct EWGIE : RegisterField<IER, 8, 1, ReadWriteMode>
    {
    };
    // FOVIE1
    struct FOVIE1 : RegisterField<IER, 6, 1, ReadWriteMode>
    {
    };
    // FFIE1
    struct FFIE1 : RegisterField<IER, 5, 1, ReadWriteMode>
    {
    };
    // FMPIE1
    struct FMPIE1 : RegisterField<IER, 4, 1, ReadWriteMode>
    {
    };
    // FOVIE0
    struct FOVIE0 : RegisterField<IER, 3, 1, ReadWriteMode>
    {
    };
    // FFIE0
    struct FFIE0 : RegisterField<IER, 2, 1, ReadWriteMode>
    {
    };
    // FMPIE0
    struct FMPIE0 : RegisterField<IER, 1, 1, ReadWriteMode>
    {
    };
    // TMEIE
    struct TMEIE : RegisterField<IER, 0, 1, ReadWriteMode>
    {
    };
  };

  // interrupt enable register
  struct ESR : Register<0x40006818, ReadWriteMode, 0x0>
  {
    // REC
    struct REC : RegisterField<ESR, 24, 8, ReadMode>
    {
    };
    // TEC
    struct TEC : RegisterField<ESR, 16, 8, ReadMode>
    {
    };
    // LEC
    struct LEC : RegisterField<ESR, 4, 3, ReadWriteMode>
    {
    };
    // BOFF
    struct BOFF : RegisterField<ESR, 2, 1, ReadMode>
    {
    };
    // EPVF
    struct EPVF : RegisterField<ESR, 1, 1, ReadMode>
    {
    };
    // EWGF
    struct EWGF : RegisterField<ESR, 0, 1, ReadMode>
    {
    };
  };

  // bit timing register
  struct BTR : Register<0x4000681c, ReadWriteMode, 0x0>
  {
    // SILM
    struct SILM : RegisterField<BTR, 31, 1, ReadWriteMode>
    {
    };
    // LBKM
    struct LBKM : RegisterField<BTR, 30, 1, ReadWriteMode>
    {
    };
    // SJW
    struct SJW : RegisterField<BTR, 24, 2, ReadWriteMode>
    {
    };
    // TS2
    struct TS2 : RegisterField<BTR, 20, 3, ReadWriteMode>
    {
    };
    // TS1
    struct TS1 : RegisterField<BTR, 16, 4, ReadWriteMode>
    {
    };
    // BRP
    struct BRP : RegisterField<BTR, 0, 10, ReadWriteMode>
    {
    };
  };

  // TX mailbox identifier register
  struct TI0R : Register<0x40006980, ReadWriteMode, 0x0>
  {
    // STID
    struct STID : RegisterField<TI0R, 21, 11, ReadWriteMode>
    {
    };
    // EXID
    struct EXID : RegisterField<TI0R, 3, 18, ReadWriteMode>
    {
    };
    // IDE
    struct IDE : RegisterField<TI0R, 2, 1, ReadWriteMode>
    {
    };
    // RTR
    struct RTR : RegisterField<TI0R, 1, 1, ReadWriteMode>
    {
    };
    // TXRQ
    struct TXRQ : RegisterField<TI0R, 0, 1, ReadWriteMode>
    {
    };
  };

  // mailbox data length control and time stamp register
  struct TDT0R : Register<0x40006984, ReadWriteMode, 0x0>
  {
    // TIME
    struct TIME : RegisterField<TDT0R, 16, 16, ReadWriteMode>
    {
    };
    // TGT
    struct TGT : RegisterField<TDT0R, 8, 1, ReadWriteMode>
    {
    };
    // DLC
    struct DLC : RegisterField<TDT0R, 0, 4, ReadWriteMode>
    {
    };
  };

  // mailbox data low register
  struct TDL0R : Register<0x40006988, ReadWriteMode, 0x0>
  {
    // DATA3
    struct DATA3 : RegisterField<TDL0R, 24, 8, ReadWriteMode>
    {
    };
    // DATA2
    struct DATA2 : RegisterField<TDL0R, 16, 8, ReadWriteMode>
    {
    };
    // DATA1
    struct DATA1 : RegisterField<TDL0R, 8, 8, ReadWriteMode>
    {
    };
    // DATA0
    struct DATA0 : RegisterField<TDL0R, 0, 8, ReadWriteMode>
    {
    };
  };

  // mailbox data high register
  struct TDH0R : Register<0x4000698c, ReadWriteMode, 0x0>
  {
    // DATA7
    struct DATA7 : RegisterField<TDH0R, 24, 8, ReadWriteMode>
    {
    };
    // DATA6
    struct DATA6 : RegisterField<TDH0R, 16, 8, ReadWriteMode>
    {
    };
    // DATA5
    struct DATA5 : RegisterField<TDH0R, 8, 8, ReadWriteMode>
    {
    };
    // DATA4
    struct DATA4 : RegisterField<TDH0R, 0, 8, ReadWriteMode>
    {
    };
  };

  // mailbox identifier register
  struct TI1R : Register<0x40006990, ReadWriteMode, 0x0>
  {
    // STID
    struct STID : RegisterField<TI1R, 21, 11, ReadWriteMode>
    {
    };
    // EXID
    struct EXID : RegisterField<TI1R, 3, 18, ReadWriteMode>
    {
    };
    // IDE
    struct IDE : RegisterField<TI1R, 2, 1, ReadWriteMode>
    {
    };
    // RTR
    struct RTR : RegisterField<TI1R, 1, 1, ReadWriteMode>
    {
    };
    // TXRQ
    struct TXRQ : RegisterField<TI1R, 0, 1, ReadWriteMode>
    {
    };
  };

  // mailbox data length control and time stamp register
  struct TDT1R : Register<0x40006994, ReadWriteMode, 0x0>
  {
    // TIME
    struct TIME : RegisterField<TDT1R, 16, 16, ReadWriteMode>
    {
    };
    // TGT
    struct TGT : RegisterField<TDT1R, 8, 1, ReadWriteMode>
    {
    };
    // DLC
    struct DLC : RegisterField<TDT1R, 0, 4, ReadWriteMode>
    {
    };
  };

  // mailbox data low register
  struct TDL1R : Register<0x40006998, ReadWriteMode, 0x0>
  {
    // DATA3
    struct DATA3 : RegisterField<TDL1R, 24, 8, ReadWriteMode>
    {
    };
    // DATA2
    struct DATA2 : RegisterField<TDL1R, 16, 8, ReadWriteMode>
    {
    };
    // DATA1
    struct DATA1 : RegisterField<TDL1R, 8, 8, ReadWriteMode>
    {
    };
    // DATA0
    struct DATA0 : RegisterField<TDL1R, 0, 8, ReadWriteMode>
    {
    };
  };

  // mailbox data high register
  struct TDH1R : Register<0x4000699c, ReadWriteMode, 0x0>
  {
    // DATA7
    struct DATA7 : RegisterField<TDH1R, 24, 8, ReadWriteMode>
    {
    };
    // DATA6
    struct DATA6 : RegisterField<TDH1R, 16, 8, ReadWriteMode>
    {
    };
    // DATA5
    struct DATA5 : RegisterField<TDH1R, 8, 8, ReadWriteMode>
    {
    };
    // DATA4
    struct DATA4 : RegisterField<TDH1R, 0, 8, ReadWriteMode>
    {
    };
  };

  // mailbox identifier register
  struct TI2R : Register<0x400069a0, ReadWriteMode, 0x0>
  {
    // STID
    struct STID : RegisterField<TI2R, 21, 11, ReadWriteMode>
    {
    };
    // EXID
    struct EXID : RegisterField<TI2R, 3, 18, ReadWriteMode>
    {
    };
    // IDE
    struct IDE : RegisterField<TI2R, 2, 1, ReadWriteMode>
    {
    };
    // RTR
    struct RTR : RegisterField<TI2R, 1, 1, ReadWriteMode>
    {
    };
    // TXRQ
    struct TXRQ : RegisterField<TI2R, 0, 1, ReadWriteMode>
    {
    };
  };

  // mailbox data length control and time stamp register
  struct TDT2R : Register<0x400069a4, ReadWriteMode, 0x0>
  {
    // TIME
    struct TIME : RegisterField<TDT2R, 16, 16, ReadWriteMode>
    {
    };
    // TGT
    struct TGT : RegisterField<TDT2R, 8, 1, ReadWriteMode>
    {
    };
    // DLC
    struct DLC : RegisterField<TDT2R, 0, 4, ReadWriteMode>
    {
    };
  };

  // mailbox data low register
  struct TDL2R : Register<0x400069a8, ReadWriteMode, 0x0>
  {
    // DATA3
    struct DATA3 : RegisterField<TDL2R, 24, 8, ReadWriteMode>
    {
    };
    // DATA2
    struct DATA2 : RegisterField<TDL2R, 16, 8, ReadWriteMode>
    {
    };
    // DATA1
    struct DATA1 : RegisterField<TDL2R, 8, 8, ReadWriteMode>
    {
    };
    // DATA0
    struct DATA0 : RegisterField<TDL2R, 0, 8, ReadWriteMode>
    {
    };
  };

  // mailbox data high register
  struct TDH2R : Register<0x400069ac, ReadWriteMode, 0x0>
  {
    // DATA7
    struct DATA7 : RegisterField<TDH2R, 24, 8, ReadWriteMode>
    {
    };
    // DATA6
    struct DATA6 : RegisterField<TDH2R, 16, 8, ReadWriteMode>
    {
    };
    // DATA5
    struct DATA5 : RegisterField<TDH2R, 8, 8, ReadWriteMode>
    {
    };
    // DATA4
    struct DATA4 : RegisterField<TDH2R, 0, 8, ReadWriteMode>
    {
    };
  };

  // receive FIFO mailbox identifier register
  struct RI0R : Register<0x400069b0, ReadMode, 0x0>
  {
    // STID
    struct STID : RegisterField<RI0R, 21, 11, ReadMode>
    {
    };
    // EXID
    struct EXID : RegisterField<RI0R, 3, 18, ReadMode>
    {
    };
    // IDE
    struct IDE : RegisterField<RI0R, 2, 1, ReadMode>
    {
    };
    // RTR
    struct RTR : RegisterField<RI0R, 1, 1, ReadMode>
    {
    };
  };

  // mailbox data high register
  struct RDT0R : Register<0x400069b4, ReadMode, 0x0>
  {
    // TIME
    struct TIME : RegisterField<RDT0R, 16, 16, ReadMode>
    {
    };
    // FMI
    struct FMI : RegisterField<RDT0R, 8, 8, ReadMode>
    {
    };
    // DLC
    struct DLC : RegisterField<RDT0R, 0, 4, ReadMode>
    {
    };
  };

  // mailbox data high register
  struct RDL0R : Register<0x400069b8, ReadMode, 0x0>
  {
    // DATA3
    struct DATA3 : RegisterField<RDL0R, 24, 8, ReadMode>
    {
    };
    // DATA2
    struct DATA2 : RegisterField<RDL0R, 16, 8, ReadMode>
    {
    };
    // DATA1
    struct DATA1 : RegisterField<RDL0R, 8, 8, ReadMode>
    {
    };
    // DATA0
    struct DATA0 : RegisterField<RDL0R, 0, 8, ReadMode>
    {
    };
  };

  // receive FIFO mailbox data high register
  struct RDH0R : Register<0x400069bc, ReadMode, 0x0>
  {
    // DATA7
    struct DATA7 : RegisterField<RDH0R, 24, 8, ReadMode>
    {
    };
    // DATA6
    struct DATA6 : RegisterField<RDH0R, 16, 8, ReadMode>
    {
    };
    // DATA5
    struct DATA5 : RegisterField<RDH0R, 8, 8, ReadMode>
    {
    };
    // DATA4
    struct DATA4 : RegisterField<RDH0R, 0, 8, ReadMode>
    {
    };
  };

  // mailbox data high register
  struct RI1R : Register<0x400069c0, ReadMode, 0x0>
  {
    // STID
    struct STID : RegisterField<RI1R, 21, 11, ReadMode>
    {
    };
    // EXID
    struct EXID : RegisterField<RI1R, 3, 18, ReadMode>
    {
    };
    // IDE
    struct IDE : RegisterField<RI1R, 2, 1, ReadMode>
    {
    };
    // RTR
    struct RTR : RegisterField<RI1R, 1, 1, ReadMode>
    {
    };
  };

  // mailbox data high register
  struct RDT1R : Register<0x400069c4, ReadMode, 0x0>
  {
    // TIME
    struct TIME : RegisterField<RDT1R, 16, 16, ReadMode>
    {
    };
    // FMI
    struct FMI : RegisterField<RDT1R, 8, 8, ReadMode>
    {
    };
    // DLC
    struct DLC : RegisterField<RDT1R, 0, 4, ReadMode>
    {
    };
  };

  // mailbox data high register
  struct RDL1R : Register<0x400069c8, ReadMode, 0x0>
  {
    // DATA3
    struct DATA3 : RegisterField<RDL1R, 24, 8, ReadMode>
    {
    };
    // DATA2
    struct DATA2 : RegisterField<RDL1R, 16, 8, ReadMode>
    {
    };
    // DATA1
    struct DATA1 : RegisterField<RDL1R, 8, 8, ReadMode>
    {
    };
    // DATA0
    struct DATA0 : RegisterField<RDL1R, 0, 8, ReadMode>
    {
    };
  };

  // mailbox data high register
  struct RDH1R : Register<0x400069cc, ReadMode, 0x0>
  {
    // DATA7
    struct DATA7 : RegisterField<RDH1R, 24, 8, ReadMode>
    {
    };
    // DATA6
    struct DATA6 : RegisterField<RDH1R, 16, 8, ReadMode>
    {
    };
    // DATA5
    struct DATA5 : RegisterField<RDH1R, 8, 8, ReadMode>
    {
    };
    // DATA4
    struct DATA4 : RegisterField<RDH1R, 0, 8, ReadMode>
    {
    };
  };

  // filter master register
  struct FMR : Register<0x40006a00, ReadWriteMode, 0x2a1c0e01>
  {
    // CAN2SB
    struct CAN2SB : RegisterField<FMR, 8, 6, ReadWriteMode>
    {
    };
    // FINIT
    struct FINIT : RegisterField<FMR, 0, 1, ReadWriteMode>
    {
    };
  };

  // filter mode register
  struct FM1R : Register<0x40006a04, ReadWriteMode, 0x0>
  {
    // Filter mode
    struct FBM27 : RegisterField<FM1R, 27, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM26 : RegisterField<FM1R, 26, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM25 : RegisterField<FM1R, 25, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM24 : RegisterField<FM1R, 24, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM23 : RegisterField<FM1R, 23, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM22 : RegisterField<FM1R, 22, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM21 : RegisterField<FM1R, 21, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM20 : RegisterField<FM1R, 20, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM19 : RegisterField<FM1R, 19, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM18 : RegisterField<FM1R, 18, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM17 : RegisterField<FM1R, 17, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM16 : RegisterField<FM1R, 16, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM15 : RegisterField<FM1R, 15, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM14 : RegisterField<FM1R, 14, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM13 : RegisterField<FM1R, 13, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM12 : RegisterField<FM1R, 12, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM11 : RegisterField<FM1R, 11, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM10 : RegisterField<FM1R, 10, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM9 : RegisterField<FM1R, 9, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM8 : RegisterField<FM1R, 8, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM7 : RegisterField<FM1R, 7, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM6 : RegisterField<FM1R, 6, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM5 : RegisterField<FM1R, 5, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM4 : RegisterField<FM1R, 4, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM3 : RegisterField<FM1R, 3, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM2 : RegisterField<FM1R, 2, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM1 : RegisterField<FM1R, 1, 1, ReadWriteMode>
    {
    };
    // Filter mode
    struct FBM0 : RegisterField<FM1R, 0, 1, ReadWriteMode>
    {
    };
  };

  // filter scale register
  struct FS1R : Register<0x40006a0c, ReadWriteMode, 0x0>
  {
    // Filter scale configuration
    struct FSC27 : RegisterField<FS1R, 27, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC26 : RegisterField<FS1R, 26, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC25 : RegisterField<FS1R, 25, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC24 : RegisterField<FS1R, 24, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC23 : RegisterField<FS1R, 23, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC22 : RegisterField<FS1R, 22, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC21 : RegisterField<FS1R, 21, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC20 : RegisterField<FS1R, 20, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC19 : RegisterField<FS1R, 19, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC18 : RegisterField<FS1R, 18, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC17 : RegisterField<FS1R, 17, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC16 : RegisterField<FS1R, 16, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC15 : RegisterField<FS1R, 15, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC14 : RegisterField<FS1R, 14, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC13 : RegisterField<FS1R, 13, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC12 : RegisterField<FS1R, 12, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC11 : RegisterField<FS1R, 11, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC10 : RegisterField<FS1R, 10, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC9 : RegisterField<FS1R, 9, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC8 : RegisterField<FS1R, 8, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC7 : RegisterField<FS1R, 7, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC6 : RegisterField<FS1R, 6, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC5 : RegisterField<FS1R, 5, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC4 : RegisterField<FS1R, 4, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC3 : RegisterField<FS1R, 3, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC2 : RegisterField<FS1R, 2, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC1 : RegisterField<FS1R, 1, 1, ReadWriteMode>
    {
    };
    // Filter scale configuration
    struct FSC0 : RegisterField<FS1R, 0, 1, ReadWriteMode>
    {
    };
  };

  // filter FIFO assignment register
  struct FFA1R : Register<0x40006a14, ReadWriteMode, 0x0>
  {
    // Filter FIFO assignment for filter 27
    struct FFA27 : RegisterField<FFA1R, 27, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 26
    struct FFA26 : RegisterField<FFA1R, 26, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 25
    struct FFA25 : RegisterField<FFA1R, 25, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 24
    struct FFA24 : RegisterField<FFA1R, 24, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 23
    struct FFA23 : RegisterField<FFA1R, 23, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 22
    struct FFA22 : RegisterField<FFA1R, 22, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 21
    struct FFA21 : RegisterField<FFA1R, 21, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 20
    struct FFA20 : RegisterField<FFA1R, 20, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 19
    struct FFA19 : RegisterField<FFA1R, 19, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 18
    struct FFA18 : RegisterField<FFA1R, 18, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 17
    struct FFA17 : RegisterField<FFA1R, 17, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 16
    struct FFA16 : RegisterField<FFA1R, 16, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 15
    struct FFA15 : RegisterField<FFA1R, 15, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 14
    struct FFA14 : RegisterField<FFA1R, 14, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 13
    struct FFA13 : RegisterField<FFA1R, 13, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 12
    struct FFA12 : RegisterField<FFA1R, 12, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 11
    struct FFA11 : RegisterField<FFA1R, 11, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 10
    struct FFA10 : RegisterField<FFA1R, 10, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 9
    struct FFA9 : RegisterField<FFA1R, 9, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 8
    struct FFA8 : RegisterField<FFA1R, 8, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 7
    struct FFA7 : RegisterField<FFA1R, 7, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 6
    struct FFA6 : RegisterField<FFA1R, 6, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 5
    struct FFA5 : RegisterField<FFA1R, 5, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 4
    struct FFA4 : RegisterField<FFA1R, 4, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 3
    struct FFA3 : RegisterField<FFA1R, 3, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 2
    struct FFA2 : RegisterField<FFA1R, 2, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 1
    struct FFA1 : RegisterField<FFA1R, 1, 1, ReadWriteMode>
    {
    };
    // Filter FIFO assignment for filter 0
    struct FFA0 : RegisterField<FFA1R, 0, 1, ReadWriteMode>
    {
    };
  };

  // filter activation register
  struct FA1R : Register<0x40006a1c, ReadWriteMode, 0x0>
  {
    // Filter active
    struct FACT27 : RegisterField<FA1R, 27, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT26 : RegisterField<FA1R, 26, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT25 : RegisterField<FA1R, 25, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT24 : RegisterField<FA1R, 24, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT23 : RegisterField<FA1R, 23, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT22 : RegisterField<FA1R, 22, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT21 : RegisterField<FA1R, 21, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT20 : RegisterField<FA1R, 20, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT19 : RegisterField<FA1R, 19, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT18 : RegisterField<FA1R, 18, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT17 : RegisterField<FA1R, 17, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT16 : RegisterField<FA1R, 16, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT15 : RegisterField<FA1R, 15, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT14 : RegisterField<FA1R, 14, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT13 : RegisterField<FA1R, 13, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT12 : RegisterField<FA1R, 12, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT11 : RegisterField<FA1R, 11, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT10 : RegisterField<FA1R, 10, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT9 : RegisterField<FA1R, 9, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT8 : RegisterField<FA1R, 8, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT7 : RegisterField<FA1R, 7, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT6 : RegisterField<FA1R, 6, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT5 : RegisterField<FA1R, 5, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT4 : RegisterField<FA1R, 4, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT3 : RegisterField<FA1R, 3, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT2 : RegisterField<FA1R, 2, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT1 : RegisterField<FA1R, 1, 1, ReadWriteMode>
    {
    };
    // Filter active
    struct FACT0 : RegisterField<FA1R, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 0 register 1
  struct F0R1 : Register<0x40006a40, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F0R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F0R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F0R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F0R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F0R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F0R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F0R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F0R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F0R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F0R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F0R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F0R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F0R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F0R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F0R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F0R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F0R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F0R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F0R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F0R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F0R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F0R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F0R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F0R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F0R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F0R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F0R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F0R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F0R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F0R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F0R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F0R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 0 register 2
  struct F0R2 : Register<0x40006a44, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F0R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F0R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F0R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F0R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F0R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F0R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F0R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F0R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F0R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F0R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F0R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F0R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F0R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F0R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F0R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F0R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F0R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F0R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F0R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F0R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F0R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F0R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F0R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F0R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F0R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F0R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F0R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F0R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F0R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F0R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F0R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F0R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 1 register 1
  struct F1R1 : Register<0x40006a48, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F1R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F1R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F1R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F1R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F1R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F1R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F1R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F1R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F1R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F1R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F1R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F1R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F1R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F1R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F1R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F1R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F1R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F1R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F1R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F1R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F1R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F1R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F1R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F1R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F1R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F1R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F1R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F1R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F1R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F1R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F1R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F1R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 1 register 2
  struct F1R2 : Register<0x40006a4c, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F1R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F1R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F1R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F1R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F1R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F1R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F1R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F1R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F1R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F1R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F1R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F1R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F1R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F1R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F1R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F1R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F1R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F1R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F1R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F1R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F1R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F1R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F1R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F1R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F1R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F1R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F1R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F1R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F1R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F1R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F1R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F1R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 2 register 1
  struct F2R1 : Register<0x40006a50, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F2R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F2R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F2R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F2R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F2R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F2R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F2R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F2R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F2R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F2R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F2R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F2R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F2R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F2R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F2R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F2R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F2R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F2R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F2R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F2R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F2R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F2R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F2R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F2R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F2R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F2R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F2R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F2R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F2R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F2R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F2R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F2R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 2 register 2
  struct F2R2 : Register<0x40006a54, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F2R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F2R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F2R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F2R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F2R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F2R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F2R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F2R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F2R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F2R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F2R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F2R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F2R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F2R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F2R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F2R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F2R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F2R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F2R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F2R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F2R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F2R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F2R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F2R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F2R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F2R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F2R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F2R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F2R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F2R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F2R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F2R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 3 register 1
  struct F3R1 : Register<0x40006a58, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F3R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F3R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F3R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F3R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F3R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F3R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F3R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F3R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F3R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F3R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F3R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F3R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F3R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F3R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F3R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F3R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F3R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F3R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F3R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F3R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F3R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F3R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F3R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F3R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F3R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F3R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F3R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F3R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F3R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F3R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F3R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F3R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 3 register 2
  struct F3R2 : Register<0x40006a5c, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F3R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F3R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F3R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F3R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F3R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F3R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F3R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F3R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F3R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F3R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F3R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F3R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F3R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F3R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F3R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F3R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F3R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F3R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F3R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F3R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F3R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F3R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F3R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F3R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F3R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F3R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F3R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F3R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F3R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F3R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F3R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F3R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 4 register 1
  struct F4R1 : Register<0x40006a60, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F4R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F4R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F4R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F4R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F4R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F4R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F4R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F4R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F4R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F4R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F4R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F4R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F4R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F4R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F4R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F4R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F4R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F4R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F4R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F4R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F4R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F4R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F4R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F4R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F4R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F4R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F4R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F4R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F4R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F4R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F4R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F4R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 4 register 2
  struct F4R2 : Register<0x40006a64, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F4R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F4R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F4R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F4R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F4R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F4R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F4R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F4R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F4R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F4R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F4R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F4R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F4R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F4R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F4R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F4R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F4R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F4R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F4R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F4R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F4R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F4R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F4R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F4R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F4R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F4R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F4R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F4R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F4R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F4R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F4R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F4R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 5 register 1
  struct F5R1 : Register<0x40006a68, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F5R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F5R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F5R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F5R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F5R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F5R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F5R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F5R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F5R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F5R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F5R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F5R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F5R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F5R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F5R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F5R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F5R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F5R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F5R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F5R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F5R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F5R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F5R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F5R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F5R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F5R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F5R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F5R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F5R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F5R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F5R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F5R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 5 register 2
  struct F5R2 : Register<0x40006a6c, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F5R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F5R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F5R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F5R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F5R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F5R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F5R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F5R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F5R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F5R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F5R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F5R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F5R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F5R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F5R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F5R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F5R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F5R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F5R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F5R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F5R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F5R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F5R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F5R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F5R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F5R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F5R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F5R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F5R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F5R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F5R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F5R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 6 register 1
  struct F6R1 : Register<0x40006a70, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F6R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F6R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F6R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F6R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F6R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F6R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F6R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F6R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F6R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F6R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F6R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F6R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F6R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F6R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F6R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F6R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F6R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F6R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F6R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F6R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F6R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F6R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F6R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F6R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F6R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F6R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F6R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F6R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F6R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F6R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F6R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F6R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 6 register 2
  struct F6R2 : Register<0x40006a74, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F6R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F6R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F6R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F6R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F6R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F6R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F6R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F6R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F6R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F6R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F6R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F6R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F6R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F6R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F6R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F6R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F6R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F6R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F6R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F6R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F6R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F6R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F6R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F6R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F6R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F6R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F6R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F6R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F6R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F6R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F6R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F6R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 7 register 1
  struct F7R1 : Register<0x40006a78, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F7R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F7R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F7R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F7R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F7R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F7R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F7R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F7R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F7R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F7R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F7R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F7R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F7R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F7R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F7R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F7R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F7R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F7R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F7R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F7R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F7R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F7R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F7R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F7R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F7R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F7R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F7R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F7R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F7R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F7R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F7R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F7R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 7 register 2
  struct F7R2 : Register<0x40006a7c, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F7R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F7R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F7R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F7R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F7R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F7R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F7R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F7R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F7R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F7R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F7R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F7R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F7R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F7R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F7R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F7R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F7R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F7R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F7R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F7R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F7R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F7R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F7R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F7R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F7R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F7R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F7R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F7R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F7R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F7R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F7R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F7R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 8 register 1
  struct F8R1 : Register<0x40006a80, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F8R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F8R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F8R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F8R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F8R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F8R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F8R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F8R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F8R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F8R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F8R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F8R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F8R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F8R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F8R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F8R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F8R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F8R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F8R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F8R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F8R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F8R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F8R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F8R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F8R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F8R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F8R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F8R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F8R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F8R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F8R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F8R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 8 register 2
  struct F8R2 : Register<0x40006a84, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F8R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F8R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F8R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F8R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F8R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F8R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F8R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F8R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F8R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F8R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F8R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F8R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F8R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F8R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F8R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F8R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F8R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F8R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F8R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F8R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F8R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F8R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F8R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F8R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F8R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F8R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F8R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F8R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F8R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F8R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F8R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F8R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 9 register 1
  struct F9R1 : Register<0x40006a88, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F9R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F9R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F9R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F9R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F9R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F9R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F9R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F9R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F9R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F9R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F9R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F9R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F9R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F9R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F9R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F9R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F9R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F9R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F9R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F9R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F9R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F9R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F9R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F9R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F9R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F9R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F9R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F9R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F9R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F9R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F9R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F9R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 9 register 2
  struct F9R2 : Register<0x40006a8c, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F9R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F9R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F9R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F9R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F9R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F9R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F9R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F9R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F9R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F9R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F9R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F9R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F9R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F9R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F9R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F9R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F9R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F9R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F9R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F9R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F9R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F9R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F9R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F9R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F9R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F9R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F9R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F9R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F9R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F9R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F9R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F9R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 10 register 1
  struct F10R1 : Register<0x40006a90, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F10R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F10R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F10R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F10R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F10R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F10R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F10R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F10R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F10R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F10R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F10R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F10R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F10R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F10R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F10R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F10R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F10R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F10R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F10R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F10R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F10R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F10R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F10R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F10R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F10R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F10R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F10R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F10R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F10R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F10R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F10R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F10R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 10 register 2
  struct F10R2 : Register<0x40006a94, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F10R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F10R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F10R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F10R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F10R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F10R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F10R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F10R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F10R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F10R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F10R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F10R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F10R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F10R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F10R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F10R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F10R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F10R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F10R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F10R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F10R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F10R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F10R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F10R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F10R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F10R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F10R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F10R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F10R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F10R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F10R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F10R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 11 register 1
  struct F11R1 : Register<0x40006a98, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F11R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F11R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F11R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F11R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F11R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F11R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F11R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F11R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F11R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F11R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F11R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F11R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F11R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F11R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F11R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F11R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F11R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F11R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F11R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F11R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F11R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F11R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F11R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F11R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F11R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F11R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F11R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F11R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F11R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F11R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F11R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F11R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 11 register 2
  struct F11R2 : Register<0x40006a9c, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F11R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F11R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F11R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F11R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F11R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F11R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F11R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F11R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F11R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F11R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F11R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F11R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F11R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F11R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F11R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F11R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F11R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F11R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F11R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F11R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F11R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F11R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F11R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F11R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F11R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F11R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F11R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F11R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F11R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F11R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F11R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F11R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 4 register 1
  struct F12R1 : Register<0x40006aa0, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F12R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F12R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F12R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F12R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F12R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F12R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F12R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F12R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F12R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F12R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F12R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F12R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F12R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F12R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F12R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F12R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F12R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F12R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F12R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F12R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F12R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F12R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F12R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F12R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F12R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F12R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F12R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F12R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F12R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F12R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F12R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F12R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 12 register 2
  struct F12R2 : Register<0x40006aa4, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F12R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F12R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F12R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F12R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F12R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F12R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F12R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F12R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F12R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F12R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F12R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F12R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F12R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F12R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F12R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F12R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F12R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F12R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F12R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F12R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F12R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F12R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F12R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F12R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F12R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F12R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F12R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F12R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F12R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F12R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F12R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F12R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 13 register 1
  struct F13R1 : Register<0x40006aa8, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F13R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F13R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F13R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F13R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F13R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F13R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F13R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F13R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F13R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F13R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F13R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F13R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F13R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F13R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F13R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F13R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F13R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F13R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F13R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F13R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F13R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F13R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F13R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F13R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F13R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F13R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F13R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F13R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F13R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F13R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F13R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F13R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 13 register 2
  struct F13R2 : Register<0x40006aac, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F13R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F13R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F13R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F13R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F13R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F13R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F13R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F13R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F13R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F13R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F13R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F13R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F13R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F13R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F13R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F13R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F13R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F13R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F13R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F13R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F13R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F13R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F13R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F13R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F13R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F13R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F13R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F13R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F13R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F13R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F13R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F13R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 14 register 1
  struct F14R1 : Register<0x40006ab0, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F14R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F14R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F14R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F14R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F14R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F14R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F14R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F14R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F14R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F14R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F14R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F14R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F14R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F14R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F14R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F14R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F14R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F14R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F14R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F14R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F14R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F14R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F14R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F14R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F14R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F14R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F14R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F14R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F14R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F14R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F14R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F14R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 14 register 2
  struct F14R2 : Register<0x40006ab4, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F14R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F14R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F14R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F14R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F14R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F14R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F14R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F14R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F14R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F14R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F14R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F14R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F14R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F14R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F14R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F14R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F14R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F14R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F14R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F14R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F14R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F14R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F14R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F14R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F14R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F14R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F14R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F14R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F14R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F14R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F14R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F14R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 15 register 1
  struct F15R1 : Register<0x40006ab8, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F15R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F15R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F15R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F15R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F15R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F15R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F15R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F15R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F15R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F15R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F15R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F15R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F15R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F15R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F15R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F15R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F15R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F15R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F15R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F15R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F15R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F15R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F15R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F15R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F15R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F15R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F15R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F15R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F15R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F15R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F15R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F15R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 15 register 2
  struct F15R2 : Register<0x40006abc, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F15R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F15R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F15R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F15R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F15R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F15R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F15R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F15R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F15R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F15R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F15R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F15R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F15R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F15R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F15R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F15R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F15R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F15R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F15R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F15R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F15R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F15R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F15R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F15R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F15R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F15R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F15R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F15R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F15R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F15R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F15R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F15R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 16 register 1
  struct F16R1 : Register<0x40006ac0, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F16R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F16R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F16R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F16R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F16R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F16R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F16R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F16R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F16R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F16R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F16R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F16R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F16R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F16R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F16R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F16R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F16R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F16R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F16R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F16R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F16R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F16R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F16R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F16R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F16R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F16R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F16R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F16R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F16R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F16R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F16R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F16R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 16 register 2
  struct F16R2 : Register<0x40006ac4, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F16R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F16R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F16R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F16R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F16R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F16R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F16R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F16R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F16R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F16R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F16R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F16R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F16R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F16R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F16R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F16R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F16R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F16R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F16R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F16R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F16R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F16R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F16R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F16R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F16R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F16R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F16R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F16R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F16R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F16R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F16R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F16R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 17 register 1
  struct F17R1 : Register<0x40006ac8, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F17R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F17R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F17R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F17R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F17R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F17R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F17R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F17R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F17R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F17R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F17R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F17R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F17R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F17R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F17R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F17R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F17R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F17R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F17R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F17R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F17R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F17R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F17R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F17R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F17R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F17R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F17R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F17R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F17R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F17R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F17R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F17R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 17 register 2
  struct F17R2 : Register<0x40006acc, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F17R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F17R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F17R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F17R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F17R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F17R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F17R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F17R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F17R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F17R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F17R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F17R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F17R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F17R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F17R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F17R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F17R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F17R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F17R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F17R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F17R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F17R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F17R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F17R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F17R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F17R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F17R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F17R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F17R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F17R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F17R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F17R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 18 register 1
  struct F18R1 : Register<0x40006ad0, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F18R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F18R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F18R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F18R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F18R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F18R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F18R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F18R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F18R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F18R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F18R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F18R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F18R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F18R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F18R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F18R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F18R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F18R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F18R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F18R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F18R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F18R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F18R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F18R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F18R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F18R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F18R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F18R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F18R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F18R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F18R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F18R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 18 register 2
  struct F18R2 : Register<0x40006ad4, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F18R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F18R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F18R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F18R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F18R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F18R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F18R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F18R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F18R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F18R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F18R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F18R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F18R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F18R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F18R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F18R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F18R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F18R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F18R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F18R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F18R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F18R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F18R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F18R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F18R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F18R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F18R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F18R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F18R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F18R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F18R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F18R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 19 register 1
  struct F19R1 : Register<0x40006ad8, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F19R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F19R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F19R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F19R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F19R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F19R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F19R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F19R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F19R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F19R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F19R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F19R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F19R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F19R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F19R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F19R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F19R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F19R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F19R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F19R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F19R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F19R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F19R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F19R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F19R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F19R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F19R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F19R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F19R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F19R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F19R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F19R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 19 register 2
  struct F19R2 : Register<0x40006adc, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F19R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F19R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F19R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F19R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F19R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F19R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F19R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F19R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F19R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F19R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F19R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F19R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F19R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F19R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F19R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F19R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F19R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F19R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F19R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F19R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F19R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F19R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F19R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F19R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F19R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F19R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F19R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F19R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F19R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F19R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F19R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F19R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 20 register 1
  struct F20R1 : Register<0x40006ae0, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F20R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F20R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F20R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F20R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F20R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F20R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F20R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F20R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F20R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F20R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F20R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F20R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F20R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F20R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F20R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F20R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F20R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F20R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F20R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F20R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F20R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F20R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F20R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F20R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F20R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F20R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F20R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F20R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F20R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F20R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F20R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F20R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 20 register 2
  struct F20R2 : Register<0x40006ae4, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F20R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F20R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F20R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F20R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F20R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F20R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F20R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F20R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F20R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F20R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F20R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F20R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F20R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F20R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F20R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F20R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F20R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F20R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F20R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F20R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F20R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F20R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F20R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F20R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F20R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F20R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F20R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F20R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F20R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F20R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F20R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F20R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 21 register 1
  struct F21R1 : Register<0x40006ae8, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F21R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F21R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F21R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F21R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F21R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F21R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F21R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F21R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F21R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F21R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F21R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F21R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F21R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F21R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F21R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F21R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F21R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F21R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F21R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F21R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F21R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F21R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F21R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F21R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F21R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F21R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F21R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F21R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F21R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F21R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F21R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F21R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 21 register 2
  struct F21R2 : Register<0x40006aec, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F21R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F21R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F21R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F21R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F21R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F21R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F21R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F21R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F21R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F21R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F21R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F21R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F21R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F21R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F21R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F21R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F21R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F21R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F21R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F21R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F21R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F21R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F21R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F21R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F21R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F21R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F21R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F21R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F21R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F21R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F21R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F21R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 22 register 1
  struct F22R1 : Register<0x40006af0, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F22R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F22R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F22R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F22R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F22R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F22R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F22R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F22R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F22R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F22R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F22R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F22R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F22R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F22R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F22R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F22R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F22R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F22R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F22R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F22R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F22R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F22R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F22R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F22R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F22R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F22R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F22R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F22R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F22R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F22R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F22R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F22R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 22 register 2
  struct F22R2 : Register<0x40006af4, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F22R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F22R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F22R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F22R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F22R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F22R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F22R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F22R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F22R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F22R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F22R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F22R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F22R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F22R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F22R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F22R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F22R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F22R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F22R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F22R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F22R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F22R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F22R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F22R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F22R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F22R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F22R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F22R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F22R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F22R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F22R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F22R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 23 register 1
  struct F23R1 : Register<0x40006af8, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F23R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F23R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F23R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F23R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F23R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F23R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F23R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F23R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F23R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F23R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F23R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F23R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F23R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F23R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F23R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F23R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F23R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F23R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F23R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F23R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F23R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F23R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F23R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F23R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F23R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F23R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F23R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F23R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F23R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F23R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F23R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F23R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 23 register 2
  struct F23R2 : Register<0x40006afc, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F23R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F23R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F23R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F23R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F23R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F23R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F23R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F23R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F23R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F23R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F23R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F23R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F23R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F23R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F23R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F23R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F23R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F23R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F23R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F23R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F23R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F23R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F23R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F23R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F23R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F23R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F23R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F23R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F23R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F23R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F23R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F23R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 24 register 1
  struct F24R1 : Register<0x40006b00, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F24R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F24R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F24R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F24R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F24R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F24R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F24R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F24R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F24R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F24R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F24R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F24R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F24R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F24R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F24R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F24R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F24R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F24R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F24R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F24R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F24R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F24R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F24R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F24R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F24R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F24R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F24R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F24R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F24R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F24R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F24R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F24R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 24 register 2
  struct F24R2 : Register<0x40006b04, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F24R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F24R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F24R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F24R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F24R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F24R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F24R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F24R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F24R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F24R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F24R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F24R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F24R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F24R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F24R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F24R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F24R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F24R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F24R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F24R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F24R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F24R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F24R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F24R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F24R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F24R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F24R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F24R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F24R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F24R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F24R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F24R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 25 register 1
  struct F25R1 : Register<0x40006b08, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F25R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F25R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F25R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F25R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F25R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F25R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F25R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F25R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F25R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F25R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F25R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F25R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F25R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F25R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F25R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F25R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F25R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F25R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F25R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F25R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F25R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F25R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F25R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F25R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F25R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F25R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F25R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F25R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F25R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F25R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F25R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F25R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 25 register 2
  struct F25R2 : Register<0x40006b0c, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F25R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F25R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F25R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F25R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F25R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F25R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F25R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F25R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F25R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F25R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F25R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F25R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F25R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F25R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F25R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F25R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F25R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F25R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F25R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F25R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F25R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F25R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F25R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F25R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F25R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F25R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F25R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F25R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F25R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F25R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F25R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F25R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 26 register 1
  struct F26R1 : Register<0x40006b10, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F26R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F26R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F26R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F26R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F26R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F26R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F26R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F26R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F26R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F26R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F26R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F26R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F26R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F26R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F26R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F26R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F26R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F26R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F26R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F26R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F26R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F26R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F26R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F26R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F26R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F26R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F26R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F26R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F26R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F26R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F26R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F26R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 26 register 2
  struct F26R2 : Register<0x40006b14, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F26R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F26R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F26R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F26R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F26R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F26R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F26R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F26R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F26R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F26R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F26R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F26R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F26R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F26R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F26R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F26R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F26R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F26R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F26R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F26R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F26R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F26R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F26R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F26R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F26R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F26R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F26R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F26R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F26R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F26R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F26R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F26R2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 27 register 1
  struct F27R1 : Register<0x40006b18, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F27R1, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F27R1, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F27R1, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F27R1, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F27R1, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F27R1, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F27R1, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F27R1, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F27R1, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F27R1, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F27R1, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F27R1, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F27R1, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F27R1, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F27R1, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F27R1, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F27R1, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F27R1, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F27R1, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F27R1, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F27R1, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F27R1, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F27R1, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F27R1, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F27R1, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F27R1, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F27R1, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F27R1, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F27R1, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F27R1, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F27R1, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F27R1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Filter bank 27 register 2
  struct F27R2 : Register<0x40006b1c, ReadWriteMode, 0x0>
  {
    // Filter bits
    struct FB31 : RegisterField<F27R2, 31, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB30 : RegisterField<F27R2, 30, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB29 : RegisterField<F27R2, 29, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB28 : RegisterField<F27R2, 28, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB27 : RegisterField<F27R2, 27, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB26 : RegisterField<F27R2, 26, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB25 : RegisterField<F27R2, 25, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB24 : RegisterField<F27R2, 24, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB23 : RegisterField<F27R2, 23, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB22 : RegisterField<F27R2, 22, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB21 : RegisterField<F27R2, 21, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB20 : RegisterField<F27R2, 20, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB19 : RegisterField<F27R2, 19, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB18 : RegisterField<F27R2, 18, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB17 : RegisterField<F27R2, 17, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB16 : RegisterField<F27R2, 16, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB15 : RegisterField<F27R2, 15, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB14 : RegisterField<F27R2, 14, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB13 : RegisterField<F27R2, 13, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB12 : RegisterField<F27R2, 12, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB11 : RegisterField<F27R2, 11, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB10 : RegisterField<F27R2, 10, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB9 : RegisterField<F27R2, 9, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB8 : RegisterField<F27R2, 8, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB7 : RegisterField<F27R2, 7, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB6 : RegisterField<F27R2, 6, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB5 : RegisterField<F27R2, 5, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB4 : RegisterField<F27R2, 4, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB3 : RegisterField<F27R2, 3, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB2 : RegisterField<F27R2, 2, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB1 : RegisterField<F27R2, 1, 1, ReadWriteMode>
    {
    };
    // Filter bits
    struct FB0 : RegisterField<F27R2, 0, 1, ReadWriteMode>
    {
    };
  };

// Large Registers

};


