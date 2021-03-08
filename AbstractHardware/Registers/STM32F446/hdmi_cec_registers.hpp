/******************************************************************************
* Filename : hdmi_cec_registers.hpp
*
* Details  : HDMI-CEC controller
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct HDMI_CEC
{
  // CEC control register
  struct CEC_CR : Register<0x40006c00, ReadWriteMode, 0x0>
  {
    // Tx End Of Message
    struct TXEOM : RegisterField<CEC_CR, 2, 1, ReadMode>
    {
    };
    // Tx Start Of Message
    struct TXSOM : RegisterField<CEC_CR, 1, 1, ReadMode>
    {
    };
    // CEC Enable
    struct CECEN : RegisterField<CEC_CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // CEC configuration register
  struct CEC_CFGR : Register<0x40006c04, ReadWriteMode, 0x0>
  {
    // Listen mode
    struct LSTN : RegisterField<CEC_CFGR, 31, 1, ReadWriteMode>
    {
    };
    // Own addresses configuration
    struct OAR : RegisterField<CEC_CFGR, 16, 15, ReadWriteMode>
    {
    };
    // SFT Option Bit
    struct SFTOP : RegisterField<CEC_CFGR, 8, 1, ReadWriteMode>
    {
    };
    // Avoid Error-Bit Generation in Broadcast
    struct BRDNOGEN : RegisterField<CEC_CFGR, 7, 1, ReadWriteMode>
    {
    };
    // Generate Error-Bit on Long Bit Period Error
    struct LBPEGEN : RegisterField<CEC_CFGR, 6, 1, ReadWriteMode>
    {
    };
    // Generate Error-Bit on Bit Rising Error
    struct BREGEN : RegisterField<CEC_CFGR, 5, 1, ReadWriteMode>
    {
    };
    // Rx-Stop on Bit Rising Error
    struct BRESTP : RegisterField<CEC_CFGR, 4, 1, ReadWriteMode>
    {
    };
    // Rx-Tolerance
    struct RXTOL : RegisterField<CEC_CFGR, 3, 1, ReadWriteMode>
    {
    };
    // Signal Free Time
    struct SFT : RegisterField<CEC_CFGR, 0, 3, ReadWriteMode>
    {
    };
  };

  // CEC Tx data register
  struct CEC_TXDR : Register<0x40006c08, WriteMode, 0x0>
  {
    // Tx Data register
    struct TXD : RegisterField<CEC_TXDR, 0, 8, WriteMode>
    {
    };
  };

  // CEC Rx Data Register
  struct CEC_RXDR : Register<0x40006c0c, ReadMode, 0x0>
  {
    // Rx Data register
    struct RXD : RegisterField<CEC_RXDR, 0, 8, ReadMode>
    {
    };
  };

  // CEC Interrupt and Status Register
  struct CEC_ISR : Register<0x40006c10, ReadWriteMode, 0x0>
  {
    // Tx-Missing Acknowledge Error
    struct TXACKE : RegisterField<CEC_ISR, 12, 1, ReadWriteMode>
    {
    };
    // Tx-Error
    struct TXERR : RegisterField<CEC_ISR, 11, 1, ReadWriteMode>
    {
    };
    // Tx-Buffer Underrun
    struct TXUDR : RegisterField<CEC_ISR, 10, 1, ReadWriteMode>
    {
    };
    // End of Transmission
    struct TXEND : RegisterField<CEC_ISR, 9, 1, ReadWriteMode>
    {
    };
    // Tx-Byte Request
    struct TXBR : RegisterField<CEC_ISR, 8, 1, ReadWriteMode>
    {
    };
    // Arbitration Lost
    struct ARBLST : RegisterField<CEC_ISR, 7, 1, ReadWriteMode>
    {
    };
    // Rx-Missing Acknowledge
    struct RXACKE : RegisterField<CEC_ISR, 6, 1, ReadWriteMode>
    {
    };
    // Rx-Long Bit Period Error
    struct LBPE : RegisterField<CEC_ISR, 5, 1, ReadWriteMode>
    {
    };
    // Rx-Short Bit Period Error
    struct SBPE : RegisterField<CEC_ISR, 4, 1, ReadWriteMode>
    {
    };
    // Rx-Bit Rising Error
    struct BRE : RegisterField<CEC_ISR, 3, 1, ReadWriteMode>
    {
    };
    // Rx-Overrun
    struct RXOVR : RegisterField<CEC_ISR, 2, 1, ReadWriteMode>
    {
    };
    // End Of Reception
    struct RXEND : RegisterField<CEC_ISR, 1, 1, ReadWriteMode>
    {
    };
    // Rx-Byte Received
    struct RXBR : RegisterField<CEC_ISR, 0, 1, ReadWriteMode>
    {
    };
  };

  // CEC interrupt enable register
  struct CEC_IER : Register<0x40006c14, ReadWriteMode, 0x0>
  {
    // Tx-Missing Acknowledge Error Interrupt Enable
    struct TXACKIE : RegisterField<CEC_IER, 12, 1, ReadWriteMode>
    {
    };
    // Tx-Error Interrupt Enable
    struct TXERRIE : RegisterField<CEC_IER, 11, 1, ReadWriteMode>
    {
    };
    // Tx-Underrun Interrupt Enable
    struct TXUDRIE : RegisterField<CEC_IER, 10, 1, ReadWriteMode>
    {
    };
    // Tx-End Of Message Interrupt Enable
    struct TXENDIE : RegisterField<CEC_IER, 9, 1, ReadWriteMode>
    {
    };
    // Tx-Byte Request Interrupt Enable
    struct TXBRIE : RegisterField<CEC_IER, 8, 1, ReadWriteMode>
    {
    };
    // Arbitration Lost Interrupt Enable
    struct ARBLSTIE : RegisterField<CEC_IER, 7, 1, ReadWriteMode>
    {
    };
    // Rx-Missing Acknowledge Error Interrupt Enable
    struct RXACKIE : RegisterField<CEC_IER, 6, 1, ReadWriteMode>
    {
    };
    // Long Bit Period Error Interrupt Enable
    struct LBPEIE : RegisterField<CEC_IER, 5, 1, ReadWriteMode>
    {
    };
    // Short Bit Period Error Interrupt Enable
    struct SBPEIE : RegisterField<CEC_IER, 4, 1, ReadWriteMode>
    {
    };
    // Bit Rising Error Interrupt Enable
    struct BREIE : RegisterField<CEC_IER, 3, 1, ReadWriteMode>
    {
    };
    // Rx-Buffer Overrun Interrupt Enable
    struct RXOVRIE : RegisterField<CEC_IER, 2, 1, ReadWriteMode>
    {
    };
    // End Of Reception Interrupt Enable
    struct RXENDIE : RegisterField<CEC_IER, 1, 1, ReadWriteMode>
    {
    };
    // Rx-Byte Received Interrupt Enable
    struct RXBRIE : RegisterField<CEC_IER, 0, 1, ReadWriteMode>
    {
    };
  };

// Large Registers

};


