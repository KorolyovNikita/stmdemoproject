/******************************************************************************
* Filename : adc_registers.hpp
*
* Details  : Analog-to-digital converter
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct ADC1
{
  static constexpr auto periphNum = 1;

  // status register
  struct SR : Register<0x40012000, ReadWriteMode, 0x0>
  {
    // Overrun
    struct OVR : RegisterField<SR, 5, 1, ReadWriteMode>
    {
    };
    // Regular channel start flag
    struct STRT : RegisterField<SR, 4, 1, ReadWriteMode>
    {
    };
    // Injected channel start flag
    struct JSTRT : RegisterField<SR, 3, 1, ReadWriteMode>
    {
    };
    // Injected channel end of conversion
    struct JEOC : RegisterField<SR, 2, 1, ReadWriteMode>
    {
    };
    // Regular channel end of conversion
    struct EOC : RegisterField<SR, 1, 1, ReadWriteMode>
    {
    };
    // Analog watchdog flag
    struct AWD : RegisterField<SR, 0, 1, ReadWriteMode>
    {
    };
  };

  // control register 1
  struct CR1 : Register<0x40012004, ReadWriteMode, 0x0>
  {
    // Overrun interrupt enable
    struct OVRIE : RegisterField<CR1, 26, 1, ReadWriteMode>
    {
    };
    // Resolution
    struct RES : RegisterField<CR1, 24, 2, ReadWriteMode>
    {
    };
    // Analog watchdog enable on regular channels
    struct AWDEN : RegisterField<CR1, 23, 1, ReadWriteMode>
    {
    };
    // Analog watchdog enable on injected channels
    struct JAWDEN : RegisterField<CR1, 22, 1, ReadWriteMode>
    {
    };
    // Discontinuous mode channel count
    struct DISCNUM : RegisterField<CR1, 13, 3, ReadWriteMode>
    {
    };
    // Discontinuous mode on injected channels
    struct JDISCEN : RegisterField<CR1, 12, 1, ReadWriteMode>
    {
    };
    // Discontinuous mode on regular channels
    struct DISCEN : RegisterField<CR1, 11, 1, ReadWriteMode>
    {
    };
    // Automatic injected group conversion
    struct JAUTO : RegisterField<CR1, 10, 1, ReadWriteMode>
    {
    };
    // Enable the watchdog on a single channel in scan mode
    struct AWDSGL : RegisterField<CR1, 9, 1, ReadWriteMode>
    {
    };
    // Scan mode
    struct SCAN : RegisterField<CR1, 8, 1, ReadWriteMode>
    {
    };
    // Interrupt enable for injected channels
    struct JEOCIE : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
    };
    // Analog watchdog interrupt enable
    struct AWDIE : RegisterField<CR1, 6, 1, ReadWriteMode>
    {
    };
    // Interrupt enable for EOC
    struct EOCIE : RegisterField<CR1, 5, 1, ReadWriteMode>
    {
    };
    // Analog watchdog channel select bits
    struct AWDCH : RegisterField<CR1, 0, 5, ReadWriteMode>
    {
    };
  };

  // control register 2
  struct CR2 : Register<0x40012008, ReadWriteMode, 0x0>
  {
    // Start conversion of regular channels
    struct SWSTART : RegisterField<CR2, 30, 1, ReadWriteMode>
    {
    };
    // External trigger enable for regular channels
    struct EXTEN : RegisterField<CR2, 28, 2, ReadWriteMode>
    {
    };
    // External event select for regular group
    struct EXTSEL : RegisterField<CR2, 24, 4, ReadWriteMode>
    {
    };
    // Start conversion of injected channels
    struct JSWSTART : RegisterField<CR2, 22, 1, ReadWriteMode>
    {
    };
    // External trigger enable for injected channels
    struct JEXTEN : RegisterField<CR2, 20, 2, ReadWriteMode>
    {
    };
    // External event select for injected group
    struct JEXTSEL : RegisterField<CR2, 16, 4, ReadWriteMode>
    {
    };
    // Data alignment
    struct ALIGN : RegisterField<CR2, 11, 1, ReadWriteMode>
    {
    };
    // End of conversion selection
    struct EOCS : RegisterField<CR2, 10, 1, ReadWriteMode>
    {
    };
    // DMA disable selection (for single ADC mode)
    struct DDS : RegisterField<CR2, 9, 1, ReadWriteMode>
    {
    };
    // Direct memory access mode (for single ADC mode)
    struct DMA : RegisterField<CR2, 8, 1, ReadWriteMode>
    {
    };
    // Continuous conversion
    struct CONT : RegisterField<CR2, 1, 1, ReadWriteMode>
    {
    };
    // A/D Converter ON / OFF
    struct ADON : RegisterField<CR2, 0, 1, ReadWriteMode>
    {
    };
  };

  // sample time register 1
  struct SMPR1 : Register<0x4001200c, ReadWriteMode, 0x0>
  {
    // Sample time bits
    struct SMPx_x : RegisterField<SMPR1, 0, 32, ReadWriteMode>
    {
    };
  };

  // sample time register 2
  struct SMPR2 : Register<0x40012010, ReadWriteMode, 0x0>
  {
    // Sample time bits
    struct SMPx_x : RegisterField<SMPR2, 0, 32, ReadWriteMode>
    {
    };
  };

  // injected channel data offset register x
  struct JOFR1 : Register<0x40012014, ReadWriteMode, 0x0>
  {
    // Data offset for injected channel x
    struct JOFFSET1 : RegisterField<JOFR1, 0, 12, ReadWriteMode>
    {
    };
  };

  // injected channel data offset register x
  struct JOFR2 : Register<0x40012018, ReadWriteMode, 0x0>
  {
    // Data offset for injected channel x
    struct JOFFSET2 : RegisterField<JOFR2, 0, 12, ReadWriteMode>
    {
    };
  };

  // injected channel data offset register x
  struct JOFR3 : Register<0x4001201c, ReadWriteMode, 0x0>
  {
    // Data offset for injected channel x
    struct JOFFSET3 : RegisterField<JOFR3, 0, 12, ReadWriteMode>
    {
    };
  };

  // injected channel data offset register x
  struct JOFR4 : Register<0x40012020, ReadWriteMode, 0x0>
  {
    // Data offset for injected channel x
    struct JOFFSET4 : RegisterField<JOFR4, 0, 12, ReadWriteMode>
    {
    };
  };

  // watchdog higher threshold register
  struct HTR : Register<0x40012024, ReadWriteMode, 0xfff>
  {
    // Analog watchdog higher threshold
    struct HT : RegisterField<HTR, 0, 12, ReadWriteMode>
    {
    };
  };

  // watchdog lower threshold register
  struct LTR : Register<0x40012028, ReadWriteMode, 0x0>
  {
    // Analog watchdog lower threshold
    struct LT : RegisterField<LTR, 0, 12, ReadWriteMode>
    {
    };
  };

  // regular sequence register 1
  struct SQR1 : Register<0x4001202c, ReadWriteMode, 0x0>
  {
    // Regular channel sequence length
    struct L : RegisterField<SQR1, 20, 4, ReadWriteMode>
    {
    };
    // 16th conversion in regular sequence
    struct SQ16 : RegisterField<SQR1, 15, 5, ReadWriteMode>
    {
    };
    // 15th conversion in regular sequence
    struct SQ15 : RegisterField<SQR1, 10, 5, ReadWriteMode>
    {
    };
    // 14th conversion in regular sequence
    struct SQ14 : RegisterField<SQR1, 5, 5, ReadWriteMode>
    {
    };
    // 13th conversion in regular sequence
    struct SQ13 : RegisterField<SQR1, 0, 5, ReadWriteMode>
    {
    };
  };

  // regular sequence register 2
  struct SQR2 : Register<0x40012030, ReadWriteMode, 0x0>
  {
    // 12th conversion in regular sequence
    struct SQ12 : RegisterField<SQR2, 25, 5, ReadWriteMode>
    {
    };
    // 11th conversion in regular sequence
    struct SQ11 : RegisterField<SQR2, 20, 5, ReadWriteMode>
    {
    };
    // 10th conversion in regular sequence
    struct SQ10 : RegisterField<SQR2, 15, 5, ReadWriteMode>
    {
    };
    // 9th conversion in regular sequence
    struct SQ9 : RegisterField<SQR2, 10, 5, ReadWriteMode>
    {
    };
    // 8th conversion in regular sequence
    struct SQ8 : RegisterField<SQR2, 5, 5, ReadWriteMode>
    {
    };
    // 7th conversion in regular sequence
    struct SQ7 : RegisterField<SQR2, 0, 5, ReadWriteMode>
    {
    };
  };

  // regular sequence register 3
  struct SQR3 : Register<0x40012034, ReadWriteMode, 0x0>
  {
    // 6th conversion in regular sequence
    struct SQ6 : RegisterField<SQR3, 25, 5, ReadWriteMode>
    {
    };
    // 5th conversion in regular sequence
    struct SQ5 : RegisterField<SQR3, 20, 5, ReadWriteMode>
    {
    };
    // 4th conversion in regular sequence
    struct SQ4 : RegisterField<SQR3, 15, 5, ReadWriteMode>
    {
    };
    // 3rd conversion in regular sequence
    struct SQ3 : RegisterField<SQR3, 10, 5, ReadWriteMode>
    {
    };
    // 2nd conversion in regular sequence
    struct SQ2 : RegisterField<SQR3, 5, 5, ReadWriteMode>
    {
    };
    // 1st conversion in regular sequence
    struct SQ1 : RegisterField<SQR3, 0, 5, ReadWriteMode>
    {
    };
  };

  // injected sequence register
  struct JSQR : Register<0x40012038, ReadWriteMode, 0x0>
  {
    // Injected sequence length
    struct JL : RegisterField<JSQR, 20, 2, ReadWriteMode>
    {
    };
    // 4th conversion in injected sequence
    struct JSQ4 : RegisterField<JSQR, 15, 5, ReadWriteMode>
    {
    };
    // 3rd conversion in injected sequence
    struct JSQ3 : RegisterField<JSQR, 10, 5, ReadWriteMode>
    {
    };
    // 2nd conversion in injected sequence
    struct JSQ2 : RegisterField<JSQR, 5, 5, ReadWriteMode>
    {
    };
    // 1st conversion in injected sequence
    struct JSQ1 : RegisterField<JSQR, 0, 5, ReadWriteMode>
    {
    };
  };

  // injected data register x
  struct JDR1 : Register<0x4001203c, ReadMode, 0x0>
  {
    // Injected data
    struct JDATA : RegisterField<JDR1, 0, 16, ReadMode>
    {
    };
  };

  // injected data register x
  struct JDR2 : Register<0x40012040, ReadMode, 0x0>
  {
    // Injected data
    struct JDATA : RegisterField<JDR2, 0, 16, ReadMode>
    {
    };
  };

  // injected data register x
  struct JDR3 : Register<0x40012044, ReadMode, 0x0>
  {
    // Injected data
    struct JDATA : RegisterField<JDR3, 0, 16, ReadMode>
    {
    };
  };

  // injected data register x
  struct JDR4 : Register<0x40012048, ReadMode, 0x0>
  {
    // Injected data
    struct JDATA : RegisterField<JDR4, 0, 16, ReadMode>
    {
    };
  };

  // regular data register
  struct DR : Register<0x4001204c, ReadMode, 0x0>
  {
    // Regular data
    struct DATA : RegisterField<DR, 0, 16, ReadMode>
    {
    };
  };

// Large Registers

};


struct ADC2
{
  static constexpr auto periphNum = 2;

  // status register
  struct SR : Register<0x40012100, ReadWriteMode, 0x0>
  {
    // Overrun
    struct OVR : RegisterField<SR, 5, 1, ReadWriteMode>
    {
    };
    // Regular channel start flag
    struct STRT : RegisterField<SR, 4, 1, ReadWriteMode>
    {
    };
    // Injected channel start flag
    struct JSTRT : RegisterField<SR, 3, 1, ReadWriteMode>
    {
    };
    // Injected channel end of conversion
    struct JEOC : RegisterField<SR, 2, 1, ReadWriteMode>
    {
    };
    // Regular channel end of conversion
    struct EOC : RegisterField<SR, 1, 1, ReadWriteMode>
    {
    };
    // Analog watchdog flag
    struct AWD : RegisterField<SR, 0, 1, ReadWriteMode>
    {
    };
  };

  // control register 1
  struct CR1 : Register<0x40012104, ReadWriteMode, 0x0>
  {
    // Overrun interrupt enable
    struct OVRIE : RegisterField<CR1, 26, 1, ReadWriteMode>
    {
    };
    // Resolution
    struct RES : RegisterField<CR1, 24, 2, ReadWriteMode>
    {
    };
    // Analog watchdog enable on regular channels
    struct AWDEN : RegisterField<CR1, 23, 1, ReadWriteMode>
    {
    };
    // Analog watchdog enable on injected channels
    struct JAWDEN : RegisterField<CR1, 22, 1, ReadWriteMode>
    {
    };
    // Discontinuous mode channel count
    struct DISCNUM : RegisterField<CR1, 13, 3, ReadWriteMode>
    {
    };
    // Discontinuous mode on injected channels
    struct JDISCEN : RegisterField<CR1, 12, 1, ReadWriteMode>
    {
    };
    // Discontinuous mode on regular channels
    struct DISCEN : RegisterField<CR1, 11, 1, ReadWriteMode>
    {
    };
    // Automatic injected group conversion
    struct JAUTO : RegisterField<CR1, 10, 1, ReadWriteMode>
    {
    };
    // Enable the watchdog on a single channel in scan mode
    struct AWDSGL : RegisterField<CR1, 9, 1, ReadWriteMode>
    {
    };
    // Scan mode
    struct SCAN : RegisterField<CR1, 8, 1, ReadWriteMode>
    {
    };
    // Interrupt enable for injected channels
    struct JEOCIE : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
    };
    // Analog watchdog interrupt enable
    struct AWDIE : RegisterField<CR1, 6, 1, ReadWriteMode>
    {
    };
    // Interrupt enable for EOC
    struct EOCIE : RegisterField<CR1, 5, 1, ReadWriteMode>
    {
    };
    // Analog watchdog channel select bits
    struct AWDCH : RegisterField<CR1, 0, 5, ReadWriteMode>
    {
    };
  };

  // control register 2
  struct CR2 : Register<0x40012108, ReadWriteMode, 0x0>
  {
    // Start conversion of regular channels
    struct SWSTART : RegisterField<CR2, 30, 1, ReadWriteMode>
    {
    };
    // External trigger enable for regular channels
    struct EXTEN : RegisterField<CR2, 28, 2, ReadWriteMode>
    {
    };
    // External event select for regular group
    struct EXTSEL : RegisterField<CR2, 24, 4, ReadWriteMode>
    {
    };
    // Start conversion of injected channels
    struct JSWSTART : RegisterField<CR2, 22, 1, ReadWriteMode>
    {
    };
    // External trigger enable for injected channels
    struct JEXTEN : RegisterField<CR2, 20, 2, ReadWriteMode>
    {
    };
    // External event select for injected group
    struct JEXTSEL : RegisterField<CR2, 16, 4, ReadWriteMode>
    {
    };
    // Data alignment
    struct ALIGN : RegisterField<CR2, 11, 1, ReadWriteMode>
    {
    };
    // End of conversion selection
    struct EOCS : RegisterField<CR2, 10, 1, ReadWriteMode>
    {
    };
    // DMA disable selection (for single ADC mode)
    struct DDS : RegisterField<CR2, 9, 1, ReadWriteMode>
    {
    };
    // Direct memory access mode (for single ADC mode)
    struct DMA : RegisterField<CR2, 8, 1, ReadWriteMode>
    {
    };
    // Continuous conversion
    struct CONT : RegisterField<CR2, 1, 1, ReadWriteMode>
    {
    };
    // A/D Converter ON / OFF
    struct ADON : RegisterField<CR2, 0, 1, ReadWriteMode>
    {
    };
  };

  // sample time register 1
  struct SMPR1 : Register<0x4001210c, ReadWriteMode, 0x0>
  {
    // Sample time bits
    struct SMPx_x : RegisterField<SMPR1, 0, 32, ReadWriteMode>
    {
    };
  };

  // sample time register 2
  struct SMPR2 : Register<0x40012110, ReadWriteMode, 0x0>
  {
    // Sample time bits
    struct SMPx_x : RegisterField<SMPR2, 0, 32, ReadWriteMode>
    {
    };
  };

  // injected channel data offset register x
  struct JOFR1 : Register<0x40012114, ReadWriteMode, 0x0>
  {
    // Data offset for injected channel x
    struct JOFFSET1 : RegisterField<JOFR1, 0, 12, ReadWriteMode>
    {
    };
  };

  // injected channel data offset register x
  struct JOFR2 : Register<0x40012118, ReadWriteMode, 0x0>
  {
    // Data offset for injected channel x
    struct JOFFSET2 : RegisterField<JOFR2, 0, 12, ReadWriteMode>
    {
    };
  };

  // injected channel data offset register x
  struct JOFR3 : Register<0x4001211c, ReadWriteMode, 0x0>
  {
    // Data offset for injected channel x
    struct JOFFSET3 : RegisterField<JOFR3, 0, 12, ReadWriteMode>
    {
    };
  };

  // injected channel data offset register x
  struct JOFR4 : Register<0x40012120, ReadWriteMode, 0x0>
  {
    // Data offset for injected channel x
    struct JOFFSET4 : RegisterField<JOFR4, 0, 12, ReadWriteMode>
    {
    };
  };

  // watchdog higher threshold register
  struct HTR : Register<0x40012124, ReadWriteMode, 0xfff>
  {
    // Analog watchdog higher threshold
    struct HT : RegisterField<HTR, 0, 12, ReadWriteMode>
    {
    };
  };

  // watchdog lower threshold register
  struct LTR : Register<0x40012128, ReadWriteMode, 0x0>
  {
    // Analog watchdog lower threshold
    struct LT : RegisterField<LTR, 0, 12, ReadWriteMode>
    {
    };
  };

  // regular sequence register 1
  struct SQR1 : Register<0x4001212c, ReadWriteMode, 0x0>
  {
    // Regular channel sequence length
    struct L : RegisterField<SQR1, 20, 4, ReadWriteMode>
    {
    };
    // 16th conversion in regular sequence
    struct SQ16 : RegisterField<SQR1, 15, 5, ReadWriteMode>
    {
    };
    // 15th conversion in regular sequence
    struct SQ15 : RegisterField<SQR1, 10, 5, ReadWriteMode>
    {
    };
    // 14th conversion in regular sequence
    struct SQ14 : RegisterField<SQR1, 5, 5, ReadWriteMode>
    {
    };
    // 13th conversion in regular sequence
    struct SQ13 : RegisterField<SQR1, 0, 5, ReadWriteMode>
    {
    };
  };

  // regular sequence register 2
  struct SQR2 : Register<0x40012130, ReadWriteMode, 0x0>
  {
    // 12th conversion in regular sequence
    struct SQ12 : RegisterField<SQR2, 25, 5, ReadWriteMode>
    {
    };
    // 11th conversion in regular sequence
    struct SQ11 : RegisterField<SQR2, 20, 5, ReadWriteMode>
    {
    };
    // 10th conversion in regular sequence
    struct SQ10 : RegisterField<SQR2, 15, 5, ReadWriteMode>
    {
    };
    // 9th conversion in regular sequence
    struct SQ9 : RegisterField<SQR2, 10, 5, ReadWriteMode>
    {
    };
    // 8th conversion in regular sequence
    struct SQ8 : RegisterField<SQR2, 5, 5, ReadWriteMode>
    {
    };
    // 7th conversion in regular sequence
    struct SQ7 : RegisterField<SQR2, 0, 5, ReadWriteMode>
    {
    };
  };

  // regular sequence register 3
  struct SQR3 : Register<0x40012134, ReadWriteMode, 0x0>
  {
    // 6th conversion in regular sequence
    struct SQ6 : RegisterField<SQR3, 25, 5, ReadWriteMode>
    {
    };
    // 5th conversion in regular sequence
    struct SQ5 : RegisterField<SQR3, 20, 5, ReadWriteMode>
    {
    };
    // 4th conversion in regular sequence
    struct SQ4 : RegisterField<SQR3, 15, 5, ReadWriteMode>
    {
    };
    // 3rd conversion in regular sequence
    struct SQ3 : RegisterField<SQR3, 10, 5, ReadWriteMode>
    {
    };
    // 2nd conversion in regular sequence
    struct SQ2 : RegisterField<SQR3, 5, 5, ReadWriteMode>
    {
    };
    // 1st conversion in regular sequence
    struct SQ1 : RegisterField<SQR3, 0, 5, ReadWriteMode>
    {
    };
  };

  // injected sequence register
  struct JSQR : Register<0x40012138, ReadWriteMode, 0x0>
  {
    // Injected sequence length
    struct JL : RegisterField<JSQR, 20, 2, ReadWriteMode>
    {
    };
    // 4th conversion in injected sequence
    struct JSQ4 : RegisterField<JSQR, 15, 5, ReadWriteMode>
    {
    };
    // 3rd conversion in injected sequence
    struct JSQ3 : RegisterField<JSQR, 10, 5, ReadWriteMode>
    {
    };
    // 2nd conversion in injected sequence
    struct JSQ2 : RegisterField<JSQR, 5, 5, ReadWriteMode>
    {
    };
    // 1st conversion in injected sequence
    struct JSQ1 : RegisterField<JSQR, 0, 5, ReadWriteMode>
    {
    };
  };

  // injected data register x
  struct JDR1 : Register<0x4001213c, ReadMode, 0x0>
  {
    // Injected data
    struct JDATA : RegisterField<JDR1, 0, 16, ReadMode>
    {
    };
  };

  // injected data register x
  struct JDR2 : Register<0x40012140, ReadMode, 0x0>
  {
    // Injected data
    struct JDATA : RegisterField<JDR2, 0, 16, ReadMode>
    {
    };
  };

  // injected data register x
  struct JDR3 : Register<0x40012144, ReadMode, 0x0>
  {
    // Injected data
    struct JDATA : RegisterField<JDR3, 0, 16, ReadMode>
    {
    };
  };

  // injected data register x
  struct JDR4 : Register<0x40012148, ReadMode, 0x0>
  {
    // Injected data
    struct JDATA : RegisterField<JDR4, 0, 16, ReadMode>
    {
    };
  };

  // regular data register
  struct DR : Register<0x4001214c, ReadMode, 0x0>
  {
    // Regular data
    struct DATA : RegisterField<DR, 0, 16, ReadMode>
    {
    };
  };

// Large Registers

};


struct ADC3
{
  static constexpr auto periphNum = 3;

  // status register
  struct SR : Register<0x40012200, ReadWriteMode, 0x0>
  {
    // Overrun
    struct OVR : RegisterField<SR, 5, 1, ReadWriteMode>
    {
    };
    // Regular channel start flag
    struct STRT : RegisterField<SR, 4, 1, ReadWriteMode>
    {
    };
    // Injected channel start flag
    struct JSTRT : RegisterField<SR, 3, 1, ReadWriteMode>
    {
    };
    // Injected channel end of conversion
    struct JEOC : RegisterField<SR, 2, 1, ReadWriteMode>
    {
    };
    // Regular channel end of conversion
    struct EOC : RegisterField<SR, 1, 1, ReadWriteMode>
    {
    };
    // Analog watchdog flag
    struct AWD : RegisterField<SR, 0, 1, ReadWriteMode>
    {
    };
  };

  // control register 1
  struct CR1 : Register<0x40012204, ReadWriteMode, 0x0>
  {
    // Overrun interrupt enable
    struct OVRIE : RegisterField<CR1, 26, 1, ReadWriteMode>
    {
    };
    // Resolution
    struct RES : RegisterField<CR1, 24, 2, ReadWriteMode>
    {
    };
    // Analog watchdog enable on regular channels
    struct AWDEN : RegisterField<CR1, 23, 1, ReadWriteMode>
    {
    };
    // Analog watchdog enable on injected channels
    struct JAWDEN : RegisterField<CR1, 22, 1, ReadWriteMode>
    {
    };
    // Discontinuous mode channel count
    struct DISCNUM : RegisterField<CR1, 13, 3, ReadWriteMode>
    {
    };
    // Discontinuous mode on injected channels
    struct JDISCEN : RegisterField<CR1, 12, 1, ReadWriteMode>
    {
    };
    // Discontinuous mode on regular channels
    struct DISCEN : RegisterField<CR1, 11, 1, ReadWriteMode>
    {
    };
    // Automatic injected group conversion
    struct JAUTO : RegisterField<CR1, 10, 1, ReadWriteMode>
    {
    };
    // Enable the watchdog on a single channel in scan mode
    struct AWDSGL : RegisterField<CR1, 9, 1, ReadWriteMode>
    {
    };
    // Scan mode
    struct SCAN : RegisterField<CR1, 8, 1, ReadWriteMode>
    {
    };
    // Interrupt enable for injected channels
    struct JEOCIE : RegisterField<CR1, 7, 1, ReadWriteMode>
    {
    };
    // Analog watchdog interrupt enable
    struct AWDIE : RegisterField<CR1, 6, 1, ReadWriteMode>
    {
    };
    // Interrupt enable for EOC
    struct EOCIE : RegisterField<CR1, 5, 1, ReadWriteMode>
    {
    };
    // Analog watchdog channel select bits
    struct AWDCH : RegisterField<CR1, 0, 5, ReadWriteMode>
    {
    };
  };

  // control register 2
  struct CR2 : Register<0x40012208, ReadWriteMode, 0x0>
  {
    // Start conversion of regular channels
    struct SWSTART : RegisterField<CR2, 30, 1, ReadWriteMode>
    {
    };
    // External trigger enable for regular channels
    struct EXTEN : RegisterField<CR2, 28, 2, ReadWriteMode>
    {
    };
    // External event select for regular group
    struct EXTSEL : RegisterField<CR2, 24, 4, ReadWriteMode>
    {
    };
    // Start conversion of injected channels
    struct JSWSTART : RegisterField<CR2, 22, 1, ReadWriteMode>
    {
    };
    // External trigger enable for injected channels
    struct JEXTEN : RegisterField<CR2, 20, 2, ReadWriteMode>
    {
    };
    // External event select for injected group
    struct JEXTSEL : RegisterField<CR2, 16, 4, ReadWriteMode>
    {
    };
    // Data alignment
    struct ALIGN : RegisterField<CR2, 11, 1, ReadWriteMode>
    {
    };
    // End of conversion selection
    struct EOCS : RegisterField<CR2, 10, 1, ReadWriteMode>
    {
    };
    // DMA disable selection (for single ADC mode)
    struct DDS : RegisterField<CR2, 9, 1, ReadWriteMode>
    {
    };
    // Direct memory access mode (for single ADC mode)
    struct DMA : RegisterField<CR2, 8, 1, ReadWriteMode>
    {
    };
    // Continuous conversion
    struct CONT : RegisterField<CR2, 1, 1, ReadWriteMode>
    {
    };
    // A/D Converter ON / OFF
    struct ADON : RegisterField<CR2, 0, 1, ReadWriteMode>
    {
    };
  };

  // sample time register 1
  struct SMPR1 : Register<0x4001220c, ReadWriteMode, 0x0>
  {
    // Sample time bits
    struct SMPx_x : RegisterField<SMPR1, 0, 32, ReadWriteMode>
    {
    };
  };

  // sample time register 2
  struct SMPR2 : Register<0x40012210, ReadWriteMode, 0x0>
  {
    // Sample time bits
    struct SMPx_x : RegisterField<SMPR2, 0, 32, ReadWriteMode>
    {
    };
  };

  // injected channel data offset register x
  struct JOFR1 : Register<0x40012214, ReadWriteMode, 0x0>
  {
    // Data offset for injected channel x
    struct JOFFSET1 : RegisterField<JOFR1, 0, 12, ReadWriteMode>
    {
    };
  };

  // injected channel data offset register x
  struct JOFR2 : Register<0x40012218, ReadWriteMode, 0x0>
  {
    // Data offset for injected channel x
    struct JOFFSET2 : RegisterField<JOFR2, 0, 12, ReadWriteMode>
    {
    };
  };

  // injected channel data offset register x
  struct JOFR3 : Register<0x4001221c, ReadWriteMode, 0x0>
  {
    // Data offset for injected channel x
    struct JOFFSET3 : RegisterField<JOFR3, 0, 12, ReadWriteMode>
    {
    };
  };

  // injected channel data offset register x
  struct JOFR4 : Register<0x40012220, ReadWriteMode, 0x0>
  {
    // Data offset for injected channel x
    struct JOFFSET4 : RegisterField<JOFR4, 0, 12, ReadWriteMode>
    {
    };
  };

  // watchdog higher threshold register
  struct HTR : Register<0x40012224, ReadWriteMode, 0xfff>
  {
    // Analog watchdog higher threshold
    struct HT : RegisterField<HTR, 0, 12, ReadWriteMode>
    {
    };
  };

  // watchdog lower threshold register
  struct LTR : Register<0x40012228, ReadWriteMode, 0x0>
  {
    // Analog watchdog lower threshold
    struct LT : RegisterField<LTR, 0, 12, ReadWriteMode>
    {
    };
  };

  // regular sequence register 1
  struct SQR1 : Register<0x4001222c, ReadWriteMode, 0x0>
  {
    // Regular channel sequence length
    struct L : RegisterField<SQR1, 20, 4, ReadWriteMode>
    {
    };
    // 16th conversion in regular sequence
    struct SQ16 : RegisterField<SQR1, 15, 5, ReadWriteMode>
    {
    };
    // 15th conversion in regular sequence
    struct SQ15 : RegisterField<SQR1, 10, 5, ReadWriteMode>
    {
    };
    // 14th conversion in regular sequence
    struct SQ14 : RegisterField<SQR1, 5, 5, ReadWriteMode>
    {
    };
    // 13th conversion in regular sequence
    struct SQ13 : RegisterField<SQR1, 0, 5, ReadWriteMode>
    {
    };
  };

  // regular sequence register 2
  struct SQR2 : Register<0x40012230, ReadWriteMode, 0x0>
  {
    // 12th conversion in regular sequence
    struct SQ12 : RegisterField<SQR2, 25, 5, ReadWriteMode>
    {
    };
    // 11th conversion in regular sequence
    struct SQ11 : RegisterField<SQR2, 20, 5, ReadWriteMode>
    {
    };
    // 10th conversion in regular sequence
    struct SQ10 : RegisterField<SQR2, 15, 5, ReadWriteMode>
    {
    };
    // 9th conversion in regular sequence
    struct SQ9 : RegisterField<SQR2, 10, 5, ReadWriteMode>
    {
    };
    // 8th conversion in regular sequence
    struct SQ8 : RegisterField<SQR2, 5, 5, ReadWriteMode>
    {
    };
    // 7th conversion in regular sequence
    struct SQ7 : RegisterField<SQR2, 0, 5, ReadWriteMode>
    {
    };
  };

  // regular sequence register 3
  struct SQR3 : Register<0x40012234, ReadWriteMode, 0x0>
  {
    // 6th conversion in regular sequence
    struct SQ6 : RegisterField<SQR3, 25, 5, ReadWriteMode>
    {
    };
    // 5th conversion in regular sequence
    struct SQ5 : RegisterField<SQR3, 20, 5, ReadWriteMode>
    {
    };
    // 4th conversion in regular sequence
    struct SQ4 : RegisterField<SQR3, 15, 5, ReadWriteMode>
    {
    };
    // 3rd conversion in regular sequence
    struct SQ3 : RegisterField<SQR3, 10, 5, ReadWriteMode>
    {
    };
    // 2nd conversion in regular sequence
    struct SQ2 : RegisterField<SQR3, 5, 5, ReadWriteMode>
    {
    };
    // 1st conversion in regular sequence
    struct SQ1 : RegisterField<SQR3, 0, 5, ReadWriteMode>
    {
    };
  };

  // injected sequence register
  struct JSQR : Register<0x40012238, ReadWriteMode, 0x0>
  {
    // Injected sequence length
    struct JL : RegisterField<JSQR, 20, 2, ReadWriteMode>
    {
    };
    // 4th conversion in injected sequence
    struct JSQ4 : RegisterField<JSQR, 15, 5, ReadWriteMode>
    {
    };
    // 3rd conversion in injected sequence
    struct JSQ3 : RegisterField<JSQR, 10, 5, ReadWriteMode>
    {
    };
    // 2nd conversion in injected sequence
    struct JSQ2 : RegisterField<JSQR, 5, 5, ReadWriteMode>
    {
    };
    // 1st conversion in injected sequence
    struct JSQ1 : RegisterField<JSQR, 0, 5, ReadWriteMode>
    {
    };
  };

  // injected data register x
  struct JDR1 : Register<0x4001223c, ReadMode, 0x0>
  {
    // Injected data
    struct JDATA : RegisterField<JDR1, 0, 16, ReadMode>
    {
    };
  };

  // injected data register x
  struct JDR2 : Register<0x40012240, ReadMode, 0x0>
  {
    // Injected data
    struct JDATA : RegisterField<JDR2, 0, 16, ReadMode>
    {
    };
  };

  // injected data register x
  struct JDR3 : Register<0x40012244, ReadMode, 0x0>
  {
    // Injected data
    struct JDATA : RegisterField<JDR3, 0, 16, ReadMode>
    {
    };
  };

  // injected data register x
  struct JDR4 : Register<0x40012248, ReadMode, 0x0>
  {
    // Injected data
    struct JDATA : RegisterField<JDR4, 0, 16, ReadMode>
    {
    };
  };

  // regular data register
  struct DR : Register<0x4001224c, ReadMode, 0x0>
  {
    // Regular data
    struct DATA : RegisterField<DR, 0, 16, ReadMode>
    {
    };
  };

// Large Registers

};


