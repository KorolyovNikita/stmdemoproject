/******************************************************************************
* Filename : syscfg_registers.hpp
*
* Details  : System configuration controller
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct SYSCFG
{
  // memory remap register
  struct MEMRM : Register<0x40013800, ReadWriteMode, 0x0>
  {
    // FMC memory mapping swap
    struct SWP_FMC : RegisterField<MEMRM, 10, 2, ReadWriteMode>
    {
    };
    // Flash bank mode selection
    struct FB_MODE : RegisterField<MEMRM, 8, 1, ReadWriteMode>
    {
    };
    // Memory mapping selection
    struct MEM_MODE : RegisterField<MEMRM, 0, 3, ReadWriteMode>
    {
    };
  };

  // peripheral mode configuration register
  struct PMC : Register<0x40013804, ReadWriteMode, 0x0>
  {
    // Ethernet PHY interface selection
    struct MII_RMII_SEL : RegisterField<PMC, 23, 1, ReadWriteMode>
    {
    };
    // ADC3DC2
    struct ADC3DC2 : RegisterField<PMC, 18, 1, ReadWriteMode>
    {
    };
    // ADC2DC2
    struct ADC2DC2 : RegisterField<PMC, 17, 1, ReadWriteMode>
    {
    };
    // ADC1DC2
    struct ADC1DC2 : RegisterField<PMC, 16, 1, ReadWriteMode>
    {
    };
  };

  // external interrupt configuration register 1
  struct EXTICR1 : Register<0x40013808, ReadWriteMode, 0x0>
  {
    // EXTI x configuration (x = 0 to 3)
    struct EXTI3 : RegisterField<EXTICR1, 12, 4, ReadWriteMode>
    {
      using PortA = FieldValue<EXTI3, 0U>;
      using PortB = FieldValue<EXTI3, 1U>;
      using PortC = FieldValue<EXTI3, 2U>;
      using PortD = FieldValue<EXTI3, 3U>;
      using PortE = FieldValue<EXTI3, 4U>;
      using PortF = FieldValue<EXTI3, 5U>;
      using PortG = FieldValue<EXTI3, 6U>;
      using PortH = FieldValue<EXTI3, 7U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<EXTI3, val>;
    };
    // EXTI x configuration (x = 0 to 3)
    struct EXTI2 : RegisterField<EXTICR1, 8, 4, ReadWriteMode>
    {
      using PortA = FieldValue<EXTI2, 0U>;
      using PortB = FieldValue<EXTI2, 1U>;
      using PortC = FieldValue<EXTI2, 2U>;
      using PortD = FieldValue<EXTI2, 3U>;
      using PortE = FieldValue<EXTI2, 4U>;
      using PortF = FieldValue<EXTI2, 5U>;
      using PortG = FieldValue<EXTI2, 6U>;
      using PortH = FieldValue<EXTI2, 7U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<EXTI2, val>;
    };
    // EXTI x configuration (x = 0 to 3)
    struct EXTI1 : RegisterField<EXTICR1, 4, 4, ReadWriteMode>
    {
      using PortA = FieldValue<EXTI1, 0U>;
      using PortB = FieldValue<EXTI1, 1U>;
      using PortC = FieldValue<EXTI1, 2U>;
      using PortD = FieldValue<EXTI1, 3U>;
      using PortE = FieldValue<EXTI1, 4U>;
      using PortF = FieldValue<EXTI1, 5U>;
      using PortG = FieldValue<EXTI1, 6U>;
      using PortH = FieldValue<EXTI1, 7U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<EXTI1, val>;
    };
    // EXTI x configuration (x = 0 to 3)
    struct EXTI0 : RegisterField<EXTICR1, 0, 4, ReadWriteMode>
    {
      using PortA = FieldValue<EXTI0, 0U>;
      using PortB = FieldValue<EXTI0, 1U>;
      using PortC = FieldValue<EXTI0, 2U>;
      using PortD = FieldValue<EXTI0, 3U>;
      using PortE = FieldValue<EXTI0, 4U>;
      using PortF = FieldValue<EXTI0, 5U>;
      using PortG = FieldValue<EXTI0, 6U>;
      using PortH = FieldValue<EXTI0, 7U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<EXTI0, val>;
    };
  };

  // external interrupt configuration register 2
  struct EXTICR2 : Register<0x4001380c, ReadWriteMode, 0x0>
  {
    // EXTI x configuration (x = 4 to 7)
    struct EXTI7 : RegisterField<EXTICR2, 12, 4, ReadWriteMode>
    {
      using PortA = FieldValue<EXTI7, 0U>;
      using PortB = FieldValue<EXTI7, 1U>;
      using PortC = FieldValue<EXTI7, 2U>;
      using PortD = FieldValue<EXTI7, 3U>;
      using PortE = FieldValue<EXTI7, 4U>;
      using PortF = FieldValue<EXTI7, 5U>;
      using PortG = FieldValue<EXTI7, 6U>;
      using PortH = FieldValue<EXTI7, 7U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<EXTI7, val>;
    };
    // EXTI x configuration (x = 4 to 7)
    struct EXTI6 : RegisterField<EXTICR2, 8, 4, ReadWriteMode>
    {
      using PortA = FieldValue<EXTI6, 0U>;
      using PortB = FieldValue<EXTI6, 1U>;
      using PortC = FieldValue<EXTI6, 2U>;
      using PortD = FieldValue<EXTI6, 3U>;
      using PortE = FieldValue<EXTI6, 4U>;
      using PortF = FieldValue<EXTI6, 5U>;
      using PortG = FieldValue<EXTI6, 6U>;
      using PortH = FieldValue<EXTI6, 7U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<EXTI6, val>;
    };
    // EXTI x configuration (x = 4 to 7)
    struct EXTI5 : RegisterField<EXTICR2, 4, 4, ReadWriteMode>
    {
      using PortA = FieldValue<EXTI5, 0U>;
      using PortB = FieldValue<EXTI5, 1U>;
      using PortC = FieldValue<EXTI5, 2U>;
      using PortD = FieldValue<EXTI5, 3U>;
      using PortE = FieldValue<EXTI5, 4U>;
      using PortF = FieldValue<EXTI5, 5U>;
      using PortG = FieldValue<EXTI5, 6U>;
      using PortH = FieldValue<EXTI5, 7U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<EXTI5, val>;
    };
    // EXTI x configuration (x = 4 to 7)
    struct EXTI4 : RegisterField<EXTICR2, 0, 4, ReadWriteMode>
    {
      using PortA = FieldValue<EXTI4, 0U>;
      using PortB = FieldValue<EXTI4, 1U>;
      using PortC = FieldValue<EXTI4, 2U>;
      using PortD = FieldValue<EXTI4, 3U>;
      using PortE = FieldValue<EXTI4, 4U>;
      using PortF = FieldValue<EXTI4, 5U>;
      using PortG = FieldValue<EXTI4, 6U>;
      using PortH = FieldValue<EXTI4, 7U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<EXTI4, val>;
    };
  };

  // external interrupt configuration register 3
  struct EXTICR3 : Register<0x40013810, ReadWriteMode, 0x0>
  {
    // EXTI x configuration (x = 8 to 11)
    struct EXTI11 : RegisterField<EXTICR3, 12, 4, ReadWriteMode>
    {
      using PortA = FieldValue<EXTI11, 0U>;
      using PortB = FieldValue<EXTI11, 1U>;
      using PortC = FieldValue<EXTI11, 2U>;
      using PortD = FieldValue<EXTI11, 3U>;
      using PortE = FieldValue<EXTI11, 4U>;
      using PortF = FieldValue<EXTI11, 5U>;
      using PortG = FieldValue<EXTI11, 6U>;
      using PortH = FieldValue<EXTI11, 7U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<EXTI11, val>;
    };
    // EXTI10
    struct EXTI10 : RegisterField<EXTICR3, 8, 4, ReadWriteMode>
    {
      using PortA = FieldValue<EXTI10, 0U>;
      using PortB = FieldValue<EXTI10, 1U>;
      using PortC = FieldValue<EXTI10, 2U>;
      using PortD = FieldValue<EXTI10, 3U>;
      using PortE = FieldValue<EXTI10, 4U>;
      using PortF = FieldValue<EXTI10, 5U>;
      using PortG = FieldValue<EXTI10, 6U>;
      using PortH = FieldValue<EXTI10, 7U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<EXTI10, val>;
    };
    // EXTI x configuration (x = 8 to 11)
    struct EXTI9 : RegisterField<EXTICR3, 4, 4, ReadWriteMode>
    {
      using PortA = FieldValue<EXTI9, 0U>;
      using PortB = FieldValue<EXTI9, 1U>;
      using PortC = FieldValue<EXTI9, 2U>;
      using PortD = FieldValue<EXTI9, 3U>;
      using PortE = FieldValue<EXTI9, 4U>;
      using PortF = FieldValue<EXTI9, 5U>;
      using PortG = FieldValue<EXTI9, 6U>;
      using PortH = FieldValue<EXTI9, 7U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<EXTI9, val>;
    };
    // EXTI x configuration (x = 8 to 11)
    struct EXTI8 : RegisterField<EXTICR3, 0, 4, ReadWriteMode>
    {
      using PortA = FieldValue<EXTI8, 0U>;
      using PortB = FieldValue<EXTI8, 1U>;
      using PortC = FieldValue<EXTI8, 2U>;
      using PortD = FieldValue<EXTI8, 3U>;
      using PortE = FieldValue<EXTI8, 4U>;
      using PortF = FieldValue<EXTI8, 5U>;
      using PortG = FieldValue<EXTI8, 6U>;
      using PortH = FieldValue<EXTI8, 7U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<EXTI8, val>;
    };
  };

  // external interrupt configuration register 4
  struct EXTICR4 : Register<0x40013814, ReadWriteMode, 0x0>
  {
    // EXTI x configuration (x = 12 to 15)
    struct EXTI15 : RegisterField<EXTICR4, 12, 4, ReadWriteMode>
    {
      using PortA = FieldValue<EXTI15, 0U>;
      using PortB = FieldValue<EXTI15, 1U>;
      using PortC = FieldValue<EXTI15, 2U>;
      using PortD = FieldValue<EXTI15, 3U>;
      using PortE = FieldValue<EXTI15, 4U>;
      using PortF = FieldValue<EXTI15, 5U>;
      using PortG = FieldValue<EXTI15, 6U>;
      using PortH = FieldValue<EXTI15, 7U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<EXTI15, val>;
    };
    // EXTI x configuration (x = 12 to 15)
    struct EXTI14 : RegisterField<EXTICR4, 8, 4, ReadWriteMode>
    {
      using PortA = FieldValue<EXTI14, 0U>;
      using PortB = FieldValue<EXTI14, 1U>;
      using PortC = FieldValue<EXTI14, 2U>;
      using PortD = FieldValue<EXTI14, 3U>;
      using PortE = FieldValue<EXTI14, 4U>;
      using PortF = FieldValue<EXTI14, 5U>;
      using PortG = FieldValue<EXTI14, 6U>;
      using PortH = FieldValue<EXTI14, 7U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<EXTI14, val>;
    };
    // EXTI x configuration (x = 12 to 15)
    struct EXTI13 : RegisterField<EXTICR4, 4, 4, ReadWriteMode>
    {
      using PortA = FieldValue<EXTI13, 0U>;
      using PortB = FieldValue<EXTI13, 1U>;
      using PortC = FieldValue<EXTI13, 2U>;
      using PortD = FieldValue<EXTI13, 3U>;
      using PortE = FieldValue<EXTI13, 4U>;
      using PortF = FieldValue<EXTI13, 5U>;
      using PortG = FieldValue<EXTI13, 6U>;
      using PortH = FieldValue<EXTI13, 7U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<EXTI13, val>;
    };
    // EXTI x configuration (x = 12 to 15)
    struct EXTI12 : RegisterField<EXTICR4, 0, 4, ReadWriteMode>
    {
      using PortA = FieldValue<EXTI12, 0U>;
      using PortB = FieldValue<EXTI12, 1U>;
      using PortC = FieldValue<EXTI12, 2U>;
      using PortD = FieldValue<EXTI12, 3U>;
      using PortE = FieldValue<EXTI12, 4U>;
      using PortF = FieldValue<EXTI12, 5U>;
      using PortG = FieldValue<EXTI12, 6U>;
      using PortH = FieldValue<EXTI12, 7U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
      using Value = FieldValue<EXTI12, val>;
    };
  };

  // Compensation cell control register
  struct CMPCR : Register<0x40013820, ReadMode, 0x0>
  {
    // READY
    struct READY : RegisterField<CMPCR, 8, 1, ReadMode>
    {
    };
    // Compensation cell power-down
    struct CMP_PD : RegisterField<CMPCR, 0, 1, ReadMode>
    {
    };
  };

// Large Registers

  // external interrupt configuration register 1
  template<auto num>
  struct EXTICR_EXTI : RegisterField<Register<0x40013808 + 4 * (num / 4), ReadWriteMode, 0x0>, 4 * (num % 4), 4, ReadWriteMode>
  {
    using PortA = FieldValue<EXTICR_EXTI, 0U>;
    using PortB = FieldValue<EXTICR_EXTI, 1U>;
    using PortC = FieldValue<EXTICR_EXTI, 2U>;
    using PortD = FieldValue<EXTICR_EXTI, 3U>;
    using PortE = FieldValue<EXTICR_EXTI, 4U>;
    using PortF = FieldValue<EXTICR_EXTI, 5U>;
    using PortG = FieldValue<EXTICR_EXTI, 6U>;
    using PortH = FieldValue<EXTICR_EXTI, 7U>;
    template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
    using Value = FieldValue<EXTICR_EXTI, val>;
  };

};


