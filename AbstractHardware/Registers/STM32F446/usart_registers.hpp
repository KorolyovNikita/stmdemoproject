/******************************************************************************
* Filename : usart_registers.hpp
*
* Details  : Universal synchronous asynchronous receiver transmitter
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct USART6
{
  static constexpr auto periphNum = 6;

  // Status register
  struct SR : Register<0x40011400, ReadWriteMode, 0xc00000>
  {
    // CTS flag
    struct CTS : RegisterField<SR, 9, 1, ReadWriteMode>
    {
    };
    // LIN break detection flag
    struct LBD : RegisterField<SR, 8, 1, ReadWriteMode>
    {
    };
    // Transmit data register empty
    struct TXE : RegisterField<SR, 7, 1, ReadMode>
    {
      using notEmpty = FieldValue<TXE, 0U>;
      using Empty = FieldValue<TXE, 1U>;
    };
    // Transmission complete
    struct TC : RegisterField<SR, 6, 1, ReadWriteMode>
    {
      using Clear = FieldValue<TC, 0U>;
      using Complete = FieldValue<TC, 1U>;
    };
    // Read data register not empty
    struct RXNE : RegisterField<SR, 5, 1, ReadWriteMode>
    {
      using Empty = FieldValue<RXNE, 0U>;
      using notEmpty = FieldValue<RXNE, 1U>;
    };
    // IDLE line detected
    struct IDLE : RegisterField<SR, 4, 1, ReadMode>
    {
      using notDetected = FieldValue<IDLE, 0U>;
      using Detected = FieldValue<IDLE, 1U>;
    };
    // Overrun error
    struct ORE : RegisterField<SR, 3, 1, ReadMode>
    {
    };
    // Noise detected flag
    struct NF : RegisterField<SR, 2, 1, ReadMode>
    {
    };
    // Framing error
    struct FE : RegisterField<SR, 1, 1, ReadMode>
    {
    };
    // Parity error
    struct PE : RegisterField<SR, 0, 1, ReadMode>
    {
    };
  };

  // Data register
  struct DR : Register<0x40011404, ReadWriteMode, 0x0>
  {
    // Data value
    struct _DR : RegisterField<DR, 0, 9, ReadWriteMode>
    {
    };
  };

  // Baud rate register
  struct BRR : Register<0x40011408, ReadWriteMode, 0x0>
  {
    // mantissa of USARTDIV
    struct DIV_Mantissa : RegisterField<BRR, 4, 12, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 4095)>>
      using Value = FieldValue<DIV_Mantissa, val>;
    };
    // fraction of USARTDIV
    struct DIV_Fraction : RegisterField<BRR, 0, 4, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<DIV_Fraction, val>;
    };
  };

  // Control register 1
  struct CR1 : Register<0x4001140c, ReadWriteMode, 0x0>
  {
    // Oversampling mode
    struct OVER8 : RegisterField<CR1, 15, 1, ReadWriteMode>
    {
    };
    // USART enable
    struct UE : RegisterField<CR1, 13, 1, ReadWriteMode>
    {
      using Disable = FieldValue<UE, 0U>;
      using Enable = FieldValue<UE, 1U>;
    };
    // Word length
    struct M : RegisterField<CR1, 12, 1, ReadWriteMode>
    {
    };
    // Wakeup method
    struct WAKE : RegisterField<CR1, 11, 1, ReadWriteMode>
    {
    };
    // Parity control enable
    struct PCE : RegisterField<CR1, 10, 1, ReadWriteMode>
    {
    };
    // Parity selection
    struct PS : RegisterField<CR1, 9, 1, ReadWriteMode>
    {
    };
    // PE interrupt enable
    struct PEIE : RegisterField<CR1, 8, 1, ReadWriteMode>
    {
    };
    // TXE interrupt enable
    struct TXEIE : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TXEIE, 0U>;
      using Enable = FieldValue<TXEIE, 1U>;
    };
    // Transmission complete interrupt enable
    struct TCIE : RegisterField<CR1, 6, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TCIE, 0U>;
      using Enable = FieldValue<TCIE, 1U>;
    };
    // RXNE interrupt enable
    struct RXNEIE : RegisterField<CR1, 5, 1, ReadWriteMode>
    {
      using Disable = FieldValue<RXNEIE, 0U>;
      using Enable = FieldValue<RXNEIE, 1U>;
    };
    // IDLE interrupt enable
    struct IDLEIE : RegisterField<CR1, 4, 1, ReadWriteMode>
    {
      using Disable = FieldValue<IDLEIE, 0U>;
      using Enable = FieldValue<IDLEIE, 1U>;
    };
    // Transmitter enable
    struct TE : RegisterField<CR1, 3, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TE, 0U>;
      using Enable = FieldValue<TE, 1U>;
    };
    // Receiver enable
    struct RE : RegisterField<CR1, 2, 1, ReadWriteMode>
    {
      using Disable = FieldValue<RE, 0U>;
      using Enable = FieldValue<RE, 1U>;
    };
    // Receiver wakeup
    struct RWU : RegisterField<CR1, 1, 1, ReadWriteMode>
    {
    };
    // Send break
    struct SBK : RegisterField<CR1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Control register 2
  struct CR2 : Register<0x40011410, ReadWriteMode, 0x0>
  {
    // LIN mode enable
    struct LINEN : RegisterField<CR2, 14, 1, ReadWriteMode>
    {
    };
    // STOP bits
    struct STOP : RegisterField<CR2, 12, 2, ReadWriteMode>
    {
    };
    // Clock enable
    struct CLKEN : RegisterField<CR2, 11, 1, ReadWriteMode>
    {
    };
    // Clock polarity
    struct CPOL : RegisterField<CR2, 10, 1, ReadWriteMode>
    {
    };
    // Clock phase
    struct CPHA : RegisterField<CR2, 9, 1, ReadWriteMode>
    {
    };
    // Last bit clock pulse
    struct LBCL : RegisterField<CR2, 8, 1, ReadWriteMode>
    {
    };
    // LIN break detection interrupt enable
    struct LBDIE : RegisterField<CR2, 6, 1, ReadWriteMode>
    {
    };
    // lin break detection length
    struct LBDL : RegisterField<CR2, 5, 1, ReadWriteMode>
    {
    };
    // Address of the USART node
    struct ADD : RegisterField<CR2, 0, 4, ReadWriteMode>
    {
    };
  };

  // Control register 3
  struct CR3 : Register<0x40011414, ReadWriteMode, 0x0>
  {
    // One sample bit method enable
    struct ONEBIT : RegisterField<CR3, 11, 1, ReadWriteMode>
    {
    };
    // CTS interrupt enable
    struct CTSIE : RegisterField<CR3, 10, 1, ReadWriteMode>
    {
    };
    // CTS enable
    struct CTSE : RegisterField<CR3, 9, 1, ReadWriteMode>
    {
      using Disable = FieldValue<CTSE, 0U>;
      using Enable = FieldValue<CTSE, 1U>;
    };
    // RTS enable
    struct RTSE : RegisterField<CR3, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<RTSE, 0U>;
      using Enable = FieldValue<RTSE, 1U>;
    };
    // DMA enable transmitter
    struct DMAT : RegisterField<CR3, 7, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMAT, 0U>;
      using Enable = FieldValue<DMAT, 1U>;
    };
    // DMA enable receiver
    struct DMAR : RegisterField<CR3, 6, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMAR, 0U>;
      using Enable = FieldValue<DMAR, 1U>;
    };
    // Smartcard mode enable
    struct SCEN : RegisterField<CR3, 5, 1, ReadWriteMode>
    {
    };
    // Smartcard NACK enable
    struct NACK : RegisterField<CR3, 4, 1, ReadWriteMode>
    {
    };
    // Half-duplex selection
    struct HDSEL : RegisterField<CR3, 3, 1, ReadWriteMode>
    {
    };
    // IrDA low-power
    struct IRLP : RegisterField<CR3, 2, 1, ReadWriteMode>
    {
    };
    // IrDA mode enable
    struct IREN : RegisterField<CR3, 1, 1, ReadWriteMode>
    {
    };
    // Error interrupt enable
    struct EIE : RegisterField<CR3, 0, 1, ReadWriteMode>
    {
    };
  };

  // Guard time and prescaler register
  struct GTPR : Register<0x40011418, ReadWriteMode, 0x0>
  {
    // Guard time value
    struct GT : RegisterField<GTPR, 8, 8, ReadWriteMode>
    {
    };
    // Prescaler value
    struct PSC : RegisterField<GTPR, 0, 8, ReadWriteMode>
    {
    };
  };

// Large Registers

};


struct USART1
{
  static constexpr auto periphNum = 1;

  // Status register
  struct SR : Register<0x40011000, ReadWriteMode, 0xc00000>
  {
    // CTS flag
    struct CTS : RegisterField<SR, 9, 1, ReadWriteMode>
    {
    };
    // LIN break detection flag
    struct LBD : RegisterField<SR, 8, 1, ReadWriteMode>
    {
    };
    // Transmit data register empty
    struct TXE : RegisterField<SR, 7, 1, ReadMode>
    {
      using notEmpty = FieldValue<TXE, 0U>;
      using Empty = FieldValue<TXE, 1U>;
    };
    // Transmission complete
    struct TC : RegisterField<SR, 6, 1, ReadWriteMode>
    {
      using Clear = FieldValue<TC, 0U>;
      using Complete = FieldValue<TC, 1U>;
    };
    // Read data register not empty
    struct RXNE : RegisterField<SR, 5, 1, ReadWriteMode>
    {
      using Empty = FieldValue<RXNE, 0U>;
      using notEmpty = FieldValue<RXNE, 1U>;
    };
    // IDLE line detected
    struct IDLE : RegisterField<SR, 4, 1, ReadMode>
    {
      using notDetected = FieldValue<IDLE, 0U>;
      using Detected = FieldValue<IDLE, 1U>;
    };
    // Overrun error
    struct ORE : RegisterField<SR, 3, 1, ReadMode>
    {
    };
    // Noise detected flag
    struct NF : RegisterField<SR, 2, 1, ReadMode>
    {
    };
    // Framing error
    struct FE : RegisterField<SR, 1, 1, ReadMode>
    {
    };
    // Parity error
    struct PE : RegisterField<SR, 0, 1, ReadMode>
    {
    };
  };

  // Data register
  struct DR : Register<0x40011004, ReadWriteMode, 0x0>
  {
    // Data value
    struct _DR : RegisterField<DR, 0, 9, ReadWriteMode>
    {
    };
  };

  // Baud rate register
  struct BRR : Register<0x40011008, ReadWriteMode, 0x0>
  {
    // mantissa of USARTDIV
    struct DIV_Mantissa : RegisterField<BRR, 4, 12, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 4095)>>
      using Value = FieldValue<DIV_Mantissa, val>;
    };
    // fraction of USARTDIV
    struct DIV_Fraction : RegisterField<BRR, 0, 4, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<DIV_Fraction, val>;
    };
  };

  // Control register 1
  struct CR1 : Register<0x4001100c, ReadWriteMode, 0x0>
  {
    // Oversampling mode
    struct OVER8 : RegisterField<CR1, 15, 1, ReadWriteMode>
    {
    };
    // USART enable
    struct UE : RegisterField<CR1, 13, 1, ReadWriteMode>
    {
      using Disable = FieldValue<UE, 0U>;
      using Enable = FieldValue<UE, 1U>;
    };
    // Word length
    struct M : RegisterField<CR1, 12, 1, ReadWriteMode>
    {
    };
    // Wakeup method
    struct WAKE : RegisterField<CR1, 11, 1, ReadWriteMode>
    {
    };
    // Parity control enable
    struct PCE : RegisterField<CR1, 10, 1, ReadWriteMode>
    {
    };
    // Parity selection
    struct PS : RegisterField<CR1, 9, 1, ReadWriteMode>
    {
    };
    // PE interrupt enable
    struct PEIE : RegisterField<CR1, 8, 1, ReadWriteMode>
    {
    };
    // TXE interrupt enable
    struct TXEIE : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TXEIE, 0U>;
      using Enable = FieldValue<TXEIE, 1U>;
    };
    // Transmission complete interrupt enable
    struct TCIE : RegisterField<CR1, 6, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TCIE, 0U>;
      using Enable = FieldValue<TCIE, 1U>;
    };
    // RXNE interrupt enable
    struct RXNEIE : RegisterField<CR1, 5, 1, ReadWriteMode>
    {
      using Disable = FieldValue<RXNEIE, 0U>;
      using Enable = FieldValue<RXNEIE, 1U>;
    };
    // IDLE interrupt enable
    struct IDLEIE : RegisterField<CR1, 4, 1, ReadWriteMode>
    {
      using Disable = FieldValue<IDLEIE, 0U>;
      using Enable = FieldValue<IDLEIE, 1U>;
    };
    // Transmitter enable
    struct TE : RegisterField<CR1, 3, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TE, 0U>;
      using Enable = FieldValue<TE, 1U>;
    };
    // Receiver enable
    struct RE : RegisterField<CR1, 2, 1, ReadWriteMode>
    {
      using Disable = FieldValue<RE, 0U>;
      using Enable = FieldValue<RE, 1U>;
    };
    // Receiver wakeup
    struct RWU : RegisterField<CR1, 1, 1, ReadWriteMode>
    {
    };
    // Send break
    struct SBK : RegisterField<CR1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Control register 2
  struct CR2 : Register<0x40011010, ReadWriteMode, 0x0>
  {
    // LIN mode enable
    struct LINEN : RegisterField<CR2, 14, 1, ReadWriteMode>
    {
    };
    // STOP bits
    struct STOP : RegisterField<CR2, 12, 2, ReadWriteMode>
    {
    };
    // Clock enable
    struct CLKEN : RegisterField<CR2, 11, 1, ReadWriteMode>
    {
    };
    // Clock polarity
    struct CPOL : RegisterField<CR2, 10, 1, ReadWriteMode>
    {
    };
    // Clock phase
    struct CPHA : RegisterField<CR2, 9, 1, ReadWriteMode>
    {
    };
    // Last bit clock pulse
    struct LBCL : RegisterField<CR2, 8, 1, ReadWriteMode>
    {
    };
    // LIN break detection interrupt enable
    struct LBDIE : RegisterField<CR2, 6, 1, ReadWriteMode>
    {
    };
    // lin break detection length
    struct LBDL : RegisterField<CR2, 5, 1, ReadWriteMode>
    {
    };
    // Address of the USART node
    struct ADD : RegisterField<CR2, 0, 4, ReadWriteMode>
    {
    };
  };

  // Control register 3
  struct CR3 : Register<0x40011014, ReadWriteMode, 0x0>
  {
    // One sample bit method enable
    struct ONEBIT : RegisterField<CR3, 11, 1, ReadWriteMode>
    {
    };
    // CTS interrupt enable
    struct CTSIE : RegisterField<CR3, 10, 1, ReadWriteMode>
    {
    };
    // CTS enable
    struct CTSE : RegisterField<CR3, 9, 1, ReadWriteMode>
    {
      using Disable = FieldValue<CTSE, 0U>;
      using Enable = FieldValue<CTSE, 1U>;
    };
    // RTS enable
    struct RTSE : RegisterField<CR3, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<RTSE, 0U>;
      using Enable = FieldValue<RTSE, 1U>;
    };
    // DMA enable transmitter
    struct DMAT : RegisterField<CR3, 7, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMAT, 0U>;
      using Enable = FieldValue<DMAT, 1U>;
    };
    // DMA enable receiver
    struct DMAR : RegisterField<CR3, 6, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMAR, 0U>;
      using Enable = FieldValue<DMAR, 1U>;
    };
    // Smartcard mode enable
    struct SCEN : RegisterField<CR3, 5, 1, ReadWriteMode>
    {
    };
    // Smartcard NACK enable
    struct NACK : RegisterField<CR3, 4, 1, ReadWriteMode>
    {
    };
    // Half-duplex selection
    struct HDSEL : RegisterField<CR3, 3, 1, ReadWriteMode>
    {
    };
    // IrDA low-power
    struct IRLP : RegisterField<CR3, 2, 1, ReadWriteMode>
    {
    };
    // IrDA mode enable
    struct IREN : RegisterField<CR3, 1, 1, ReadWriteMode>
    {
    };
    // Error interrupt enable
    struct EIE : RegisterField<CR3, 0, 1, ReadWriteMode>
    {
    };
  };

  // Guard time and prescaler register
  struct GTPR : Register<0x40011018, ReadWriteMode, 0x0>
  {
    // Guard time value
    struct GT : RegisterField<GTPR, 8, 8, ReadWriteMode>
    {
    };
    // Prescaler value
    struct PSC : RegisterField<GTPR, 0, 8, ReadWriteMode>
    {
    };
  };

// Large Registers

};


struct USART2
{
  static constexpr auto periphNum = 2;

  // Status register
  struct SR : Register<0x40004400, ReadWriteMode, 0xc00000>
  {
    // CTS flag
    struct CTS : RegisterField<SR, 9, 1, ReadWriteMode>
    {
    };
    // LIN break detection flag
    struct LBD : RegisterField<SR, 8, 1, ReadWriteMode>
    {
    };
    // Transmit data register empty
    struct TXE : RegisterField<SR, 7, 1, ReadMode>
    {
      using notEmpty = FieldValue<TXE, 0U>;
      using Empty = FieldValue<TXE, 1U>;
    };
    // Transmission complete
    struct TC : RegisterField<SR, 6, 1, ReadWriteMode>
    {
      using Clear = FieldValue<TC, 0U>;
      using Complete = FieldValue<TC, 1U>;
    };
    // Read data register not empty
    struct RXNE : RegisterField<SR, 5, 1, ReadWriteMode>
    {
      using Empty = FieldValue<RXNE, 0U>;
      using notEmpty = FieldValue<RXNE, 1U>;
    };
    // IDLE line detected
    struct IDLE : RegisterField<SR, 4, 1, ReadMode>
    {
      using notDetected = FieldValue<IDLE, 0U>;
      using Detected = FieldValue<IDLE, 1U>;
    };
    // Overrun error
    struct ORE : RegisterField<SR, 3, 1, ReadMode>
    {
    };
    // Noise detected flag
    struct NF : RegisterField<SR, 2, 1, ReadMode>
    {
    };
    // Framing error
    struct FE : RegisterField<SR, 1, 1, ReadMode>
    {
    };
    // Parity error
    struct PE : RegisterField<SR, 0, 1, ReadMode>
    {
    };
  };

  // Data register
  struct DR : Register<0x40004404, ReadWriteMode, 0x0>
  {
    // Data value
    struct _DR : RegisterField<DR, 0, 9, ReadWriteMode>
    {
    };
  };

  // Baud rate register
  struct BRR : Register<0x40004408, ReadWriteMode, 0x0>
  {
    // mantissa of USARTDIV
    struct DIV_Mantissa : RegisterField<BRR, 4, 12, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 4095)>>
      using Value = FieldValue<DIV_Mantissa, val>;
    };
    // fraction of USARTDIV
    struct DIV_Fraction : RegisterField<BRR, 0, 4, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<DIV_Fraction, val>;
    };
  };

  // Control register 1
  struct CR1 : Register<0x4000440c, ReadWriteMode, 0x0>
  {
    // Oversampling mode
    struct OVER8 : RegisterField<CR1, 15, 1, ReadWriteMode>
    {
    };
    // USART enable
    struct UE : RegisterField<CR1, 13, 1, ReadWriteMode>
    {
      using Disable = FieldValue<UE, 0U>;
      using Enable = FieldValue<UE, 1U>;
    };
    // Word length
    struct M : RegisterField<CR1, 12, 1, ReadWriteMode>
    {
    };
    // Wakeup method
    struct WAKE : RegisterField<CR1, 11, 1, ReadWriteMode>
    {
    };
    // Parity control enable
    struct PCE : RegisterField<CR1, 10, 1, ReadWriteMode>
    {
    };
    // Parity selection
    struct PS : RegisterField<CR1, 9, 1, ReadWriteMode>
    {
    };
    // PE interrupt enable
    struct PEIE : RegisterField<CR1, 8, 1, ReadWriteMode>
    {
    };
    // TXE interrupt enable
    struct TXEIE : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TXEIE, 0U>;
      using Enable = FieldValue<TXEIE, 1U>;
    };
    // Transmission complete interrupt enable
    struct TCIE : RegisterField<CR1, 6, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TCIE, 0U>;
      using Enable = FieldValue<TCIE, 1U>;
    };
    // RXNE interrupt enable
    struct RXNEIE : RegisterField<CR1, 5, 1, ReadWriteMode>
    {
      using Disable = FieldValue<RXNEIE, 0U>;
      using Enable = FieldValue<RXNEIE, 1U>;
    };
    // IDLE interrupt enable
    struct IDLEIE : RegisterField<CR1, 4, 1, ReadWriteMode>
    {
      using Disable = FieldValue<IDLEIE, 0U>;
      using Enable = FieldValue<IDLEIE, 1U>;
    };
    // Transmitter enable
    struct TE : RegisterField<CR1, 3, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TE, 0U>;
      using Enable = FieldValue<TE, 1U>;
    };
    // Receiver enable
    struct RE : RegisterField<CR1, 2, 1, ReadWriteMode>
    {
      using Disable = FieldValue<RE, 0U>;
      using Enable = FieldValue<RE, 1U>;
    };
    // Receiver wakeup
    struct RWU : RegisterField<CR1, 1, 1, ReadWriteMode>
    {
    };
    // Send break
    struct SBK : RegisterField<CR1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Control register 2
  struct CR2 : Register<0x40004410, ReadWriteMode, 0x0>
  {
    // LIN mode enable
    struct LINEN : RegisterField<CR2, 14, 1, ReadWriteMode>
    {
    };
    // STOP bits
    struct STOP : RegisterField<CR2, 12, 2, ReadWriteMode>
    {
    };
    // Clock enable
    struct CLKEN : RegisterField<CR2, 11, 1, ReadWriteMode>
    {
    };
    // Clock polarity
    struct CPOL : RegisterField<CR2, 10, 1, ReadWriteMode>
    {
    };
    // Clock phase
    struct CPHA : RegisterField<CR2, 9, 1, ReadWriteMode>
    {
    };
    // Last bit clock pulse
    struct LBCL : RegisterField<CR2, 8, 1, ReadWriteMode>
    {
    };
    // LIN break detection interrupt enable
    struct LBDIE : RegisterField<CR2, 6, 1, ReadWriteMode>
    {
    };
    // lin break detection length
    struct LBDL : RegisterField<CR2, 5, 1, ReadWriteMode>
    {
    };
    // Address of the USART node
    struct ADD : RegisterField<CR2, 0, 4, ReadWriteMode>
    {
    };
  };

  // Control register 3
  struct CR3 : Register<0x40004414, ReadWriteMode, 0x0>
  {
    // One sample bit method enable
    struct ONEBIT : RegisterField<CR3, 11, 1, ReadWriteMode>
    {
    };
    // CTS interrupt enable
    struct CTSIE : RegisterField<CR3, 10, 1, ReadWriteMode>
    {
    };
    // CTS enable
    struct CTSE : RegisterField<CR3, 9, 1, ReadWriteMode>
    {
      using Disable = FieldValue<CTSE, 0U>;
      using Enable = FieldValue<CTSE, 1U>;
    };
    // RTS enable
    struct RTSE : RegisterField<CR3, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<RTSE, 0U>;
      using Enable = FieldValue<RTSE, 1U>;
    };
    // DMA enable transmitter
    struct DMAT : RegisterField<CR3, 7, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMAT, 0U>;
      using Enable = FieldValue<DMAT, 1U>;
    };
    // DMA enable receiver
    struct DMAR : RegisterField<CR3, 6, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMAR, 0U>;
      using Enable = FieldValue<DMAR, 1U>;
    };
    // Smartcard mode enable
    struct SCEN : RegisterField<CR3, 5, 1, ReadWriteMode>
    {
    };
    // Smartcard NACK enable
    struct NACK : RegisterField<CR3, 4, 1, ReadWriteMode>
    {
    };
    // Half-duplex selection
    struct HDSEL : RegisterField<CR3, 3, 1, ReadWriteMode>
    {
    };
    // IrDA low-power
    struct IRLP : RegisterField<CR3, 2, 1, ReadWriteMode>
    {
    };
    // IrDA mode enable
    struct IREN : RegisterField<CR3, 1, 1, ReadWriteMode>
    {
    };
    // Error interrupt enable
    struct EIE : RegisterField<CR3, 0, 1, ReadWriteMode>
    {
    };
  };

  // Guard time and prescaler register
  struct GTPR : Register<0x40004418, ReadWriteMode, 0x0>
  {
    // Guard time value
    struct GT : RegisterField<GTPR, 8, 8, ReadWriteMode>
    {
    };
    // Prescaler value
    struct PSC : RegisterField<GTPR, 0, 8, ReadWriteMode>
    {
    };
  };

// Large Registers

};


struct USART3
{
  static constexpr auto periphNum = 3;

  // Status register
  struct SR : Register<0x40004800, ReadWriteMode, 0xc00000>
  {
    // CTS flag
    struct CTS : RegisterField<SR, 9, 1, ReadWriteMode>
    {
    };
    // LIN break detection flag
    struct LBD : RegisterField<SR, 8, 1, ReadWriteMode>
    {
    };
    // Transmit data register empty
    struct TXE : RegisterField<SR, 7, 1, ReadMode>
    {
      using notEmpty = FieldValue<TXE, 0U>;
      using Empty = FieldValue<TXE, 1U>;
    };
    // Transmission complete
    struct TC : RegisterField<SR, 6, 1, ReadWriteMode>
    {
      using Clear = FieldValue<TC, 0U>;
      using Complete = FieldValue<TC, 1U>;
    };
    // Read data register not empty
    struct RXNE : RegisterField<SR, 5, 1, ReadWriteMode>
    {
      using Empty = FieldValue<RXNE, 0U>;
      using notEmpty = FieldValue<RXNE, 1U>;
    };
    // IDLE line detected
    struct IDLE : RegisterField<SR, 4, 1, ReadMode>
    {
      using notDetected = FieldValue<IDLE, 0U>;
      using Detected = FieldValue<IDLE, 1U>;
    };
    // Overrun error
    struct ORE : RegisterField<SR, 3, 1, ReadMode>
    {
    };
    // Noise detected flag
    struct NF : RegisterField<SR, 2, 1, ReadMode>
    {
    };
    // Framing error
    struct FE : RegisterField<SR, 1, 1, ReadMode>
    {
    };
    // Parity error
    struct PE : RegisterField<SR, 0, 1, ReadMode>
    {
    };
  };

  // Data register
  struct DR : Register<0x40004804, ReadWriteMode, 0x0>
  {
    // Data value
    struct _DR : RegisterField<DR, 0, 9, ReadWriteMode>
    {
    };
  };

  // Baud rate register
  struct BRR : Register<0x40004808, ReadWriteMode, 0x0>
  {
    // mantissa of USARTDIV
    struct DIV_Mantissa : RegisterField<BRR, 4, 12, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 4095)>>
      using Value = FieldValue<DIV_Mantissa, val>;
    };
    // fraction of USARTDIV
    struct DIV_Fraction : RegisterField<BRR, 0, 4, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<DIV_Fraction, val>;
    };
  };

  // Control register 1
  struct CR1 : Register<0x4000480c, ReadWriteMode, 0x0>
  {
    // Oversampling mode
    struct OVER8 : RegisterField<CR1, 15, 1, ReadWriteMode>
    {
    };
    // USART enable
    struct UE : RegisterField<CR1, 13, 1, ReadWriteMode>
    {
      using Disable = FieldValue<UE, 0U>;
      using Enable = FieldValue<UE, 1U>;
    };
    // Word length
    struct M : RegisterField<CR1, 12, 1, ReadWriteMode>
    {
    };
    // Wakeup method
    struct WAKE : RegisterField<CR1, 11, 1, ReadWriteMode>
    {
    };
    // Parity control enable
    struct PCE : RegisterField<CR1, 10, 1, ReadWriteMode>
    {
    };
    // Parity selection
    struct PS : RegisterField<CR1, 9, 1, ReadWriteMode>
    {
    };
    // PE interrupt enable
    struct PEIE : RegisterField<CR1, 8, 1, ReadWriteMode>
    {
    };
    // TXE interrupt enable
    struct TXEIE : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TXEIE, 0U>;
      using Enable = FieldValue<TXEIE, 1U>;
    };
    // Transmission complete interrupt enable
    struct TCIE : RegisterField<CR1, 6, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TCIE, 0U>;
      using Enable = FieldValue<TCIE, 1U>;
    };
    // RXNE interrupt enable
    struct RXNEIE : RegisterField<CR1, 5, 1, ReadWriteMode>
    {
      using Disable = FieldValue<RXNEIE, 0U>;
      using Enable = FieldValue<RXNEIE, 1U>;
    };
    // IDLE interrupt enable
    struct IDLEIE : RegisterField<CR1, 4, 1, ReadWriteMode>
    {
      using Disable = FieldValue<IDLEIE, 0U>;
      using Enable = FieldValue<IDLEIE, 1U>;
    };
    // Transmitter enable
    struct TE : RegisterField<CR1, 3, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TE, 0U>;
      using Enable = FieldValue<TE, 1U>;
    };
    // Receiver enable
    struct RE : RegisterField<CR1, 2, 1, ReadWriteMode>
    {
      using Disable = FieldValue<RE, 0U>;
      using Enable = FieldValue<RE, 1U>;
    };
    // Receiver wakeup
    struct RWU : RegisterField<CR1, 1, 1, ReadWriteMode>
    {
    };
    // Send break
    struct SBK : RegisterField<CR1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Control register 2
  struct CR2 : Register<0x40004810, ReadWriteMode, 0x0>
  {
    // LIN mode enable
    struct LINEN : RegisterField<CR2, 14, 1, ReadWriteMode>
    {
    };
    // STOP bits
    struct STOP : RegisterField<CR2, 12, 2, ReadWriteMode>
    {
    };
    // Clock enable
    struct CLKEN : RegisterField<CR2, 11, 1, ReadWriteMode>
    {
    };
    // Clock polarity
    struct CPOL : RegisterField<CR2, 10, 1, ReadWriteMode>
    {
    };
    // Clock phase
    struct CPHA : RegisterField<CR2, 9, 1, ReadWriteMode>
    {
    };
    // Last bit clock pulse
    struct LBCL : RegisterField<CR2, 8, 1, ReadWriteMode>
    {
    };
    // LIN break detection interrupt enable
    struct LBDIE : RegisterField<CR2, 6, 1, ReadWriteMode>
    {
    };
    // lin break detection length
    struct LBDL : RegisterField<CR2, 5, 1, ReadWriteMode>
    {
    };
    // Address of the USART node
    struct ADD : RegisterField<CR2, 0, 4, ReadWriteMode>
    {
    };
  };

  // Control register 3
  struct CR3 : Register<0x40004814, ReadWriteMode, 0x0>
  {
    // One sample bit method enable
    struct ONEBIT : RegisterField<CR3, 11, 1, ReadWriteMode>
    {
    };
    // CTS interrupt enable
    struct CTSIE : RegisterField<CR3, 10, 1, ReadWriteMode>
    {
    };
    // CTS enable
    struct CTSE : RegisterField<CR3, 9, 1, ReadWriteMode>
    {
      using Disable = FieldValue<CTSE, 0U>;
      using Enable = FieldValue<CTSE, 1U>;
    };
    // RTS enable
    struct RTSE : RegisterField<CR3, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<RTSE, 0U>;
      using Enable = FieldValue<RTSE, 1U>;
    };
    // DMA enable transmitter
    struct DMAT : RegisterField<CR3, 7, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMAT, 0U>;
      using Enable = FieldValue<DMAT, 1U>;
    };
    // DMA enable receiver
    struct DMAR : RegisterField<CR3, 6, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMAR, 0U>;
      using Enable = FieldValue<DMAR, 1U>;
    };
    // Smartcard mode enable
    struct SCEN : RegisterField<CR3, 5, 1, ReadWriteMode>
    {
    };
    // Smartcard NACK enable
    struct NACK : RegisterField<CR3, 4, 1, ReadWriteMode>
    {
    };
    // Half-duplex selection
    struct HDSEL : RegisterField<CR3, 3, 1, ReadWriteMode>
    {
    };
    // IrDA low-power
    struct IRLP : RegisterField<CR3, 2, 1, ReadWriteMode>
    {
    };
    // IrDA mode enable
    struct IREN : RegisterField<CR3, 1, 1, ReadWriteMode>
    {
    };
    // Error interrupt enable
    struct EIE : RegisterField<CR3, 0, 1, ReadWriteMode>
    {
    };
  };

  // Guard time and prescaler register
  struct GTPR : Register<0x40004818, ReadWriteMode, 0x0>
  {
    // Guard time value
    struct GT : RegisterField<GTPR, 8, 8, ReadWriteMode>
    {
    };
    // Prescaler value
    struct PSC : RegisterField<GTPR, 0, 8, ReadWriteMode>
    {
    };
  };

// Large Registers

};


