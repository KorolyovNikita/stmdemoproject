/******************************************************************************
* Filename : tim6_7_registers.hpp
*
* Details  : Basic timers
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct TIM6
{
  static constexpr auto periphNum = 6;

  // control register 1
  struct CR1 : Register<0x40001000, ReadWriteMode, 0x0>
  {
    // Auto-reload preload enable
    struct ARPE : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
    };
    // One-pulse mode
    struct OPM : RegisterField<CR1, 3, 1, ReadWriteMode>
    {
    };
    // Update request source
    struct URS : RegisterField<CR1, 2, 1, ReadWriteMode>
    {
    };
    // Update disable
    struct UDIS : RegisterField<CR1, 1, 1, ReadWriteMode>
    {
    };
    // Counter enable
    struct CEN : RegisterField<CR1, 0, 1, ReadWriteMode>
    {
    };
  };

  // control register 2
  struct CR2 : Register<0x40001004, ReadWriteMode, 0x0>
  {
    // Master mode selection
    struct MMS : RegisterField<CR2, 4, 3, ReadWriteMode>
    {
    };
  };

  // DMA/Interrupt enable register
  struct DIER : Register<0x4000100c, ReadWriteMode, 0x0>
  {
    // Update DMA request enable
    struct UDE : RegisterField<DIER, 8, 1, ReadWriteMode>
    {
    };
    // Update interrupt enable
    struct UIE : RegisterField<DIER, 0, 1, ReadWriteMode>
    {
    };
  };

  // status register
  struct SR : Register<0x40001010, ReadWriteMode, 0x0>
  {
    // Update interrupt flag
    struct UIF : RegisterField<SR, 0, 1, ReadWriteMode>
    {
    };
  };

  // event generation register
  struct EGR : Register<0x40001014, WriteMode, 0x0>
  {
    // Update generation
    struct UG : RegisterField<EGR, 0, 1, WriteMode>
    {
    };
  };

  // counter
  struct CNT : Register<0x40001024, ReadWriteMode, 0x0>
  {
    // Low counter value
    struct _CNT : RegisterField<CNT, 0, 16, ReadWriteMode>
    {
    };
  };

  // prescaler
  struct PSC : Register<0x40001028, ReadWriteMode, 0x0>
  {
    // Prescaler value
    struct _PSC : RegisterField<PSC, 0, 16, ReadWriteMode>
    {
    };
  };

  // auto-reload register
  struct ARR : Register<0x4000102c, ReadWriteMode, 0x0>
  {
    // Low Auto-reload value
    struct _ARR : RegisterField<ARR, 0, 16, ReadWriteMode>
    {
    };
  };

// Large Registers

};


struct TIM7
{
  static constexpr auto periphNum = 7;

  // control register 1
  struct CR1 : Register<0x40001400, ReadWriteMode, 0x0>
  {
    // Auto-reload preload enable
    struct ARPE : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
    };
    // One-pulse mode
    struct OPM : RegisterField<CR1, 3, 1, ReadWriteMode>
    {
    };
    // Update request source
    struct URS : RegisterField<CR1, 2, 1, ReadWriteMode>
    {
    };
    // Update disable
    struct UDIS : RegisterField<CR1, 1, 1, ReadWriteMode>
    {
    };
    // Counter enable
    struct CEN : RegisterField<CR1, 0, 1, ReadWriteMode>
    {
    };
  };

  // control register 2
  struct CR2 : Register<0x40001404, ReadWriteMode, 0x0>
  {
    // Master mode selection
    struct MMS : RegisterField<CR2, 4, 3, ReadWriteMode>
    {
    };
  };

  // DMA/Interrupt enable register
  struct DIER : Register<0x4000140c, ReadWriteMode, 0x0>
  {
    // Update DMA request enable
    struct UDE : RegisterField<DIER, 8, 1, ReadWriteMode>
    {
    };
    // Update interrupt enable
    struct UIE : RegisterField<DIER, 0, 1, ReadWriteMode>
    {
    };
  };

  // status register
  struct SR : Register<0x40001410, ReadWriteMode, 0x0>
  {
    // Update interrupt flag
    struct UIF : RegisterField<SR, 0, 1, ReadWriteMode>
    {
    };
  };

  // event generation register
  struct EGR : Register<0x40001414, WriteMode, 0x0>
  {
    // Update generation
    struct UG : RegisterField<EGR, 0, 1, WriteMode>
    {
    };
  };

  // counter
  struct CNT : Register<0x40001424, ReadWriteMode, 0x0>
  {
    // Low counter value
    struct _CNT : RegisterField<CNT, 0, 16, ReadWriteMode>
    {
    };
  };

  // prescaler
  struct PSC : Register<0x40001428, ReadWriteMode, 0x0>
  {
    // Prescaler value
    struct _PSC : RegisterField<PSC, 0, 16, ReadWriteMode>
    {
    };
  };

  // auto-reload register
  struct ARR : Register<0x4000142c, ReadWriteMode, 0x0>
  {
    // Low Auto-reload value
    struct _ARR : RegisterField<ARR, 0, 16, ReadWriteMode>
    {
    };
  };

// Large Registers

};


