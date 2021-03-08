/******************************************************************************
* Filename : tim3_4_registers.hpp
*
* Details  : General purpose timers
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct TIM3
{
  static constexpr auto periphNum = 3;

  // control register 1
  struct CR1 : Register<0x40000400, ReadWriteMode, 0x0>
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
  struct CR2 : Register<0x40000404, ReadWriteMode, 0x0>
  {
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
  };

  // slave mode control register
  struct SMCR : Register<0x40000408, ReadWriteMode, 0x0>
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
  struct DIER : Register<0x4000040c, ReadWriteMode, 0x0>
  {
    // Trigger DMA request enable
    struct TDE : RegisterField<DIER, 14, 1, ReadWriteMode>
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
    // Trigger interrupt enable
    struct TIE : RegisterField<DIER, 6, 1, ReadWriteMode>
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
  struct SR : Register<0x40000410, ReadWriteMode, 0x0>
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
    // Trigger interrupt flag
    struct TIF : RegisterField<SR, 6, 1, ReadWriteMode>
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
  struct EGR : Register<0x40000414, WriteMode, 0x0>
  {
    // Trigger generation
    struct TG : RegisterField<EGR, 6, 1, WriteMode>
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
  struct CCMR1_Output : Register<0x40000418, ReadWriteMode, 0x0>
  {
    // OC2CE
    struct OC2CE : RegisterField<CCMR1_Output, 15, 1, ReadWriteMode>
    {
    };
    // OC2M
    struct OC2M : RegisterField<CCMR1_Output, 12, 3, ReadWriteMode>
    {
    };
    // OC2PE
    struct OC2PE : RegisterField<CCMR1_Output, 11, 1, ReadWriteMode>
    {
    };
    // OC2FE
    struct OC2FE : RegisterField<CCMR1_Output, 10, 1, ReadWriteMode>
    {
    };
    // CC2S
    struct CC2S : RegisterField<CCMR1_Output, 8, 2, ReadWriteMode>
    {
    };
    // OC1CE
    struct OC1CE : RegisterField<CCMR1_Output, 7, 1, ReadWriteMode>
    {
    };
    // OC1M
    struct OC1M : RegisterField<CCMR1_Output, 4, 3, ReadWriteMode>
    {
    };
    // OC1PE
    struct OC1PE : RegisterField<CCMR1_Output, 3, 1, ReadWriteMode>
    {
    };
    // OC1FE
    struct OC1FE : RegisterField<CCMR1_Output, 2, 1, ReadWriteMode>
    {
    };
    // CC1S
    struct CC1S : RegisterField<CCMR1_Output, 0, 2, ReadWriteMode>
    {
    };
  };

  // capture/compare mode register 1 (input mode)
  struct CCMR1_Input : Register<0x40000418, ReadWriteMode, 0x0>
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
  struct CCMR2_Output : Register<0x4000041c, ReadWriteMode, 0x0>
  {
    // O24CE
    struct O24CE : RegisterField<CCMR2_Output, 15, 1, ReadWriteMode>
    {
    };
    // OC4M
    struct OC4M : RegisterField<CCMR2_Output, 12, 3, ReadWriteMode>
    {
    };
    // OC4PE
    struct OC4PE : RegisterField<CCMR2_Output, 11, 1, ReadWriteMode>
    {
    };
    // OC4FE
    struct OC4FE : RegisterField<CCMR2_Output, 10, 1, ReadWriteMode>
    {
    };
    // CC4S
    struct CC4S : RegisterField<CCMR2_Output, 8, 2, ReadWriteMode>
    {
    };
    // OC3CE
    struct OC3CE : RegisterField<CCMR2_Output, 7, 1, ReadWriteMode>
    {
    };
    // OC3M
    struct OC3M : RegisterField<CCMR2_Output, 4, 3, ReadWriteMode>
    {
    };
    // OC3PE
    struct OC3PE : RegisterField<CCMR2_Output, 3, 1, ReadWriteMode>
    {
    };
    // OC3FE
    struct OC3FE : RegisterField<CCMR2_Output, 2, 1, ReadWriteMode>
    {
    };
    // CC3S
    struct CC3S : RegisterField<CCMR2_Output, 0, 2, ReadWriteMode>
    {
    };
  };

  // capture/compare mode register 2 (input mode)
  struct CCMR2_Input : Register<0x4000041c, ReadWriteMode, 0x0>
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
  struct CCER : Register<0x40000420, ReadWriteMode, 0x0>
  {
    // Capture/Compare 4 output Polarity
    struct CC4NP : RegisterField<CCER, 15, 1, ReadWriteMode>
    {
    };
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
  struct CNT : Register<0x40000424, ReadWriteMode, 0x0>
  {
    // High counter value
    struct CNT_H : RegisterField<CNT, 16, 16, ReadWriteMode>
    {
    };
    // Low counter value
    struct CNT_L : RegisterField<CNT, 0, 16, ReadWriteMode>
    {
    };
  };

  // prescaler
  struct PSC : Register<0x40000428, ReadWriteMode, 0x0>
  {
    // Prescaler value
    struct _PSC : RegisterField<PSC, 0, 16, ReadWriteMode>
    {
    };
  };

  // auto-reload register
  struct ARR : Register<0x4000042c, ReadWriteMode, 0x0>
  {
    // High Auto-reload value
    struct ARR_H : RegisterField<ARR, 16, 16, ReadWriteMode>
    {
    };
    // Low Auto-reload value
    struct ARR_L : RegisterField<ARR, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 1
  struct CCR1 : Register<0x40000434, ReadWriteMode, 0x0>
  {
    // High Capture/Compare 1 value
    struct CCR1_H : RegisterField<CCR1, 16, 16, ReadWriteMode>
    {
    };
    // Low Capture/Compare 1 value
    struct CCR1_L : RegisterField<CCR1, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 2
  struct CCR2 : Register<0x40000438, ReadWriteMode, 0x0>
  {
    // High Capture/Compare 2 value
    struct CCR2_H : RegisterField<CCR2, 16, 16, ReadWriteMode>
    {
    };
    // Low Capture/Compare 2 value
    struct CCR2_L : RegisterField<CCR2, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 3
  struct CCR3 : Register<0x4000043c, ReadWriteMode, 0x0>
  {
    // High Capture/Compare value
    struct CCR3_H : RegisterField<CCR3, 16, 16, ReadWriteMode>
    {
    };
    // Low Capture/Compare value
    struct CCR3_L : RegisterField<CCR3, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 4
  struct CCR4 : Register<0x40000440, ReadWriteMode, 0x0>
  {
    // High Capture/Compare value
    struct CCR4_H : RegisterField<CCR4, 16, 16, ReadWriteMode>
    {
    };
    // Low Capture/Compare value
    struct CCR4_L : RegisterField<CCR4, 0, 16, ReadWriteMode>
    {
    };
  };

  // DMA control register
  struct DCR : Register<0x40000448, ReadWriteMode, 0x0>
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
  struct DMAR : Register<0x4000044c, ReadWriteMode, 0x0>
  {
    // DMA register for burst accesses
    struct DMAB : RegisterField<DMAR, 0, 16, ReadWriteMode>
    {
    };
  };

// Large Registers

};


struct TIM4
{
  static constexpr auto periphNum = 4;

  // control register 1
  struct CR1 : Register<0x40000800, ReadWriteMode, 0x0>
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
  struct CR2 : Register<0x40000804, ReadWriteMode, 0x0>
  {
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
  };

  // slave mode control register
  struct SMCR : Register<0x40000808, ReadWriteMode, 0x0>
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
  struct DIER : Register<0x4000080c, ReadWriteMode, 0x0>
  {
    // Trigger DMA request enable
    struct TDE : RegisterField<DIER, 14, 1, ReadWriteMode>
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
    // Trigger interrupt enable
    struct TIE : RegisterField<DIER, 6, 1, ReadWriteMode>
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
  struct SR : Register<0x40000810, ReadWriteMode, 0x0>
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
    // Trigger interrupt flag
    struct TIF : RegisterField<SR, 6, 1, ReadWriteMode>
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
  struct EGR : Register<0x40000814, WriteMode, 0x0>
  {
    // Trigger generation
    struct TG : RegisterField<EGR, 6, 1, WriteMode>
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
  struct CCMR1_Output : Register<0x40000818, ReadWriteMode, 0x0>
  {
    // OC2CE
    struct OC2CE : RegisterField<CCMR1_Output, 15, 1, ReadWriteMode>
    {
    };
    // OC2M
    struct OC2M : RegisterField<CCMR1_Output, 12, 3, ReadWriteMode>
    {
    };
    // OC2PE
    struct OC2PE : RegisterField<CCMR1_Output, 11, 1, ReadWriteMode>
    {
    };
    // OC2FE
    struct OC2FE : RegisterField<CCMR1_Output, 10, 1, ReadWriteMode>
    {
    };
    // CC2S
    struct CC2S : RegisterField<CCMR1_Output, 8, 2, ReadWriteMode>
    {
    };
    // OC1CE
    struct OC1CE : RegisterField<CCMR1_Output, 7, 1, ReadWriteMode>
    {
    };
    // OC1M
    struct OC1M : RegisterField<CCMR1_Output, 4, 3, ReadWriteMode>
    {
    };
    // OC1PE
    struct OC1PE : RegisterField<CCMR1_Output, 3, 1, ReadWriteMode>
    {
    };
    // OC1FE
    struct OC1FE : RegisterField<CCMR1_Output, 2, 1, ReadWriteMode>
    {
    };
    // CC1S
    struct CC1S : RegisterField<CCMR1_Output, 0, 2, ReadWriteMode>
    {
    };
  };

  // capture/compare mode register 1 (input mode)
  struct CCMR1_Input : Register<0x40000818, ReadWriteMode, 0x0>
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
  struct CCMR2_Output : Register<0x4000081c, ReadWriteMode, 0x0>
  {
    // O24CE
    struct O24CE : RegisterField<CCMR2_Output, 15, 1, ReadWriteMode>
    {
    };
    // OC4M
    struct OC4M : RegisterField<CCMR2_Output, 12, 3, ReadWriteMode>
    {
    };
    // OC4PE
    struct OC4PE : RegisterField<CCMR2_Output, 11, 1, ReadWriteMode>
    {
    };
    // OC4FE
    struct OC4FE : RegisterField<CCMR2_Output, 10, 1, ReadWriteMode>
    {
    };
    // CC4S
    struct CC4S : RegisterField<CCMR2_Output, 8, 2, ReadWriteMode>
    {
    };
    // OC3CE
    struct OC3CE : RegisterField<CCMR2_Output, 7, 1, ReadWriteMode>
    {
    };
    // OC3M
    struct OC3M : RegisterField<CCMR2_Output, 4, 3, ReadWriteMode>
    {
    };
    // OC3PE
    struct OC3PE : RegisterField<CCMR2_Output, 3, 1, ReadWriteMode>
    {
    };
    // OC3FE
    struct OC3FE : RegisterField<CCMR2_Output, 2, 1, ReadWriteMode>
    {
    };
    // CC3S
    struct CC3S : RegisterField<CCMR2_Output, 0, 2, ReadWriteMode>
    {
    };
  };

  // capture/compare mode register 2 (input mode)
  struct CCMR2_Input : Register<0x4000081c, ReadWriteMode, 0x0>
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
  struct CCER : Register<0x40000820, ReadWriteMode, 0x0>
  {
    // Capture/Compare 4 output Polarity
    struct CC4NP : RegisterField<CCER, 15, 1, ReadWriteMode>
    {
    };
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
  struct CNT : Register<0x40000824, ReadWriteMode, 0x0>
  {
    // High counter value
    struct CNT_H : RegisterField<CNT, 16, 16, ReadWriteMode>
    {
    };
    // Low counter value
    struct CNT_L : RegisterField<CNT, 0, 16, ReadWriteMode>
    {
    };
  };

  // prescaler
  struct PSC : Register<0x40000828, ReadWriteMode, 0x0>
  {
    // Prescaler value
    struct _PSC : RegisterField<PSC, 0, 16, ReadWriteMode>
    {
    };
  };

  // auto-reload register
  struct ARR : Register<0x4000082c, ReadWriteMode, 0x0>
  {
    // High Auto-reload value
    struct ARR_H : RegisterField<ARR, 16, 16, ReadWriteMode>
    {
    };
    // Low Auto-reload value
    struct ARR_L : RegisterField<ARR, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 1
  struct CCR1 : Register<0x40000834, ReadWriteMode, 0x0>
  {
    // High Capture/Compare 1 value
    struct CCR1_H : RegisterField<CCR1, 16, 16, ReadWriteMode>
    {
    };
    // Low Capture/Compare 1 value
    struct CCR1_L : RegisterField<CCR1, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 2
  struct CCR2 : Register<0x40000838, ReadWriteMode, 0x0>
  {
    // High Capture/Compare 2 value
    struct CCR2_H : RegisterField<CCR2, 16, 16, ReadWriteMode>
    {
    };
    // Low Capture/Compare 2 value
    struct CCR2_L : RegisterField<CCR2, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 3
  struct CCR3 : Register<0x4000083c, ReadWriteMode, 0x0>
  {
    // High Capture/Compare value
    struct CCR3_H : RegisterField<CCR3, 16, 16, ReadWriteMode>
    {
    };
    // Low Capture/Compare value
    struct CCR3_L : RegisterField<CCR3, 0, 16, ReadWriteMode>
    {
    };
  };

  // capture/compare register 4
  struct CCR4 : Register<0x40000840, ReadWriteMode, 0x0>
  {
    // High Capture/Compare value
    struct CCR4_H : RegisterField<CCR4, 16, 16, ReadWriteMode>
    {
    };
    // Low Capture/Compare value
    struct CCR4_L : RegisterField<CCR4, 0, 16, ReadWriteMode>
    {
    };
  };

  // DMA control register
  struct DCR : Register<0x40000848, ReadWriteMode, 0x0>
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
  struct DMAR : Register<0x4000084c, ReadWriteMode, 0x0>
  {
    // DMA register for burst accesses
    struct DMAB : RegisterField<DMAR, 0, 16, ReadWriteMode>
    {
    };
  };

// Large Registers

};


