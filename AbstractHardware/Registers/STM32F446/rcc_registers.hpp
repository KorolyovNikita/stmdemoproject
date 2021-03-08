/******************************************************************************
* Filename : rcc_registers.hpp
*
* Details  : Reset and clock control
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct RCC
{
  // clock control register
  struct CR : Register<0x40023800, ReadWriteMode, 0x83>
  {
    // PLLI2S clock ready flag
    struct PLLI2SRDY : RegisterField<CR, 27, 1, ReadMode>
    {
    };
    // PLLI2S enable
    struct PLLI2SON : RegisterField<CR, 26, 1, ReadWriteMode>
    {
    };
    // Main PLL (PLL) clock ready flag
    struct PLLRDY : RegisterField<CR, 25, 1, ReadMode>
    {
      using notReady = FieldValue<PLLRDY, 0U>;
      using Ready = FieldValue<PLLRDY, 1U>;
    };
    // Main PLL (PLL) enable
    struct PLLON : RegisterField<CR, 24, 1, ReadWriteMode>
    {
    };
    // Clock security system enable
    struct CSSON : RegisterField<CR, 19, 1, ReadWriteMode>
    {
    };
    // HSE clock bypass
    struct HSEBYP : RegisterField<CR, 18, 1, ReadWriteMode>
    {
    };
    // HSE clock ready flag
    struct HSERDY : RegisterField<CR, 17, 1, ReadMode>
    {
      using notReady = FieldValue<HSERDY, 0U>;
      using Ready = FieldValue<HSERDY, 1U>;
    };
    // HSE clock enable
    struct HSEON : RegisterField<CR, 16, 1, ReadWriteMode>
    {
    };
    // Internal high-speed clock calibration
    struct HSICAL : RegisterField<CR, 8, 8, ReadMode>
    {
    };
    // Internal high-speed clock trimming
    struct HSITRIM : RegisterField<CR, 3, 5, ReadWriteMode>
    {
    };
    // Internal high-speed clock ready flag
    struct HSIRDY : RegisterField<CR, 1, 1, ReadMode>
    {
    };
    // Internal high-speed clock enable
    struct HSION : RegisterField<CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // PLL configuration register
  struct PLLCFGR : Register<0x40023804, ReadWriteMode, 0x24003010>
  {
    // Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks
    struct PLLQ : RegisterField<PLLCFGR, 24, 4, ReadWriteMode>
    {
      using DIV_2 = FieldValue<PLLQ, 2U>;
      using DIV_3 = FieldValue<PLLQ, 3U>;
      using DIV_4 = FieldValue<PLLQ, 4U>;
      using DIV_5 = FieldValue<PLLQ, 5U>;
      using DIV_6 = FieldValue<PLLQ, 6U>;
      using DIV_7 = FieldValue<PLLQ, 7U>;
      using DIV_8 = FieldValue<PLLQ, 8U>;
      using DIV_9 = FieldValue<PLLQ, 9U>;
      using DIV_10 = FieldValue<PLLQ, 10U>;
      using DIV_11 = FieldValue<PLLQ, 11U>;
      using DIV_12 = FieldValue<PLLQ, 12U>;
      using DIV_13 = FieldValue<PLLQ, 13U>;
      using DIV_14 = FieldValue<PLLQ, 14U>;
      using DIV_15 = FieldValue<PLLQ, 15U>;
    };
    // Main PLL(PLL) and audio PLL (PLLI2S) entry clock source
    struct PLLSRC : RegisterField<PLLCFGR, 22, 1, ReadWriteMode>
    {
      using HSI = FieldValue<PLLSRC, 0U>;
      using HSE = FieldValue<PLLSRC, 1U>;
    };
    // Main PLL (PLL) division factor for main system clock
    struct PLLP : RegisterField<PLLCFGR, 16, 2, ReadWriteMode>
    {
      using DIV_2 = FieldValue<PLLP, 0U>;
      using DIV_4 = FieldValue<PLLP, 1U>;
      using DIV_6 = FieldValue<PLLP, 2U>;
      using DIV_8 = FieldValue<PLLP, 3U>;
    };
    // Main PLL (PLL) multiplication factor for VCO
    struct PLLN : RegisterField<PLLCFGR, 6, 9, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 50 && val <= 432)>>
      using MULT = FieldValue<PLLN, val>;
    };
    // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
    struct PLLM : RegisterField<PLLCFGR, 0, 6, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 2 && val <= 63)>>
      using DIV = FieldValue<PLLM, val>;
    };
  };

  // clock configuration register
  struct CFGR : Register<0x40023808, ReadWriteMode, 0x0>
  {
    // Microcontroller clock output 2
    struct MCO2 : RegisterField<CFGR, 30, 2, ReadWriteMode>
    {
      using SYSCLK = FieldValue<MCO2, 0U>;
      using PLLI2S = FieldValue<MCO2, 1U>;
      using HSE = FieldValue<MCO2, 2U>;
      using PLL = FieldValue<MCO2, 3U>;
    };
    // MCO2 prescaler
    struct MCO2PRE : RegisterField<CFGR, 27, 3, ReadWriteMode>
    {
      using noDIV = FieldValue<MCO2PRE, 0U>;
      using DIV_2 = FieldValue<MCO2PRE, 4U>;
      using DIV_3 = FieldValue<MCO2PRE, 5U>;
      using DIV_4 = FieldValue<MCO2PRE, 6U>;
      using DIV_5 = FieldValue<MCO2PRE, 7U>;
    };
    // MCO1 prescaler
    struct MCO1PRE : RegisterField<CFGR, 24, 3, ReadWriteMode>
    {
      using noDIV = FieldValue<MCO1PRE, 0U>;
      using DIV_2 = FieldValue<MCO1PRE, 4U>;
      using DIV_3 = FieldValue<MCO1PRE, 5U>;
      using DIV_4 = FieldValue<MCO1PRE, 6U>;
      using DIV_5 = FieldValue<MCO1PRE, 7U>;
    };
    // I2S clock selection
    struct I2SSRC : RegisterField<CFGR, 23, 1, ReadWriteMode>
    {
    };
    // Microcontroller clock output 1
    struct MCO1 : RegisterField<CFGR, 21, 2, ReadWriteMode>
    {
      using HSI = FieldValue<MCO1, 0U>;
      using LSE = FieldValue<MCO1, 1U>;
      using HSE = FieldValue<MCO1, 2U>;
      using PLL = FieldValue<MCO1, 3U>;
    };
    // HSE division factor for RTC clock
    struct RTCPRE : RegisterField<CFGR, 16, 5, ReadWriteMode>
    {
      using noclock = FieldValue<RTCPRE, 0U>;
      using HSE_2 = FieldValue<RTCPRE, 2U>;
      using HSE_3 = FieldValue<RTCPRE, 3U>;
      using HSE_4 = FieldValue<RTCPRE, 4U>;
      using HSE_5 = FieldValue<RTCPRE, 5U>;
      using HSE_6 = FieldValue<RTCPRE, 6U>;
      using HSE_7 = FieldValue<RTCPRE, 7U>;
      using HSE_8 = FieldValue<RTCPRE, 8U>;
      using HSE_9 = FieldValue<RTCPRE, 9U>;
      using HSE_10 = FieldValue<RTCPRE, 10U>;
      using HSE_11 = FieldValue<RTCPRE, 11U>;
      using HSE_12 = FieldValue<RTCPRE, 12U>;
      using HSE_13 = FieldValue<RTCPRE, 13U>;
      using HSE_14 = FieldValue<RTCPRE, 14U>;
      using HSE_15 = FieldValue<RTCPRE, 15U>;
      using HSE_16 = FieldValue<RTCPRE, 16U>;
      using HSE_17 = FieldValue<RTCPRE, 17U>;
      using HSE_18 = FieldValue<RTCPRE, 18U>;
      using HSE_19 = FieldValue<RTCPRE, 19U>;
      using HSE_20 = FieldValue<RTCPRE, 20U>;
      using HSE_21 = FieldValue<RTCPRE, 21U>;
      using HSE_22 = FieldValue<RTCPRE, 22U>;
      using HSE_23 = FieldValue<RTCPRE, 23U>;
      using HSE_24 = FieldValue<RTCPRE, 24U>;
      using HSE_25 = FieldValue<RTCPRE, 25U>;
      using HSE_26 = FieldValue<RTCPRE, 26U>;
      using HSE_27 = FieldValue<RTCPRE, 27U>;
      using HSE_28 = FieldValue<RTCPRE, 28U>;
      using HSE_29 = FieldValue<RTCPRE, 29U>;
      using HSE_30 = FieldValue<RTCPRE, 30U>;
      using HSE_31 = FieldValue<RTCPRE, 31U>;
    };
    // APB high-speed prescaler (APB2)
    struct PPRE2 : RegisterField<CFGR, 13, 3, ReadWriteMode>
    {
      using noDIV = FieldValue<PPRE2, 0U>;
      using DIV_2 = FieldValue<PPRE2, 4U>;
      using DIV_4 = FieldValue<PPRE2, 5U>;
      using DIV_8 = FieldValue<PPRE2, 6U>;
      using DIV_16 = FieldValue<PPRE2, 7U>;
    };
    // APB Low speed prescaler (APB1)
    struct PPRE1 : RegisterField<CFGR, 10, 3, ReadWriteMode>
    {
      using noDIV = FieldValue<PPRE1, 0U>;
      using DIV_2 = FieldValue<PPRE1, 4U>;
      using DIV_4 = FieldValue<PPRE1, 5U>;
      using DIV_8 = FieldValue<PPRE1, 6U>;
      using DIV_16 = FieldValue<PPRE1, 7U>;
    };
    // AHB prescaler
    struct HPRE : RegisterField<CFGR, 4, 4, ReadWriteMode>
    {
      using noDIV = FieldValue<HPRE, 0U>;
      using DIV_2 = FieldValue<HPRE, 8U>;
      using DIV_4 = FieldValue<HPRE, 9U>;
      using DIV_8 = FieldValue<HPRE, 10U>;
      using DIV_16 = FieldValue<HPRE, 11U>;
      using DIV_64 = FieldValue<HPRE, 12U>;
      using DIV_128 = FieldValue<HPRE, 13U>;
      using DIV_256 = FieldValue<HPRE, 14U>;
      using DIV_512 = FieldValue<HPRE, 15U>;
    };
    // System clock switch status
    struct SWS : RegisterField<CFGR, 2, 2, ReadMode>
    {
      using HSI = FieldValue<SWS, 0U>;
      using HSE = FieldValue<SWS, 1U>;
      using PLL = FieldValue<SWS, 2U>;
      using PLL_R = FieldValue<SWS, 3U>;
    };
    // System clock switch
    struct SW : RegisterField<CFGR, 0, 2, ReadWriteMode>
    {
      using HSI = FieldValue<SW, 0U>;
      using HSE = FieldValue<SW, 1U>;
      using PLL = FieldValue<SW, 2U>;
      using PLL_R = FieldValue<SW, 3U>;
    };
  };

  // clock interrupt register
  struct CIR : Register<0x4002380c, ReadWriteMode, 0x0>
  {
    // Clock security system interrupt clear
    struct CSSC : RegisterField<CIR, 23, 1, WriteMode>
    {
    };
    // PLLSAI Ready Interrupt Clear
    struct PLLSAIRDYC : RegisterField<CIR, 22, 1, WriteMode>
    {
    };
    // PLLI2S ready interrupt clear
    struct PLLI2SRDYC : RegisterField<CIR, 21, 1, WriteMode>
    {
    };
    // Main PLL(PLL) ready interrupt clear
    struct PLLRDYC : RegisterField<CIR, 20, 1, WriteMode>
    {
    };
    // HSE ready interrupt clear
    struct HSERDYC : RegisterField<CIR, 19, 1, WriteMode>
    {
    };
    // HSI ready interrupt clear
    struct HSIRDYC : RegisterField<CIR, 18, 1, WriteMode>
    {
    };
    // LSE ready interrupt clear
    struct LSERDYC : RegisterField<CIR, 17, 1, WriteMode>
    {
    };
    // LSI ready interrupt clear
    struct LSIRDYC : RegisterField<CIR, 16, 1, WriteMode>
    {
    };
    // PLLSAI Ready Interrupt Enable
    struct PLLSAIRDYIE : RegisterField<CIR, 14, 1, ReadWriteMode>
    {
    };
    // PLLI2S ready interrupt enable
    struct PLLI2SRDYIE : RegisterField<CIR, 13, 1, ReadWriteMode>
    {
    };
    // Main PLL (PLL) ready interrupt enable
    struct PLLRDYIE : RegisterField<CIR, 12, 1, ReadWriteMode>
    {
    };
    // HSE ready interrupt enable
    struct HSERDYIE : RegisterField<CIR, 11, 1, ReadWriteMode>
    {
    };
    // HSI ready interrupt enable
    struct HSIRDYIE : RegisterField<CIR, 10, 1, ReadWriteMode>
    {
    };
    // LSE ready interrupt enable
    struct LSERDYIE : RegisterField<CIR, 9, 1, ReadWriteMode>
    {
    };
    // LSI ready interrupt enable
    struct LSIRDYIE : RegisterField<CIR, 8, 1, ReadWriteMode>
    {
    };
    // Clock security system interrupt flag
    struct CSSF : RegisterField<CIR, 7, 1, ReadMode>
    {
    };
    // PLLSAI ready interrupt flag
    struct PLLSAIRDYF : RegisterField<CIR, 6, 1, ReadMode>
    {
    };
    // PLLI2S ready interrupt flag
    struct PLLI2SRDYF : RegisterField<CIR, 5, 1, ReadMode>
    {
    };
    // Main PLL (PLL) ready interrupt flag
    struct PLLRDYF : RegisterField<CIR, 4, 1, ReadMode>
    {
    };
    // HSE ready interrupt flag
    struct HSERDYF : RegisterField<CIR, 3, 1, ReadMode>
    {
    };
    // HSI ready interrupt flag
    struct HSIRDYF : RegisterField<CIR, 2, 1, ReadMode>
    {
    };
    // LSE ready interrupt flag
    struct LSERDYF : RegisterField<CIR, 1, 1, ReadMode>
    {
    };
    // LSI ready interrupt flag
    struct LSIRDYF : RegisterField<CIR, 0, 1, ReadMode>
    {
    };
  };

  // AHB1 peripheral reset register
  struct AHB1RSTR : Register<0x40023810, ReadWriteMode, 0x0>
  {
    // USB OTG HS module reset
    struct OTGHSRST : RegisterField<AHB1RSTR, 29, 1, ReadWriteMode>
    {
    };
    // DMA2 reset
    struct DMA2RST : RegisterField<AHB1RSTR, 22, 1, ReadWriteMode>
    {
    };
    // DMA2 reset
    struct DMA1RST : RegisterField<AHB1RSTR, 21, 1, ReadWriteMode>
    {
    };
    // CRC reset
    struct CRCRST : RegisterField<AHB1RSTR, 12, 1, ReadWriteMode>
    {
    };
    // IO port H reset
    struct GPIOHRST : RegisterField<AHB1RSTR, 7, 1, ReadWriteMode>
    {
    };
    // IO port G reset
    struct GPIOGRST : RegisterField<AHB1RSTR, 6, 1, ReadWriteMode>
    {
    };
    // IO port F reset
    struct GPIOFRST : RegisterField<AHB1RSTR, 5, 1, ReadWriteMode>
    {
    };
    // IO port E reset
    struct GPIOERST : RegisterField<AHB1RSTR, 4, 1, ReadWriteMode>
    {
    };
    // IO port D reset
    struct GPIODRST : RegisterField<AHB1RSTR, 3, 1, ReadWriteMode>
    {
    };
    // IO port C reset
    struct GPIOCRST : RegisterField<AHB1RSTR, 2, 1, ReadWriteMode>
    {
    };
    // IO port B reset
    struct GPIOBRST : RegisterField<AHB1RSTR, 1, 1, ReadWriteMode>
    {
    };
    // IO port A reset
    struct GPIOARST : RegisterField<AHB1RSTR, 0, 1, ReadWriteMode>
    {
    };
  };

  // AHB2 peripheral reset register
  struct AHB2RSTR : Register<0x40023814, ReadWriteMode, 0x0>
  {
    // USB OTG FS module reset
    struct OTGFSRST : RegisterField<AHB2RSTR, 7, 1, ReadWriteMode>
    {
    };
    // Camera interface reset
    struct DCMIRST : RegisterField<AHB2RSTR, 0, 1, ReadWriteMode>
    {
    };
  };

  // AHB3 peripheral reset register
  struct AHB3RSTR : Register<0x40023818, ReadWriteMode, 0x0>
  {
    // QUADSPI module reset
    struct QSPIRST : RegisterField<AHB3RSTR, 1, 1, ReadWriteMode>
    {
    };
    // Flexible memory controller module reset
    struct FMCRST : RegisterField<AHB3RSTR, 0, 1, ReadWriteMode>
    {
    };
  };

  // APB1 peripheral reset register
  struct APB1RSTR : Register<0x40023820, ReadWriteMode, 0x0>
  {
    // DAC reset
    struct DACRST : RegisterField<APB1RSTR, 29, 1, ReadWriteMode>
    {
    };
    // Power interface reset
    struct PWRRST : RegisterField<APB1RSTR, 28, 1, ReadWriteMode>
    {
    };
    // CAN2 reset
    struct CAN2RST : RegisterField<APB1RSTR, 26, 1, ReadWriteMode>
    {
    };
    // CAN1 reset
    struct CAN1RST : RegisterField<APB1RSTR, 25, 1, ReadWriteMode>
    {
    };
    // I2CFMP1 reset
    struct I2CFMP1RST : RegisterField<APB1RSTR, 24, 1, ReadWriteMode>
    {
    };
    // I2C3 reset
    struct I2C3RST : RegisterField<APB1RSTR, 23, 1, ReadWriteMode>
    {
    };
    // I2C 2 reset
    struct I2C2RST : RegisterField<APB1RSTR, 22, 1, ReadWriteMode>
    {
    };
    // I2C 1 reset
    struct I2C1RST : RegisterField<APB1RSTR, 21, 1, ReadWriteMode>
    {
    };
    // USART 5 reset
    struct UART5RST : RegisterField<APB1RSTR, 20, 1, ReadWriteMode>
    {
    };
    // USART 4 reset
    struct UART4RST : RegisterField<APB1RSTR, 19, 1, ReadWriteMode>
    {
    };
    // USART 3 reset
    struct UART3RST : RegisterField<APB1RSTR, 18, 1, ReadWriteMode>
    {
    };
    // USART 2 reset
    struct UART2RST : RegisterField<APB1RSTR, 17, 1, ReadWriteMode>
    {
    };
    // SPDIF-IN reset
    struct SPDIFRST : RegisterField<APB1RSTR, 16, 1, ReadWriteMode>
    {
    };
    // SPI 3 reset
    struct SPI3RST : RegisterField<APB1RSTR, 15, 1, ReadWriteMode>
    {
    };
    // SPI 2 reset
    struct SPI2RST : RegisterField<APB1RSTR, 14, 1, ReadWriteMode>
    {
    };
    // Window watchdog reset
    struct WWDGRST : RegisterField<APB1RSTR, 11, 1, ReadWriteMode>
    {
    };
    // TIM14 reset
    struct TIM14RST : RegisterField<APB1RSTR, 8, 1, ReadWriteMode>
    {
    };
    // TIM13 reset
    struct TIM13RST : RegisterField<APB1RSTR, 7, 1, ReadWriteMode>
    {
    };
    // TIM12 reset
    struct TIM12RST : RegisterField<APB1RSTR, 6, 1, ReadWriteMode>
    {
    };
    // TIM7 reset
    struct TIM7RST : RegisterField<APB1RSTR, 5, 1, ReadWriteMode>
    {
    };
    // TIM6 reset
    struct TIM6RST : RegisterField<APB1RSTR, 4, 1, ReadWriteMode>
    {
    };
    // TIM5 reset
    struct TIM5RST : RegisterField<APB1RSTR, 3, 1, ReadWriteMode>
    {
    };
    // TIM4 reset
    struct TIM4RST : RegisterField<APB1RSTR, 2, 1, ReadWriteMode>
    {
    };
    // TIM3 reset
    struct TIM3RST : RegisterField<APB1RSTR, 1, 1, ReadWriteMode>
    {
    };
    // TIM2 reset
    struct TIM2RST : RegisterField<APB1RSTR, 0, 1, ReadWriteMode>
    {
    };
  };

  // APB2 peripheral reset register
  struct APB2RSTR : Register<0x40023824, ReadWriteMode, 0x0>
  {
    // SAI2 reset
    struct SAI2RST : RegisterField<APB2RSTR, 23, 1, ReadWriteMode>
    {
    };
    // SAI1 reset
    struct SAI1RST : RegisterField<APB2RSTR, 22, 1, ReadWriteMode>
    {
    };
    // TIM11 reset
    struct TIM11RST : RegisterField<APB2RSTR, 18, 1, ReadWriteMode>
    {
    };
    // TIM10 reset
    struct TIM10RST : RegisterField<APB2RSTR, 17, 1, ReadWriteMode>
    {
    };
    // TIM9 reset
    struct TIM9RST : RegisterField<APB2RSTR, 16, 1, ReadWriteMode>
    {
    };
    // System configuration controller reset
    struct SYSCFGRST : RegisterField<APB2RSTR, 14, 1, ReadWriteMode>
    {
    };
    // SPI4 reset
    struct SPI4RST : RegisterField<APB2RSTR, 13, 1, ReadWriteMode>
    {
    };
    // SPI 1 reset
    struct SPI1RST : RegisterField<APB2RSTR, 12, 1, ReadWriteMode>
    {
    };
    // SDIO reset
    struct SDIORST : RegisterField<APB2RSTR, 11, 1, ReadWriteMode>
    {
    };
    // ADC interface reset (common to all ADCs)
    struct ADCRST : RegisterField<APB2RSTR, 8, 1, ReadWriteMode>
    {
    };
    // USART6 reset
    struct USART6RST : RegisterField<APB2RSTR, 5, 1, ReadWriteMode>
    {
    };
    // USART1 reset
    struct USART1RST : RegisterField<APB2RSTR, 4, 1, ReadWriteMode>
    {
    };
    // TIM8 reset
    struct TIM8RST : RegisterField<APB2RSTR, 1, 1, ReadWriteMode>
    {
    };
    // TIM1 reset
    struct TIM1RST : RegisterField<APB2RSTR, 0, 1, ReadWriteMode>
    {
    };
  };

  // AHB1 peripheral clock register
  struct AHB1ENR : Register<0x40023830, ReadWriteMode, 0x100000>
  {
    // USB OTG HSULPI clock enable
    struct OTGHSULPIEN : RegisterField<AHB1ENR, 30, 1, ReadWriteMode>
    {
      using Disable = FieldValue<OTGHSULPIEN, 0U>;
      using Enable = FieldValue<OTGHSULPIEN, 1U>;
    };
    // USB OTG HS clock enable
    struct OTGHSEN : RegisterField<AHB1ENR, 29, 1, ReadWriteMode>
    {
      using Disable = FieldValue<OTGHSEN, 0U>;
      using Enable = FieldValue<OTGHSEN, 1U>;
    };
    // DMA2 clock enable
    struct DMA2EN : RegisterField<AHB1ENR, 22, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMA2EN, 0U>;
      using Enable = FieldValue<DMA2EN, 1U>;
    };
    // DMA1 clock enable
    struct DMA1EN : RegisterField<AHB1ENR, 21, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMA1EN, 0U>;
      using Enable = FieldValue<DMA1EN, 1U>;
    };
    // DMA1 clock enable
    template<auto num>
    struct DMA : RegisterField<AHB1ENR, 21 + 1 * num, 1, ReadWriteMode>
    {
      using Disable = FieldValue<DMA, 0U>;
      using Enable = FieldValue<DMA, 1U>;
    };
    // Backup SRAM interface clock enable
    struct BKPSRAMEN : RegisterField<AHB1ENR, 18, 1, ReadWriteMode>
    {
      using Disable = FieldValue<BKPSRAMEN, 0U>;
      using Enable = FieldValue<BKPSRAMEN, 1U>;
    };
    // CRC clock enable
    struct CRCEN : RegisterField<AHB1ENR, 12, 1, ReadWriteMode>
    {
      using Disable = FieldValue<CRCEN, 0U>;
      using Enable = FieldValue<CRCEN, 1U>;
    };
    // IO port H clock enable
    struct GPIOHEN : RegisterField<AHB1ENR, 7, 1, ReadWriteMode>
    {
      using Disable = FieldValue<GPIOHEN, 0U>;
      using Enable = FieldValue<GPIOHEN, 1U>;
    };
    // IO port G clock enable
    struct GPIOGEN : RegisterField<AHB1ENR, 6, 1, ReadWriteMode>
    {
      using Disable = FieldValue<GPIOGEN, 0U>;
      using Enable = FieldValue<GPIOGEN, 1U>;
    };
    // IO port F clock enable
    struct GPIOFEN : RegisterField<AHB1ENR, 5, 1, ReadWriteMode>
    {
      using Disable = FieldValue<GPIOFEN, 0U>;
      using Enable = FieldValue<GPIOFEN, 1U>;
    };
    // IO port E clock enable
    struct GPIOEEN : RegisterField<AHB1ENR, 4, 1, ReadWriteMode>
    {
      using Disable = FieldValue<GPIOEEN, 0U>;
      using Enable = FieldValue<GPIOEEN, 1U>;
    };
    // IO port D clock enable
    struct GPIODEN : RegisterField<AHB1ENR, 3, 1, ReadWriteMode>
    {
      using Disable = FieldValue<GPIODEN, 0U>;
      using Enable = FieldValue<GPIODEN, 1U>;
    };
    // IO port C clock enable
    struct GPIOCEN : RegisterField<AHB1ENR, 2, 1, ReadWriteMode>
    {
      using Disable = FieldValue<GPIOCEN, 0U>;
      using Enable = FieldValue<GPIOCEN, 1U>;
    };
    // IO port B clock enable
    struct GPIOBEN : RegisterField<AHB1ENR, 1, 1, ReadWriteMode>
    {
      using Disable = FieldValue<GPIOBEN, 0U>;
      using Enable = FieldValue<GPIOBEN, 1U>;
    };
    // IO port A clock enable
    struct GPIOAEN : RegisterField<AHB1ENR, 0, 1, ReadWriteMode>
    {
      using Disable = FieldValue<GPIOAEN, 0U>;
      using Enable = FieldValue<GPIOAEN, 1U>;
    };
    // IO port A clock enable
    template<auto num>
    struct GPIO : RegisterField<AHB1ENR, 0 + 1 * num, 1, ReadWriteMode>
    {
      using Disable = FieldValue<GPIO, 0U>;
      using Enable = FieldValue<GPIO, 1U>;
    };
  };

  // AHB2 peripheral clock enable register
  struct AHB2ENR : Register<0x40023834, ReadWriteMode, 0x0>
  {
    // USB OTG FS clock enable
    struct OTGFSEN : RegisterField<AHB2ENR, 7, 1, ReadWriteMode>
    {
    };
    // Camera interface enable
    struct DCMIEN : RegisterField<AHB2ENR, 0, 1, ReadWriteMode>
    {
    };
  };

  // AHB3 peripheral clock enable register
  struct AHB3ENR : Register<0x40023838, ReadWriteMode, 0x0>
  {
    // QUADSPI memory controller module clock enable
    struct QSPIEN : RegisterField<AHB3ENR, 1, 1, ReadWriteMode>
    {
    };
    // Flexible memory controller module clock enable
    struct FMCEN : RegisterField<AHB3ENR, 0, 1, ReadWriteMode>
    {
    };
  };

  // APB1 peripheral clock enable register
  struct APB1ENR : Register<0x40023840, ReadWriteMode, 0x0>
  {
    // DAC interface clock enable
    struct DACEN : RegisterField<APB1ENR, 29, 1, ReadWriteMode>
    {
      using Enable = FieldValue<DACEN, 1U>;
    };
    // Power interface clock enable
    struct PWREN : RegisterField<APB1ENR, 28, 1, ReadWriteMode>
    {
      using Enable = FieldValue<PWREN, 1U>;
    };
    // CEC interface clock enable
    struct CEC : RegisterField<APB1ENR, 27, 1, ReadWriteMode>
    {
      using Enable = FieldValue<CEC, 1U>;
    };
    // CAN 2 clock enable
    struct CAN2EN : RegisterField<APB1ENR, 26, 1, ReadWriteMode>
    {
      using Enable = FieldValue<CAN2EN, 1U>;
    };
    // CAN 1 clock enable
    struct CAN1EN : RegisterField<APB1ENR, 25, 1, ReadWriteMode>
    {
      using Enable = FieldValue<CAN1EN, 1U>;
    };
    // I2CFMP1 clock enable
    struct I2CFMP1EN : RegisterField<APB1ENR, 24, 1, ReadWriteMode>
    {
      using Enable = FieldValue<I2CFMP1EN, 1U>;
    };
    // I2C3 clock enable
    struct I2C3EN : RegisterField<APB1ENR, 23, 1, ReadWriteMode>
    {
      using Enable = FieldValue<I2C3EN, 1U>;
    };
    // I2C2 clock enable
    struct I2C2EN : RegisterField<APB1ENR, 22, 1, ReadWriteMode>
    {
      using Enable = FieldValue<I2C2EN, 1U>;
    };
    // I2C1 clock enable
    struct I2C1EN : RegisterField<APB1ENR, 21, 1, ReadWriteMode>
    {
      using Enable = FieldValue<I2C1EN, 1U>;
    };
    // I2C1 clock enable
    template<auto num>
    struct I2C : RegisterField<APB1ENR, 21 + 1 * num, 1, ReadWriteMode>
    {
      using Enable = FieldValue<I2C, 1U>;
    };
    // UART5 clock enable
    struct UART5EN : RegisterField<APB1ENR, 20, 1, ReadWriteMode>
    {
      using Enable = FieldValue<UART5EN, 1U>;
    };
    // UART4 clock enable
    struct UART4EN : RegisterField<APB1ENR, 19, 1, ReadWriteMode>
    {
      using Enable = FieldValue<UART4EN, 1U>;
    };
    // USART3 clock enable
    struct USART3EN : RegisterField<APB1ENR, 18, 1, ReadWriteMode>
    {
      using Enable = FieldValue<USART3EN, 1U>;
    };
    // USART 2 clock enable
    struct USART2EN : RegisterField<APB1ENR, 17, 1, ReadWriteMode>
    {
      using Enable = FieldValue<USART2EN, 1U>;
    };
    // SPDIF-IN clock enable
    struct SPDIFEN : RegisterField<APB1ENR, 16, 1, ReadWriteMode>
    {
      using Enable = FieldValue<SPDIFEN, 1U>;
    };
    // SPI3 clock enable
    struct SPI3EN : RegisterField<APB1ENR, 15, 1, ReadWriteMode>
    {
      using Enable = FieldValue<SPI3EN, 1U>;
    };
    // SPI2 clock enable
    struct SPI2EN : RegisterField<APB1ENR, 14, 1, ReadWriteMode>
    {
      using Enable = FieldValue<SPI2EN, 1U>;
    };
    // Window watchdog clock enable
    struct WWDGEN : RegisterField<APB1ENR, 11, 1, ReadWriteMode>
    {
      using Enable = FieldValue<WWDGEN, 1U>;
    };
    // TIM14 clock enable
    struct TIM14EN : RegisterField<APB1ENR, 8, 1, ReadWriteMode>
    {
      using Enable = FieldValue<TIM14EN, 1U>;
    };
    // TIM13 clock enable
    struct TIM13EN : RegisterField<APB1ENR, 7, 1, ReadWriteMode>
    {
      using Enable = FieldValue<TIM13EN, 1U>;
    };
    // TIM12 clock enable
    struct TIM12EN : RegisterField<APB1ENR, 6, 1, ReadWriteMode>
    {
      using Enable = FieldValue<TIM12EN, 1U>;
    };
    // TIM7 clock enable
    struct TIM7EN : RegisterField<APB1ENR, 5, 1, ReadWriteMode>
    {
      using Enable = FieldValue<TIM7EN, 1U>;
    };
    // TIM6 clock enable
    struct TIM6EN : RegisterField<APB1ENR, 4, 1, ReadWriteMode>
    {
      using Enable = FieldValue<TIM6EN, 1U>;
    };
    // TIM5 clock enable
    struct TIM5EN : RegisterField<APB1ENR, 3, 1, ReadWriteMode>
    {
      using Enable = FieldValue<TIM5EN, 1U>;
    };
    // TIM4 clock enable
    struct TIM4EN : RegisterField<APB1ENR, 2, 1, ReadWriteMode>
    {
      using Enable = FieldValue<TIM4EN, 1U>;
    };
    // TIM3 clock enable
    struct TIM3EN : RegisterField<APB1ENR, 1, 1, ReadWriteMode>
    {
      using Enable = FieldValue<TIM3EN, 1U>;
    };
    // TIM2 clock enable
    struct TIM2EN : RegisterField<APB1ENR, 0, 1, ReadWriteMode>
    {
      using Enable = FieldValue<TIM2EN, 1U>;
    };
  };

  // APB2 peripheral clock enable register
  struct APB2ENR : Register<0x40023844, ReadWriteMode, 0x0>
  {
    // SAI2 clock enable
    struct SAI2EN : RegisterField<APB2ENR, 23, 1, ReadWriteMode>
    {
      using Enable = FieldValue<SAI2EN, 1U>;
    };
    // SAI1 clock enable
    struct SAI1EN : RegisterField<APB2ENR, 22, 1, ReadWriteMode>
    {
      using Enable = FieldValue<SAI1EN, 1U>;
    };
    // TIM11 clock enable
    struct TIM11EN : RegisterField<APB2ENR, 18, 1, ReadWriteMode>
    {
      using Enable = FieldValue<TIM11EN, 1U>;
    };
    // TIM10 clock enable
    struct TIM10EN : RegisterField<APB2ENR, 17, 1, ReadWriteMode>
    {
      using Enable = FieldValue<TIM10EN, 1U>;
    };
    // TIM9 clock enable
    struct TIM9EN : RegisterField<APB2ENR, 16, 1, ReadWriteMode>
    {
      using Enable = FieldValue<TIM9EN, 1U>;
    };
    // System configuration controller clock enable
    struct SYSCFGEN : RegisterField<APB2ENR, 14, 1, ReadWriteMode>
    {
      using Enable = FieldValue<SYSCFGEN, 1U>;
    };
    // SPI4 clock enable
    struct SPI4ENR : RegisterField<APB2ENR, 13, 1, ReadWriteMode>
    {
      using Enable = FieldValue<SPI4ENR, 1U>;
    };
    // SPI1 clock enable
    struct SPI1EN : RegisterField<APB2ENR, 12, 1, ReadWriteMode>
    {
      using Enable = FieldValue<SPI1EN, 1U>;
    };
    // SDIO clock enable
    struct SDIOEN : RegisterField<APB2ENR, 11, 1, ReadWriteMode>
    {
      using Enable = FieldValue<SDIOEN, 1U>;
    };
    // ADC3 clock enable
    struct ADC3EN : RegisterField<APB2ENR, 10, 1, ReadWriteMode>
    {
      using Enable = FieldValue<ADC3EN, 1U>;
    };
    // ADC2 clock enable
    struct ADC2EN : RegisterField<APB2ENR, 9, 1, ReadWriteMode>
    {
      using Enable = FieldValue<ADC2EN, 1U>;
    };
    // ADC1 clock enable
    struct ADC1EN : RegisterField<APB2ENR, 8, 1, ReadWriteMode>
    {
      using Enable = FieldValue<ADC1EN, 1U>;
    };
    // USART6 clock enable
    struct USART6EN : RegisterField<APB2ENR, 5, 1, ReadWriteMode>
    {
      using Enable = FieldValue<USART6EN, 1U>;
    };
    // USART1 clock enable
    struct USART1EN : RegisterField<APB2ENR, 4, 1, ReadWriteMode>
    {
      using Enable = FieldValue<USART1EN, 1U>;
    };
    // TIM8 clock enable
    struct TIM8EN : RegisterField<APB2ENR, 1, 1, ReadWriteMode>
    {
      using Enable = FieldValue<TIM8EN, 1U>;
    };
    // TIM1 clock enable
    struct TIM1EN : RegisterField<APB2ENR, 0, 1, ReadWriteMode>
    {
      using Enable = FieldValue<TIM1EN, 1U>;
    };
  };

  // AHB1 peripheral clock enable in low power mode register
  struct AHB1LPENR : Register<0x40023850, ReadWriteMode, 0x7e6791ff>
  {
    // USB OTG HS ULPI clock enable during Sleep mode
    struct OTGHSULPILPEN : RegisterField<AHB1LPENR, 30, 1, ReadWriteMode>
    {
    };
    // USB OTG HS clock enable during Sleep mode
    struct OTGHSLPEN : RegisterField<AHB1LPENR, 29, 1, ReadWriteMode>
    {
    };
    // DMA2 clock enable during Sleep mode
    struct DMA2LPEN : RegisterField<AHB1LPENR, 22, 1, ReadWriteMode>
    {
    };
    // DMA1 clock enable during Sleep mode
    struct DMA1LPEN : RegisterField<AHB1LPENR, 21, 1, ReadWriteMode>
    {
    };
    // Backup SRAM interface clock enable during Sleep mode
    struct BKPSRAMLPEN : RegisterField<AHB1LPENR, 18, 1, ReadWriteMode>
    {
    };
    // SRAM 2 interface clock enable during Sleep mode
    struct SRAM2LPEN : RegisterField<AHB1LPENR, 17, 1, ReadWriteMode>
    {
    };
    // SRAM 1interface clock enable during Sleep mode
    struct SRAM1LPEN : RegisterField<AHB1LPENR, 16, 1, ReadWriteMode>
    {
    };
    // Flash interface clock enable during Sleep mode
    struct FLITFLPEN : RegisterField<AHB1LPENR, 15, 1, ReadWriteMode>
    {
    };
    // CRC clock enable during Sleep mode
    struct CRCLPEN : RegisterField<AHB1LPENR, 12, 1, ReadWriteMode>
    {
    };
    // IO port H clock enable during Sleep mode
    struct GPIOHLPEN : RegisterField<AHB1LPENR, 7, 1, ReadWriteMode>
    {
    };
    // IO port G clock enable during Sleep mode
    struct GPIOGLPEN : RegisterField<AHB1LPENR, 6, 1, ReadWriteMode>
    {
    };
    // IO port F clock enable during Sleep mode
    struct GPIOFLPEN : RegisterField<AHB1LPENR, 5, 1, ReadWriteMode>
    {
    };
    // IO port E clock enable during Sleep mode
    struct GPIOELPEN : RegisterField<AHB1LPENR, 4, 1, ReadWriteMode>
    {
    };
    // IO port D clock enable during Sleep mode
    struct GPIODLPEN : RegisterField<AHB1LPENR, 3, 1, ReadWriteMode>
    {
    };
    // IO port C clock enable during Sleep mode
    struct GPIOCLPEN : RegisterField<AHB1LPENR, 2, 1, ReadWriteMode>
    {
    };
    // IO port B clock enable during Sleep mode
    struct GPIOBLPEN : RegisterField<AHB1LPENR, 1, 1, ReadWriteMode>
    {
    };
    // IO port A clock enable during sleep mode
    struct GPIOALPEN : RegisterField<AHB1LPENR, 0, 1, ReadWriteMode>
    {
    };
  };

  // AHB2 peripheral clock enable in low power mode register
  struct AHB2LPENR : Register<0x40023854, ReadWriteMode, 0xf1>
  {
    // USB OTG FS clock enable during Sleep mode
    struct OTGFSLPEN : RegisterField<AHB2LPENR, 7, 1, ReadWriteMode>
    {
    };
    // Camera interface enable during Sleep mode
    struct DCMILPEN : RegisterField<AHB2LPENR, 0, 1, ReadWriteMode>
    {
    };
  };

  // AHB3 peripheral clock enable in low power mode register
  struct AHB3LPENR : Register<0x40023858, ReadWriteMode, 0x1>
  {
    // QUADSPI memory controller module clock enable during Sleep mode
    struct QSPILPEN : RegisterField<AHB3LPENR, 1, 1, ReadWriteMode>
    {
    };
    // Flexible memory controller module clock enable during Sleep mode
    struct FMCLPEN : RegisterField<AHB3LPENR, 0, 1, ReadWriteMode>
    {
    };
  };

  // APB1 peripheral clock enable in low power mode register
  struct APB1LPENR : Register<0x40023860, ReadWriteMode, 0x36fec9ff>
  {
    // DAC interface clock enable during Sleep mode
    struct DACLPEN : RegisterField<APB1LPENR, 29, 1, ReadWriteMode>
    {
    };
    // Power interface clock enable during Sleep mode
    struct PWRLPEN : RegisterField<APB1LPENR, 28, 1, ReadWriteMode>
    {
    };
    // CEC clock enable during Sleep mode
    struct CECLPEN : RegisterField<APB1LPENR, 27, 1, ReadWriteMode>
    {
    };
    // CAN 2 clock enable during Sleep mode
    struct CAN2LPEN : RegisterField<APB1LPENR, 26, 1, ReadWriteMode>
    {
    };
    // CAN 1 clock enable during Sleep mode
    struct CAN1LPEN : RegisterField<APB1LPENR, 25, 1, ReadWriteMode>
    {
    };
    // I2CFMP1 clock enable during Sleep mode
    struct I2CFMP1LPEN : RegisterField<APB1LPENR, 24, 1, ReadWriteMode>
    {
    };
    // I2C3 clock enable during Sleep mode
    struct I2C3LPEN : RegisterField<APB1LPENR, 23, 1, ReadWriteMode>
    {
    };
    // I2C2 clock enable during Sleep mode
    struct I2C2LPEN : RegisterField<APB1LPENR, 22, 1, ReadWriteMode>
    {
    };
    // I2C1 clock enable during Sleep mode
    struct I2C1LPEN : RegisterField<APB1LPENR, 21, 1, ReadWriteMode>
    {
    };
    // UART5 clock enable during Sleep mode
    struct UART5LPEN : RegisterField<APB1LPENR, 20, 1, ReadWriteMode>
    {
    };
    // UART4 clock enable during Sleep mode
    struct UART4LPEN : RegisterField<APB1LPENR, 19, 1, ReadWriteMode>
    {
    };
    // USART3 clock enable during Sleep mode
    struct USART3LPEN : RegisterField<APB1LPENR, 18, 1, ReadWriteMode>
    {
    };
    // USART2 clock enable during Sleep mode
    struct USART2LPEN : RegisterField<APB1LPENR, 17, 1, ReadWriteMode>
    {
    };
    // SPDIF clock enable during Sleep mode
    struct SPDIFLPEN : RegisterField<APB1LPENR, 16, 1, ReadWriteMode>
    {
    };
    // SPI3 clock enable during Sleep mode
    struct SPI3LPEN : RegisterField<APB1LPENR, 15, 1, ReadWriteMode>
    {
    };
    // SPI2 clock enable during Sleep mode
    struct SPI2LPEN : RegisterField<APB1LPENR, 14, 1, ReadWriteMode>
    {
    };
    // Window watchdog clock enable during Sleep mode
    struct WWDGLPEN : RegisterField<APB1LPENR, 11, 1, ReadWriteMode>
    {
    };
    // TIM14 clock enable during Sleep mode
    struct TIM14LPEN : RegisterField<APB1LPENR, 8, 1, ReadWriteMode>
    {
    };
    // TIM13 clock enable during Sleep mode
    struct TIM13LPEN : RegisterField<APB1LPENR, 7, 1, ReadWriteMode>
    {
    };
    // TIM12 clock enable during Sleep mode
    struct TIM12LPEN : RegisterField<APB1LPENR, 6, 1, ReadWriteMode>
    {
    };
    // TIM7 clock enable during Sleep mode
    struct TIM7LPEN : RegisterField<APB1LPENR, 5, 1, ReadWriteMode>
    {
    };
    // TIM6 clock enable during Sleep mode
    struct TIM6LPEN : RegisterField<APB1LPENR, 4, 1, ReadWriteMode>
    {
    };
    // TIM5 clock enable during Sleep mode
    struct TIM5LPEN : RegisterField<APB1LPENR, 3, 1, ReadWriteMode>
    {
    };
    // TIM4 clock enable during Sleep mode
    struct TIM4LPEN : RegisterField<APB1LPENR, 2, 1, ReadWriteMode>
    {
    };
    // TIM3 clock enable during Sleep mode
    struct TIM3LPEN : RegisterField<APB1LPENR, 1, 1, ReadWriteMode>
    {
    };
    // TIM2 clock enable during Sleep mode
    struct TIM2LPEN : RegisterField<APB1LPENR, 0, 1, ReadWriteMode>
    {
    };
  };

  // APB2 peripheral clock enabled in low power mode register
  struct APB2LPENR : Register<0x40023864, ReadWriteMode, 0x75f33>
  {
    // SAI2 clock enable
    struct SAI2LPEN : RegisterField<APB2LPENR, 23, 1, ReadWriteMode>
    {
    };
    // SAI1 clock enable
    struct SAI1LPEN : RegisterField<APB2LPENR, 22, 1, ReadWriteMode>
    {
    };
    // TIM11 clock enable during Sleep mode
    struct TIM11LPEN : RegisterField<APB2LPENR, 18, 1, ReadWriteMode>
    {
    };
    // TIM10 clock enable during Sleep mode
    struct TIM10LPEN : RegisterField<APB2LPENR, 17, 1, ReadWriteMode>
    {
    };
    // TIM9 clock enable during sleep mode
    struct TIM9LPEN : RegisterField<APB2LPENR, 16, 1, ReadWriteMode>
    {
    };
    // System configuration controller clock enable during Sleep mode
    struct SYSCFGLPEN : RegisterField<APB2LPENR, 14, 1, ReadWriteMode>
    {
    };
    // SPI 4 clock enable during Sleep mode
    struct SPI4LPEN : RegisterField<APB2LPENR, 13, 1, ReadWriteMode>
    {
    };
    // SPI 1 clock enable during Sleep mode
    struct SPI1LPEN : RegisterField<APB2LPENR, 12, 1, ReadWriteMode>
    {
    };
    // SDIO clock enable during Sleep mode
    struct SDIOLPEN : RegisterField<APB2LPENR, 11, 1, ReadWriteMode>
    {
    };
    // ADC 3 clock enable during Sleep mode
    struct ADC3LPEN : RegisterField<APB2LPENR, 10, 1, ReadWriteMode>
    {
    };
    // ADC2 clock enable during Sleep mode
    struct ADC2LPEN : RegisterField<APB2LPENR, 9, 1, ReadWriteMode>
    {
    };
    // ADC1 clock enable during Sleep mode
    struct ADC1LPEN : RegisterField<APB2LPENR, 8, 1, ReadWriteMode>
    {
    };
    // USART6 clock enable during Sleep mode
    struct USART6LPEN : RegisterField<APB2LPENR, 5, 1, ReadWriteMode>
    {
    };
    // USART1 clock enable during Sleep mode
    struct USART1LPEN : RegisterField<APB2LPENR, 4, 1, ReadWriteMode>
    {
    };
    // TIM8 clock enable during Sleep mode
    struct TIM8LPEN : RegisterField<APB2LPENR, 1, 1, ReadWriteMode>
    {
    };
    // TIM1 clock enable during Sleep mode
    struct TIM1LPEN : RegisterField<APB2LPENR, 0, 1, ReadWriteMode>
    {
    };
  };

  // Backup domain control register
  struct BDCR : Register<0x40023870, ReadWriteMode, 0x0>
  {
    // Backup domain software reset
    struct BDRST : RegisterField<BDCR, 16, 1, ReadWriteMode>
    {
    };
    // RTC clock enable
    struct RTCEN : RegisterField<BDCR, 15, 1, ReadWriteMode>
    {
    };
    // RTC clock source selection
    struct RTCSEL : RegisterField<BDCR, 8, 2, ReadWriteMode>
    {
    };
    // External low-speed oscillator mode
    struct LSEMOD : RegisterField<BDCR, 3, 1, ReadWriteMode>
    {
    };
    // External low-speed oscillator bypass
    struct LSEBYP : RegisterField<BDCR, 2, 1, ReadWriteMode>
    {
    };
    // External low-speed oscillator ready
    struct LSERDY : RegisterField<BDCR, 1, 1, ReadMode>
    {
    };
    // External low-speed oscillator enable
    struct LSEON : RegisterField<BDCR, 0, 1, ReadWriteMode>
    {
    };
  };

  // clock control & status register
  struct CSR : Register<0x40023874, ReadWriteMode, 0xe000000>
  {
    // Low-power reset flag
    struct LPWRRSTF : RegisterField<CSR, 31, 1, ReadWriteMode>
    {
    };
    // Window watchdog reset flag
    struct WWDGRSTF : RegisterField<CSR, 30, 1, ReadWriteMode>
    {
    };
    // Independent watchdog reset flag
    struct WDGRSTF : RegisterField<CSR, 29, 1, ReadWriteMode>
    {
    };
    // Software reset flag
    struct SFTRSTF : RegisterField<CSR, 28, 1, ReadWriteMode>
    {
    };
    // POR/PDR reset flag
    struct PORRSTF : RegisterField<CSR, 27, 1, ReadWriteMode>
    {
    };
    // PIN reset flag
    struct PADRSTF : RegisterField<CSR, 26, 1, ReadWriteMode>
    {
    };
    // BOR reset flag
    struct BORRSTF : RegisterField<CSR, 25, 1, ReadWriteMode>
    {
    };
    // Remove reset flag
    struct RMVF : RegisterField<CSR, 24, 1, ReadWriteMode>
    {
    };
    // Internal low-speed oscillator ready
    struct LSIRDY : RegisterField<CSR, 1, 1, ReadMode>
    {
    };
    // Internal low-speed oscillator enable
    struct LSION : RegisterField<CSR, 0, 1, ReadWriteMode>
    {
    };
  };

  // spread spectrum clock generation register
  struct SSCGR : Register<0x40023880, ReadWriteMode, 0x0>
  {
    // Spread spectrum modulation enable
    struct SSCGEN : RegisterField<SSCGR, 31, 1, ReadWriteMode>
    {
    };
    // Spread Select
    struct SPREADSEL : RegisterField<SSCGR, 30, 1, ReadWriteMode>
    {
    };
    // Incrementation step
    struct INCSTEP : RegisterField<SSCGR, 13, 15, ReadWriteMode>
    {
    };
    // Modulation period
    struct MODPER : RegisterField<SSCGR, 0, 13, ReadWriteMode>
    {
    };
  };

  // PLLI2S configuration register
  struct PLLI2SCFGR : Register<0x40023884, ReadWriteMode, 0x20003000>
  {
    // PLLI2S division factor for I2S clocks
    struct PLLI2SR : RegisterField<PLLI2SCFGR, 28, 3, ReadWriteMode>
    {
    };
    // PLLI2S division factor for SAI1 clock
    struct PLLI2SQ : RegisterField<PLLI2SCFGR, 24, 4, ReadWriteMode>
    {
    };
    // PLLI2S division factor for SPDIF-IN clock
    struct PLLI2SP : RegisterField<PLLI2SCFGR, 16, 2, ReadWriteMode>
    {
    };
    // PLLI2S multiplication factor for VCO
    struct PLLI2SN : RegisterField<PLLI2SCFGR, 6, 9, ReadWriteMode>
    {
    };
    // Division factor for audio PLL (PLLI2S) input clock
    struct PLLI2SM : RegisterField<PLLI2SCFGR, 0, 6, ReadWriteMode>
    {
    };
  };

  // PLL configuration register
  struct PLLSAICFGR : Register<0x40023888, ReadWriteMode, 0x24003000>
  {
    // PLLSAI division factor for SAIs clock
    struct PLLSAIQ : RegisterField<PLLSAICFGR, 24, 4, ReadWriteMode>
    {
    };
    // PLLSAI division factor for 48 MHz clock
    struct PLLSAIP : RegisterField<PLLSAICFGR, 16, 2, ReadWriteMode>
    {
    };
    // PLLSAI division factor for VCO
    struct PLLSAIN : RegisterField<PLLSAICFGR, 6, 9, ReadWriteMode>
    {
    };
    // Division factor for audio PLLSAI input clock
    struct PLLSAIM : RegisterField<PLLSAICFGR, 0, 6, ReadWriteMode>
    {
    };
  };

  // Dedicated Clock Configuration Register
  struct DCKCFGR : Register<0x4002388c, ReadWriteMode, 0x0>
  {
    // I2S APB2 clock source selection
    struct I2S2SRC : RegisterField<DCKCFGR, 27, 2, ReadWriteMode>
    {
    };
    // I2S APB1 clock source selection
    struct I2S1SRC : RegisterField<DCKCFGR, 25, 2, ReadWriteMode>
    {
    };
    // Timers clocks prescalers selection
    struct TIMPRE : RegisterField<DCKCFGR, 24, 1, ReadWriteMode>
    {
    };
    // SAI2 clock source selection
    struct SAI2SRC : RegisterField<DCKCFGR, 22, 2, ReadWriteMode>
    {
    };
    // SAI1 clock source selection
    struct SAI1SRC : RegisterField<DCKCFGR, 20, 2, ReadWriteMode>
    {
    };
    // PLLSAI division factor for SAIs clock
    struct PLLSAIDIVQ : RegisterField<DCKCFGR, 8, 5, ReadWriteMode>
    {
    };
    // PLLI2S division factor for SAIs clock
    struct PLLI2SDIVQ : RegisterField<DCKCFGR, 0, 5, ReadWriteMode>
    {
    };
  };

  // clocks gated enable register
  struct CKGATENR : Register<0x40023890, ReadWriteMode, 0x0>
  {
    // RCC clock enable
    struct RCC_CKEN : RegisterField<CKGATENR, 6, 1, ReadWriteMode>
    {
    };
    // Flash Interface clock enable
    struct FLITF_CKEN : RegisterField<CKGATENR, 5, 1, ReadWriteMode>
    {
    };
    // SRQAM controller clock enable
    struct SRAM_CKEN : RegisterField<CKGATENR, 4, 1, ReadWriteMode>
    {
    };
    // Spare clock enable
    struct SPARE_CKEN : RegisterField<CKGATENR, 3, 1, ReadWriteMode>
    {
    };
    // Cortex M4 ETM clock enable
    struct CM4DBG_CKEN : RegisterField<CKGATENR, 2, 1, ReadWriteMode>
    {
    };
    // AHB to APB2 Bridge clock enable
    struct AHB2APB2_CKEN : RegisterField<CKGATENR, 1, 1, ReadWriteMode>
    {
    };
    // AHB to APB1 Bridge clock enable
    struct AHB2APB1_CKEN : RegisterField<CKGATENR, 0, 1, ReadWriteMode>
    {
    };
  };

  // dedicated clocks configuration register 2
  struct DCKCFGR2 : Register<0x40023894, ReadWriteMode, 0x0>
  {
    // SPDIF clock selection
    struct SPDIFSEL : RegisterField<DCKCFGR2, 29, 1, ReadWriteMode>
    {
    };
    // SDIO clock selection
    struct SDIOSEL : RegisterField<DCKCFGR2, 28, 1, ReadWriteMode>
    {
    };
    // SDIO/USBFS/HS clock selection
    struct CK48MSEL : RegisterField<DCKCFGR2, 27, 1, ReadWriteMode>
    {
    };
    // HDMI CEC clock source selection
    struct CECSEL : RegisterField<DCKCFGR2, 26, 1, ReadWriteMode>
    {
    };
    // I2C4 kernel clock source selection
    struct FMPI2C1SEL : RegisterField<DCKCFGR2, 22, 2, ReadWriteMode>
    {
    };
  };

// Large Registers

};


