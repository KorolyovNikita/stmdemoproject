/******************************************************************************
* Filename : tim1_8_registers.hpp
*
* Details  : Advanced-timers
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct TIM1
{
  static constexpr auto periphNum = 1;

  // control register 1
  struct CR1 : Register<0x40010000, ReadWriteMode, 0x0>
  {
    // Clock division
    struct CKD : RegisterField<CR1, 8, 2, ReadWriteMode>
    {
    };
    // Auto-reload preload enable
    struct ARPE : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
    };
    // Center-aligned mode selection
    struct CMS : RegisterField<CR1, 5, 2, ReadWriteMode>
    {
    };
    // Direction
    struct DIR : RegisterField<CR1, 4, 1, ReadWriteMode>
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
  struct CR2 : Register<0x40010004, ReadWriteMode, 0x0>
  {
    // Output Idle state 4
    struct OIS4 : RegisterField<CR2, 14, 1, ReadWriteMode>
    {
    };
    // Output Idle state 3
    struct OIS3N : RegisterField<CR2, 13, 1, ReadWriteMode>
    {
    };
    // Output Idle state 3
    struct OIS3 : RegisterField<CR2, 12, 1, ReadWriteMode>
    {
    };
    // Output Idle state 2
    struct OIS2N : RegisterField<CR2, 11, 1, ReadWriteMode>
    {
    };
    // Output Idle state 2
    struct OIS2 : RegisterField<CR2, 10, 1, ReadWriteMode>
    {
    };
    // Output Idle state 1
    struct OIS1N : RegisterField<CR2, 9, 1, ReadWriteMode>
    {
    };
    // Output Idle state 1
    struct OIS1 : RegisterField<CR2, 8, 1, ReadWriteMode>
    {
    };
    // TI1 selection
    struct TI1S : RegisterField<CR2, 7, 1, ReadWriteMode>
    {
    };
    // Master mode selection
    struct MMS : RegisterField<CR2, 4, 3, ReadWriteMode>
    {
    };
    // Capture/compare DMA selection
    struct CCDS : RegisterField<CR2, 3, 1, ReadWriteMode>
    {
    };
    // Capture/compare control update selection
    struct CCUS : RegisterField<CR2, 2, 1, ReadWriteMode>
    {
    };
    // Capture/compare preloaded control
    struct CCPC : RegisterField<CR2, 0, 1, ReadWriteMode>
    {
    };
  };

  // slave mode control register
  struct SMCR : Register<0x40010008, ReadWriteMode, 0x0>
  {
    // External trigger polarity
    struct ETP : RegisterField<SMCR, 15, 1, ReadWriteMode>
    {
    };
    // External clock enable
    struct ECE : RegisterField<SMCR, 14, 1, ReadWriteMode>
    {
    };
    // External trigger prescaler
    struct ETPS : RegisterField<SMCR, 12, 2, ReadWriteMode>
    {
    };
    // External trigger filter
    struct ETF : RegisterField<SMCR, 8, 4, ReadWriteMode>
    {
    };
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
  struct DIER : Register<0x4001000c, ReadWriteMode, 0x0>
  {
    // Trigger DMA request enable
    struct TDE : RegisterField<DIER, 14, 1, ReadWriteMode>
    {
    };
    // COM DMA request enable
    struct COMDE : RegisterField<DIER, 13, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 4 DMA request enable
    struct CC4DE : RegisterField<DIER, 12, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 DMA request enable
    struct CC3DE : RegisterField<DIER, 11, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 2 DMA request enable
    struct CC2DE : RegisterField<DIER, 10, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 1 DMA request enable
    struct CC1DE : RegisterField<DIER, 9, 1, ReadWriteMode>
    {
    };
    // Update DMA request enable
    struct UDE : RegisterField<DIER, 8, 1, ReadWriteMode>
    {
    };
    // Break interrupt enable
    struct BIE : RegisterField<DIER, 7, 1, ReadWriteMode>
    {
    };
    // Trigger interrupt enable
    struct TIE : RegisterField<DIER, 6, 1, ReadWriteMode>
    {
    };
    // COM interrupt enable
    struct COMIE : RegisterField<DIER, 5, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 4 interrupt enable
    struct CC4IE : RegisterField<DIER, 4, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 interrupt enable
    struct CC3IE : RegisterField<DIER, 3, 1, ReadWriteMode>
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
  struct SR : Register<0x40010010, ReadWriteMode, 0x0>
  {
    // Capture/Compare 4 overcapture flag
    struct CC4OF : RegisterField<SR, 12, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 overcapture flag
    struct CC3OF : RegisterField<SR, 11, 1, ReadWriteMode>
    {
    };
    // Capture/compare 2 overcapture flag
    struct CC2OF : RegisterField<SR, 10, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 1 overcapture flag
    struct CC1OF : RegisterField<SR, 9, 1, ReadWriteMode>
    {
    };
    // Break interrupt flag
    struct BIF : RegisterField<SR, 7, 1, ReadWriteMode>
    {
    };
    // Trigger interrupt flag
    struct TIF : RegisterField<SR, 6, 1, ReadWriteMode>
    {
    };
    // COM interrupt flag
    struct COMIF : RegisterField<SR, 5, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 4 interrupt flag
    struct CC4IF : RegisterField<SR, 4, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 interrupt flag
    struct CC3IF : RegisterField<SR, 3, 1, ReadWriteMode>
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
  struct EGR : Register<0x40010014, WriteMode, 0x0>
  {
    // Break generation
    struct BG : RegisterField<EGR, 7, 1, WriteMode>
    {
    };
    // Trigger generation
    struct TG : RegisterField<EGR, 6, 1, WriteMode>
    {
    };
    // Capture/Compare control update generation
    struct COMG : RegisterField<EGR, 5, 1, WriteMode>
    {
    };
    // Capture/compare 4 generation
    struct CC4G : RegisterField<EGR, 4, 1, WriteMode>
    {
    };
    // Capture/compare 3 generation
    struct CC3G : RegisterField<EGR, 3, 1, WriteMode>
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
  struct CCMR1_Output : Register<0x40010018, ReadWriteMode, 0x0>
  {
    // Output Compare 2 clear enable
    struct OC2CE : RegisterField<CCMR1_Output, 15, 1, ReadWriteMode>
    {
    };
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
    // Output Compare 1 clear enable
    struct OC1CE : RegisterField<CCMR1_Output, 7, 1, ReadWriteMode>
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
  struct CCMR1_Input : Register<0x40010018, ReadWriteMode, 0x0>
  {
    // Input capture 2 filter
    struct IC2F : RegisterField<CCMR1_Input, 12, 4, ReadWriteMode>
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

  // capture/compare mode register 2 (output mode)
  struct CCMR2_Output : Register<0x4001001c, ReadWriteMode, 0x0>
  {
    // Output compare 4 clear enable
    struct OC4CE : RegisterField<CCMR2_Output, 15, 1, ReadWriteMode>
    {
    };
    // Output compare 4 mode
    struct OC4M : RegisterField<CCMR2_Output, 12, 3, ReadWriteMode>
    {
    };
    // Output compare 4 preload enable
    struct OC4PE : RegisterField<CCMR2_Output, 11, 1, ReadWriteMode>
    {
    };
    // Output compare 4 fast enable
    struct OC4FE : RegisterField<CCMR2_Output, 10, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 4 selection
    struct CC4S : RegisterField<CCMR2_Output, 8, 2, ReadWriteMode>
    {
    };
    // Output compare 3 clear enable
    struct OC3CE : RegisterField<CCMR2_Output, 7, 1, ReadWriteMode>
    {
    };
    // Output compare 3 mode
    struct OC3M : RegisterField<CCMR2_Output, 4, 3, ReadWriteMode>
    {
    };
    // Output compare 3 preload enable
    struct OC3PE : RegisterField<CCMR2_Output, 3, 1, ReadWriteMode>
    {
    };
    // Output compare 3 fast enable
    struct OC3FE : RegisterField<CCMR2_Output, 2, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 selection
    struct CC3S : RegisterField<CCMR2_Output, 0, 2, ReadWriteMode>
    {
    };
  };

  // capture/compare mode register 2 (input mode)
  struct CCMR2_Input : Register<0x4001001c, ReadWriteMode, 0x0>
  {
    // Input capture 4 filter
    struct IC4F : RegisterField<CCMR2_Input, 12, 4, ReadWriteMode>
    {
    };
    // Input capture 4 prescaler
    struct IC4PSC : RegisterField<CCMR2_Input, 10, 2, ReadWriteMode>
    {
    };
    // Capture/Compare 4 selection
    struct CC4S : RegisterField<CCMR2_Input, 8, 2, ReadWriteMode>
    {
    };
    // Input capture 3 filter
    struct IC3F : RegisterField<CCMR2_Input, 4, 4, ReadWriteMode>
    {
    };
    // Input capture 3 prescaler
    struct IC3PSC : RegisterField<CCMR2_Input, 2, 2, ReadWriteMode>
    {
    };
    // Capture/compare 3 selection
    struct CC3S : RegisterField<CCMR2_Input, 0, 2, ReadWriteMode>
    {
    };
  };

  // capture/compare enable register
  struct CCER : Register<0x40010020, ReadWriteMode, 0x0>
  {
    // Capture/Compare 3 output Polarity
    struct CC4P : RegisterField<CCER, 13, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 4 output enable
    struct CC4E : RegisterField<CCER, 12, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 output Polarity
    struct CC3NP : RegisterField<CCER, 11, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 complementary output enable
    struct CC3NE : RegisterField<CCER, 10, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 output Polarity
    struct CC3P : RegisterField<CCER, 9, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 output enable
    struct CC3E : RegisterField<CCER, 8, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 2 output Polarity
    struct CC2NP : RegisterField<CCER, 7, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 2 complementary output enable
    struct CC2NE : RegisterField<CCER, 6, 1, ReadWriteMode>
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
    // Capture/Compare 1 complementary output enable
    struct CC1NE : RegisterField<CCER, 2, 1, ReadWriteMode>
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
  struct CNT : Register<0x40010024, ReadWriteMode, 0x0>
  {
    // counter value
    struct _CNT : RegisterField<CNT, 0, 16, ReadWriteMode>
    {
    };
  };

  // prescaler
  struct PSC : Register<0x40010028, ReadWriteMode, 0x0>
  {
    // Prescaler value
    struct _PSC : RegisterField<PSC, 0, 16, ReadWriteMode>
    {
    };
  };

  // auto-reload register
  struct ARR : Register<0x4001002c, ReadWriteMode, 0x0>
  {
    // Auto-reload value
    struct _ARR : RegisterField<ARR, 0, 16, ReadWriteMode>
    {
    };
  };

  // repetition counter register
  struct RCR : Register<0x40010030, ReadWriteMode, 0x0>
  {
    // Repetition counter value
    struct REP : RegisterField<RCR, 0, 8, ReadWriteMode>
    {
    };
  };

  // capture/compare register 1
  struct CCR1 : Register<0x40010034, ReadWriteMode, 0x0>
  {
    // Capture/Compare 1 value
    struct _CCR1 : RegisterField<CCR1, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 2
  struct CCR2 : Register<0x40010038, ReadWriteMode, 0x0>
  {
    // Capture/Compare 2 value
    struct _CCR2 : RegisterField<CCR2, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 3
  struct CCR3 : Register<0x4001003c, ReadWriteMode, 0x0>
  {
    // Capture/Compare value
    struct _CCR3 : RegisterField<CCR3, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 4
  struct CCR4 : Register<0x40010040, ReadWriteMode, 0x0>
  {
    // Capture/Compare value
    struct _CCR4 : RegisterField<CCR4, 0, 16, ReadWriteMode>
    {
    };
  };

  // break and dead-time register
  struct BDTR : Register<0x40010044, ReadWriteMode, 0x0>
  {
    // Main output enable
    struct MOE : RegisterField<BDTR, 15, 1, ReadWriteMode>
    {
    };
    // Automatic output enable
    struct AOE : RegisterField<BDTR, 14, 1, ReadWriteMode>
    {
    };
    // Break polarity
    struct BKP : RegisterField<BDTR, 13, 1, ReadWriteMode>
    {
    };
    // Break enable
    struct BKE : RegisterField<BDTR, 12, 1, ReadWriteMode>
    {
    };
    // Off-state selection for Run mode
    struct OSSR : RegisterField<BDTR, 11, 1, ReadWriteMode>
    {
    };
    // Off-state selection for Idle mode
    struct OSSI : RegisterField<BDTR, 10, 1, ReadWriteMode>
    {
    };
    // Lock configuration
    struct LOCK : RegisterField<BDTR, 8, 2, ReadWriteMode>
    {
    };
    // Dead-time generator setup
    struct DTG : RegisterField<BDTR, 0, 8, ReadWriteMode>
    {
    };
  };

  // DMA control register
  struct DCR : Register<0x40010048, ReadWriteMode, 0x0>
  {
    // DMA burst length
    struct DBL : RegisterField<DCR, 8, 5, ReadWriteMode>
    {
    };
    // DMA base address
    struct DBA : RegisterField<DCR, 0, 5, ReadWriteMode>
    {
    };
  };

  // DMA address for full transfer
  struct DMAR : Register<0x4001004c, ReadWriteMode, 0x0>
  {
    // DMA register for burst accesses
    struct DMAB : RegisterField<DMAR, 0, 16, ReadWriteMode>
    {
    };
  };

// Large Registers

};


struct TIM8
{
  static constexpr auto periphNum = 8;

  // control register 1
  struct CR1 : Register<0x40010400, ReadWriteMode, 0x0>
  {
    // Clock division
    struct CKD : RegisterField<CR1, 8, 2, ReadWriteMode>
    {
    };
    // Auto-reload preload enable
    struct ARPE : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
    };
    // Center-aligned mode selection
    struct CMS : RegisterField<CR1, 5, 2, ReadWriteMode>
    {
    };
    // Direction
    struct DIR : RegisterField<CR1, 4, 1, ReadWriteMode>
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
  struct CR2 : Register<0x40010404, ReadWriteMode, 0x0>
  {
    // Output Idle state 4
    struct OIS4 : RegisterField<CR2, 14, 1, ReadWriteMode>
    {
    };
    // Output Idle state 3
    struct OIS3N : RegisterField<CR2, 13, 1, ReadWriteMode>
    {
    };
    // Output Idle state 3
    struct OIS3 : RegisterField<CR2, 12, 1, ReadWriteMode>
    {
    };
    // Output Idle state 2
    struct OIS2N : RegisterField<CR2, 11, 1, ReadWriteMode>
    {
    };
    // Output Idle state 2
    struct OIS2 : RegisterField<CR2, 10, 1, ReadWriteMode>
    {
    };
    // Output Idle state 1
    struct OIS1N : RegisterField<CR2, 9, 1, ReadWriteMode>
    {
    };
    // Output Idle state 1
    struct OIS1 : RegisterField<CR2, 8, 1, ReadWriteMode>
    {
    };
    // TI1 selection
    struct TI1S : RegisterField<CR2, 7, 1, ReadWriteMode>
    {
    };
    // Master mode selection
    struct MMS : RegisterField<CR2, 4, 3, ReadWriteMode>
    {
    };
    // Capture/compare DMA selection
    struct CCDS : RegisterField<CR2, 3, 1, ReadWriteMode>
    {
    };
    // Capture/compare control update selection
    struct CCUS : RegisterField<CR2, 2, 1, ReadWriteMode>
    {
    };
    // Capture/compare preloaded control
    struct CCPC : RegisterField<CR2, 0, 1, ReadWriteMode>
    {
    };
  };

  // slave mode control register
  struct SMCR : Register<0x40010408, ReadWriteMode, 0x0>
  {
    // External trigger polarity
    struct ETP : RegisterField<SMCR, 15, 1, ReadWriteMode>
    {
    };
    // External clock enable
    struct ECE : RegisterField<SMCR, 14, 1, ReadWriteMode>
    {
    };
    // External trigger prescaler
    struct ETPS : RegisterField<SMCR, 12, 2, ReadWriteMode>
    {
    };
    // External trigger filter
    struct ETF : RegisterField<SMCR, 8, 4, ReadWriteMode>
    {
    };
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
  struct DIER : Register<0x4001040c, ReadWriteMode, 0x0>
  {
    // Trigger DMA request enable
    struct TDE : RegisterField<DIER, 14, 1, ReadWriteMode>
    {
    };
    // COM DMA request enable
    struct COMDE : RegisterField<DIER, 13, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 4 DMA request enable
    struct CC4DE : RegisterField<DIER, 12, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 DMA request enable
    struct CC3DE : RegisterField<DIER, 11, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 2 DMA request enable
    struct CC2DE : RegisterField<DIER, 10, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 1 DMA request enable
    struct CC1DE : RegisterField<DIER, 9, 1, ReadWriteMode>
    {
    };
    // Update DMA request enable
    struct UDE : RegisterField<DIER, 8, 1, ReadWriteMode>
    {
    };
    // Break interrupt enable
    struct BIE : RegisterField<DIER, 7, 1, ReadWriteMode>
    {
    };
    // Trigger interrupt enable
    struct TIE : RegisterField<DIER, 6, 1, ReadWriteMode>
    {
    };
    // COM interrupt enable
    struct COMIE : RegisterField<DIER, 5, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 4 interrupt enable
    struct CC4IE : RegisterField<DIER, 4, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 interrupt enable
    struct CC3IE : RegisterField<DIER, 3, 1, ReadWriteMode>
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
  struct SR : Register<0x40010410, ReadWriteMode, 0x0>
  {
    // Capture/Compare 4 overcapture flag
    struct CC4OF : RegisterField<SR, 12, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 overcapture flag
    struct CC3OF : RegisterField<SR, 11, 1, ReadWriteMode>
    {
    };
    // Capture/compare 2 overcapture flag
    struct CC2OF : RegisterField<SR, 10, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 1 overcapture flag
    struct CC1OF : RegisterField<SR, 9, 1, ReadWriteMode>
    {
    };
    // Break interrupt flag
    struct BIF : RegisterField<SR, 7, 1, ReadWriteMode>
    {
    };
    // Trigger interrupt flag
    struct TIF : RegisterField<SR, 6, 1, ReadWriteMode>
    {
    };
    // COM interrupt flag
    struct COMIF : RegisterField<SR, 5, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 4 interrupt flag
    struct CC4IF : RegisterField<SR, 4, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 interrupt flag
    struct CC3IF : RegisterField<SR, 3, 1, ReadWriteMode>
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
  struct EGR : Register<0x40010414, WriteMode, 0x0>
  {
    // Break generation
    struct BG : RegisterField<EGR, 7, 1, WriteMode>
    {
    };
    // Trigger generation
    struct TG : RegisterField<EGR, 6, 1, WriteMode>
    {
    };
    // Capture/Compare control update generation
    struct COMG : RegisterField<EGR, 5, 1, WriteMode>
    {
    };
    // Capture/compare 4 generation
    struct CC4G : RegisterField<EGR, 4, 1, WriteMode>
    {
    };
    // Capture/compare 3 generation
    struct CC3G : RegisterField<EGR, 3, 1, WriteMode>
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
  struct CCMR1_Output : Register<0x40010418, ReadWriteMode, 0x0>
  {
    // Output Compare 2 clear enable
    struct OC2CE : RegisterField<CCMR1_Output, 15, 1, ReadWriteMode>
    {
    };
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
    // Output Compare 1 clear enable
    struct OC1CE : RegisterField<CCMR1_Output, 7, 1, ReadWriteMode>
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
  struct CCMR1_Input : Register<0x40010418, ReadWriteMode, 0x0>
  {
    // Input capture 2 filter
    struct IC2F : RegisterField<CCMR1_Input, 12, 4, ReadWriteMode>
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

  // capture/compare mode register 2 (output mode)
  struct CCMR2_Output : Register<0x4001041c, ReadWriteMode, 0x0>
  {
    // Output compare 4 clear enable
    struct OC4CE : RegisterField<CCMR2_Output, 15, 1, ReadWriteMode>
    {
    };
    // Output compare 4 mode
    struct OC4M : RegisterField<CCMR2_Output, 12, 3, ReadWriteMode>
    {
    };
    // Output compare 4 preload enable
    struct OC4PE : RegisterField<CCMR2_Output, 11, 1, ReadWriteMode>
    {
    };
    // Output compare 4 fast enable
    struct OC4FE : RegisterField<CCMR2_Output, 10, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 4 selection
    struct CC4S : RegisterField<CCMR2_Output, 8, 2, ReadWriteMode>
    {
    };
    // Output compare 3 clear enable
    struct OC3CE : RegisterField<CCMR2_Output, 7, 1, ReadWriteMode>
    {
    };
    // Output compare 3 mode
    struct OC3M : RegisterField<CCMR2_Output, 4, 3, ReadWriteMode>
    {
    };
    // Output compare 3 preload enable
    struct OC3PE : RegisterField<CCMR2_Output, 3, 1, ReadWriteMode>
    {
    };
    // Output compare 3 fast enable
    struct OC3FE : RegisterField<CCMR2_Output, 2, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 selection
    struct CC3S : RegisterField<CCMR2_Output, 0, 2, ReadWriteMode>
    {
    };
  };

  // capture/compare mode register 2 (input mode)
  struct CCMR2_Input : Register<0x4001041c, ReadWriteMode, 0x0>
  {
    // Input capture 4 filter
    struct IC4F : RegisterField<CCMR2_Input, 12, 4, ReadWriteMode>
    {
    };
    // Input capture 4 prescaler
    struct IC4PSC : RegisterField<CCMR2_Input, 10, 2, ReadWriteMode>
    {
    };
    // Capture/Compare 4 selection
    struct CC4S : RegisterField<CCMR2_Input, 8, 2, ReadWriteMode>
    {
    };
    // Input capture 3 filter
    struct IC3F : RegisterField<CCMR2_Input, 4, 4, ReadWriteMode>
    {
    };
    // Input capture 3 prescaler
    struct IC3PSC : RegisterField<CCMR2_Input, 2, 2, ReadWriteMode>
    {
    };
    // Capture/compare 3 selection
    struct CC3S : RegisterField<CCMR2_Input, 0, 2, ReadWriteMode>
    {
    };
  };

  // capture/compare enable register
  struct CCER : Register<0x40010420, ReadWriteMode, 0x0>
  {
    // Capture/Compare 3 output Polarity
    struct CC4P : RegisterField<CCER, 13, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 4 output enable
    struct CC4E : RegisterField<CCER, 12, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 output Polarity
    struct CC3NP : RegisterField<CCER, 11, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 complementary output enable
    struct CC3NE : RegisterField<CCER, 10, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 output Polarity
    struct CC3P : RegisterField<CCER, 9, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 3 output enable
    struct CC3E : RegisterField<CCER, 8, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 2 output Polarity
    struct CC2NP : RegisterField<CCER, 7, 1, ReadWriteMode>
    {
    };
    // Capture/Compare 2 complementary output enable
    struct CC2NE : RegisterField<CCER, 6, 1, ReadWriteMode>
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
    // Capture/Compare 1 complementary output enable
    struct CC1NE : RegisterField<CCER, 2, 1, ReadWriteMode>
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
  struct CNT : Register<0x40010424, ReadWriteMode, 0x0>
  {
    // counter value
    struct _CNT : RegisterField<CNT, 0, 16, ReadWriteMode>
    {
    };
  };

  // prescaler
  struct PSC : Register<0x40010428, ReadWriteMode, 0x0>
  {
    // Prescaler value
    struct _PSC : RegisterField<PSC, 0, 16, ReadWriteMode>
    {
    };
  };

  // auto-reload register
  struct ARR : Register<0x4001042c, ReadWriteMode, 0x0>
  {
    // Auto-reload value
    struct _ARR : RegisterField<ARR, 0, 16, ReadWriteMode>
    {
    };
  };

  // repetition counter register
  struct RCR : Register<0x40010430, ReadWriteMode, 0x0>
  {
    // Repetition counter value
    struct REP : RegisterField<RCR, 0, 8, ReadWriteMode>
    {
    };
  };

  // capture/compare register 1
  struct CCR1 : Register<0x40010434, ReadWriteMode, 0x0>
  {
    // Capture/Compare 1 value
    struct _CCR1 : RegisterField<CCR1, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 2
  struct CCR2 : Register<0x40010438, ReadWriteMode, 0x0>
  {
    // Capture/Compare 2 value
    struct _CCR2 : RegisterField<CCR2, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 3
  struct CCR3 : Register<0x4001043c, ReadWriteMode, 0x0>
  {
    // Capture/Compare value
    struct _CCR3 : RegisterField<CCR3, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 4
  struct CCR4 : Register<0x40010440, ReadWriteMode, 0x0>
  {
    // Capture/Compare value
    struct _CCR4 : RegisterField<CCR4, 0, 16, ReadWriteMode>
    {
    };
  };

  // break and dead-time register
  struct BDTR : Register<0x40010444, ReadWriteMode, 0x0>
  {
    // Main output enable
    struct MOE : RegisterField<BDTR, 15, 1, ReadWriteMode>
    {
    };
    // Automatic output enable
    struct AOE : RegisterField<BDTR, 14, 1, ReadWriteMode>
    {
    };
    // Break polarity
    struct BKP : RegisterField<BDTR, 13, 1, ReadWriteMode>
    {
    };
    // Break enable
    struct BKE : RegisterField<BDTR, 12, 1, ReadWriteMode>
    {
    };
    // Off-state selection for Run mode
    struct OSSR : RegisterField<BDTR, 11, 1, ReadWriteMode>
    {
    };
    // Off-state selection for Idle mode
    struct OSSI : RegisterField<BDTR, 10, 1, ReadWriteMode>
    {
    };
    // Lock configuration
    struct LOCK : RegisterField<BDTR, 8, 2, ReadWriteMode>
    {
    };
    // Dead-time generator setup
    struct DTG : RegisterField<BDTR, 0, 8, ReadWriteMode>
    {
    };
  };

  // DMA control register
  struct DCR : Register<0x40010448, ReadWriteMode, 0x0>
  {
    // DMA burst length
    struct DBL : RegisterField<DCR, 8, 5, ReadWriteMode>
    {
    };
    // DMA base address
    struct DBA : RegisterField<DCR, 0, 5, ReadWriteMode>
    {
    };
  };

  // DMA address for full transfer
  struct DMAR : Register<0x4001044c, ReadWriteMode, 0x0>
  {
    // DMA register for burst accesses
    struct DMAB : RegisterField<DMAR, 0, 16, ReadWriteMode>
    {
    };
  };

// Large Registers

};


