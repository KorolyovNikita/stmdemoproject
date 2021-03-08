/******************************************************************************
* Filename : tim9_12_registers.hpp
*
* Details  : General purpose timers
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct TIM9
{
  static constexpr auto periphNum = 9;

  // control register 1
  struct CR1 : Register<0x40014000, ReadWriteMode, 0x0>
  {
    // Clock division
    struct CKD : RegisterField<CR1, 8, 2, ReadWriteMode>
    {
    };
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
  struct CR2 : Register<0x40014004, ReadWriteMode, 0x0>
  {
    // Master mode selection
    struct MMS : RegisterField<CR2, 4, 3, ReadWriteMode>
    {
    };
  };

  // slave mode control register
  struct SMCR : Register<0x40014008, ReadWriteMode, 0x0>
  {
    // Master/Slave mode
    struct MSM : RegisterField<SMCR, 7, 1, ReadWriteMode>
    {
    };
    // Trigger selection
    struct TS : RegisterField<SMCR, 4, 3, ReadWriteMode>
    {
    };
    // Slave mode selection
    struct SMS : RegisterField<SMCR, 0, 3, ReadWriteMode>
    {
    };
  };

  // DMA/Interrupt enable register
  struct DIER : Register<0x4001400c, ReadWriteMode, 0x0>
  {
    // Trigger interrupt enable
    struct TIE : RegisterField<DIER, 6, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 2 interrupt enable
    struct CC2IE : RegisterField<DIER, 2, 1, ReadWriteMode>
    {
    };
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
  struct SR : Register<0x40014010, ReadWriteMode, 0x0>
  {
    // Capture/compare 2 overcapture flag
    struct CC2OF : RegisterField<SR, 10, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 1 overcapture flag
    struct CC1OF : RegisterField<SR, 9, 1, ReadWriteMode>
    {
    };
    // Trigger interrupt flag
    struct TIF : RegisterField<SR, 6, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 2 interrupt flag
    struct CC2IF : RegisterField<SR, 2, 1, ReadWriteMode>
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
  struct EGR : Register<0x40014014, WriteMode, 0x0>
  {
    // Trigger generation
    struct TG : RegisterField<EGR, 6, 1, WriteMode>
    {
    };
    // Capture/compare 2 generation
    struct CC2G : RegisterField<EGR, 2, 1, WriteMode>
    {
    };
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
  struct CCMR1_Output : Register<0x40014018, ReadWriteMode, 0x0>
  {
    // Output Compare 2 mode
    struct OC2M : RegisterField<CCMR1_Output, 12, 3, ReadWriteMode>
    {
    };
    // Output Compare 2 preload enable
    struct OC2PE : RegisterField<CCMR1_Output, 11, 1, ReadWriteMode>
    {
    };
    // Output Compare 2 fast enable
    struct OC2FE : RegisterField<CCMR1_Output, 10, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 2 selection
    struct CC2S : RegisterField<CCMR1_Output, 8, 2, ReadWriteMode>
    {
    };
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
  struct CCMR1_Input : Register<0x40014018, ReadWriteMode, 0x0>
  {
    // Input capture 2 filter
    struct IC2F : RegisterField<CCMR1_Input, 12, 3, ReadWriteMode>
    {
    };
    // Input capture 2 prescaler
    struct IC2PCS : RegisterField<CCMR1_Input, 10, 2, ReadWriteMode>
    {
    };
    // Capture/Compare 2 selection
    struct CC2S : RegisterField<CCMR1_Input, 8, 2, ReadWriteMode>
    {
    };
    // Input capture 1 filter
    struct IC1F : RegisterField<CCMR1_Input, 4, 3, ReadWriteMode>
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
  struct CCER : Register<0x40014020, ReadWriteMode, 0x0>
  {
    // Capture/Compare 2 output Polarity
    struct CC2NP : RegisterField<CCER, 7, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 2 output Polarity
    struct CC2P : RegisterField<CCER, 5, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 2 output enable
    struct CC2E : RegisterField<CCER, 4, 1, ReadWriteMode>
    {
    };
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
  struct CNT : Register<0x40014024, ReadWriteMode, 0x0>
  {
    // counter value
    struct _CNT : RegisterField<CNT, 0, 16, ReadWriteMode>
    {
    };
  };

  // prescaler
  struct PSC : Register<0x40014028, ReadWriteMode, 0x0>
  {
    // Prescaler value
    struct _PSC : RegisterField<PSC, 0, 16, ReadWriteMode>
    {
    };
  };

  // auto-reload register
  struct ARR : Register<0x4001402c, ReadWriteMode, 0x0>
  {
    // Auto-reload value
    struct _ARR : RegisterField<ARR, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 1
  struct CCR1 : Register<0x40014034, ReadWriteMode, 0x0>
  {
    // Capture/Compare 1 value
    struct _CCR1 : RegisterField<CCR1, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 2
  struct CCR2 : Register<0x40014038, ReadWriteMode, 0x0>
  {
    // Capture/Compare 2 value
    struct _CCR2 : RegisterField<CCR2, 0, 16, ReadWriteMode>
    {
    };
  };

// Large Registers

};


struct TIM12
{
  static constexpr auto periphNum = 21;

  // control register 1
  struct CR1 : Register<0x40001800, ReadWriteMode, 0x0>
  {
    // Clock division
    struct CKD : RegisterField<CR1, 8, 2, ReadWriteMode>
    {
    };
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
  struct CR2 : Register<0x40001804, ReadWriteMode, 0x0>
  {
    // Master mode selection
    struct MMS : RegisterField<CR2, 4, 3, ReadWriteMode>
    {
    };
  };

  // slave mode control register
  struct SMCR : Register<0x40001808, ReadWriteMode, 0x0>
  {
    // Master/Slave mode
    struct MSM : RegisterField<SMCR, 7, 1, ReadWriteMode>
    {
    };
    // Trigger selection
    struct TS : RegisterField<SMCR, 4, 3, ReadWriteMode>
    {
    };
    // Slave mode selection
    struct SMS : RegisterField<SMCR, 0, 3, ReadWriteMode>
    {
    };
  };

  // DMA/Interrupt enable register
  struct DIER : Register<0x4000180c, ReadWriteMode, 0x0>
  {
    // Trigger interrupt enable
    struct TIE : RegisterField<DIER, 6, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 2 interrupt enable
    struct CC2IE : RegisterField<DIER, 2, 1, ReadWriteMode>
    {
    };
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
  struct SR : Register<0x40001810, ReadWriteMode, 0x0>
  {
    // Capture/compare 2 overcapture flag
    struct CC2OF : RegisterField<SR, 10, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 1 overcapture flag
    struct CC1OF : RegisterField<SR, 9, 1, ReadWriteMode>
    {
    };
    // Trigger interrupt flag
    struct TIF : RegisterField<SR, 6, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 2 interrupt flag
    struct CC2IF : RegisterField<SR, 2, 1, ReadWriteMode>
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
  struct EGR : Register<0x40001814, WriteMode, 0x0>
  {
    // Trigger generation
    struct TG : RegisterField<EGR, 6, 1, WriteMode>
    {
    };
    // Capture/compare 2 generation
    struct CC2G : RegisterField<EGR, 2, 1, WriteMode>
    {
    };
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
  struct CCMR1_Output : Register<0x40001818, ReadWriteMode, 0x0>
  {
    // Output Compare 2 mode
    struct OC2M : RegisterField<CCMR1_Output, 12, 3, ReadWriteMode>
    {
    };
    // Output Compare 2 preload enable
    struct OC2PE : RegisterField<CCMR1_Output, 11, 1, ReadWriteMode>
    {
    };
    // Output Compare 2 fast enable
    struct OC2FE : RegisterField<CCMR1_Output, 10, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 2 selection
    struct CC2S : RegisterField<CCMR1_Output, 8, 2, ReadWriteMode>
    {
    };
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
  struct CCMR1_Input : Register<0x40001818, ReadWriteMode, 0x0>
  {
    // Input capture 2 filter
    struct IC2F : RegisterField<CCMR1_Input, 12, 3, ReadWriteMode>
    {
    };
    // Input capture 2 prescaler
    struct IC2PCS : RegisterField<CCMR1_Input, 10, 2, ReadWriteMode>
    {
    };
    // Capture/Compare 2 selection
    struct CC2S : RegisterField<CCMR1_Input, 8, 2, ReadWriteMode>
    {
    };
    // Input capture 1 filter
    struct IC1F : RegisterField<CCMR1_Input, 4, 3, ReadWriteMode>
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
  struct CCER : Register<0x40001820, ReadWriteMode, 0x0>
  {
    // Capture/Compare 2 output Polarity
    struct CC2NP : RegisterField<CCER, 7, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 2 output Polarity
    struct CC2P : RegisterField<CCER, 5, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 2 output enable
    struct CC2E : RegisterField<CCER, 4, 1, ReadWriteMode>
    {
    };
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
  struct CNT : Register<0x40001824, ReadWriteMode, 0x0>
  {
    // counter value
    struct _CNT : RegisterField<CNT, 0, 16, ReadWriteMode>
    {
    };
  };

  // prescaler
  struct PSC : Register<0x40001828, ReadWriteMode, 0x0>
  {
    // Prescaler value
    struct _PSC : RegisterField<PSC, 0, 16, ReadWriteMode>
    {
    };
  };

  // auto-reload register
  struct ARR : Register<0x4000182c, ReadWriteMode, 0x0>
  {
    // Auto-reload value
    struct _ARR : RegisterField<ARR, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 1
  struct CCR1 : Register<0x40001834, ReadWriteMode, 0x0>
  {
    // Capture/Compare 1 value
    struct _CCR1 : RegisterField<CCR1, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 2
  struct CCR2 : Register<0x40001838, ReadWriteMode, 0x0>
  {
    // Capture/Compare 2 value
    struct _CCR2 : RegisterField<CCR2, 0, 16, ReadWriteMode>
    {
    };
  };

// Large Registers

};


