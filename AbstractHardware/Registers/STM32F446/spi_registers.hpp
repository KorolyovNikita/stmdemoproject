/******************************************************************************
* Filename : spi_registers.hpp
*
* Details  : Serial peripheral interface
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct SPI1
{
  static constexpr auto periphNum = 1;

  // control register 1
  struct CR1 : Register<0x40013000, ReadWriteMode, 0x0>
  {
    // Bidirectional data mode enable
    struct BIDIMODE : RegisterField<CR1, 15, 1, ReadWriteMode>
    {
    };
    // Output enable in bidirectional mode
    struct BIDIOE : RegisterField<CR1, 14, 1, ReadWriteMode>
    {
    };
    // Hardware CRC calculation enable
    struct CRCEN : RegisterField<CR1, 13, 1, ReadWriteMode>
    {
    };
    // CRC transfer next
    struct CRCNEXT : RegisterField<CR1, 12, 1, ReadWriteMode>
    {
    };
    // Data frame format
    struct DFF : RegisterField<CR1, 11, 1, ReadWriteMode>
    {
    };
    // Receive only
    struct RXONLY : RegisterField<CR1, 10, 1, ReadWriteMode>
    {
    };
    // Software slave management
    struct SSM : RegisterField<CR1, 9, 1, ReadWriteMode>
    {
    };
    // Internal slave select
    struct SSI : RegisterField<CR1, 8, 1, ReadWriteMode>
    {
    };
    // Frame format
    struct LSBFIRST : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
    };
    // SPI enable
    struct SPE : RegisterField<CR1, 6, 1, ReadWriteMode>
    {
    };
    // Baud rate control
    struct BR : RegisterField<CR1, 3, 3, ReadWriteMode>
    {
    };
    // Master selection
    struct MSTR : RegisterField<CR1, 2, 1, ReadWriteMode>
    {
    };
    // Clock polarity
    struct CPOL : RegisterField<CR1, 1, 1, ReadWriteMode>
    {
    };
    // Clock phase
    struct CPHA : RegisterField<CR1, 0, 1, ReadWriteMode>
    {
    };
  };

  // control register 2
  struct CR2 : Register<0x40013004, ReadWriteMode, 0x0>
  {
    // Tx buffer empty interrupt enable
    struct TXEIE : RegisterField<CR2, 7, 1, ReadWriteMode>
    {
    };
    // RX buffer not empty interrupt enable
    struct RXNEIE : RegisterField<CR2, 6, 1, ReadWriteMode>
    {
    };
    // Error interrupt enable
    struct ERRIE : RegisterField<CR2, 5, 1, ReadWriteMode>
    {
    };
    // Frame format
    struct FRF : RegisterField<CR2, 4, 1, ReadWriteMode>
    {
    };
    // SS output enable
    struct SSOE : RegisterField<CR2, 2, 1, ReadWriteMode>
    {
    };
    // Tx buffer DMA enable
    struct TXDMAEN : RegisterField<CR2, 1, 1, ReadWriteMode>
    {
    };
    // Rx buffer DMA enable
    struct RXDMAEN : RegisterField<CR2, 0, 1, ReadWriteMode>
    {
    };
  };

  // status register
  struct SR : Register<0x40013008, ReadWriteMode, 0x2>
  {
    // TI frame format error
    struct TIFRFE : RegisterField<SR, 8, 1, ReadMode>
    {
    };
    // Busy flag
    struct BSY : RegisterField<SR, 7, 1, ReadMode>
    {
    };
    // Overrun flag
    struct OVR : RegisterField<SR, 6, 1, ReadMode>
    {
    };
    // Mode fault
    struct MODF : RegisterField<SR, 5, 1, ReadMode>
    {
    };
    // CRC error flag
    struct CRCERR : RegisterField<SR, 4, 1, ReadWriteMode>
    {
    };
    // Underrun flag
    struct UDR : RegisterField<SR, 3, 1, ReadMode>
    {
    };
    // Channel side
    struct CHSIDE : RegisterField<SR, 2, 1, ReadMode>
    {
    };
    // Transmit buffer empty
    struct TXE : RegisterField<SR, 1, 1, ReadMode>
    {
    };
    // Receive buffer not empty
    struct RXNE : RegisterField<SR, 0, 1, ReadMode>
    {
    };
  };

  // data register
  struct DR : Register<0x4001300c, ReadWriteMode, 0x0>
  {
    // Data register
    struct _DR : RegisterField<DR, 0, 16, ReadWriteMode>
    {
    };
  };

  // CRC polynomial register
  struct CRCPR : Register<0x40013010, ReadWriteMode, 0x7>
  {
    // CRC polynomial register
    struct CRCPOLY : RegisterField<CRCPR, 0, 16, ReadWriteMode>
    {
    };
  };

  // RX CRC register
  struct RXCRCR : Register<0x40013014, ReadMode, 0x0>
  {
    // Rx CRC register
    struct RxCRC : RegisterField<RXCRCR, 0, 16, ReadMode>
    {
    };
  };

  // TX CRC register
  struct TXCRCR : Register<0x40013018, ReadMode, 0x0>
  {
    // Tx CRC register
    struct TxCRC : RegisterField<TXCRCR, 0, 16, ReadMode>
    {
    };
  };

  // I2S configuration register
  struct I2SCFGR : Register<0x4001301c, ReadWriteMode, 0x0>
  {
    // I2S mode selection
    struct I2SMOD : RegisterField<I2SCFGR, 11, 1, ReadWriteMode>
    {
    };
    // I2S Enable
    struct I2SE : RegisterField<I2SCFGR, 10, 1, ReadWriteMode>
    {
    };
    // I2S configuration mode
    struct I2SCFG : RegisterField<I2SCFGR, 8, 2, ReadWriteMode>
    {
    };
    // PCM frame synchronization
    struct PCMSYNC : RegisterField<I2SCFGR, 7, 1, ReadWriteMode>
    {
    };
    // I2S standard selection
    struct I2SSTD : RegisterField<I2SCFGR, 4, 2, ReadWriteMode>
    {
    };
    // Steady state clock polarity
    struct CKPOL : RegisterField<I2SCFGR, 3, 1, ReadWriteMode>
    {
    };
    // Data length to be transferred
    struct DATLEN : RegisterField<I2SCFGR, 1, 2, ReadWriteMode>
    {
    };
    // Channel length (number of bits per audio channel)
    struct CHLEN : RegisterField<I2SCFGR, 0, 1, ReadWriteMode>
    {
    };
  };

  // I2S prescaler register
  struct I2SPR : Register<0x40013020, ReadWriteMode, 0xa>
  {
    // Master clock output enable
    struct MCKOE : RegisterField<I2SPR, 9, 1, ReadWriteMode>
    {
    };
    // Odd factor for the prescaler
    struct ODD : RegisterField<I2SPR, 8, 1, ReadWriteMode>
    {
    };
    // I2S Linear prescaler
    struct I2SDIV : RegisterField<I2SPR, 0, 8, ReadWriteMode>
    {
    };
  };

// Large Registers

};


struct SPI2
{
  static constexpr auto periphNum = 2;

  // control register 1
  struct CR1 : Register<0x40003800, ReadWriteMode, 0x0>
  {
    // Bidirectional data mode enable
    struct BIDIMODE : RegisterField<CR1, 15, 1, ReadWriteMode>
    {
    };
    // Output enable in bidirectional mode
    struct BIDIOE : RegisterField<CR1, 14, 1, ReadWriteMode>
    {
    };
    // Hardware CRC calculation enable
    struct CRCEN : RegisterField<CR1, 13, 1, ReadWriteMode>
    {
    };
    // CRC transfer next
    struct CRCNEXT : RegisterField<CR1, 12, 1, ReadWriteMode>
    {
    };
    // Data frame format
    struct DFF : RegisterField<CR1, 11, 1, ReadWriteMode>
    {
    };
    // Receive only
    struct RXONLY : RegisterField<CR1, 10, 1, ReadWriteMode>
    {
    };
    // Software slave management
    struct SSM : RegisterField<CR1, 9, 1, ReadWriteMode>
    {
    };
    // Internal slave select
    struct SSI : RegisterField<CR1, 8, 1, ReadWriteMode>
    {
    };
    // Frame format
    struct LSBFIRST : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
    };
    // SPI enable
    struct SPE : RegisterField<CR1, 6, 1, ReadWriteMode>
    {
    };
    // Baud rate control
    struct BR : RegisterField<CR1, 3, 3, ReadWriteMode>
    {
    };
    // Master selection
    struct MSTR : RegisterField<CR1, 2, 1, ReadWriteMode>
    {
    };
    // Clock polarity
    struct CPOL : RegisterField<CR1, 1, 1, ReadWriteMode>
    {
    };
    // Clock phase
    struct CPHA : RegisterField<CR1, 0, 1, ReadWriteMode>
    {
    };
  };

  // control register 2
  struct CR2 : Register<0x40003804, ReadWriteMode, 0x0>
  {
    // Tx buffer empty interrupt enable
    struct TXEIE : RegisterField<CR2, 7, 1, ReadWriteMode>
    {
    };
    // RX buffer not empty interrupt enable
    struct RXNEIE : RegisterField<CR2, 6, 1, ReadWriteMode>
    {
    };
    // Error interrupt enable
    struct ERRIE : RegisterField<CR2, 5, 1, ReadWriteMode>
    {
    };
    // Frame format
    struct FRF : RegisterField<CR2, 4, 1, ReadWriteMode>
    {
    };
    // SS output enable
    struct SSOE : RegisterField<CR2, 2, 1, ReadWriteMode>
    {
    };
    // Tx buffer DMA enable
    struct TXDMAEN : RegisterField<CR2, 1, 1, ReadWriteMode>
    {
    };
    // Rx buffer DMA enable
    struct RXDMAEN : RegisterField<CR2, 0, 1, ReadWriteMode>
    {
    };
  };

  // status register
  struct SR : Register<0x40003808, ReadWriteMode, 0x2>
  {
    // TI frame format error
    struct TIFRFE : RegisterField<SR, 8, 1, ReadMode>
    {
    };
    // Busy flag
    struct BSY : RegisterField<SR, 7, 1, ReadMode>
    {
    };
    // Overrun flag
    struct OVR : RegisterField<SR, 6, 1, ReadMode>
    {
    };
    // Mode fault
    struct MODF : RegisterField<SR, 5, 1, ReadMode>
    {
    };
    // CRC error flag
    struct CRCERR : RegisterField<SR, 4, 1, ReadWriteMode>
    {
    };
    // Underrun flag
    struct UDR : RegisterField<SR, 3, 1, ReadMode>
    {
    };
    // Channel side
    struct CHSIDE : RegisterField<SR, 2, 1, ReadMode>
    {
    };
    // Transmit buffer empty
    struct TXE : RegisterField<SR, 1, 1, ReadMode>
    {
    };
    // Receive buffer not empty
    struct RXNE : RegisterField<SR, 0, 1, ReadMode>
    {
    };
  };

  // data register
  struct DR : Register<0x4000380c, ReadWriteMode, 0x0>
  {
    // Data register
    struct _DR : RegisterField<DR, 0, 16, ReadWriteMode>
    {
    };
  };

  // CRC polynomial register
  struct CRCPR : Register<0x40003810, ReadWriteMode, 0x7>
  {
    // CRC polynomial register
    struct CRCPOLY : RegisterField<CRCPR, 0, 16, ReadWriteMode>
    {
    };
  };

  // RX CRC register
  struct RXCRCR : Register<0x40003814, ReadMode, 0x0>
  {
    // Rx CRC register
    struct RxCRC : RegisterField<RXCRCR, 0, 16, ReadMode>
    {
    };
  };

  // TX CRC register
  struct TXCRCR : Register<0x40003818, ReadMode, 0x0>
  {
    // Tx CRC register
    struct TxCRC : RegisterField<TXCRCR, 0, 16, ReadMode>
    {
    };
  };

  // I2S configuration register
  struct I2SCFGR : Register<0x4000381c, ReadWriteMode, 0x0>
  {
    // I2S mode selection
    struct I2SMOD : RegisterField<I2SCFGR, 11, 1, ReadWriteMode>
    {
    };
    // I2S Enable
    struct I2SE : RegisterField<I2SCFGR, 10, 1, ReadWriteMode>
    {
    };
    // I2S configuration mode
    struct I2SCFG : RegisterField<I2SCFGR, 8, 2, ReadWriteMode>
    {
    };
    // PCM frame synchronization
    struct PCMSYNC : RegisterField<I2SCFGR, 7, 1, ReadWriteMode>
    {
    };
    // I2S standard selection
    struct I2SSTD : RegisterField<I2SCFGR, 4, 2, ReadWriteMode>
    {
    };
    // Steady state clock polarity
    struct CKPOL : RegisterField<I2SCFGR, 3, 1, ReadWriteMode>
    {
    };
    // Data length to be transferred
    struct DATLEN : RegisterField<I2SCFGR, 1, 2, ReadWriteMode>
    {
    };
    // Channel length (number of bits per audio channel)
    struct CHLEN : RegisterField<I2SCFGR, 0, 1, ReadWriteMode>
    {
    };
  };

  // I2S prescaler register
  struct I2SPR : Register<0x40003820, ReadWriteMode, 0xa>
  {
    // Master clock output enable
    struct MCKOE : RegisterField<I2SPR, 9, 1, ReadWriteMode>
    {
    };
    // Odd factor for the prescaler
    struct ODD : RegisterField<I2SPR, 8, 1, ReadWriteMode>
    {
    };
    // I2S Linear prescaler
    struct I2SDIV : RegisterField<I2SPR, 0, 8, ReadWriteMode>
    {
    };
  };

// Large Registers

};


struct SPI3
{
  static constexpr auto periphNum = 3;

  // control register 1
  struct CR1 : Register<0x40003c00, ReadWriteMode, 0x0>
  {
    // Bidirectional data mode enable
    struct BIDIMODE : RegisterField<CR1, 15, 1, ReadWriteMode>
    {
    };
    // Output enable in bidirectional mode
    struct BIDIOE : RegisterField<CR1, 14, 1, ReadWriteMode>
    {
    };
    // Hardware CRC calculation enable
    struct CRCEN : RegisterField<CR1, 13, 1, ReadWriteMode>
    {
    };
    // CRC transfer next
    struct CRCNEXT : RegisterField<CR1, 12, 1, ReadWriteMode>
    {
    };
    // Data frame format
    struct DFF : RegisterField<CR1, 11, 1, ReadWriteMode>
    {
    };
    // Receive only
    struct RXONLY : RegisterField<CR1, 10, 1, ReadWriteMode>
    {
    };
    // Software slave management
    struct SSM : RegisterField<CR1, 9, 1, ReadWriteMode>
    {
    };
    // Internal slave select
    struct SSI : RegisterField<CR1, 8, 1, ReadWriteMode>
    {
    };
    // Frame format
    struct LSBFIRST : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
    };
    // SPI enable
    struct SPE : RegisterField<CR1, 6, 1, ReadWriteMode>
    {
    };
    // Baud rate control
    struct BR : RegisterField<CR1, 3, 3, ReadWriteMode>
    {
    };
    // Master selection
    struct MSTR : RegisterField<CR1, 2, 1, ReadWriteMode>
    {
    };
    // Clock polarity
    struct CPOL : RegisterField<CR1, 1, 1, ReadWriteMode>
    {
    };
    // Clock phase
    struct CPHA : RegisterField<CR1, 0, 1, ReadWriteMode>
    {
    };
  };

  // control register 2
  struct CR2 : Register<0x40003c04, ReadWriteMode, 0x0>
  {
    // Tx buffer empty interrupt enable
    struct TXEIE : RegisterField<CR2, 7, 1, ReadWriteMode>
    {
    };
    // RX buffer not empty interrupt enable
    struct RXNEIE : RegisterField<CR2, 6, 1, ReadWriteMode>
    {
    };
    // Error interrupt enable
    struct ERRIE : RegisterField<CR2, 5, 1, ReadWriteMode>
    {
    };
    // Frame format
    struct FRF : RegisterField<CR2, 4, 1, ReadWriteMode>
    {
    };
    // SS output enable
    struct SSOE : RegisterField<CR2, 2, 1, ReadWriteMode>
    {
    };
    // Tx buffer DMA enable
    struct TXDMAEN : RegisterField<CR2, 1, 1, ReadWriteMode>
    {
    };
    // Rx buffer DMA enable
    struct RXDMAEN : RegisterField<CR2, 0, 1, ReadWriteMode>
    {
    };
  };

  // status register
  struct SR : Register<0x40003c08, ReadWriteMode, 0x2>
  {
    // TI frame format error
    struct TIFRFE : RegisterField<SR, 8, 1, ReadMode>
    {
    };
    // Busy flag
    struct BSY : RegisterField<SR, 7, 1, ReadMode>
    {
    };
    // Overrun flag
    struct OVR : RegisterField<SR, 6, 1, ReadMode>
    {
    };
    // Mode fault
    struct MODF : RegisterField<SR, 5, 1, ReadMode>
    {
    };
    // CRC error flag
    struct CRCERR : RegisterField<SR, 4, 1, ReadWriteMode>
    {
    };
    // Underrun flag
    struct UDR : RegisterField<SR, 3, 1, ReadMode>
    {
    };
    // Channel side
    struct CHSIDE : RegisterField<SR, 2, 1, ReadMode>
    {
    };
    // Transmit buffer empty
    struct TXE : RegisterField<SR, 1, 1, ReadMode>
    {
    };
    // Receive buffer not empty
    struct RXNE : RegisterField<SR, 0, 1, ReadMode>
    {
    };
  };

  // data register
  struct DR : Register<0x40003c0c, ReadWriteMode, 0x0>
  {
    // Data register
    struct _DR : RegisterField<DR, 0, 16, ReadWriteMode>
    {
    };
  };

  // CRC polynomial register
  struct CRCPR : Register<0x40003c10, ReadWriteMode, 0x7>
  {
    // CRC polynomial register
    struct CRCPOLY : RegisterField<CRCPR, 0, 16, ReadWriteMode>
    {
    };
  };

  // RX CRC register
  struct RXCRCR : Register<0x40003c14, ReadMode, 0x0>
  {
    // Rx CRC register
    struct RxCRC : RegisterField<RXCRCR, 0, 16, ReadMode>
    {
    };
  };

  // TX CRC register
  struct TXCRCR : Register<0x40003c18, ReadMode, 0x0>
  {
    // Tx CRC register
    struct TxCRC : RegisterField<TXCRCR, 0, 16, ReadMode>
    {
    };
  };

  // I2S configuration register
  struct I2SCFGR : Register<0x40003c1c, ReadWriteMode, 0x0>
  {
    // I2S mode selection
    struct I2SMOD : RegisterField<I2SCFGR, 11, 1, ReadWriteMode>
    {
    };
    // I2S Enable
    struct I2SE : RegisterField<I2SCFGR, 10, 1, ReadWriteMode>
    {
    };
    // I2S configuration mode
    struct I2SCFG : RegisterField<I2SCFGR, 8, 2, ReadWriteMode>
    {
    };
    // PCM frame synchronization
    struct PCMSYNC : RegisterField<I2SCFGR, 7, 1, ReadWriteMode>
    {
    };
    // I2S standard selection
    struct I2SSTD : RegisterField<I2SCFGR, 4, 2, ReadWriteMode>
    {
    };
    // Steady state clock polarity
    struct CKPOL : RegisterField<I2SCFGR, 3, 1, ReadWriteMode>
    {
    };
    // Data length to be transferred
    struct DATLEN : RegisterField<I2SCFGR, 1, 2, ReadWriteMode>
    {
    };
    // Channel length (number of bits per audio channel)
    struct CHLEN : RegisterField<I2SCFGR, 0, 1, ReadWriteMode>
    {
    };
  };

  // I2S prescaler register
  struct I2SPR : Register<0x40003c20, ReadWriteMode, 0xa>
  {
    // Master clock output enable
    struct MCKOE : RegisterField<I2SPR, 9, 1, ReadWriteMode>
    {
    };
    // Odd factor for the prescaler
    struct ODD : RegisterField<I2SPR, 8, 1, ReadWriteMode>
    {
    };
    // I2S Linear prescaler
    struct I2SDIV : RegisterField<I2SPR, 0, 8, ReadWriteMode>
    {
    };
  };

// Large Registers

};


struct SPI4
{
  static constexpr auto periphNum = 4;

  // control register 1
  struct CR1 : Register<0x40013400, ReadWriteMode, 0x0>
  {
    // Bidirectional data mode enable
    struct BIDIMODE : RegisterField<CR1, 15, 1, ReadWriteMode>
    {
    };
    // Output enable in bidirectional mode
    struct BIDIOE : RegisterField<CR1, 14, 1, ReadWriteMode>
    {
    };
    // Hardware CRC calculation enable
    struct CRCEN : RegisterField<CR1, 13, 1, ReadWriteMode>
    {
    };
    // CRC transfer next
    struct CRCNEXT : RegisterField<CR1, 12, 1, ReadWriteMode>
    {
    };
    // Data frame format
    struct DFF : RegisterField<CR1, 11, 1, ReadWriteMode>
    {
    };
    // Receive only
    struct RXONLY : RegisterField<CR1, 10, 1, ReadWriteMode>
    {
    };
    // Software slave management
    struct SSM : RegisterField<CR1, 9, 1, ReadWriteMode>
    {
    };
    // Internal slave select
    struct SSI : RegisterField<CR1, 8, 1, ReadWriteMode>
    {
    };
    // Frame format
    struct LSBFIRST : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
    };
    // SPI enable
    struct SPE : RegisterField<CR1, 6, 1, ReadWriteMode>
    {
    };
    // Baud rate control
    struct BR : RegisterField<CR1, 3, 3, ReadWriteMode>
    {
    };
    // Master selection
    struct MSTR : RegisterField<CR1, 2, 1, ReadWriteMode>
    {
    };
    // Clock polarity
    struct CPOL : RegisterField<CR1, 1, 1, ReadWriteMode>
    {
    };
    // Clock phase
    struct CPHA : RegisterField<CR1, 0, 1, ReadWriteMode>
    {
    };
  };

  // control register 2
  struct CR2 : Register<0x40013404, ReadWriteMode, 0x0>
  {
    // Tx buffer empty interrupt enable
    struct TXEIE : RegisterField<CR2, 7, 1, ReadWriteMode>
    {
    };
    // RX buffer not empty interrupt enable
    struct RXNEIE : RegisterField<CR2, 6, 1, ReadWriteMode>
    {
    };
    // Error interrupt enable
    struct ERRIE : RegisterField<CR2, 5, 1, ReadWriteMode>
    {
    };
    // Frame format
    struct FRF : RegisterField<CR2, 4, 1, ReadWriteMode>
    {
    };
    // SS output enable
    struct SSOE : RegisterField<CR2, 2, 1, ReadWriteMode>
    {
    };
    // Tx buffer DMA enable
    struct TXDMAEN : RegisterField<CR2, 1, 1, ReadWriteMode>
    {
    };
    // Rx buffer DMA enable
    struct RXDMAEN : RegisterField<CR2, 0, 1, ReadWriteMode>
    {
    };
  };

  // status register
  struct SR : Register<0x40013408, ReadWriteMode, 0x2>
  {
    // TI frame format error
    struct TIFRFE : RegisterField<SR, 8, 1, ReadMode>
    {
    };
    // Busy flag
    struct BSY : RegisterField<SR, 7, 1, ReadMode>
    {
    };
    // Overrun flag
    struct OVR : RegisterField<SR, 6, 1, ReadMode>
    {
    };
    // Mode fault
    struct MODF : RegisterField<SR, 5, 1, ReadMode>
    {
    };
    // CRC error flag
    struct CRCERR : RegisterField<SR, 4, 1, ReadWriteMode>
    {
    };
    // Underrun flag
    struct UDR : RegisterField<SR, 3, 1, ReadMode>
    {
    };
    // Channel side
    struct CHSIDE : RegisterField<SR, 2, 1, ReadMode>
    {
    };
    // Transmit buffer empty
    struct TXE : RegisterField<SR, 1, 1, ReadMode>
    {
    };
    // Receive buffer not empty
    struct RXNE : RegisterField<SR, 0, 1, ReadMode>
    {
    };
  };

  // data register
  struct DR : Register<0x4001340c, ReadWriteMode, 0x0>
  {
    // Data register
    struct _DR : RegisterField<DR, 0, 16, ReadWriteMode>
    {
    };
  };

  // CRC polynomial register
  struct CRCPR : Register<0x40013410, ReadWriteMode, 0x7>
  {
    // CRC polynomial register
    struct CRCPOLY : RegisterField<CRCPR, 0, 16, ReadWriteMode>
    {
    };
  };

  // RX CRC register
  struct RXCRCR : Register<0x40013414, ReadMode, 0x0>
  {
    // Rx CRC register
    struct RxCRC : RegisterField<RXCRCR, 0, 16, ReadMode>
    {
    };
  };

  // TX CRC register
  struct TXCRCR : Register<0x40013418, ReadMode, 0x0>
  {
    // Tx CRC register
    struct TxCRC : RegisterField<TXCRCR, 0, 16, ReadMode>
    {
    };
  };

  // I2S configuration register
  struct I2SCFGR : Register<0x4001341c, ReadWriteMode, 0x0>
  {
    // I2S mode selection
    struct I2SMOD : RegisterField<I2SCFGR, 11, 1, ReadWriteMode>
    {
    };
    // I2S Enable
    struct I2SE : RegisterField<I2SCFGR, 10, 1, ReadWriteMode>
    {
    };
    // I2S configuration mode
    struct I2SCFG : RegisterField<I2SCFGR, 8, 2, ReadWriteMode>
    {
    };
    // PCM frame synchronization
    struct PCMSYNC : RegisterField<I2SCFGR, 7, 1, ReadWriteMode>
    {
    };
    // I2S standard selection
    struct I2SSTD : RegisterField<I2SCFGR, 4, 2, ReadWriteMode>
    {
    };
    // Steady state clock polarity
    struct CKPOL : RegisterField<I2SCFGR, 3, 1, ReadWriteMode>
    {
    };
    // Data length to be transferred
    struct DATLEN : RegisterField<I2SCFGR, 1, 2, ReadWriteMode>
    {
    };
    // Channel length (number of bits per audio channel)
    struct CHLEN : RegisterField<I2SCFGR, 0, 1, ReadWriteMode>
    {
    };
  };

  // I2S prescaler register
  struct I2SPR : Register<0x40013420, ReadWriteMode, 0xa>
  {
    // Master clock output enable
    struct MCKOE : RegisterField<I2SPR, 9, 1, ReadWriteMode>
    {
    };
    // Odd factor for the prescaler
    struct ODD : RegisterField<I2SPR, 8, 1, ReadWriteMode>
    {
    };
    // I2S Linear prescaler
    struct I2SDIV : RegisterField<I2SPR, 0, 8, ReadWriteMode>
    {
    };
  };

// Large Registers

};


