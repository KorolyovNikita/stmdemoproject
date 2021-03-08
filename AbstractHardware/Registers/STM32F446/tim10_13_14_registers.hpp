/******************************************************************************
* Filename : tim10_13_14_registers.hpp
*
* Details  : General-purpose-timers
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct TIM10
{
  static constexpr auto periphNum = 1;

  // control register 1
  struct CR1 : Register<0x40014400, ReadWriteMode, 0x0>
  {
    // Clock division
    struct CKD : RegisterField<CR1, 8, 2, ReadWriteMode>
    {
    };
    // Auto-reload preload enable
    struct ARPE : RegisterField<CR1, 7, 1, ReadWriteMode>
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

  // DMA/Interrupt enable register
  struct DIER : Register<0x4001440c, ReadWriteMode, 0x0>
  {
    // Capture/Compare 1 interrupt enable
    struct CC1IE : RegisterField<DIER, 1, 1, ReadWriteMode>
    {
    };
    // Update interrupt enable
    struct UIE : RegisterField<DIER, 0, 1, ReadWriteMode>
    {
    };
  };

  // status register
  struct SR : Register<0x40014410, ReadWriteMode, 0x0>
  {
    // Capture/Compare 1 overcapture flag
    struct CC1OF : RegisterField<SR, 9, 1, ReadWriteMode>
    {
    };
    // Capture/compare 1 interrupt flag
    struct CC1IF : RegisterField<SR, 1, 1, ReadWriteMode>
    {
    };
    // Update interrupt flag
    struct UIF : RegisterField<SR, 0, 1, ReadWriteMode>
    {
    };
  };

  // event generation register
  struct EGR : Register<0x40014414, WriteMode, 0x0>
  {
    // Capture/compare 1 generation
    struct CC1G : RegisterField<EGR, 1, 1, WriteMode>
    {
    };
    // Update generation
    struct UG : RegisterField<EGR, 0, 1, WriteMode>
    {
    };
  };

  // capture/compare mode register 1 (output mode)
  struct CCMR1_Output : Register<0x40014418, ReadWriteMode, 0x0>
  {
    // Output Compare 1 mode
    struct OC1M : RegisterField<CCMR1_Output, 4, 3, ReadWriteMode>
    {
    };
    // Output Compare 1 preload enable
    struct OC1PE : RegisterField<CCMR1_Output, 3, 1, ReadWriteMode>
    {
    };
    // Output Compare 1 fast enable
    struct OC1FE : RegisterField<CCMR1_Output, 2, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 1 selection
    struct CC1S : RegisterField<CCMR1_Output, 0, 2, ReadWriteMode>
    {
    };
  };

  // capture/compare mode register 1 (input mode)
  struct CCMR1_Input : Register<0x40014418, ReadWriteMode, 0x0>
  {
    // Input capture 1 filter
    struct IC1F : RegisterField<CCMR1_Input, 4, 4, ReadWriteMode>
    {
    };
    // Input capture 1 prescaler
    struct ICPCS : RegisterField<CCMR1_Input, 2, 2, ReadWriteMode>
    {
    };
    // Capture/Compare 1 selection
    struct CC1S : RegisterField<CCMR1_Input, 0, 2, ReadWriteMode>
    {
    };
  };

  // capture/compare enable register
  struct CCER : Register<0x40014420, ReadWriteMode, 0x0>
  {
    // Capture/Compare 1 output Polarity
    struct CC1NP : RegisterField<CCER, 3, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 1 output Polarity
    struct CC1P : RegisterField<CCER, 1, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 1 output enable
    struct CC1E : RegisterField<CCER, 0, 1, ReadWriteMode>
    {
    };
  };

  // counter
  struct CNT : Register<0x40014424, ReadWriteMode, 0x0>
  {
    // counter value
    struct _CNT : RegisterField<CNT, 0, 16, ReadWriteMode>
    {
    };
  };

  // prescaler
  struct PSC : Register<0x40014428, ReadWriteMode, 0x0>
  {
    // Prescaler value
    struct _PSC : RegisterField<PSC, 0, 16, ReadWriteMode>
    {
    };
  };

  // auto-reload register
  struct ARR : Register<0x4001442c, ReadWriteMode, 0x0>
  {
    // Auto-reload value
    struct _ARR : RegisterField<ARR, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 1
  struct CCR1 : Register<0x40014434, ReadWriteMode, 0x0>
  {
    // Capture/Compare 1 value
    struct _CCR1 : RegisterField<CCR1, 0, 16, ReadWriteMode>
    {
    };
  };

// Large Registers

};


struct TIM13
{
  static constexpr auto periphNum = 31;

  // control register 1
  struct CR1 : Register<0x40001c00, ReadWriteMode, 0x0>
  {
    // Clock division
    struct CKD : RegisterField<CR1, 8, 2, ReadWriteMode>
    {
    };
    // Auto-reload preload enable
    struct ARPE : RegisterField<CR1, 7, 1, ReadWriteMode>
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

  // DMA/Interrupt enable register
  struct DIER : Register<0x40001c0c, ReadWriteMode, 0x0>
  {
    // Capture/Compare 1 interrupt enable
    struct CC1IE : RegisterField<DIER, 1, 1, ReadWriteMode>
    {
    };
    // Update interrupt enable
    struct UIE : RegisterField<DIER, 0, 1, ReadWriteMode>
    {
    };
  };

  // status register
  struct SR : Register<0x40001c10, ReadWriteMode, 0x0>
  {
    // Capture/Compare 1 overcapture flag
    struct CC1OF : RegisterField<SR, 9, 1, ReadWriteMode>
    {
    };
    // Capture/compare 1 interrupt flag
    struct CC1IF : RegisterField<SR, 1, 1, ReadWriteMode>
    {
    };
    // Update interrupt flag
    struct UIF : RegisterField<SR, 0, 1, ReadWriteMode>
    {
    };
  };

  // event generation register
  struct EGR : Register<0x40001c14, WriteMode, 0x0>
  {
    // Capture/compare 1 generation
    struct CC1G : RegisterField<EGR, 1, 1, WriteMode>
    {
    };
    // Update generation
    struct UG : RegisterField<EGR, 0, 1, WriteMode>
    {
    };
  };

  // capture/compare mode register 1 (output mode)
  struct CCMR1_Output : Register<0x40001c18, ReadWriteMode, 0x0>
  {
    // Output Compare 1 mode
    struct OC1M : RegisterField<CCMR1_Output, 4, 3, ReadWriteMode>
    {
    };
    // Output Compare 1 preload enable
    struct OC1PE : RegisterField<CCMR1_Output, 3, 1, ReadWriteMode>
    {
    };
    // Output Compare 1 fast enable
    struct OC1FE : RegisterField<CCMR1_Output, 2, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 1 selection
    struct CC1S : RegisterField<CCMR1_Output, 0, 2, ReadWriteMode>
    {
    };
  };

  // capture/compare mode register 1 (input mode)
  struct CCMR1_Input : Register<0x40001c18, ReadWriteMode, 0x0>
  {
    // Input capture 1 filter
    struct IC1F : RegisterField<CCMR1_Input, 4, 4, ReadWriteMode>
    {
    };
    // Input capture 1 prescaler
    struct ICPCS : RegisterField<CCMR1_Input, 2, 2, ReadWriteMode>
    {
    };
    // Capture/Compare 1 selection
    struct CC1S : RegisterField<CCMR1_Input, 0, 2, ReadWriteMode>
    {
    };
  };

  // capture/compare enable register
  struct CCER : Register<0x40001c20, ReadWriteMode, 0x0>
  {
    // Capture/Compare 1 output Polarity
    struct CC1NP : RegisterField<CCER, 3, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 1 output Polarity
    struct CC1P : RegisterField<CCER, 1, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 1 output enable
    struct CC1E : RegisterField<CCER, 0, 1, ReadWriteMode>
    {
    };
  };

  // counter
  struct CNT : Register<0x40001c24, ReadWriteMode, 0x0>
  {
    // counter value
    struct _CNT : RegisterField<CNT, 0, 16, ReadWriteMode>
    {
    };
  };

  // prescaler
  struct PSC : Register<0x40001c28, ReadWriteMode, 0x0>
  {
    // Prescaler value
    struct _PSC : RegisterField<PSC, 0, 16, ReadWriteMode>
    {
    };
  };

  // auto-reload register
  struct ARR : Register<0x40001c2c, ReadWriteMode, 0x0>
  {
    // Auto-reload value
    struct _ARR : RegisterField<ARR, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 1
  struct CCR1 : Register<0x40001c34, ReadWriteMode, 0x0>
  {
    // Capture/Compare 1 value
    struct _CCR1 : RegisterField<CCR1, 0, 16, ReadWriteMode>
    {
    };
  };

// Large Registers

};


struct TIM14
{
  static constexpr auto periphNum = 41;

  // control register 1
  struct CR1 : Register<0x40002000, ReadWriteMode, 0x0>
  {
    // Clock division
    struct CKD : RegisterField<CR1, 8, 2, ReadWriteMode>
    {
    };
    // Auto-reload preload enable
    struct ARPE : RegisterField<CR1, 7, 1, ReadWriteMode>
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

  // DMA/Interrupt enable register
  struct DIER : Register<0x4000200c, ReadWriteMode, 0x0>
  {
    // Capture/Compare 1 interrupt enable
    struct CC1IE : RegisterField<DIER, 1, 1, ReadWriteMode>
    {
    };
    // Update interrupt enable
    struct UIE : RegisterField<DIER, 0, 1, ReadWriteMode>
    {
    };
  };

  // status register
  struct SR : Register<0x40002010, ReadWriteMode, 0x0>
  {
    // Capture/Compare 1 overcapture flag
    struct CC1OF : RegisterField<SR, 9, 1, ReadWriteMode>
    {
    };
    // Capture/compare 1 interrupt flag
    struct CC1IF : RegisterField<SR, 1, 1, ReadWriteMode>
    {
    };
    // Update interrupt flag
    struct UIF : RegisterField<SR, 0, 1, ReadWriteMode>
    {
    };
  };

  // event generation register
  struct EGR : Register<0x40002014, WriteMode, 0x0>
  {
    // Capture/compare 1 generation
    struct CC1G : RegisterField<EGR, 1, 1, WriteMode>
    {
    };
    // Update generation
    struct UG : RegisterField<EGR, 0, 1, WriteMode>
    {
    };
  };

  // capture/compare mode register 1 (output mode)
  struct CCMR1_Output : Register<0x40002018, ReadWriteMode, 0x0>
  {
    // Output Compare 1 mode
    struct OC1M : RegisterField<CCMR1_Output, 4, 3, ReadWriteMode>
    {
    };
    // Output Compare 1 preload enable
    struct OC1PE : RegisterField<CCMR1_Output, 3, 1, ReadWriteMode>
    {
    };
    // Output Compare 1 fast enable
    struct OC1FE : RegisterField<CCMR1_Output, 2, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 1 selection
    struct CC1S : RegisterField<CCMR1_Output, 0, 2, ReadWriteMode>
    {
    };
  };

  // capture/compare mode register 1 (input mode)
  struct CCMR1_Input : Register<0x40002018, ReadWriteMode, 0x0>
  {
    // Input capture 1 filter
    struct IC1F : RegisterField<CCMR1_Input, 4, 4, ReadWriteMode>
    {
    };
    // Input capture 1 prescaler
    struct ICPCS : RegisterField<CCMR1_Input, 2, 2, ReadWriteMode>
    {
    };
    // Capture/Compare 1 selection
    struct CC1S : RegisterField<CCMR1_Input, 0, 2, ReadWriteMode>
    {
    };
  };

  // capture/compare enable register
  struct CCER : Register<0x40002020, ReadWriteMode, 0x0>
  {
    // Capture/Compare 1 output Polarity
    struct CC1NP : RegisterField<CCER, 3, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 1 output Polarity
    struct CC1P : RegisterField<CCER, 1, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 1 output enable
    struct CC1E : RegisterField<CCER, 0, 1, ReadWriteMode>
    {
    };
  };

  // counter
  struct CNT : Register<0x40002024, ReadWriteMode, 0x0>
  {
    // counter value
    struct _CNT : RegisterField<CNT, 0, 16, ReadWriteMode>
    {
    };
  };

  // prescaler
  struct PSC : Register<0x40002028, ReadWriteMode, 0x0>
  {
    // Prescaler value
    struct _PSC : RegisterField<PSC, 0, 16, ReadWriteMode>
    {
    };
  };

  // auto-reload register
  struct ARR : Register<0x4000202c, ReadWriteMode, 0x0>
  {
    // Auto-reload value
    struct _ARR : RegisterField<ARR, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 1
  struct CCR1 : Register<0x40002034, ReadWriteMode, 0x0>
  {
    // Capture/Compare 1 value
    struct _CCR1 : RegisterField<CCR1, 0, 16, ReadWriteMode>
    {
    };
  };

// Large Registers

};


