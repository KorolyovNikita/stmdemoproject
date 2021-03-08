/******************************************************************************
* Filename : c_adc_registers.hpp
*
* Details  : Common ADC registers
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct C_ADC
{
  // ADC Common status register
  struct CSR : Register<0x40012300, ReadMode, 0x0>
  {
    // Overrun flag of ADC3
    struct OVR3 : RegisterField<CSR, 21, 1, ReadMode>
    {
    };
    // Regular channel Start flag of ADC 3
    struct STRT3 : RegisterField<CSR, 20, 1, ReadMode>
    {
    };
    // Injected channel Start flag of ADC 3
    struct JSTRT3 : RegisterField<CSR, 19, 1, ReadMode>
    {
    };
    // Injected channel end of conversion of ADC 3
    struct JEOC3 : RegisterField<CSR, 18, 1, ReadMode>
    {
    };
    // End of conversion of ADC 3
    struct EOC3 : RegisterField<CSR, 17, 1, ReadMode>
    {
    };
    // Analog watchdog flag of ADC 3
    struct AWD3 : RegisterField<CSR, 16, 1, ReadMode>
    {
    };
    // Overrun flag of ADC 2
    struct OVR2 : RegisterField<CSR, 13, 1, ReadMode>
    {
    };
    // Regular channel Start flag of ADC 2
    struct STRT2 : RegisterField<CSR, 12, 1, ReadMode>
    {
    };
    // Injected channel Start flag of ADC 2
    struct JSTRT2 : RegisterField<CSR, 11, 1, ReadMode>
    {
    };
    // Injected channel end of conversion of ADC 2
    struct JEOC2 : RegisterField<CSR, 10, 1, ReadMode>
    {
    };
    // End of conversion of ADC 2
    struct EOC2 : RegisterField<CSR, 9, 1, ReadMode>
    {
    };
    // Analog watchdog flag of ADC 2
    struct AWD2 : RegisterField<CSR, 8, 1, ReadMode>
    {
    };
    // Overrun flag of ADC 1
    struct OVR1 : RegisterField<CSR, 5, 1, ReadMode>
    {
    };
    // Regular channel Start flag of ADC 1
    struct STRT1 : RegisterField<CSR, 4, 1, ReadMode>
    {
    };
    // Injected channel Start flag of ADC 1
    struct JSTRT1 : RegisterField<CSR, 3, 1, ReadMode>
    {
    };
    // Injected channel end of conversion of ADC 1
    struct JEOC1 : RegisterField<CSR, 2, 1, ReadMode>
    {
    };
    // End of conversion of ADC 1
    struct EOC1 : RegisterField<CSR, 1, 1, ReadMode>
    {
    };
    // Analog watchdog flag of ADC 1
    struct AWD1 : RegisterField<CSR, 0, 1, ReadMode>
    {
    };
  };

  // ADC common control register
  struct CCR : Register<0x40012304, ReadWriteMode, 0x0>
  {
    // Temperature sensor and VREFINT enable
    struct TSVREFE : RegisterField<CCR, 23, 1, ReadWriteMode>
    {
    };
    // VBAT enable
    struct VBATE : RegisterField<CCR, 22, 1, ReadWriteMode>
    {
    };
    // ADC prescaler
    struct ADCPRE : RegisterField<CCR, 16, 2, ReadWriteMode>
    {
    };
    // Direct memory access mode for multi ADC mode
    struct DMA : RegisterField<CCR, 14, 2, ReadWriteMode>
    {
    };
    // DMA disable selection for multi-ADC mode
    struct DDS : RegisterField<CCR, 13, 1, ReadWriteMode>
    {
    };
    // Delay between 2 sampling phases
    struct DELAY : RegisterField<CCR, 8, 4, ReadWriteMode>
    {
    };
    // Multi ADC mode selection
    struct MULT : RegisterField<CCR, 0, 5, ReadWriteMode>
    {
    };
  };

  // ADC common regular data register for dual and triple modes
  struct CDR : Register<0x40012308, ReadMode, 0x0>
  {
    // 2nd data item of a pair of regular conversions
    struct DATA2 : RegisterField<CDR, 16, 16, ReadMode>
    {
    };
    // 1st data item of a pair of regular conversions
    struct DATA1 : RegisterField<CDR, 0, 16, ReadMode>
    {
    };
  };

// Large Registers

};


