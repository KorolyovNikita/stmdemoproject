/******************************************************************************
* Filename : i2c_registers.hpp
*
* Details  : Inter-integrated circuit
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct I2C3
{
  static constexpr auto periphNum = 3;

  // Control register 1
  struct CR1 : Register<0x40005c00, ReadWriteMode, 0x0>
  {
    // Software reset
    struct SWRST : RegisterField<CR1, 15, 1, ReadWriteMode>
    {
    };
    // SMBus alert
    struct ALERT : RegisterField<CR1, 13, 1, ReadWriteMode>
    {
    };
    // Packet error checking
    struct PEC : RegisterField<CR1, 12, 1, ReadWriteMode>
    {
    };
    // Acknowledge/PEC Position (for data reception)
    struct POS : RegisterField<CR1, 11, 1, ReadWriteMode>
    {
    };
    // Acknowledge enable
    struct ACK : RegisterField<CR1, 10, 1, ReadWriteMode>
    {
      using Disable = FieldValue<ACK, 0U>;
      using Enable = FieldValue<ACK, 1U>;
    };
    // Stop generation
    struct STOP : RegisterField<CR1, 9, 1, ReadWriteMode>
    {
      using Disable = FieldValue<STOP, 0U>;
      using Enable = FieldValue<STOP, 1U>;
    };
    // Start generation
    struct START : RegisterField<CR1, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<START, 0U>;
      using Enable = FieldValue<START, 1U>;
    };
    // Clock stretching disable (Slave mode)
    struct NOSTRETCH : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
    };
    // General call enable
    struct ENGC : RegisterField<CR1, 6, 1, ReadWriteMode>
    {
    };
    // PEC enable
    struct ENPEC : RegisterField<CR1, 5, 1, ReadWriteMode>
    {
    };
    // ARP enable
    struct ENARP : RegisterField<CR1, 4, 1, ReadWriteMode>
    {
    };
    // SMBus type
    struct SMBTYPE : RegisterField<CR1, 3, 1, ReadWriteMode>
    {
    };
    // SMBus mode
    struct SMBUS : RegisterField<CR1, 1, 1, ReadWriteMode>
    {
    };
    // Peripheral enable
    struct PE : RegisterField<CR1, 0, 1, ReadWriteMode>
    {
      using Disable = FieldValue<PE, 0U>;
      using Enable = FieldValue<PE, 1U>;
    };
  };

  // Control register 2
  struct CR2 : Register<0x40005c04, ReadWriteMode, 0x0>
  {
    // DMA last transfer
    struct LAST : RegisterField<CR2, 12, 1, ReadWriteMode>
    {
      using Disable = FieldValue<LAST, 0U>;
      using Enable = FieldValue<LAST, 1U>;
    };
    // DMA requests enable
    struct DMAEN : RegisterField<CR2, 11, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMAEN, 0U>;
      using Enable = FieldValue<DMAEN, 1U>;
    };
    // Buffer interrupt enable
    struct ITBUFEN : RegisterField<CR2, 10, 1, ReadWriteMode>
    {
      using Disable = FieldValue<ITBUFEN, 0U>;
      using Enable = FieldValue<ITBUFEN, 1U>;
    };
    // Event interrupt enable
    struct ITEVTEN : RegisterField<CR2, 9, 1, ReadWriteMode>
    {
      using Disable = FieldValue<ITEVTEN, 0U>;
      using Enable = FieldValue<ITEVTEN, 1U>;
    };
    // Error interrupt enable
    struct ITERREN : RegisterField<CR2, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<ITERREN, 0U>;
      using Enable = FieldValue<ITERREN, 1U>;
    };
    // Peripheral clock frequency
    struct FREQ : RegisterField<CR2, 0, 6, ReadWriteMode>
    {
    };
  };

  // Own address register 1
  struct OAR1 : Register<0x40005c08, ReadWriteMode, 0x0>
  {
    // Addressing mode (slave mode)
    struct ADDMODE : RegisterField<OAR1, 15, 1, ReadWriteMode>
    {
    };
    // Interface address
    struct ADD10 : RegisterField<OAR1, 8, 2, ReadWriteMode>
    {
    };
    // Interface address
    struct ADD7 : RegisterField<OAR1, 1, 7, ReadWriteMode>
    {
    };
    // Interface address
    struct ADD0 : RegisterField<OAR1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Own address register 2
  struct OAR2 : Register<0x40005c0c, ReadWriteMode, 0x0>
  {
    // Interface address
    struct ADD2 : RegisterField<OAR2, 1, 7, ReadWriteMode>
    {
    };
    // Dual addressing mode enable
    struct ENDUAL : RegisterField<OAR2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Data register
  struct DR : Register<0x40005c10, ReadWriteMode, 0x0>
  {
    // 8-bit data register
    struct _DR : RegisterField<DR, 0, 8, ReadWriteMode>
    {
    };
  };

  // Status register 1
  struct SR1 : Register<0x40005c14, ReadWriteMode, 0x0>
  {
    // SMBus alert
    struct SMBALERT : RegisterField<SR1, 15, 1, ReadWriteMode>
    {
    };
    // Timeout or Tlow error
    struct TIMEOUT : RegisterField<SR1, 14, 1, ReadWriteMode>
    {
    };
    // PEC Error in reception
    struct PECERR : RegisterField<SR1, 12, 1, ReadWriteMode>
    {
    };
    // Overrun/Underrun
    struct OVR : RegisterField<SR1, 11, 1, ReadWriteMode>
    {
    };
    // Acknowledge failure
    struct AF : RegisterField<SR1, 10, 1, ReadWriteMode>
    {
    };
    // Arbitration lost (master mode)
    struct ARLO : RegisterField<SR1, 9, 1, ReadWriteMode>
    {
    };
    // Bus error
    struct BERR : RegisterField<SR1, 8, 1, ReadWriteMode>
    {
    };
    // Data register empty (transmitters)
    struct TxE : RegisterField<SR1, 7, 1, ReadMode>
    {
    };
    // Data register not empty (receivers)
    struct RxNE : RegisterField<SR1, 6, 1, ReadMode>
    {
    };
    // Stop detection (slave mode)
    struct STOPF : RegisterField<SR1, 4, 1, ReadMode>
    {
    };
    // 10-bit header sent (Master mode)
    struct ADD10 : RegisterField<SR1, 3, 1, ReadMode>
    {
    };
    // Byte transfer finished
    struct BTF : RegisterField<SR1, 2, 1, ReadMode>
    {
    };
    // Address sent (master mode)/matched (slave mode)
    struct ADDR : RegisterField<SR1, 1, 1, ReadMode>
    {
    };
    // Start bit (Master mode)
    struct SB : RegisterField<SR1, 0, 1, ReadMode>
    {
    };
  };

  // Status register 2
  struct SR2 : Register<0x40005c18, ReadMode, 0x0>
  {
    // acket error checking register
    struct PEC : RegisterField<SR2, 8, 8, ReadMode>
    {
    };
    // Dual flag (Slave mode)
    struct DUALF : RegisterField<SR2, 7, 1, ReadMode>
    {
    };
    // SMBus host header (Slave mode)
    struct SMBHOST : RegisterField<SR2, 6, 1, ReadMode>
    {
    };
    // SMBus device default address (Slave mode)
    struct SMBDEFAULT : RegisterField<SR2, 5, 1, ReadMode>
    {
    };
    // General call address (Slave mode)
    struct GENCALL : RegisterField<SR2, 4, 1, ReadMode>
    {
    };
    // Transmitter/receiver
    struct TRA : RegisterField<SR2, 2, 1, ReadMode>
    {
    };
    // Bus busy
    struct BUSY : RegisterField<SR2, 1, 1, ReadMode>
    {
    };
    // Master/slave
    struct MSL : RegisterField<SR2, 0, 1, ReadMode>
    {
    };
  };

  // Clock control register
  struct CCR : Register<0x40005c1c, ReadWriteMode, 0x0>
  {
    // I2C master mode selection
    struct F_S : RegisterField<CCR, 15, 1, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<F_S, val>;
    };
    // Fast mode duty cycle
    struct DUTY : RegisterField<CCR, 14, 1, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<DUTY, val>;
    };
    // Clock control register in Fast/Standard mode (Master mode)
    struct _CCR : RegisterField<CCR, 0, 12, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 4095)>>
      using Value = FieldValue<_CCR, val>;
    };
  };

  // TRISE register
  struct TRISE : Register<0x40005c20, ReadWriteMode, 0x2>
  {
    // Maximum rise time in Fast/Standard mode (Master mode)
    struct _TRISE : RegisterField<TRISE, 0, 6, ReadWriteMode>
    {
    };
  };

  // I2C FLTR register
  struct FLTR : Register<0x40005c24, ReadWriteMode, 0x0>
  {
    // Analog noise filter OFF
    struct ANOFF : RegisterField<FLTR, 4, 1, ReadWriteMode>
    {
    };
    // Digital noise filter
    struct DNF : RegisterField<FLTR, 0, 4, ReadWriteMode>
    {
    };
  };

// Large Registers

};


struct I2C2
{
  static constexpr auto periphNum = 2;

  // Control register 1
  struct CR1 : Register<0x40005800, ReadWriteMode, 0x0>
  {
    // Software reset
    struct SWRST : RegisterField<CR1, 15, 1, ReadWriteMode>
    {
    };
    // SMBus alert
    struct ALERT : RegisterField<CR1, 13, 1, ReadWriteMode>
    {
    };
    // Packet error checking
    struct PEC : RegisterField<CR1, 12, 1, ReadWriteMode>
    {
    };
    // Acknowledge/PEC Position (for data reception)
    struct POS : RegisterField<CR1, 11, 1, ReadWriteMode>
    {
    };
    // Acknowledge enable
    struct ACK : RegisterField<CR1, 10, 1, ReadWriteMode>
    {
      using Disable = FieldValue<ACK, 0U>;
      using Enable = FieldValue<ACK, 1U>;
    };
    // Stop generation
    struct STOP : RegisterField<CR1, 9, 1, ReadWriteMode>
    {
      using Disable = FieldValue<STOP, 0U>;
      using Enable = FieldValue<STOP, 1U>;
    };
    // Start generation
    struct START : RegisterField<CR1, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<START, 0U>;
      using Enable = FieldValue<START, 1U>;
    };
    // Clock stretching disable (Slave mode)
    struct NOSTRETCH : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
    };
    // General call enable
    struct ENGC : RegisterField<CR1, 6, 1, ReadWriteMode>
    {
    };
    // PEC enable
    struct ENPEC : RegisterField<CR1, 5, 1, ReadWriteMode>
    {
    };
    // ARP enable
    struct ENARP : RegisterField<CR1, 4, 1, ReadWriteMode>
    {
    };
    // SMBus type
    struct SMBTYPE : RegisterField<CR1, 3, 1, ReadWriteMode>
    {
    };
    // SMBus mode
    struct SMBUS : RegisterField<CR1, 1, 1, ReadWriteMode>
    {
    };
    // Peripheral enable
    struct PE : RegisterField<CR1, 0, 1, ReadWriteMode>
    {
      using Disable = FieldValue<PE, 0U>;
      using Enable = FieldValue<PE, 1U>;
    };
  };

  // Control register 2
  struct CR2 : Register<0x40005804, ReadWriteMode, 0x0>
  {
    // DMA last transfer
    struct LAST : RegisterField<CR2, 12, 1, ReadWriteMode>
    {
      using Disable = FieldValue<LAST, 0U>;
      using Enable = FieldValue<LAST, 1U>;
    };
    // DMA requests enable
    struct DMAEN : RegisterField<CR2, 11, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMAEN, 0U>;
      using Enable = FieldValue<DMAEN, 1U>;
    };
    // Buffer interrupt enable
    struct ITBUFEN : RegisterField<CR2, 10, 1, ReadWriteMode>
    {
      using Disable = FieldValue<ITBUFEN, 0U>;
      using Enable = FieldValue<ITBUFEN, 1U>;
    };
    // Event interrupt enable
    struct ITEVTEN : RegisterField<CR2, 9, 1, ReadWriteMode>
    {
      using Disable = FieldValue<ITEVTEN, 0U>;
      using Enable = FieldValue<ITEVTEN, 1U>;
    };
    // Error interrupt enable
    struct ITERREN : RegisterField<CR2, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<ITERREN, 0U>;
      using Enable = FieldValue<ITERREN, 1U>;
    };
    // Peripheral clock frequency
    struct FREQ : RegisterField<CR2, 0, 6, ReadWriteMode>
    {
    };
  };

  // Own address register 1
  struct OAR1 : Register<0x40005808, ReadWriteMode, 0x0>
  {
    // Addressing mode (slave mode)
    struct ADDMODE : RegisterField<OAR1, 15, 1, ReadWriteMode>
    {
    };
    // Interface address
    struct ADD10 : RegisterField<OAR1, 8, 2, ReadWriteMode>
    {
    };
    // Interface address
    struct ADD7 : RegisterField<OAR1, 1, 7, ReadWriteMode>
    {
    };
    // Interface address
    struct ADD0 : RegisterField<OAR1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Own address register 2
  struct OAR2 : Register<0x4000580c, ReadWriteMode, 0x0>
  {
    // Interface address
    struct ADD2 : RegisterField<OAR2, 1, 7, ReadWriteMode>
    {
    };
    // Dual addressing mode enable
    struct ENDUAL : RegisterField<OAR2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Data register
  struct DR : Register<0x40005810, ReadWriteMode, 0x0>
  {
    // 8-bit data register
    struct _DR : RegisterField<DR, 0, 8, ReadWriteMode>
    {
    };
  };

  // Status register 1
  struct SR1 : Register<0x40005814, ReadWriteMode, 0x0>
  {
    // SMBus alert
    struct SMBALERT : RegisterField<SR1, 15, 1, ReadWriteMode>
    {
    };
    // Timeout or Tlow error
    struct TIMEOUT : RegisterField<SR1, 14, 1, ReadWriteMode>
    {
    };
    // PEC Error in reception
    struct PECERR : RegisterField<SR1, 12, 1, ReadWriteMode>
    {
    };
    // Overrun/Underrun
    struct OVR : RegisterField<SR1, 11, 1, ReadWriteMode>
    {
    };
    // Acknowledge failure
    struct AF : RegisterField<SR1, 10, 1, ReadWriteMode>
    {
    };
    // Arbitration lost (master mode)
    struct ARLO : RegisterField<SR1, 9, 1, ReadWriteMode>
    {
    };
    // Bus error
    struct BERR : RegisterField<SR1, 8, 1, ReadWriteMode>
    {
    };
    // Data register empty (transmitters)
    struct TxE : RegisterField<SR1, 7, 1, ReadMode>
    {
    };
    // Data register not empty (receivers)
    struct RxNE : RegisterField<SR1, 6, 1, ReadMode>
    {
    };
    // Stop detection (slave mode)
    struct STOPF : RegisterField<SR1, 4, 1, ReadMode>
    {
    };
    // 10-bit header sent (Master mode)
    struct ADD10 : RegisterField<SR1, 3, 1, ReadMode>
    {
    };
    // Byte transfer finished
    struct BTF : RegisterField<SR1, 2, 1, ReadMode>
    {
    };
    // Address sent (master mode)/matched (slave mode)
    struct ADDR : RegisterField<SR1, 1, 1, ReadMode>
    {
    };
    // Start bit (Master mode)
    struct SB : RegisterField<SR1, 0, 1, ReadMode>
    {
    };
  };

  // Status register 2
  struct SR2 : Register<0x40005818, ReadMode, 0x0>
  {
    // acket error checking register
    struct PEC : RegisterField<SR2, 8, 8, ReadMode>
    {
    };
    // Dual flag (Slave mode)
    struct DUALF : RegisterField<SR2, 7, 1, ReadMode>
    {
    };
    // SMBus host header (Slave mode)
    struct SMBHOST : RegisterField<SR2, 6, 1, ReadMode>
    {
    };
    // SMBus device default address (Slave mode)
    struct SMBDEFAULT : RegisterField<SR2, 5, 1, ReadMode>
    {
    };
    // General call address (Slave mode)
    struct GENCALL : RegisterField<SR2, 4, 1, ReadMode>
    {
    };
    // Transmitter/receiver
    struct TRA : RegisterField<SR2, 2, 1, ReadMode>
    {
    };
    // Bus busy
    struct BUSY : RegisterField<SR2, 1, 1, ReadMode>
    {
    };
    // Master/slave
    struct MSL : RegisterField<SR2, 0, 1, ReadMode>
    {
    };
  };

  // Clock control register
  struct CCR : Register<0x4000581c, ReadWriteMode, 0x0>
  {
    // I2C master mode selection
    struct F_S : RegisterField<CCR, 15, 1, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<F_S, val>;
    };
    // Fast mode duty cycle
    struct DUTY : RegisterField<CCR, 14, 1, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<DUTY, val>;
    };
    // Clock control register in Fast/Standard mode (Master mode)
    struct _CCR : RegisterField<CCR, 0, 12, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 4095)>>
      using Value = FieldValue<_CCR, val>;
    };
  };

  // TRISE register
  struct TRISE : Register<0x40005820, ReadWriteMode, 0x2>
  {
    // Maximum rise time in Fast/Standard mode (Master mode)
    struct _TRISE : RegisterField<TRISE, 0, 6, ReadWriteMode>
    {
    };
  };

  // I2C FLTR register
  struct FLTR : Register<0x40005824, ReadWriteMode, 0x0>
  {
    // Analog noise filter OFF
    struct ANOFF : RegisterField<FLTR, 4, 1, ReadWriteMode>
    {
    };
    // Digital noise filter
    struct DNF : RegisterField<FLTR, 0, 4, ReadWriteMode>
    {
    };
  };

// Large Registers

};


struct I2C1
{
  static constexpr auto periphNum = 1;

  // Control register 1
  struct CR1 : Register<0x40005400, ReadWriteMode, 0x0>
  {
    // Software reset
    struct SWRST : RegisterField<CR1, 15, 1, ReadWriteMode>
    {
    };
    // SMBus alert
    struct ALERT : RegisterField<CR1, 13, 1, ReadWriteMode>
    {
    };
    // Packet error checking
    struct PEC : RegisterField<CR1, 12, 1, ReadWriteMode>
    {
    };
    // Acknowledge/PEC Position (for data reception)
    struct POS : RegisterField<CR1, 11, 1, ReadWriteMode>
    {
    };
    // Acknowledge enable
    struct ACK : RegisterField<CR1, 10, 1, ReadWriteMode>
    {
      using Disable = FieldValue<ACK, 0U>;
      using Enable = FieldValue<ACK, 1U>;
    };
    // Stop generation
    struct STOP : RegisterField<CR1, 9, 1, ReadWriteMode>
    {
      using Disable = FieldValue<STOP, 0U>;
      using Enable = FieldValue<STOP, 1U>;
    };
    // Start generation
    struct START : RegisterField<CR1, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<START, 0U>;
      using Enable = FieldValue<START, 1U>;
    };
    // Clock stretching disable (Slave mode)
    struct NOSTRETCH : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
    };
    // General call enable
    struct ENGC : RegisterField<CR1, 6, 1, ReadWriteMode>
    {
    };
    // PEC enable
    struct ENPEC : RegisterField<CR1, 5, 1, ReadWriteMode>
    {
    };
    // ARP enable
    struct ENARP : RegisterField<CR1, 4, 1, ReadWriteMode>
    {
    };
    // SMBus type
    struct SMBTYPE : RegisterField<CR1, 3, 1, ReadWriteMode>
    {
    };
    // SMBus mode
    struct SMBUS : RegisterField<CR1, 1, 1, ReadWriteMode>
    {
    };
    // Peripheral enable
    struct PE : RegisterField<CR1, 0, 1, ReadWriteMode>
    {
      using Disable = FieldValue<PE, 0U>;
      using Enable = FieldValue<PE, 1U>;
    };
  };

  // Control register 2
  struct CR2 : Register<0x40005404, ReadWriteMode, 0x0>
  {
    // DMA last transfer
    struct LAST : RegisterField<CR2, 12, 1, ReadWriteMode>
    {
      using Disable = FieldValue<LAST, 0U>;
      using Enable = FieldValue<LAST, 1U>;
    };
    // DMA requests enable
    struct DMAEN : RegisterField<CR2, 11, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMAEN, 0U>;
      using Enable = FieldValue<DMAEN, 1U>;
    };
    // Buffer interrupt enable
    struct ITBUFEN : RegisterField<CR2, 10, 1, ReadWriteMode>
    {
      using Disable = FieldValue<ITBUFEN, 0U>;
      using Enable = FieldValue<ITBUFEN, 1U>;
    };
    // Event interrupt enable
    struct ITEVTEN : RegisterField<CR2, 9, 1, ReadWriteMode>
    {
      using Disable = FieldValue<ITEVTEN, 0U>;
      using Enable = FieldValue<ITEVTEN, 1U>;
    };
    // Error interrupt enable
    struct ITERREN : RegisterField<CR2, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<ITERREN, 0U>;
      using Enable = FieldValue<ITERREN, 1U>;
    };
    // Peripheral clock frequency
    struct FREQ : RegisterField<CR2, 0, 6, ReadWriteMode>
    {
    };
  };

  // Own address register 1
  struct OAR1 : Register<0x40005408, ReadWriteMode, 0x0>
  {
    // Addressing mode (slave mode)
    struct ADDMODE : RegisterField<OAR1, 15, 1, ReadWriteMode>
    {
    };
    // Interface address
    struct ADD10 : RegisterField<OAR1, 8, 2, ReadWriteMode>
    {
    };
    // Interface address
    struct ADD7 : RegisterField<OAR1, 1, 7, ReadWriteMode>
    {
    };
    // Interface address
    struct ADD0 : RegisterField<OAR1, 0, 1, ReadWriteMode>
    {
    };
  };

  // Own address register 2
  struct OAR2 : Register<0x4000540c, ReadWriteMode, 0x0>
  {
    // Interface address
    struct ADD2 : RegisterField<OAR2, 1, 7, ReadWriteMode>
    {
    };
    // Dual addressing mode enable
    struct ENDUAL : RegisterField<OAR2, 0, 1, ReadWriteMode>
    {
    };
  };

  // Data register
  struct DR : Register<0x40005410, ReadWriteMode, 0x0>
  {
    // 8-bit data register
    struct _DR : RegisterField<DR, 0, 8, ReadWriteMode>
    {
    };
  };

  // Status register 1
  struct SR1 : Register<0x40005414, ReadWriteMode, 0x0>
  {
    // SMBus alert
    struct SMBALERT : RegisterField<SR1, 15, 1, ReadWriteMode>
    {
    };
    // Timeout or Tlow error
    struct TIMEOUT : RegisterField<SR1, 14, 1, ReadWriteMode>
    {
    };
    // PEC Error in reception
    struct PECERR : RegisterField<SR1, 12, 1, ReadWriteMode>
    {
    };
    // Overrun/Underrun
    struct OVR : RegisterField<SR1, 11, 1, ReadWriteMode>
    {
    };
    // Acknowledge failure
    struct AF : RegisterField<SR1, 10, 1, ReadWriteMode>
    {
    };
    // Arbitration lost (master mode)
    struct ARLO : RegisterField<SR1, 9, 1, ReadWriteMode>
    {
    };
    // Bus error
    struct BERR : RegisterField<SR1, 8, 1, ReadWriteMode>
    {
    };
    // Data register empty (transmitters)
    struct TxE : RegisterField<SR1, 7, 1, ReadMode>
    {
    };
    // Data register not empty (receivers)
    struct RxNE : RegisterField<SR1, 6, 1, ReadMode>
    {
    };
    // Stop detection (slave mode)
    struct STOPF : RegisterField<SR1, 4, 1, ReadMode>
    {
    };
    // 10-bit header sent (Master mode)
    struct ADD10 : RegisterField<SR1, 3, 1, ReadMode>
    {
    };
    // Byte transfer finished
    struct BTF : RegisterField<SR1, 2, 1, ReadMode>
    {
    };
    // Address sent (master mode)/matched (slave mode)
    struct ADDR : RegisterField<SR1, 1, 1, ReadMode>
    {
    };
    // Start bit (Master mode)
    struct SB : RegisterField<SR1, 0, 1, ReadMode>
    {
    };
  };

  // Status register 2
  struct SR2 : Register<0x40005418, ReadMode, 0x0>
  {
    // acket error checking register
    struct PEC : RegisterField<SR2, 8, 8, ReadMode>
    {
    };
    // Dual flag (Slave mode)
    struct DUALF : RegisterField<SR2, 7, 1, ReadMode>
    {
    };
    // SMBus host header (Slave mode)
    struct SMBHOST : RegisterField<SR2, 6, 1, ReadMode>
    {
    };
    // SMBus device default address (Slave mode)
    struct SMBDEFAULT : RegisterField<SR2, 5, 1, ReadMode>
    {
    };
    // General call address (Slave mode)
    struct GENCALL : RegisterField<SR2, 4, 1, ReadMode>
    {
    };
    // Transmitter/receiver
    struct TRA : RegisterField<SR2, 2, 1, ReadMode>
    {
    };
    // Bus busy
    struct BUSY : RegisterField<SR2, 1, 1, ReadMode>
    {
    };
    // Master/slave
    struct MSL : RegisterField<SR2, 0, 1, ReadMode>
    {
    };
  };

  // Clock control register
  struct CCR : Register<0x4000541c, ReadWriteMode, 0x0>
  {
    // I2C master mode selection
    struct F_S : RegisterField<CCR, 15, 1, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<F_S, val>;
    };
    // Fast mode duty cycle
    struct DUTY : RegisterField<CCR, 14, 1, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<DUTY, val>;
    };
    // Clock control register in Fast/Standard mode (Master mode)
    struct _CCR : RegisterField<CCR, 0, 12, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 4095)>>
      using Value = FieldValue<_CCR, val>;
    };
  };

  // TRISE register
  struct TRISE : Register<0x40005420, ReadWriteMode, 0x2>
  {
    // Maximum rise time in Fast/Standard mode (Master mode)
    struct _TRISE : RegisterField<TRISE, 0, 6, ReadWriteMode>
    {
    };
  };

  // I2C FLTR register
  struct FLTR : Register<0x40005424, ReadWriteMode, 0x0>
  {
    // Analog noise filter OFF
    struct ANOFF : RegisterField<FLTR, 4, 1, ReadWriteMode>
    {
    };
    // Digital noise filter
    struct DNF : RegisterField<FLTR, 0, 4, ReadWriteMode>
    {
    };
  };

// Large Registers

};


