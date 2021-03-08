/******************************************************************************
* Filename : gpio_registers.hpp
*
* Details  : General-purpose I/Os
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct GPIOH
{
  static constexpr auto periphNum = 7;

  // GPIO port mode register
  struct MODER : Register<0x40021c00, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct MODER15 : RegisterField<MODER, 30, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER15, 0U>;
      using Output = FieldValue<MODER15, 1U>;
      using Alternate = FieldValue<MODER15, 2U>;
      using Analog = FieldValue<MODER15, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER14 : RegisterField<MODER, 28, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER14, 0U>;
      using Output = FieldValue<MODER14, 1U>;
      using Alternate = FieldValue<MODER14, 2U>;
      using Analog = FieldValue<MODER14, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER13 : RegisterField<MODER, 26, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER13, 0U>;
      using Output = FieldValue<MODER13, 1U>;
      using Alternate = FieldValue<MODER13, 2U>;
      using Analog = FieldValue<MODER13, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER12 : RegisterField<MODER, 24, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER12, 0U>;
      using Output = FieldValue<MODER12, 1U>;
      using Alternate = FieldValue<MODER12, 2U>;
      using Analog = FieldValue<MODER12, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER11 : RegisterField<MODER, 22, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER11, 0U>;
      using Output = FieldValue<MODER11, 1U>;
      using Alternate = FieldValue<MODER11, 2U>;
      using Analog = FieldValue<MODER11, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER10 : RegisterField<MODER, 20, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER10, 0U>;
      using Output = FieldValue<MODER10, 1U>;
      using Alternate = FieldValue<MODER10, 2U>;
      using Analog = FieldValue<MODER10, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER9 : RegisterField<MODER, 18, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER9, 0U>;
      using Output = FieldValue<MODER9, 1U>;
      using Alternate = FieldValue<MODER9, 2U>;
      using Analog = FieldValue<MODER9, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER8 : RegisterField<MODER, 16, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER8, 0U>;
      using Output = FieldValue<MODER8, 1U>;
      using Alternate = FieldValue<MODER8, 2U>;
      using Analog = FieldValue<MODER8, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER7 : RegisterField<MODER, 14, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER7, 0U>;
      using Output = FieldValue<MODER7, 1U>;
      using Alternate = FieldValue<MODER7, 2U>;
      using Analog = FieldValue<MODER7, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER6 : RegisterField<MODER, 12, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER6, 0U>;
      using Output = FieldValue<MODER6, 1U>;
      using Alternate = FieldValue<MODER6, 2U>;
      using Analog = FieldValue<MODER6, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER5 : RegisterField<MODER, 10, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER5, 0U>;
      using Output = FieldValue<MODER5, 1U>;
      using Alternate = FieldValue<MODER5, 2U>;
      using Analog = FieldValue<MODER5, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER4 : RegisterField<MODER, 8, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER4, 0U>;
      using Output = FieldValue<MODER4, 1U>;
      using Alternate = FieldValue<MODER4, 2U>;
      using Analog = FieldValue<MODER4, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER3 : RegisterField<MODER, 6, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER3, 0U>;
      using Output = FieldValue<MODER3, 1U>;
      using Alternate = FieldValue<MODER3, 2U>;
      using Analog = FieldValue<MODER3, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER2 : RegisterField<MODER, 4, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER2, 0U>;
      using Output = FieldValue<MODER2, 1U>;
      using Alternate = FieldValue<MODER2, 2U>;
      using Analog = FieldValue<MODER2, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER1 : RegisterField<MODER, 2, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER1, 0U>;
      using Output = FieldValue<MODER1, 1U>;
      using Alternate = FieldValue<MODER1, 2U>;
      using Analog = FieldValue<MODER1, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER0 : RegisterField<MODER, 0, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER0, 0U>;
      using Output = FieldValue<MODER0, 1U>;
      using Alternate = FieldValue<MODER0, 2U>;
      using Analog = FieldValue<MODER0, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct MODERx : RegisterField<MODER, 0 + 2 * num, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODERx, 0U>;
      using Output = FieldValue<MODERx, 1U>;
      using Alternate = FieldValue<MODERx, 2U>;
      using Analog = FieldValue<MODERx, 3U>;
    };
  };

  // GPIO port output type register
  struct OTYPER : Register<0x40021c04, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct OT15 : RegisterField<OTYPER, 15, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT15, 0U>;
      using Open_drain = FieldValue<OT15, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT14 : RegisterField<OTYPER, 14, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT14, 0U>;
      using Open_drain = FieldValue<OT14, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT13 : RegisterField<OTYPER, 13, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT13, 0U>;
      using Open_drain = FieldValue<OT13, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT12 : RegisterField<OTYPER, 12, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT12, 0U>;
      using Open_drain = FieldValue<OT12, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT11 : RegisterField<OTYPER, 11, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT11, 0U>;
      using Open_drain = FieldValue<OT11, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT10 : RegisterField<OTYPER, 10, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT10, 0U>;
      using Open_drain = FieldValue<OT10, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT9 : RegisterField<OTYPER, 9, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT9, 0U>;
      using Open_drain = FieldValue<OT9, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT8 : RegisterField<OTYPER, 8, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT8, 0U>;
      using Open_drain = FieldValue<OT8, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT7 : RegisterField<OTYPER, 7, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT7, 0U>;
      using Open_drain = FieldValue<OT7, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT6 : RegisterField<OTYPER, 6, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT6, 0U>;
      using Open_drain = FieldValue<OT6, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT5 : RegisterField<OTYPER, 5, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT5, 0U>;
      using Open_drain = FieldValue<OT5, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT4 : RegisterField<OTYPER, 4, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT4, 0U>;
      using Open_drain = FieldValue<OT4, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT3 : RegisterField<OTYPER, 3, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT3, 0U>;
      using Open_drain = FieldValue<OT3, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT2 : RegisterField<OTYPER, 2, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT2, 0U>;
      using Open_drain = FieldValue<OT2, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT1 : RegisterField<OTYPER, 1, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT1, 0U>;
      using Open_drain = FieldValue<OT1, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT0 : RegisterField<OTYPER, 0, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT0, 0U>;
      using Open_drain = FieldValue<OT0, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct OTx : RegisterField<OTYPER, 0 + 1 * num, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OTx, 0U>;
      using Open_drain = FieldValue<OTx, 1U>;
    };
  };

  // GPIO port output speed register
  struct OSPEEDR : Register<0x40021c08, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR15 : RegisterField<OSPEEDR, 30, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR15, 0U>;
      using Medium = FieldValue<OSPEEDR15, 1U>;
      using Fast = FieldValue<OSPEEDR15, 2U>;
      using High = FieldValue<OSPEEDR15, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR14 : RegisterField<OSPEEDR, 28, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR14, 0U>;
      using Medium = FieldValue<OSPEEDR14, 1U>;
      using Fast = FieldValue<OSPEEDR14, 2U>;
      using High = FieldValue<OSPEEDR14, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR13 : RegisterField<OSPEEDR, 26, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR13, 0U>;
      using Medium = FieldValue<OSPEEDR13, 1U>;
      using Fast = FieldValue<OSPEEDR13, 2U>;
      using High = FieldValue<OSPEEDR13, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR12 : RegisterField<OSPEEDR, 24, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR12, 0U>;
      using Medium = FieldValue<OSPEEDR12, 1U>;
      using Fast = FieldValue<OSPEEDR12, 2U>;
      using High = FieldValue<OSPEEDR12, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR11 : RegisterField<OSPEEDR, 22, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR11, 0U>;
      using Medium = FieldValue<OSPEEDR11, 1U>;
      using Fast = FieldValue<OSPEEDR11, 2U>;
      using High = FieldValue<OSPEEDR11, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR10 : RegisterField<OSPEEDR, 20, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR10, 0U>;
      using Medium = FieldValue<OSPEEDR10, 1U>;
      using Fast = FieldValue<OSPEEDR10, 2U>;
      using High = FieldValue<OSPEEDR10, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR9 : RegisterField<OSPEEDR, 18, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR9, 0U>;
      using Medium = FieldValue<OSPEEDR9, 1U>;
      using Fast = FieldValue<OSPEEDR9, 2U>;
      using High = FieldValue<OSPEEDR9, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR8 : RegisterField<OSPEEDR, 16, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR8, 0U>;
      using Medium = FieldValue<OSPEEDR8, 1U>;
      using Fast = FieldValue<OSPEEDR8, 2U>;
      using High = FieldValue<OSPEEDR8, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR7 : RegisterField<OSPEEDR, 14, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR7, 0U>;
      using Medium = FieldValue<OSPEEDR7, 1U>;
      using Fast = FieldValue<OSPEEDR7, 2U>;
      using High = FieldValue<OSPEEDR7, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR6 : RegisterField<OSPEEDR, 12, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR6, 0U>;
      using Medium = FieldValue<OSPEEDR6, 1U>;
      using Fast = FieldValue<OSPEEDR6, 2U>;
      using High = FieldValue<OSPEEDR6, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR5 : RegisterField<OSPEEDR, 10, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR5, 0U>;
      using Medium = FieldValue<OSPEEDR5, 1U>;
      using Fast = FieldValue<OSPEEDR5, 2U>;
      using High = FieldValue<OSPEEDR5, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR4 : RegisterField<OSPEEDR, 8, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR4, 0U>;
      using Medium = FieldValue<OSPEEDR4, 1U>;
      using Fast = FieldValue<OSPEEDR4, 2U>;
      using High = FieldValue<OSPEEDR4, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR3 : RegisterField<OSPEEDR, 6, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR3, 0U>;
      using Medium = FieldValue<OSPEEDR3, 1U>;
      using Fast = FieldValue<OSPEEDR3, 2U>;
      using High = FieldValue<OSPEEDR3, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR2 : RegisterField<OSPEEDR, 4, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR2, 0U>;
      using Medium = FieldValue<OSPEEDR2, 1U>;
      using Fast = FieldValue<OSPEEDR2, 2U>;
      using High = FieldValue<OSPEEDR2, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR1 : RegisterField<OSPEEDR, 2, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR1, 0U>;
      using Medium = FieldValue<OSPEEDR1, 1U>;
      using Fast = FieldValue<OSPEEDR1, 2U>;
      using High = FieldValue<OSPEEDR1, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR0 : RegisterField<OSPEEDR, 0, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR0, 0U>;
      using Medium = FieldValue<OSPEEDR0, 1U>;
      using Fast = FieldValue<OSPEEDR0, 2U>;
      using High = FieldValue<OSPEEDR0, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct OSPEEDRx : RegisterField<OSPEEDR, 0 + 2 * num, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDRx, 0U>;
      using Medium = FieldValue<OSPEEDRx, 1U>;
      using Fast = FieldValue<OSPEEDRx, 2U>;
      using High = FieldValue<OSPEEDRx, 3U>;
    };
  };

  // GPIO port pull-up/pull-down register
  struct PUPDR : Register<0x40021c0c, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct PUPDR15 : RegisterField<PUPDR, 30, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR15, 0U>;
      using Pull_up = FieldValue<PUPDR15, 1U>;
      using Pull_down = FieldValue<PUPDR15, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR14 : RegisterField<PUPDR, 28, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR14, 0U>;
      using Pull_up = FieldValue<PUPDR14, 1U>;
      using Pull_down = FieldValue<PUPDR14, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR13 : RegisterField<PUPDR, 26, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR13, 0U>;
      using Pull_up = FieldValue<PUPDR13, 1U>;
      using Pull_down = FieldValue<PUPDR13, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR12 : RegisterField<PUPDR, 24, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR12, 0U>;
      using Pull_up = FieldValue<PUPDR12, 1U>;
      using Pull_down = FieldValue<PUPDR12, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR11 : RegisterField<PUPDR, 22, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR11, 0U>;
      using Pull_up = FieldValue<PUPDR11, 1U>;
      using Pull_down = FieldValue<PUPDR11, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR10 : RegisterField<PUPDR, 20, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR10, 0U>;
      using Pull_up = FieldValue<PUPDR10, 1U>;
      using Pull_down = FieldValue<PUPDR10, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR9 : RegisterField<PUPDR, 18, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR9, 0U>;
      using Pull_up = FieldValue<PUPDR9, 1U>;
      using Pull_down = FieldValue<PUPDR9, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR8 : RegisterField<PUPDR, 16, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR8, 0U>;
      using Pull_up = FieldValue<PUPDR8, 1U>;
      using Pull_down = FieldValue<PUPDR8, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR7 : RegisterField<PUPDR, 14, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR7, 0U>;
      using Pull_up = FieldValue<PUPDR7, 1U>;
      using Pull_down = FieldValue<PUPDR7, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR6 : RegisterField<PUPDR, 12, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR6, 0U>;
      using Pull_up = FieldValue<PUPDR6, 1U>;
      using Pull_down = FieldValue<PUPDR6, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR5 : RegisterField<PUPDR, 10, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR5, 0U>;
      using Pull_up = FieldValue<PUPDR5, 1U>;
      using Pull_down = FieldValue<PUPDR5, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR4 : RegisterField<PUPDR, 8, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR4, 0U>;
      using Pull_up = FieldValue<PUPDR4, 1U>;
      using Pull_down = FieldValue<PUPDR4, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR3 : RegisterField<PUPDR, 6, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR3, 0U>;
      using Pull_up = FieldValue<PUPDR3, 1U>;
      using Pull_down = FieldValue<PUPDR3, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR2 : RegisterField<PUPDR, 4, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR2, 0U>;
      using Pull_up = FieldValue<PUPDR2, 1U>;
      using Pull_down = FieldValue<PUPDR2, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR1 : RegisterField<PUPDR, 2, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR1, 0U>;
      using Pull_up = FieldValue<PUPDR1, 1U>;
      using Pull_down = FieldValue<PUPDR1, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR0 : RegisterField<PUPDR, 0, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR0, 0U>;
      using Pull_up = FieldValue<PUPDR0, 1U>;
      using Pull_down = FieldValue<PUPDR0, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct PUPDRx : RegisterField<PUPDR, 0 + 2 * num, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDRx, 0U>;
      using Pull_up = FieldValue<PUPDRx, 1U>;
      using Pull_down = FieldValue<PUPDRx, 2U>;
    };
  };

  // GPIO port input data register
  struct IDR : Register<0x40021c10, ReadMode, 0x0>
  {
    // Port input data (y = 0..15)
    struct IDR15 : RegisterField<IDR, 15, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR14 : RegisterField<IDR, 14, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR13 : RegisterField<IDR, 13, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR12 : RegisterField<IDR, 12, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR11 : RegisterField<IDR, 11, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR10 : RegisterField<IDR, 10, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR9 : RegisterField<IDR, 9, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR8 : RegisterField<IDR, 8, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR7 : RegisterField<IDR, 7, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR6 : RegisterField<IDR, 6, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR5 : RegisterField<IDR, 5, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR4 : RegisterField<IDR, 4, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR3 : RegisterField<IDR, 3, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR2 : RegisterField<IDR, 2, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR1 : RegisterField<IDR, 1, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR0 : RegisterField<IDR, 0, 1, ReadMode>
    {
    };
  };

  // GPIO port output data register
  struct ODR : Register<0x40021c14, ReadWriteMode, 0x0>
  {
    // Port output data (y = 0..15)
    struct ODR15 : RegisterField<ODR, 15, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR14 : RegisterField<ODR, 14, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR13 : RegisterField<ODR, 13, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR12 : RegisterField<ODR, 12, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR11 : RegisterField<ODR, 11, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR10 : RegisterField<ODR, 10, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR9 : RegisterField<ODR, 9, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR8 : RegisterField<ODR, 8, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR7 : RegisterField<ODR, 7, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR6 : RegisterField<ODR, 6, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR5 : RegisterField<ODR, 5, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR4 : RegisterField<ODR, 4, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR3 : RegisterField<ODR, 3, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR2 : RegisterField<ODR, 2, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR1 : RegisterField<ODR, 1, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR0 : RegisterField<ODR, 0, 1, ReadWriteMode>
    {
    };
  };

  // GPIO port bit set/reset register
  struct BSRR : Register<0x40021c18, WriteMode, 0x0>
  {
    // Port x reset bit y (y = 0..15)
    struct BR15 : RegisterField<BSRR, 31, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR14 : RegisterField<BSRR, 30, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR13 : RegisterField<BSRR, 29, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR12 : RegisterField<BSRR, 28, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR11 : RegisterField<BSRR, 27, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR10 : RegisterField<BSRR, 26, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR9 : RegisterField<BSRR, 25, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR8 : RegisterField<BSRR, 24, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR7 : RegisterField<BSRR, 23, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR6 : RegisterField<BSRR, 22, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR5 : RegisterField<BSRR, 21, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR4 : RegisterField<BSRR, 20, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR3 : RegisterField<BSRR, 19, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR2 : RegisterField<BSRR, 18, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR1 : RegisterField<BSRR, 17, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BR0 : RegisterField<BSRR, 16, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS15 : RegisterField<BSRR, 15, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS14 : RegisterField<BSRR, 14, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS13 : RegisterField<BSRR, 13, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS12 : RegisterField<BSRR, 12, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS11 : RegisterField<BSRR, 11, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS10 : RegisterField<BSRR, 10, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS9 : RegisterField<BSRR, 9, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS8 : RegisterField<BSRR, 8, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS7 : RegisterField<BSRR, 7, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS6 : RegisterField<BSRR, 6, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS5 : RegisterField<BSRR, 5, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS4 : RegisterField<BSRR, 4, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS3 : RegisterField<BSRR, 3, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS2 : RegisterField<BSRR, 2, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS1 : RegisterField<BSRR, 1, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS0 : RegisterField<BSRR, 0, 1, WriteMode>
    {
    };
  };

  // GPIO port configuration lock register
  struct LCKR : Register<0x40021c1c, ReadWriteMode, 0x0>
  {
    // Port x lock bit y (y= 0..15)
    struct LCKK : RegisterField<LCKR, 16, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK15 : RegisterField<LCKR, 15, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK14 : RegisterField<LCKR, 14, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK13 : RegisterField<LCKR, 13, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK12 : RegisterField<LCKR, 12, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK11 : RegisterField<LCKR, 11, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK10 : RegisterField<LCKR, 10, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK9 : RegisterField<LCKR, 9, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK8 : RegisterField<LCKR, 8, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK7 : RegisterField<LCKR, 7, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK6 : RegisterField<LCKR, 6, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK5 : RegisterField<LCKR, 5, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK4 : RegisterField<LCKR, 4, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK3 : RegisterField<LCKR, 3, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK2 : RegisterField<LCKR, 2, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK1 : RegisterField<LCKR, 1, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK0 : RegisterField<LCKR, 0, 1, ReadWriteMode>
    {
    };
  };

  // GPIO alternate function low register
  struct AFRL : Register<0x40021c20, ReadWriteMode, 0x0>
  {
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL7 : RegisterField<AFRL, 28, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL7, 0U>;
      using AF1 = FieldValue<AFRL7, 1U>;
      using AF2 = FieldValue<AFRL7, 2U>;
      using AF3 = FieldValue<AFRL7, 3U>;
      using AF4 = FieldValue<AFRL7, 4U>;
      using AF5 = FieldValue<AFRL7, 5U>;
      using AF6 = FieldValue<AFRL7, 6U>;
      using AF7 = FieldValue<AFRL7, 7U>;
      using AF8 = FieldValue<AFRL7, 8U>;
      using AF9 = FieldValue<AFRL7, 9U>;
      using AF10 = FieldValue<AFRL7, 10U>;
      using AF11 = FieldValue<AFRL7, 11U>;
      using AF12 = FieldValue<AFRL7, 12U>;
      using AF13 = FieldValue<AFRL7, 13U>;
      using AF14 = FieldValue<AFRL7, 14U>;
      using AF15 = FieldValue<AFRL7, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL6 : RegisterField<AFRL, 24, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL6, 0U>;
      using AF1 = FieldValue<AFRL6, 1U>;
      using AF2 = FieldValue<AFRL6, 2U>;
      using AF3 = FieldValue<AFRL6, 3U>;
      using AF4 = FieldValue<AFRL6, 4U>;
      using AF5 = FieldValue<AFRL6, 5U>;
      using AF6 = FieldValue<AFRL6, 6U>;
      using AF7 = FieldValue<AFRL6, 7U>;
      using AF8 = FieldValue<AFRL6, 8U>;
      using AF9 = FieldValue<AFRL6, 9U>;
      using AF10 = FieldValue<AFRL6, 10U>;
      using AF11 = FieldValue<AFRL6, 11U>;
      using AF12 = FieldValue<AFRL6, 12U>;
      using AF13 = FieldValue<AFRL6, 13U>;
      using AF14 = FieldValue<AFRL6, 14U>;
      using AF15 = FieldValue<AFRL6, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL5 : RegisterField<AFRL, 20, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL5, 0U>;
      using AF1 = FieldValue<AFRL5, 1U>;
      using AF2 = FieldValue<AFRL5, 2U>;
      using AF3 = FieldValue<AFRL5, 3U>;
      using AF4 = FieldValue<AFRL5, 4U>;
      using AF5 = FieldValue<AFRL5, 5U>;
      using AF6 = FieldValue<AFRL5, 6U>;
      using AF7 = FieldValue<AFRL5, 7U>;
      using AF8 = FieldValue<AFRL5, 8U>;
      using AF9 = FieldValue<AFRL5, 9U>;
      using AF10 = FieldValue<AFRL5, 10U>;
      using AF11 = FieldValue<AFRL5, 11U>;
      using AF12 = FieldValue<AFRL5, 12U>;
      using AF13 = FieldValue<AFRL5, 13U>;
      using AF14 = FieldValue<AFRL5, 14U>;
      using AF15 = FieldValue<AFRL5, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL4 : RegisterField<AFRL, 16, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL4, 0U>;
      using AF1 = FieldValue<AFRL4, 1U>;
      using AF2 = FieldValue<AFRL4, 2U>;
      using AF3 = FieldValue<AFRL4, 3U>;
      using AF4 = FieldValue<AFRL4, 4U>;
      using AF5 = FieldValue<AFRL4, 5U>;
      using AF6 = FieldValue<AFRL4, 6U>;
      using AF7 = FieldValue<AFRL4, 7U>;
      using AF8 = FieldValue<AFRL4, 8U>;
      using AF9 = FieldValue<AFRL4, 9U>;
      using AF10 = FieldValue<AFRL4, 10U>;
      using AF11 = FieldValue<AFRL4, 11U>;
      using AF12 = FieldValue<AFRL4, 12U>;
      using AF13 = FieldValue<AFRL4, 13U>;
      using AF14 = FieldValue<AFRL4, 14U>;
      using AF15 = FieldValue<AFRL4, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL3 : RegisterField<AFRL, 12, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL3, 0U>;
      using AF1 = FieldValue<AFRL3, 1U>;
      using AF2 = FieldValue<AFRL3, 2U>;
      using AF3 = FieldValue<AFRL3, 3U>;
      using AF4 = FieldValue<AFRL3, 4U>;
      using AF5 = FieldValue<AFRL3, 5U>;
      using AF6 = FieldValue<AFRL3, 6U>;
      using AF7 = FieldValue<AFRL3, 7U>;
      using AF8 = FieldValue<AFRL3, 8U>;
      using AF9 = FieldValue<AFRL3, 9U>;
      using AF10 = FieldValue<AFRL3, 10U>;
      using AF11 = FieldValue<AFRL3, 11U>;
      using AF12 = FieldValue<AFRL3, 12U>;
      using AF13 = FieldValue<AFRL3, 13U>;
      using AF14 = FieldValue<AFRL3, 14U>;
      using AF15 = FieldValue<AFRL3, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL2 : RegisterField<AFRL, 8, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL2, 0U>;
      using AF1 = FieldValue<AFRL2, 1U>;
      using AF2 = FieldValue<AFRL2, 2U>;
      using AF3 = FieldValue<AFRL2, 3U>;
      using AF4 = FieldValue<AFRL2, 4U>;
      using AF5 = FieldValue<AFRL2, 5U>;
      using AF6 = FieldValue<AFRL2, 6U>;
      using AF7 = FieldValue<AFRL2, 7U>;
      using AF8 = FieldValue<AFRL2, 8U>;
      using AF9 = FieldValue<AFRL2, 9U>;
      using AF10 = FieldValue<AFRL2, 10U>;
      using AF11 = FieldValue<AFRL2, 11U>;
      using AF12 = FieldValue<AFRL2, 12U>;
      using AF13 = FieldValue<AFRL2, 13U>;
      using AF14 = FieldValue<AFRL2, 14U>;
      using AF15 = FieldValue<AFRL2, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL1 : RegisterField<AFRL, 4, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL1, 0U>;
      using AF1 = FieldValue<AFRL1, 1U>;
      using AF2 = FieldValue<AFRL1, 2U>;
      using AF3 = FieldValue<AFRL1, 3U>;
      using AF4 = FieldValue<AFRL1, 4U>;
      using AF5 = FieldValue<AFRL1, 5U>;
      using AF6 = FieldValue<AFRL1, 6U>;
      using AF7 = FieldValue<AFRL1, 7U>;
      using AF8 = FieldValue<AFRL1, 8U>;
      using AF9 = FieldValue<AFRL1, 9U>;
      using AF10 = FieldValue<AFRL1, 10U>;
      using AF11 = FieldValue<AFRL1, 11U>;
      using AF12 = FieldValue<AFRL1, 12U>;
      using AF13 = FieldValue<AFRL1, 13U>;
      using AF14 = FieldValue<AFRL1, 14U>;
      using AF15 = FieldValue<AFRL1, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL0 : RegisterField<AFRL, 0, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL0, 0U>;
      using AF1 = FieldValue<AFRL0, 1U>;
      using AF2 = FieldValue<AFRL0, 2U>;
      using AF3 = FieldValue<AFRL0, 3U>;
      using AF4 = FieldValue<AFRL0, 4U>;
      using AF5 = FieldValue<AFRL0, 5U>;
      using AF6 = FieldValue<AFRL0, 6U>;
      using AF7 = FieldValue<AFRL0, 7U>;
      using AF8 = FieldValue<AFRL0, 8U>;
      using AF9 = FieldValue<AFRL0, 9U>;
      using AF10 = FieldValue<AFRL0, 10U>;
      using AF11 = FieldValue<AFRL0, 11U>;
      using AF12 = FieldValue<AFRL0, 12U>;
      using AF13 = FieldValue<AFRL0, 13U>;
      using AF14 = FieldValue<AFRL0, 14U>;
      using AF15 = FieldValue<AFRL0, 15U>;
    };
  };

  // GPIO alternate function high register
  struct AFRH : Register<0x40021c24, ReadWriteMode, 0x0>
  {
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH15 : RegisterField<AFRH, 28, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH15, 0U>;
      using AF1 = FieldValue<AFRH15, 1U>;
      using AF2 = FieldValue<AFRH15, 2U>;
      using AF3 = FieldValue<AFRH15, 3U>;
      using AF4 = FieldValue<AFRH15, 4U>;
      using AF5 = FieldValue<AFRH15, 5U>;
      using AF6 = FieldValue<AFRH15, 6U>;
      using AF7 = FieldValue<AFRH15, 7U>;
      using AF8 = FieldValue<AFRH15, 8U>;
      using AF9 = FieldValue<AFRH15, 9U>;
      using AF10 = FieldValue<AFRH15, 10U>;
      using AF11 = FieldValue<AFRH15, 11U>;
      using AF12 = FieldValue<AFRH15, 12U>;
      using AF13 = FieldValue<AFRH15, 13U>;
      using AF14 = FieldValue<AFRH15, 14U>;
      using AF15 = FieldValue<AFRH15, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH14 : RegisterField<AFRH, 24, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH14, 0U>;
      using AF1 = FieldValue<AFRH14, 1U>;
      using AF2 = FieldValue<AFRH14, 2U>;
      using AF3 = FieldValue<AFRH14, 3U>;
      using AF4 = FieldValue<AFRH14, 4U>;
      using AF5 = FieldValue<AFRH14, 5U>;
      using AF6 = FieldValue<AFRH14, 6U>;
      using AF7 = FieldValue<AFRH14, 7U>;
      using AF8 = FieldValue<AFRH14, 8U>;
      using AF9 = FieldValue<AFRH14, 9U>;
      using AF10 = FieldValue<AFRH14, 10U>;
      using AF11 = FieldValue<AFRH14, 11U>;
      using AF12 = FieldValue<AFRH14, 12U>;
      using AF13 = FieldValue<AFRH14, 13U>;
      using AF14 = FieldValue<AFRH14, 14U>;
      using AF15 = FieldValue<AFRH14, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH13 : RegisterField<AFRH, 20, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH13, 0U>;
      using AF1 = FieldValue<AFRH13, 1U>;
      using AF2 = FieldValue<AFRH13, 2U>;
      using AF3 = FieldValue<AFRH13, 3U>;
      using AF4 = FieldValue<AFRH13, 4U>;
      using AF5 = FieldValue<AFRH13, 5U>;
      using AF6 = FieldValue<AFRH13, 6U>;
      using AF7 = FieldValue<AFRH13, 7U>;
      using AF8 = FieldValue<AFRH13, 8U>;
      using AF9 = FieldValue<AFRH13, 9U>;
      using AF10 = FieldValue<AFRH13, 10U>;
      using AF11 = FieldValue<AFRH13, 11U>;
      using AF12 = FieldValue<AFRH13, 12U>;
      using AF13 = FieldValue<AFRH13, 13U>;
      using AF14 = FieldValue<AFRH13, 14U>;
      using AF15 = FieldValue<AFRH13, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH12 : RegisterField<AFRH, 16, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH12, 0U>;
      using AF1 = FieldValue<AFRH12, 1U>;
      using AF2 = FieldValue<AFRH12, 2U>;
      using AF3 = FieldValue<AFRH12, 3U>;
      using AF4 = FieldValue<AFRH12, 4U>;
      using AF5 = FieldValue<AFRH12, 5U>;
      using AF6 = FieldValue<AFRH12, 6U>;
      using AF7 = FieldValue<AFRH12, 7U>;
      using AF8 = FieldValue<AFRH12, 8U>;
      using AF9 = FieldValue<AFRH12, 9U>;
      using AF10 = FieldValue<AFRH12, 10U>;
      using AF11 = FieldValue<AFRH12, 11U>;
      using AF12 = FieldValue<AFRH12, 12U>;
      using AF13 = FieldValue<AFRH12, 13U>;
      using AF14 = FieldValue<AFRH12, 14U>;
      using AF15 = FieldValue<AFRH12, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH11 : RegisterField<AFRH, 12, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH11, 0U>;
      using AF1 = FieldValue<AFRH11, 1U>;
      using AF2 = FieldValue<AFRH11, 2U>;
      using AF3 = FieldValue<AFRH11, 3U>;
      using AF4 = FieldValue<AFRH11, 4U>;
      using AF5 = FieldValue<AFRH11, 5U>;
      using AF6 = FieldValue<AFRH11, 6U>;
      using AF7 = FieldValue<AFRH11, 7U>;
      using AF8 = FieldValue<AFRH11, 8U>;
      using AF9 = FieldValue<AFRH11, 9U>;
      using AF10 = FieldValue<AFRH11, 10U>;
      using AF11 = FieldValue<AFRH11, 11U>;
      using AF12 = FieldValue<AFRH11, 12U>;
      using AF13 = FieldValue<AFRH11, 13U>;
      using AF14 = FieldValue<AFRH11, 14U>;
      using AF15 = FieldValue<AFRH11, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH10 : RegisterField<AFRH, 8, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH10, 0U>;
      using AF1 = FieldValue<AFRH10, 1U>;
      using AF2 = FieldValue<AFRH10, 2U>;
      using AF3 = FieldValue<AFRH10, 3U>;
      using AF4 = FieldValue<AFRH10, 4U>;
      using AF5 = FieldValue<AFRH10, 5U>;
      using AF6 = FieldValue<AFRH10, 6U>;
      using AF7 = FieldValue<AFRH10, 7U>;
      using AF8 = FieldValue<AFRH10, 8U>;
      using AF9 = FieldValue<AFRH10, 9U>;
      using AF10 = FieldValue<AFRH10, 10U>;
      using AF11 = FieldValue<AFRH10, 11U>;
      using AF12 = FieldValue<AFRH10, 12U>;
      using AF13 = FieldValue<AFRH10, 13U>;
      using AF14 = FieldValue<AFRH10, 14U>;
      using AF15 = FieldValue<AFRH10, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH9 : RegisterField<AFRH, 4, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH9, 0U>;
      using AF1 = FieldValue<AFRH9, 1U>;
      using AF2 = FieldValue<AFRH9, 2U>;
      using AF3 = FieldValue<AFRH9, 3U>;
      using AF4 = FieldValue<AFRH9, 4U>;
      using AF5 = FieldValue<AFRH9, 5U>;
      using AF6 = FieldValue<AFRH9, 6U>;
      using AF7 = FieldValue<AFRH9, 7U>;
      using AF8 = FieldValue<AFRH9, 8U>;
      using AF9 = FieldValue<AFRH9, 9U>;
      using AF10 = FieldValue<AFRH9, 10U>;
      using AF11 = FieldValue<AFRH9, 11U>;
      using AF12 = FieldValue<AFRH9, 12U>;
      using AF13 = FieldValue<AFRH9, 13U>;
      using AF14 = FieldValue<AFRH9, 14U>;
      using AF15 = FieldValue<AFRH9, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH8 : RegisterField<AFRH, 0, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH8, 0U>;
      using AF1 = FieldValue<AFRH8, 1U>;
      using AF2 = FieldValue<AFRH8, 2U>;
      using AF3 = FieldValue<AFRH8, 3U>;
      using AF4 = FieldValue<AFRH8, 4U>;
      using AF5 = FieldValue<AFRH8, 5U>;
      using AF6 = FieldValue<AFRH8, 6U>;
      using AF7 = FieldValue<AFRH8, 7U>;
      using AF8 = FieldValue<AFRH8, 8U>;
      using AF9 = FieldValue<AFRH8, 9U>;
      using AF10 = FieldValue<AFRH8, 10U>;
      using AF11 = FieldValue<AFRH8, 11U>;
      using AF12 = FieldValue<AFRH8, 12U>;
      using AF13 = FieldValue<AFRH8, 13U>;
      using AF14 = FieldValue<AFRH8, 14U>;
      using AF15 = FieldValue<AFRH8, 15U>;
    };
  };

// Large Registers

  // GPIO alternate function low register
  template<auto num>
  struct AFR_AF : RegisterField<Register<0x40021c20 + 4 * (num / 8), ReadWriteMode, 0x0>, 4 * (num % 8), 4, ReadWriteMode>
  {
    using AF0 = FieldValue<AFR_AF, 0U>;
    using AF1 = FieldValue<AFR_AF, 1U>;
    using AF2 = FieldValue<AFR_AF, 2U>;
    using AF3 = FieldValue<AFR_AF, 3U>;
    using AF4 = FieldValue<AFR_AF, 4U>;
    using AF5 = FieldValue<AFR_AF, 5U>;
    using AF6 = FieldValue<AFR_AF, 6U>;
    using AF7 = FieldValue<AFR_AF, 7U>;
    using AF8 = FieldValue<AFR_AF, 8U>;
    using AF9 = FieldValue<AFR_AF, 9U>;
    using AF10 = FieldValue<AFR_AF, 10U>;
    using AF11 = FieldValue<AFR_AF, 11U>;
    using AF12 = FieldValue<AFR_AF, 12U>;
    using AF13 = FieldValue<AFR_AF, 13U>;
    using AF14 = FieldValue<AFR_AF, 14U>;
    using AF15 = FieldValue<AFR_AF, 15U>;
  };

};


struct GPIOG
{
  static constexpr auto periphNum = 6;

  // GPIO port mode register
  struct MODER : Register<0x40021800, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct MODER15 : RegisterField<MODER, 30, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER15, 0U>;
      using Output = FieldValue<MODER15, 1U>;
      using Alternate = FieldValue<MODER15, 2U>;
      using Analog = FieldValue<MODER15, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER14 : RegisterField<MODER, 28, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER14, 0U>;
      using Output = FieldValue<MODER14, 1U>;
      using Alternate = FieldValue<MODER14, 2U>;
      using Analog = FieldValue<MODER14, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER13 : RegisterField<MODER, 26, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER13, 0U>;
      using Output = FieldValue<MODER13, 1U>;
      using Alternate = FieldValue<MODER13, 2U>;
      using Analog = FieldValue<MODER13, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER12 : RegisterField<MODER, 24, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER12, 0U>;
      using Output = FieldValue<MODER12, 1U>;
      using Alternate = FieldValue<MODER12, 2U>;
      using Analog = FieldValue<MODER12, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER11 : RegisterField<MODER, 22, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER11, 0U>;
      using Output = FieldValue<MODER11, 1U>;
      using Alternate = FieldValue<MODER11, 2U>;
      using Analog = FieldValue<MODER11, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER10 : RegisterField<MODER, 20, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER10, 0U>;
      using Output = FieldValue<MODER10, 1U>;
      using Alternate = FieldValue<MODER10, 2U>;
      using Analog = FieldValue<MODER10, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER9 : RegisterField<MODER, 18, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER9, 0U>;
      using Output = FieldValue<MODER9, 1U>;
      using Alternate = FieldValue<MODER9, 2U>;
      using Analog = FieldValue<MODER9, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER8 : RegisterField<MODER, 16, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER8, 0U>;
      using Output = FieldValue<MODER8, 1U>;
      using Alternate = FieldValue<MODER8, 2U>;
      using Analog = FieldValue<MODER8, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER7 : RegisterField<MODER, 14, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER7, 0U>;
      using Output = FieldValue<MODER7, 1U>;
      using Alternate = FieldValue<MODER7, 2U>;
      using Analog = FieldValue<MODER7, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER6 : RegisterField<MODER, 12, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER6, 0U>;
      using Output = FieldValue<MODER6, 1U>;
      using Alternate = FieldValue<MODER6, 2U>;
      using Analog = FieldValue<MODER6, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER5 : RegisterField<MODER, 10, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER5, 0U>;
      using Output = FieldValue<MODER5, 1U>;
      using Alternate = FieldValue<MODER5, 2U>;
      using Analog = FieldValue<MODER5, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER4 : RegisterField<MODER, 8, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER4, 0U>;
      using Output = FieldValue<MODER4, 1U>;
      using Alternate = FieldValue<MODER4, 2U>;
      using Analog = FieldValue<MODER4, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER3 : RegisterField<MODER, 6, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER3, 0U>;
      using Output = FieldValue<MODER3, 1U>;
      using Alternate = FieldValue<MODER3, 2U>;
      using Analog = FieldValue<MODER3, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER2 : RegisterField<MODER, 4, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER2, 0U>;
      using Output = FieldValue<MODER2, 1U>;
      using Alternate = FieldValue<MODER2, 2U>;
      using Analog = FieldValue<MODER2, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER1 : RegisterField<MODER, 2, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER1, 0U>;
      using Output = FieldValue<MODER1, 1U>;
      using Alternate = FieldValue<MODER1, 2U>;
      using Analog = FieldValue<MODER1, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER0 : RegisterField<MODER, 0, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER0, 0U>;
      using Output = FieldValue<MODER0, 1U>;
      using Alternate = FieldValue<MODER0, 2U>;
      using Analog = FieldValue<MODER0, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct MODERx : RegisterField<MODER, 0 + 2 * num, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODERx, 0U>;
      using Output = FieldValue<MODERx, 1U>;
      using Alternate = FieldValue<MODERx, 2U>;
      using Analog = FieldValue<MODERx, 3U>;
    };
  };

  // GPIO port output type register
  struct OTYPER : Register<0x40021804, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct OT15 : RegisterField<OTYPER, 15, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT15, 0U>;
      using Open_drain = FieldValue<OT15, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT14 : RegisterField<OTYPER, 14, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT14, 0U>;
      using Open_drain = FieldValue<OT14, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT13 : RegisterField<OTYPER, 13, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT13, 0U>;
      using Open_drain = FieldValue<OT13, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT12 : RegisterField<OTYPER, 12, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT12, 0U>;
      using Open_drain = FieldValue<OT12, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT11 : RegisterField<OTYPER, 11, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT11, 0U>;
      using Open_drain = FieldValue<OT11, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT10 : RegisterField<OTYPER, 10, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT10, 0U>;
      using Open_drain = FieldValue<OT10, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT9 : RegisterField<OTYPER, 9, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT9, 0U>;
      using Open_drain = FieldValue<OT9, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT8 : RegisterField<OTYPER, 8, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT8, 0U>;
      using Open_drain = FieldValue<OT8, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT7 : RegisterField<OTYPER, 7, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT7, 0U>;
      using Open_drain = FieldValue<OT7, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT6 : RegisterField<OTYPER, 6, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT6, 0U>;
      using Open_drain = FieldValue<OT6, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT5 : RegisterField<OTYPER, 5, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT5, 0U>;
      using Open_drain = FieldValue<OT5, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT4 : RegisterField<OTYPER, 4, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT4, 0U>;
      using Open_drain = FieldValue<OT4, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT3 : RegisterField<OTYPER, 3, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT3, 0U>;
      using Open_drain = FieldValue<OT3, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT2 : RegisterField<OTYPER, 2, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT2, 0U>;
      using Open_drain = FieldValue<OT2, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT1 : RegisterField<OTYPER, 1, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT1, 0U>;
      using Open_drain = FieldValue<OT1, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT0 : RegisterField<OTYPER, 0, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT0, 0U>;
      using Open_drain = FieldValue<OT0, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct OTx : RegisterField<OTYPER, 0 + 1 * num, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OTx, 0U>;
      using Open_drain = FieldValue<OTx, 1U>;
    };
  };

  // GPIO port output speed register
  struct OSPEEDR : Register<0x40021808, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR15 : RegisterField<OSPEEDR, 30, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR15, 0U>;
      using Medium = FieldValue<OSPEEDR15, 1U>;
      using Fast = FieldValue<OSPEEDR15, 2U>;
      using High = FieldValue<OSPEEDR15, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR14 : RegisterField<OSPEEDR, 28, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR14, 0U>;
      using Medium = FieldValue<OSPEEDR14, 1U>;
      using Fast = FieldValue<OSPEEDR14, 2U>;
      using High = FieldValue<OSPEEDR14, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR13 : RegisterField<OSPEEDR, 26, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR13, 0U>;
      using Medium = FieldValue<OSPEEDR13, 1U>;
      using Fast = FieldValue<OSPEEDR13, 2U>;
      using High = FieldValue<OSPEEDR13, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR12 : RegisterField<OSPEEDR, 24, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR12, 0U>;
      using Medium = FieldValue<OSPEEDR12, 1U>;
      using Fast = FieldValue<OSPEEDR12, 2U>;
      using High = FieldValue<OSPEEDR12, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR11 : RegisterField<OSPEEDR, 22, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR11, 0U>;
      using Medium = FieldValue<OSPEEDR11, 1U>;
      using Fast = FieldValue<OSPEEDR11, 2U>;
      using High = FieldValue<OSPEEDR11, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR10 : RegisterField<OSPEEDR, 20, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR10, 0U>;
      using Medium = FieldValue<OSPEEDR10, 1U>;
      using Fast = FieldValue<OSPEEDR10, 2U>;
      using High = FieldValue<OSPEEDR10, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR9 : RegisterField<OSPEEDR, 18, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR9, 0U>;
      using Medium = FieldValue<OSPEEDR9, 1U>;
      using Fast = FieldValue<OSPEEDR9, 2U>;
      using High = FieldValue<OSPEEDR9, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR8 : RegisterField<OSPEEDR, 16, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR8, 0U>;
      using Medium = FieldValue<OSPEEDR8, 1U>;
      using Fast = FieldValue<OSPEEDR8, 2U>;
      using High = FieldValue<OSPEEDR8, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR7 : RegisterField<OSPEEDR, 14, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR7, 0U>;
      using Medium = FieldValue<OSPEEDR7, 1U>;
      using Fast = FieldValue<OSPEEDR7, 2U>;
      using High = FieldValue<OSPEEDR7, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR6 : RegisterField<OSPEEDR, 12, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR6, 0U>;
      using Medium = FieldValue<OSPEEDR6, 1U>;
      using Fast = FieldValue<OSPEEDR6, 2U>;
      using High = FieldValue<OSPEEDR6, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR5 : RegisterField<OSPEEDR, 10, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR5, 0U>;
      using Medium = FieldValue<OSPEEDR5, 1U>;
      using Fast = FieldValue<OSPEEDR5, 2U>;
      using High = FieldValue<OSPEEDR5, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR4 : RegisterField<OSPEEDR, 8, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR4, 0U>;
      using Medium = FieldValue<OSPEEDR4, 1U>;
      using Fast = FieldValue<OSPEEDR4, 2U>;
      using High = FieldValue<OSPEEDR4, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR3 : RegisterField<OSPEEDR, 6, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR3, 0U>;
      using Medium = FieldValue<OSPEEDR3, 1U>;
      using Fast = FieldValue<OSPEEDR3, 2U>;
      using High = FieldValue<OSPEEDR3, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR2 : RegisterField<OSPEEDR, 4, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR2, 0U>;
      using Medium = FieldValue<OSPEEDR2, 1U>;
      using Fast = FieldValue<OSPEEDR2, 2U>;
      using High = FieldValue<OSPEEDR2, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR1 : RegisterField<OSPEEDR, 2, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR1, 0U>;
      using Medium = FieldValue<OSPEEDR1, 1U>;
      using Fast = FieldValue<OSPEEDR1, 2U>;
      using High = FieldValue<OSPEEDR1, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR0 : RegisterField<OSPEEDR, 0, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR0, 0U>;
      using Medium = FieldValue<OSPEEDR0, 1U>;
      using Fast = FieldValue<OSPEEDR0, 2U>;
      using High = FieldValue<OSPEEDR0, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct OSPEEDRx : RegisterField<OSPEEDR, 0 + 2 * num, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDRx, 0U>;
      using Medium = FieldValue<OSPEEDRx, 1U>;
      using Fast = FieldValue<OSPEEDRx, 2U>;
      using High = FieldValue<OSPEEDRx, 3U>;
    };
  };

  // GPIO port pull-up/pull-down register
  struct PUPDR : Register<0x4002180c, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct PUPDR15 : RegisterField<PUPDR, 30, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR15, 0U>;
      using Pull_up = FieldValue<PUPDR15, 1U>;
      using Pull_down = FieldValue<PUPDR15, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR14 : RegisterField<PUPDR, 28, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR14, 0U>;
      using Pull_up = FieldValue<PUPDR14, 1U>;
      using Pull_down = FieldValue<PUPDR14, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR13 : RegisterField<PUPDR, 26, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR13, 0U>;
      using Pull_up = FieldValue<PUPDR13, 1U>;
      using Pull_down = FieldValue<PUPDR13, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR12 : RegisterField<PUPDR, 24, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR12, 0U>;
      using Pull_up = FieldValue<PUPDR12, 1U>;
      using Pull_down = FieldValue<PUPDR12, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR11 : RegisterField<PUPDR, 22, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR11, 0U>;
      using Pull_up = FieldValue<PUPDR11, 1U>;
      using Pull_down = FieldValue<PUPDR11, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR10 : RegisterField<PUPDR, 20, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR10, 0U>;
      using Pull_up = FieldValue<PUPDR10, 1U>;
      using Pull_down = FieldValue<PUPDR10, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR9 : RegisterField<PUPDR, 18, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR9, 0U>;
      using Pull_up = FieldValue<PUPDR9, 1U>;
      using Pull_down = FieldValue<PUPDR9, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR8 : RegisterField<PUPDR, 16, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR8, 0U>;
      using Pull_up = FieldValue<PUPDR8, 1U>;
      using Pull_down = FieldValue<PUPDR8, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR7 : RegisterField<PUPDR, 14, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR7, 0U>;
      using Pull_up = FieldValue<PUPDR7, 1U>;
      using Pull_down = FieldValue<PUPDR7, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR6 : RegisterField<PUPDR, 12, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR6, 0U>;
      using Pull_up = FieldValue<PUPDR6, 1U>;
      using Pull_down = FieldValue<PUPDR6, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR5 : RegisterField<PUPDR, 10, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR5, 0U>;
      using Pull_up = FieldValue<PUPDR5, 1U>;
      using Pull_down = FieldValue<PUPDR5, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR4 : RegisterField<PUPDR, 8, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR4, 0U>;
      using Pull_up = FieldValue<PUPDR4, 1U>;
      using Pull_down = FieldValue<PUPDR4, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR3 : RegisterField<PUPDR, 6, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR3, 0U>;
      using Pull_up = FieldValue<PUPDR3, 1U>;
      using Pull_down = FieldValue<PUPDR3, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR2 : RegisterField<PUPDR, 4, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR2, 0U>;
      using Pull_up = FieldValue<PUPDR2, 1U>;
      using Pull_down = FieldValue<PUPDR2, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR1 : RegisterField<PUPDR, 2, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR1, 0U>;
      using Pull_up = FieldValue<PUPDR1, 1U>;
      using Pull_down = FieldValue<PUPDR1, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR0 : RegisterField<PUPDR, 0, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR0, 0U>;
      using Pull_up = FieldValue<PUPDR0, 1U>;
      using Pull_down = FieldValue<PUPDR0, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct PUPDRx : RegisterField<PUPDR, 0 + 2 * num, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDRx, 0U>;
      using Pull_up = FieldValue<PUPDRx, 1U>;
      using Pull_down = FieldValue<PUPDRx, 2U>;
    };
  };

  // GPIO port input data register
  struct IDR : Register<0x40021810, ReadMode, 0x0>
  {
    // Port input data (y = 0..15)
    struct IDR15 : RegisterField<IDR, 15, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR14 : RegisterField<IDR, 14, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR13 : RegisterField<IDR, 13, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR12 : RegisterField<IDR, 12, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR11 : RegisterField<IDR, 11, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR10 : RegisterField<IDR, 10, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR9 : RegisterField<IDR, 9, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR8 : RegisterField<IDR, 8, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR7 : RegisterField<IDR, 7, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR6 : RegisterField<IDR, 6, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR5 : RegisterField<IDR, 5, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR4 : RegisterField<IDR, 4, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR3 : RegisterField<IDR, 3, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR2 : RegisterField<IDR, 2, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR1 : RegisterField<IDR, 1, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR0 : RegisterField<IDR, 0, 1, ReadMode>
    {
    };
  };

  // GPIO port output data register
  struct ODR : Register<0x40021814, ReadWriteMode, 0x0>
  {
    // Port output data (y = 0..15)
    struct ODR15 : RegisterField<ODR, 15, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR14 : RegisterField<ODR, 14, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR13 : RegisterField<ODR, 13, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR12 : RegisterField<ODR, 12, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR11 : RegisterField<ODR, 11, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR10 : RegisterField<ODR, 10, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR9 : RegisterField<ODR, 9, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR8 : RegisterField<ODR, 8, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR7 : RegisterField<ODR, 7, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR6 : RegisterField<ODR, 6, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR5 : RegisterField<ODR, 5, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR4 : RegisterField<ODR, 4, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR3 : RegisterField<ODR, 3, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR2 : RegisterField<ODR, 2, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR1 : RegisterField<ODR, 1, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR0 : RegisterField<ODR, 0, 1, ReadWriteMode>
    {
    };
  };

  // GPIO port bit set/reset register
  struct BSRR : Register<0x40021818, WriteMode, 0x0>
  {
    // Port x reset bit y (y = 0..15)
    struct BR15 : RegisterField<BSRR, 31, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR14 : RegisterField<BSRR, 30, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR13 : RegisterField<BSRR, 29, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR12 : RegisterField<BSRR, 28, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR11 : RegisterField<BSRR, 27, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR10 : RegisterField<BSRR, 26, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR9 : RegisterField<BSRR, 25, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR8 : RegisterField<BSRR, 24, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR7 : RegisterField<BSRR, 23, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR6 : RegisterField<BSRR, 22, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR5 : RegisterField<BSRR, 21, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR4 : RegisterField<BSRR, 20, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR3 : RegisterField<BSRR, 19, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR2 : RegisterField<BSRR, 18, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR1 : RegisterField<BSRR, 17, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BR0 : RegisterField<BSRR, 16, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS15 : RegisterField<BSRR, 15, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS14 : RegisterField<BSRR, 14, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS13 : RegisterField<BSRR, 13, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS12 : RegisterField<BSRR, 12, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS11 : RegisterField<BSRR, 11, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS10 : RegisterField<BSRR, 10, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS9 : RegisterField<BSRR, 9, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS8 : RegisterField<BSRR, 8, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS7 : RegisterField<BSRR, 7, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS6 : RegisterField<BSRR, 6, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS5 : RegisterField<BSRR, 5, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS4 : RegisterField<BSRR, 4, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS3 : RegisterField<BSRR, 3, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS2 : RegisterField<BSRR, 2, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS1 : RegisterField<BSRR, 1, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS0 : RegisterField<BSRR, 0, 1, WriteMode>
    {
    };
  };

  // GPIO port configuration lock register
  struct LCKR : Register<0x4002181c, ReadWriteMode, 0x0>
  {
    // Port x lock bit y (y= 0..15)
    struct LCKK : RegisterField<LCKR, 16, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK15 : RegisterField<LCKR, 15, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK14 : RegisterField<LCKR, 14, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK13 : RegisterField<LCKR, 13, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK12 : RegisterField<LCKR, 12, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK11 : RegisterField<LCKR, 11, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK10 : RegisterField<LCKR, 10, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK9 : RegisterField<LCKR, 9, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK8 : RegisterField<LCKR, 8, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK7 : RegisterField<LCKR, 7, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK6 : RegisterField<LCKR, 6, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK5 : RegisterField<LCKR, 5, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK4 : RegisterField<LCKR, 4, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK3 : RegisterField<LCKR, 3, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK2 : RegisterField<LCKR, 2, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK1 : RegisterField<LCKR, 1, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK0 : RegisterField<LCKR, 0, 1, ReadWriteMode>
    {
    };
  };

  // GPIO alternate function low register
  struct AFRL : Register<0x40021820, ReadWriteMode, 0x0>
  {
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL7 : RegisterField<AFRL, 28, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL7, 0U>;
      using AF1 = FieldValue<AFRL7, 1U>;
      using AF2 = FieldValue<AFRL7, 2U>;
      using AF3 = FieldValue<AFRL7, 3U>;
      using AF4 = FieldValue<AFRL7, 4U>;
      using AF5 = FieldValue<AFRL7, 5U>;
      using AF6 = FieldValue<AFRL7, 6U>;
      using AF7 = FieldValue<AFRL7, 7U>;
      using AF8 = FieldValue<AFRL7, 8U>;
      using AF9 = FieldValue<AFRL7, 9U>;
      using AF10 = FieldValue<AFRL7, 10U>;
      using AF11 = FieldValue<AFRL7, 11U>;
      using AF12 = FieldValue<AFRL7, 12U>;
      using AF13 = FieldValue<AFRL7, 13U>;
      using AF14 = FieldValue<AFRL7, 14U>;
      using AF15 = FieldValue<AFRL7, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL6 : RegisterField<AFRL, 24, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL6, 0U>;
      using AF1 = FieldValue<AFRL6, 1U>;
      using AF2 = FieldValue<AFRL6, 2U>;
      using AF3 = FieldValue<AFRL6, 3U>;
      using AF4 = FieldValue<AFRL6, 4U>;
      using AF5 = FieldValue<AFRL6, 5U>;
      using AF6 = FieldValue<AFRL6, 6U>;
      using AF7 = FieldValue<AFRL6, 7U>;
      using AF8 = FieldValue<AFRL6, 8U>;
      using AF9 = FieldValue<AFRL6, 9U>;
      using AF10 = FieldValue<AFRL6, 10U>;
      using AF11 = FieldValue<AFRL6, 11U>;
      using AF12 = FieldValue<AFRL6, 12U>;
      using AF13 = FieldValue<AFRL6, 13U>;
      using AF14 = FieldValue<AFRL6, 14U>;
      using AF15 = FieldValue<AFRL6, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL5 : RegisterField<AFRL, 20, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL5, 0U>;
      using AF1 = FieldValue<AFRL5, 1U>;
      using AF2 = FieldValue<AFRL5, 2U>;
      using AF3 = FieldValue<AFRL5, 3U>;
      using AF4 = FieldValue<AFRL5, 4U>;
      using AF5 = FieldValue<AFRL5, 5U>;
      using AF6 = FieldValue<AFRL5, 6U>;
      using AF7 = FieldValue<AFRL5, 7U>;
      using AF8 = FieldValue<AFRL5, 8U>;
      using AF9 = FieldValue<AFRL5, 9U>;
      using AF10 = FieldValue<AFRL5, 10U>;
      using AF11 = FieldValue<AFRL5, 11U>;
      using AF12 = FieldValue<AFRL5, 12U>;
      using AF13 = FieldValue<AFRL5, 13U>;
      using AF14 = FieldValue<AFRL5, 14U>;
      using AF15 = FieldValue<AFRL5, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL4 : RegisterField<AFRL, 16, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL4, 0U>;
      using AF1 = FieldValue<AFRL4, 1U>;
      using AF2 = FieldValue<AFRL4, 2U>;
      using AF3 = FieldValue<AFRL4, 3U>;
      using AF4 = FieldValue<AFRL4, 4U>;
      using AF5 = FieldValue<AFRL4, 5U>;
      using AF6 = FieldValue<AFRL4, 6U>;
      using AF7 = FieldValue<AFRL4, 7U>;
      using AF8 = FieldValue<AFRL4, 8U>;
      using AF9 = FieldValue<AFRL4, 9U>;
      using AF10 = FieldValue<AFRL4, 10U>;
      using AF11 = FieldValue<AFRL4, 11U>;
      using AF12 = FieldValue<AFRL4, 12U>;
      using AF13 = FieldValue<AFRL4, 13U>;
      using AF14 = FieldValue<AFRL4, 14U>;
      using AF15 = FieldValue<AFRL4, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL3 : RegisterField<AFRL, 12, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL3, 0U>;
      using AF1 = FieldValue<AFRL3, 1U>;
      using AF2 = FieldValue<AFRL3, 2U>;
      using AF3 = FieldValue<AFRL3, 3U>;
      using AF4 = FieldValue<AFRL3, 4U>;
      using AF5 = FieldValue<AFRL3, 5U>;
      using AF6 = FieldValue<AFRL3, 6U>;
      using AF7 = FieldValue<AFRL3, 7U>;
      using AF8 = FieldValue<AFRL3, 8U>;
      using AF9 = FieldValue<AFRL3, 9U>;
      using AF10 = FieldValue<AFRL3, 10U>;
      using AF11 = FieldValue<AFRL3, 11U>;
      using AF12 = FieldValue<AFRL3, 12U>;
      using AF13 = FieldValue<AFRL3, 13U>;
      using AF14 = FieldValue<AFRL3, 14U>;
      using AF15 = FieldValue<AFRL3, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL2 : RegisterField<AFRL, 8, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL2, 0U>;
      using AF1 = FieldValue<AFRL2, 1U>;
      using AF2 = FieldValue<AFRL2, 2U>;
      using AF3 = FieldValue<AFRL2, 3U>;
      using AF4 = FieldValue<AFRL2, 4U>;
      using AF5 = FieldValue<AFRL2, 5U>;
      using AF6 = FieldValue<AFRL2, 6U>;
      using AF7 = FieldValue<AFRL2, 7U>;
      using AF8 = FieldValue<AFRL2, 8U>;
      using AF9 = FieldValue<AFRL2, 9U>;
      using AF10 = FieldValue<AFRL2, 10U>;
      using AF11 = FieldValue<AFRL2, 11U>;
      using AF12 = FieldValue<AFRL2, 12U>;
      using AF13 = FieldValue<AFRL2, 13U>;
      using AF14 = FieldValue<AFRL2, 14U>;
      using AF15 = FieldValue<AFRL2, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL1 : RegisterField<AFRL, 4, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL1, 0U>;
      using AF1 = FieldValue<AFRL1, 1U>;
      using AF2 = FieldValue<AFRL1, 2U>;
      using AF3 = FieldValue<AFRL1, 3U>;
      using AF4 = FieldValue<AFRL1, 4U>;
      using AF5 = FieldValue<AFRL1, 5U>;
      using AF6 = FieldValue<AFRL1, 6U>;
      using AF7 = FieldValue<AFRL1, 7U>;
      using AF8 = FieldValue<AFRL1, 8U>;
      using AF9 = FieldValue<AFRL1, 9U>;
      using AF10 = FieldValue<AFRL1, 10U>;
      using AF11 = FieldValue<AFRL1, 11U>;
      using AF12 = FieldValue<AFRL1, 12U>;
      using AF13 = FieldValue<AFRL1, 13U>;
      using AF14 = FieldValue<AFRL1, 14U>;
      using AF15 = FieldValue<AFRL1, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL0 : RegisterField<AFRL, 0, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL0, 0U>;
      using AF1 = FieldValue<AFRL0, 1U>;
      using AF2 = FieldValue<AFRL0, 2U>;
      using AF3 = FieldValue<AFRL0, 3U>;
      using AF4 = FieldValue<AFRL0, 4U>;
      using AF5 = FieldValue<AFRL0, 5U>;
      using AF6 = FieldValue<AFRL0, 6U>;
      using AF7 = FieldValue<AFRL0, 7U>;
      using AF8 = FieldValue<AFRL0, 8U>;
      using AF9 = FieldValue<AFRL0, 9U>;
      using AF10 = FieldValue<AFRL0, 10U>;
      using AF11 = FieldValue<AFRL0, 11U>;
      using AF12 = FieldValue<AFRL0, 12U>;
      using AF13 = FieldValue<AFRL0, 13U>;
      using AF14 = FieldValue<AFRL0, 14U>;
      using AF15 = FieldValue<AFRL0, 15U>;
    };
  };

  // GPIO alternate function high register
  struct AFRH : Register<0x40021824, ReadWriteMode, 0x0>
  {
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH15 : RegisterField<AFRH, 28, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH15, 0U>;
      using AF1 = FieldValue<AFRH15, 1U>;
      using AF2 = FieldValue<AFRH15, 2U>;
      using AF3 = FieldValue<AFRH15, 3U>;
      using AF4 = FieldValue<AFRH15, 4U>;
      using AF5 = FieldValue<AFRH15, 5U>;
      using AF6 = FieldValue<AFRH15, 6U>;
      using AF7 = FieldValue<AFRH15, 7U>;
      using AF8 = FieldValue<AFRH15, 8U>;
      using AF9 = FieldValue<AFRH15, 9U>;
      using AF10 = FieldValue<AFRH15, 10U>;
      using AF11 = FieldValue<AFRH15, 11U>;
      using AF12 = FieldValue<AFRH15, 12U>;
      using AF13 = FieldValue<AFRH15, 13U>;
      using AF14 = FieldValue<AFRH15, 14U>;
      using AF15 = FieldValue<AFRH15, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH14 : RegisterField<AFRH, 24, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH14, 0U>;
      using AF1 = FieldValue<AFRH14, 1U>;
      using AF2 = FieldValue<AFRH14, 2U>;
      using AF3 = FieldValue<AFRH14, 3U>;
      using AF4 = FieldValue<AFRH14, 4U>;
      using AF5 = FieldValue<AFRH14, 5U>;
      using AF6 = FieldValue<AFRH14, 6U>;
      using AF7 = FieldValue<AFRH14, 7U>;
      using AF8 = FieldValue<AFRH14, 8U>;
      using AF9 = FieldValue<AFRH14, 9U>;
      using AF10 = FieldValue<AFRH14, 10U>;
      using AF11 = FieldValue<AFRH14, 11U>;
      using AF12 = FieldValue<AFRH14, 12U>;
      using AF13 = FieldValue<AFRH14, 13U>;
      using AF14 = FieldValue<AFRH14, 14U>;
      using AF15 = FieldValue<AFRH14, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH13 : RegisterField<AFRH, 20, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH13, 0U>;
      using AF1 = FieldValue<AFRH13, 1U>;
      using AF2 = FieldValue<AFRH13, 2U>;
      using AF3 = FieldValue<AFRH13, 3U>;
      using AF4 = FieldValue<AFRH13, 4U>;
      using AF5 = FieldValue<AFRH13, 5U>;
      using AF6 = FieldValue<AFRH13, 6U>;
      using AF7 = FieldValue<AFRH13, 7U>;
      using AF8 = FieldValue<AFRH13, 8U>;
      using AF9 = FieldValue<AFRH13, 9U>;
      using AF10 = FieldValue<AFRH13, 10U>;
      using AF11 = FieldValue<AFRH13, 11U>;
      using AF12 = FieldValue<AFRH13, 12U>;
      using AF13 = FieldValue<AFRH13, 13U>;
      using AF14 = FieldValue<AFRH13, 14U>;
      using AF15 = FieldValue<AFRH13, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH12 : RegisterField<AFRH, 16, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH12, 0U>;
      using AF1 = FieldValue<AFRH12, 1U>;
      using AF2 = FieldValue<AFRH12, 2U>;
      using AF3 = FieldValue<AFRH12, 3U>;
      using AF4 = FieldValue<AFRH12, 4U>;
      using AF5 = FieldValue<AFRH12, 5U>;
      using AF6 = FieldValue<AFRH12, 6U>;
      using AF7 = FieldValue<AFRH12, 7U>;
      using AF8 = FieldValue<AFRH12, 8U>;
      using AF9 = FieldValue<AFRH12, 9U>;
      using AF10 = FieldValue<AFRH12, 10U>;
      using AF11 = FieldValue<AFRH12, 11U>;
      using AF12 = FieldValue<AFRH12, 12U>;
      using AF13 = FieldValue<AFRH12, 13U>;
      using AF14 = FieldValue<AFRH12, 14U>;
      using AF15 = FieldValue<AFRH12, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH11 : RegisterField<AFRH, 12, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH11, 0U>;
      using AF1 = FieldValue<AFRH11, 1U>;
      using AF2 = FieldValue<AFRH11, 2U>;
      using AF3 = FieldValue<AFRH11, 3U>;
      using AF4 = FieldValue<AFRH11, 4U>;
      using AF5 = FieldValue<AFRH11, 5U>;
      using AF6 = FieldValue<AFRH11, 6U>;
      using AF7 = FieldValue<AFRH11, 7U>;
      using AF8 = FieldValue<AFRH11, 8U>;
      using AF9 = FieldValue<AFRH11, 9U>;
      using AF10 = FieldValue<AFRH11, 10U>;
      using AF11 = FieldValue<AFRH11, 11U>;
      using AF12 = FieldValue<AFRH11, 12U>;
      using AF13 = FieldValue<AFRH11, 13U>;
      using AF14 = FieldValue<AFRH11, 14U>;
      using AF15 = FieldValue<AFRH11, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH10 : RegisterField<AFRH, 8, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH10, 0U>;
      using AF1 = FieldValue<AFRH10, 1U>;
      using AF2 = FieldValue<AFRH10, 2U>;
      using AF3 = FieldValue<AFRH10, 3U>;
      using AF4 = FieldValue<AFRH10, 4U>;
      using AF5 = FieldValue<AFRH10, 5U>;
      using AF6 = FieldValue<AFRH10, 6U>;
      using AF7 = FieldValue<AFRH10, 7U>;
      using AF8 = FieldValue<AFRH10, 8U>;
      using AF9 = FieldValue<AFRH10, 9U>;
      using AF10 = FieldValue<AFRH10, 10U>;
      using AF11 = FieldValue<AFRH10, 11U>;
      using AF12 = FieldValue<AFRH10, 12U>;
      using AF13 = FieldValue<AFRH10, 13U>;
      using AF14 = FieldValue<AFRH10, 14U>;
      using AF15 = FieldValue<AFRH10, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH9 : RegisterField<AFRH, 4, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH9, 0U>;
      using AF1 = FieldValue<AFRH9, 1U>;
      using AF2 = FieldValue<AFRH9, 2U>;
      using AF3 = FieldValue<AFRH9, 3U>;
      using AF4 = FieldValue<AFRH9, 4U>;
      using AF5 = FieldValue<AFRH9, 5U>;
      using AF6 = FieldValue<AFRH9, 6U>;
      using AF7 = FieldValue<AFRH9, 7U>;
      using AF8 = FieldValue<AFRH9, 8U>;
      using AF9 = FieldValue<AFRH9, 9U>;
      using AF10 = FieldValue<AFRH9, 10U>;
      using AF11 = FieldValue<AFRH9, 11U>;
      using AF12 = FieldValue<AFRH9, 12U>;
      using AF13 = FieldValue<AFRH9, 13U>;
      using AF14 = FieldValue<AFRH9, 14U>;
      using AF15 = FieldValue<AFRH9, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH8 : RegisterField<AFRH, 0, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH8, 0U>;
      using AF1 = FieldValue<AFRH8, 1U>;
      using AF2 = FieldValue<AFRH8, 2U>;
      using AF3 = FieldValue<AFRH8, 3U>;
      using AF4 = FieldValue<AFRH8, 4U>;
      using AF5 = FieldValue<AFRH8, 5U>;
      using AF6 = FieldValue<AFRH8, 6U>;
      using AF7 = FieldValue<AFRH8, 7U>;
      using AF8 = FieldValue<AFRH8, 8U>;
      using AF9 = FieldValue<AFRH8, 9U>;
      using AF10 = FieldValue<AFRH8, 10U>;
      using AF11 = FieldValue<AFRH8, 11U>;
      using AF12 = FieldValue<AFRH8, 12U>;
      using AF13 = FieldValue<AFRH8, 13U>;
      using AF14 = FieldValue<AFRH8, 14U>;
      using AF15 = FieldValue<AFRH8, 15U>;
    };
  };

// Large Registers

  // GPIO alternate function low register
  template<auto num>
  struct AFR_AF : RegisterField<Register<0x40021820 + 4 * (num / 8), ReadWriteMode, 0x0>, 4 * (num % 8), 4, ReadWriteMode>
  {
    using AF0 = FieldValue<AFR_AF, 0U>;
    using AF1 = FieldValue<AFR_AF, 1U>;
    using AF2 = FieldValue<AFR_AF, 2U>;
    using AF3 = FieldValue<AFR_AF, 3U>;
    using AF4 = FieldValue<AFR_AF, 4U>;
    using AF5 = FieldValue<AFR_AF, 5U>;
    using AF6 = FieldValue<AFR_AF, 6U>;
    using AF7 = FieldValue<AFR_AF, 7U>;
    using AF8 = FieldValue<AFR_AF, 8U>;
    using AF9 = FieldValue<AFR_AF, 9U>;
    using AF10 = FieldValue<AFR_AF, 10U>;
    using AF11 = FieldValue<AFR_AF, 11U>;
    using AF12 = FieldValue<AFR_AF, 12U>;
    using AF13 = FieldValue<AFR_AF, 13U>;
    using AF14 = FieldValue<AFR_AF, 14U>;
    using AF15 = FieldValue<AFR_AF, 15U>;
  };

};


struct GPIOF
{
  static constexpr auto periphNum = 5;

  // GPIO port mode register
  struct MODER : Register<0x40021400, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct MODER15 : RegisterField<MODER, 30, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER15, 0U>;
      using Output = FieldValue<MODER15, 1U>;
      using Alternate = FieldValue<MODER15, 2U>;
      using Analog = FieldValue<MODER15, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER14 : RegisterField<MODER, 28, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER14, 0U>;
      using Output = FieldValue<MODER14, 1U>;
      using Alternate = FieldValue<MODER14, 2U>;
      using Analog = FieldValue<MODER14, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER13 : RegisterField<MODER, 26, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER13, 0U>;
      using Output = FieldValue<MODER13, 1U>;
      using Alternate = FieldValue<MODER13, 2U>;
      using Analog = FieldValue<MODER13, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER12 : RegisterField<MODER, 24, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER12, 0U>;
      using Output = FieldValue<MODER12, 1U>;
      using Alternate = FieldValue<MODER12, 2U>;
      using Analog = FieldValue<MODER12, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER11 : RegisterField<MODER, 22, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER11, 0U>;
      using Output = FieldValue<MODER11, 1U>;
      using Alternate = FieldValue<MODER11, 2U>;
      using Analog = FieldValue<MODER11, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER10 : RegisterField<MODER, 20, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER10, 0U>;
      using Output = FieldValue<MODER10, 1U>;
      using Alternate = FieldValue<MODER10, 2U>;
      using Analog = FieldValue<MODER10, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER9 : RegisterField<MODER, 18, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER9, 0U>;
      using Output = FieldValue<MODER9, 1U>;
      using Alternate = FieldValue<MODER9, 2U>;
      using Analog = FieldValue<MODER9, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER8 : RegisterField<MODER, 16, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER8, 0U>;
      using Output = FieldValue<MODER8, 1U>;
      using Alternate = FieldValue<MODER8, 2U>;
      using Analog = FieldValue<MODER8, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER7 : RegisterField<MODER, 14, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER7, 0U>;
      using Output = FieldValue<MODER7, 1U>;
      using Alternate = FieldValue<MODER7, 2U>;
      using Analog = FieldValue<MODER7, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER6 : RegisterField<MODER, 12, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER6, 0U>;
      using Output = FieldValue<MODER6, 1U>;
      using Alternate = FieldValue<MODER6, 2U>;
      using Analog = FieldValue<MODER6, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER5 : RegisterField<MODER, 10, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER5, 0U>;
      using Output = FieldValue<MODER5, 1U>;
      using Alternate = FieldValue<MODER5, 2U>;
      using Analog = FieldValue<MODER5, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER4 : RegisterField<MODER, 8, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER4, 0U>;
      using Output = FieldValue<MODER4, 1U>;
      using Alternate = FieldValue<MODER4, 2U>;
      using Analog = FieldValue<MODER4, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER3 : RegisterField<MODER, 6, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER3, 0U>;
      using Output = FieldValue<MODER3, 1U>;
      using Alternate = FieldValue<MODER3, 2U>;
      using Analog = FieldValue<MODER3, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER2 : RegisterField<MODER, 4, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER2, 0U>;
      using Output = FieldValue<MODER2, 1U>;
      using Alternate = FieldValue<MODER2, 2U>;
      using Analog = FieldValue<MODER2, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER1 : RegisterField<MODER, 2, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER1, 0U>;
      using Output = FieldValue<MODER1, 1U>;
      using Alternate = FieldValue<MODER1, 2U>;
      using Analog = FieldValue<MODER1, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER0 : RegisterField<MODER, 0, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER0, 0U>;
      using Output = FieldValue<MODER0, 1U>;
      using Alternate = FieldValue<MODER0, 2U>;
      using Analog = FieldValue<MODER0, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct MODERx : RegisterField<MODER, 0 + 2 * num, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODERx, 0U>;
      using Output = FieldValue<MODERx, 1U>;
      using Alternate = FieldValue<MODERx, 2U>;
      using Analog = FieldValue<MODERx, 3U>;
    };
  };

  // GPIO port output type register
  struct OTYPER : Register<0x40021404, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct OT15 : RegisterField<OTYPER, 15, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT15, 0U>;
      using Open_drain = FieldValue<OT15, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT14 : RegisterField<OTYPER, 14, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT14, 0U>;
      using Open_drain = FieldValue<OT14, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT13 : RegisterField<OTYPER, 13, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT13, 0U>;
      using Open_drain = FieldValue<OT13, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT12 : RegisterField<OTYPER, 12, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT12, 0U>;
      using Open_drain = FieldValue<OT12, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT11 : RegisterField<OTYPER, 11, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT11, 0U>;
      using Open_drain = FieldValue<OT11, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT10 : RegisterField<OTYPER, 10, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT10, 0U>;
      using Open_drain = FieldValue<OT10, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT9 : RegisterField<OTYPER, 9, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT9, 0U>;
      using Open_drain = FieldValue<OT9, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT8 : RegisterField<OTYPER, 8, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT8, 0U>;
      using Open_drain = FieldValue<OT8, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT7 : RegisterField<OTYPER, 7, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT7, 0U>;
      using Open_drain = FieldValue<OT7, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT6 : RegisterField<OTYPER, 6, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT6, 0U>;
      using Open_drain = FieldValue<OT6, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT5 : RegisterField<OTYPER, 5, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT5, 0U>;
      using Open_drain = FieldValue<OT5, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT4 : RegisterField<OTYPER, 4, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT4, 0U>;
      using Open_drain = FieldValue<OT4, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT3 : RegisterField<OTYPER, 3, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT3, 0U>;
      using Open_drain = FieldValue<OT3, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT2 : RegisterField<OTYPER, 2, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT2, 0U>;
      using Open_drain = FieldValue<OT2, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT1 : RegisterField<OTYPER, 1, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT1, 0U>;
      using Open_drain = FieldValue<OT1, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT0 : RegisterField<OTYPER, 0, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT0, 0U>;
      using Open_drain = FieldValue<OT0, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct OTx : RegisterField<OTYPER, 0 + 1 * num, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OTx, 0U>;
      using Open_drain = FieldValue<OTx, 1U>;
    };
  };

  // GPIO port output speed register
  struct OSPEEDR : Register<0x40021408, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR15 : RegisterField<OSPEEDR, 30, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR15, 0U>;
      using Medium = FieldValue<OSPEEDR15, 1U>;
      using Fast = FieldValue<OSPEEDR15, 2U>;
      using High = FieldValue<OSPEEDR15, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR14 : RegisterField<OSPEEDR, 28, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR14, 0U>;
      using Medium = FieldValue<OSPEEDR14, 1U>;
      using Fast = FieldValue<OSPEEDR14, 2U>;
      using High = FieldValue<OSPEEDR14, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR13 : RegisterField<OSPEEDR, 26, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR13, 0U>;
      using Medium = FieldValue<OSPEEDR13, 1U>;
      using Fast = FieldValue<OSPEEDR13, 2U>;
      using High = FieldValue<OSPEEDR13, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR12 : RegisterField<OSPEEDR, 24, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR12, 0U>;
      using Medium = FieldValue<OSPEEDR12, 1U>;
      using Fast = FieldValue<OSPEEDR12, 2U>;
      using High = FieldValue<OSPEEDR12, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR11 : RegisterField<OSPEEDR, 22, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR11, 0U>;
      using Medium = FieldValue<OSPEEDR11, 1U>;
      using Fast = FieldValue<OSPEEDR11, 2U>;
      using High = FieldValue<OSPEEDR11, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR10 : RegisterField<OSPEEDR, 20, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR10, 0U>;
      using Medium = FieldValue<OSPEEDR10, 1U>;
      using Fast = FieldValue<OSPEEDR10, 2U>;
      using High = FieldValue<OSPEEDR10, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR9 : RegisterField<OSPEEDR, 18, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR9, 0U>;
      using Medium = FieldValue<OSPEEDR9, 1U>;
      using Fast = FieldValue<OSPEEDR9, 2U>;
      using High = FieldValue<OSPEEDR9, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR8 : RegisterField<OSPEEDR, 16, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR8, 0U>;
      using Medium = FieldValue<OSPEEDR8, 1U>;
      using Fast = FieldValue<OSPEEDR8, 2U>;
      using High = FieldValue<OSPEEDR8, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR7 : RegisterField<OSPEEDR, 14, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR7, 0U>;
      using Medium = FieldValue<OSPEEDR7, 1U>;
      using Fast = FieldValue<OSPEEDR7, 2U>;
      using High = FieldValue<OSPEEDR7, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR6 : RegisterField<OSPEEDR, 12, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR6, 0U>;
      using Medium = FieldValue<OSPEEDR6, 1U>;
      using Fast = FieldValue<OSPEEDR6, 2U>;
      using High = FieldValue<OSPEEDR6, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR5 : RegisterField<OSPEEDR, 10, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR5, 0U>;
      using Medium = FieldValue<OSPEEDR5, 1U>;
      using Fast = FieldValue<OSPEEDR5, 2U>;
      using High = FieldValue<OSPEEDR5, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR4 : RegisterField<OSPEEDR, 8, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR4, 0U>;
      using Medium = FieldValue<OSPEEDR4, 1U>;
      using Fast = FieldValue<OSPEEDR4, 2U>;
      using High = FieldValue<OSPEEDR4, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR3 : RegisterField<OSPEEDR, 6, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR3, 0U>;
      using Medium = FieldValue<OSPEEDR3, 1U>;
      using Fast = FieldValue<OSPEEDR3, 2U>;
      using High = FieldValue<OSPEEDR3, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR2 : RegisterField<OSPEEDR, 4, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR2, 0U>;
      using Medium = FieldValue<OSPEEDR2, 1U>;
      using Fast = FieldValue<OSPEEDR2, 2U>;
      using High = FieldValue<OSPEEDR2, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR1 : RegisterField<OSPEEDR, 2, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR1, 0U>;
      using Medium = FieldValue<OSPEEDR1, 1U>;
      using Fast = FieldValue<OSPEEDR1, 2U>;
      using High = FieldValue<OSPEEDR1, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR0 : RegisterField<OSPEEDR, 0, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR0, 0U>;
      using Medium = FieldValue<OSPEEDR0, 1U>;
      using Fast = FieldValue<OSPEEDR0, 2U>;
      using High = FieldValue<OSPEEDR0, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct OSPEEDRx : RegisterField<OSPEEDR, 0 + 2 * num, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDRx, 0U>;
      using Medium = FieldValue<OSPEEDRx, 1U>;
      using Fast = FieldValue<OSPEEDRx, 2U>;
      using High = FieldValue<OSPEEDRx, 3U>;
    };
  };

  // GPIO port pull-up/pull-down register
  struct PUPDR : Register<0x4002140c, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct PUPDR15 : RegisterField<PUPDR, 30, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR15, 0U>;
      using Pull_up = FieldValue<PUPDR15, 1U>;
      using Pull_down = FieldValue<PUPDR15, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR14 : RegisterField<PUPDR, 28, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR14, 0U>;
      using Pull_up = FieldValue<PUPDR14, 1U>;
      using Pull_down = FieldValue<PUPDR14, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR13 : RegisterField<PUPDR, 26, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR13, 0U>;
      using Pull_up = FieldValue<PUPDR13, 1U>;
      using Pull_down = FieldValue<PUPDR13, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR12 : RegisterField<PUPDR, 24, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR12, 0U>;
      using Pull_up = FieldValue<PUPDR12, 1U>;
      using Pull_down = FieldValue<PUPDR12, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR11 : RegisterField<PUPDR, 22, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR11, 0U>;
      using Pull_up = FieldValue<PUPDR11, 1U>;
      using Pull_down = FieldValue<PUPDR11, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR10 : RegisterField<PUPDR, 20, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR10, 0U>;
      using Pull_up = FieldValue<PUPDR10, 1U>;
      using Pull_down = FieldValue<PUPDR10, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR9 : RegisterField<PUPDR, 18, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR9, 0U>;
      using Pull_up = FieldValue<PUPDR9, 1U>;
      using Pull_down = FieldValue<PUPDR9, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR8 : RegisterField<PUPDR, 16, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR8, 0U>;
      using Pull_up = FieldValue<PUPDR8, 1U>;
      using Pull_down = FieldValue<PUPDR8, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR7 : RegisterField<PUPDR, 14, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR7, 0U>;
      using Pull_up = FieldValue<PUPDR7, 1U>;
      using Pull_down = FieldValue<PUPDR7, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR6 : RegisterField<PUPDR, 12, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR6, 0U>;
      using Pull_up = FieldValue<PUPDR6, 1U>;
      using Pull_down = FieldValue<PUPDR6, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR5 : RegisterField<PUPDR, 10, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR5, 0U>;
      using Pull_up = FieldValue<PUPDR5, 1U>;
      using Pull_down = FieldValue<PUPDR5, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR4 : RegisterField<PUPDR, 8, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR4, 0U>;
      using Pull_up = FieldValue<PUPDR4, 1U>;
      using Pull_down = FieldValue<PUPDR4, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR3 : RegisterField<PUPDR, 6, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR3, 0U>;
      using Pull_up = FieldValue<PUPDR3, 1U>;
      using Pull_down = FieldValue<PUPDR3, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR2 : RegisterField<PUPDR, 4, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR2, 0U>;
      using Pull_up = FieldValue<PUPDR2, 1U>;
      using Pull_down = FieldValue<PUPDR2, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR1 : RegisterField<PUPDR, 2, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR1, 0U>;
      using Pull_up = FieldValue<PUPDR1, 1U>;
      using Pull_down = FieldValue<PUPDR1, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR0 : RegisterField<PUPDR, 0, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR0, 0U>;
      using Pull_up = FieldValue<PUPDR0, 1U>;
      using Pull_down = FieldValue<PUPDR0, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct PUPDRx : RegisterField<PUPDR, 0 + 2 * num, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDRx, 0U>;
      using Pull_up = FieldValue<PUPDRx, 1U>;
      using Pull_down = FieldValue<PUPDRx, 2U>;
    };
  };

  // GPIO port input data register
  struct IDR : Register<0x40021410, ReadMode, 0x0>
  {
    // Port input data (y = 0..15)
    struct IDR15 : RegisterField<IDR, 15, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR14 : RegisterField<IDR, 14, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR13 : RegisterField<IDR, 13, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR12 : RegisterField<IDR, 12, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR11 : RegisterField<IDR, 11, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR10 : RegisterField<IDR, 10, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR9 : RegisterField<IDR, 9, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR8 : RegisterField<IDR, 8, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR7 : RegisterField<IDR, 7, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR6 : RegisterField<IDR, 6, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR5 : RegisterField<IDR, 5, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR4 : RegisterField<IDR, 4, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR3 : RegisterField<IDR, 3, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR2 : RegisterField<IDR, 2, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR1 : RegisterField<IDR, 1, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR0 : RegisterField<IDR, 0, 1, ReadMode>
    {
    };
  };

  // GPIO port output data register
  struct ODR : Register<0x40021414, ReadWriteMode, 0x0>
  {
    // Port output data (y = 0..15)
    struct ODR15 : RegisterField<ODR, 15, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR14 : RegisterField<ODR, 14, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR13 : RegisterField<ODR, 13, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR12 : RegisterField<ODR, 12, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR11 : RegisterField<ODR, 11, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR10 : RegisterField<ODR, 10, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR9 : RegisterField<ODR, 9, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR8 : RegisterField<ODR, 8, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR7 : RegisterField<ODR, 7, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR6 : RegisterField<ODR, 6, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR5 : RegisterField<ODR, 5, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR4 : RegisterField<ODR, 4, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR3 : RegisterField<ODR, 3, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR2 : RegisterField<ODR, 2, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR1 : RegisterField<ODR, 1, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR0 : RegisterField<ODR, 0, 1, ReadWriteMode>
    {
    };
  };

  // GPIO port bit set/reset register
  struct BSRR : Register<0x40021418, WriteMode, 0x0>
  {
    // Port x reset bit y (y = 0..15)
    struct BR15 : RegisterField<BSRR, 31, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR14 : RegisterField<BSRR, 30, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR13 : RegisterField<BSRR, 29, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR12 : RegisterField<BSRR, 28, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR11 : RegisterField<BSRR, 27, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR10 : RegisterField<BSRR, 26, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR9 : RegisterField<BSRR, 25, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR8 : RegisterField<BSRR, 24, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR7 : RegisterField<BSRR, 23, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR6 : RegisterField<BSRR, 22, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR5 : RegisterField<BSRR, 21, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR4 : RegisterField<BSRR, 20, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR3 : RegisterField<BSRR, 19, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR2 : RegisterField<BSRR, 18, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR1 : RegisterField<BSRR, 17, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BR0 : RegisterField<BSRR, 16, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS15 : RegisterField<BSRR, 15, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS14 : RegisterField<BSRR, 14, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS13 : RegisterField<BSRR, 13, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS12 : RegisterField<BSRR, 12, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS11 : RegisterField<BSRR, 11, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS10 : RegisterField<BSRR, 10, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS9 : RegisterField<BSRR, 9, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS8 : RegisterField<BSRR, 8, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS7 : RegisterField<BSRR, 7, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS6 : RegisterField<BSRR, 6, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS5 : RegisterField<BSRR, 5, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS4 : RegisterField<BSRR, 4, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS3 : RegisterField<BSRR, 3, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS2 : RegisterField<BSRR, 2, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS1 : RegisterField<BSRR, 1, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS0 : RegisterField<BSRR, 0, 1, WriteMode>
    {
    };
  };

  // GPIO port configuration lock register
  struct LCKR : Register<0x4002141c, ReadWriteMode, 0x0>
  {
    // Port x lock bit y (y= 0..15)
    struct LCKK : RegisterField<LCKR, 16, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK15 : RegisterField<LCKR, 15, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK14 : RegisterField<LCKR, 14, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK13 : RegisterField<LCKR, 13, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK12 : RegisterField<LCKR, 12, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK11 : RegisterField<LCKR, 11, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK10 : RegisterField<LCKR, 10, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK9 : RegisterField<LCKR, 9, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK8 : RegisterField<LCKR, 8, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK7 : RegisterField<LCKR, 7, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK6 : RegisterField<LCKR, 6, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK5 : RegisterField<LCKR, 5, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK4 : RegisterField<LCKR, 4, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK3 : RegisterField<LCKR, 3, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK2 : RegisterField<LCKR, 2, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK1 : RegisterField<LCKR, 1, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK0 : RegisterField<LCKR, 0, 1, ReadWriteMode>
    {
    };
  };

  // GPIO alternate function low register
  struct AFRL : Register<0x40021420, ReadWriteMode, 0x0>
  {
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL7 : RegisterField<AFRL, 28, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL7, 0U>;
      using AF1 = FieldValue<AFRL7, 1U>;
      using AF2 = FieldValue<AFRL7, 2U>;
      using AF3 = FieldValue<AFRL7, 3U>;
      using AF4 = FieldValue<AFRL7, 4U>;
      using AF5 = FieldValue<AFRL7, 5U>;
      using AF6 = FieldValue<AFRL7, 6U>;
      using AF7 = FieldValue<AFRL7, 7U>;
      using AF8 = FieldValue<AFRL7, 8U>;
      using AF9 = FieldValue<AFRL7, 9U>;
      using AF10 = FieldValue<AFRL7, 10U>;
      using AF11 = FieldValue<AFRL7, 11U>;
      using AF12 = FieldValue<AFRL7, 12U>;
      using AF13 = FieldValue<AFRL7, 13U>;
      using AF14 = FieldValue<AFRL7, 14U>;
      using AF15 = FieldValue<AFRL7, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL6 : RegisterField<AFRL, 24, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL6, 0U>;
      using AF1 = FieldValue<AFRL6, 1U>;
      using AF2 = FieldValue<AFRL6, 2U>;
      using AF3 = FieldValue<AFRL6, 3U>;
      using AF4 = FieldValue<AFRL6, 4U>;
      using AF5 = FieldValue<AFRL6, 5U>;
      using AF6 = FieldValue<AFRL6, 6U>;
      using AF7 = FieldValue<AFRL6, 7U>;
      using AF8 = FieldValue<AFRL6, 8U>;
      using AF9 = FieldValue<AFRL6, 9U>;
      using AF10 = FieldValue<AFRL6, 10U>;
      using AF11 = FieldValue<AFRL6, 11U>;
      using AF12 = FieldValue<AFRL6, 12U>;
      using AF13 = FieldValue<AFRL6, 13U>;
      using AF14 = FieldValue<AFRL6, 14U>;
      using AF15 = FieldValue<AFRL6, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL5 : RegisterField<AFRL, 20, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL5, 0U>;
      using AF1 = FieldValue<AFRL5, 1U>;
      using AF2 = FieldValue<AFRL5, 2U>;
      using AF3 = FieldValue<AFRL5, 3U>;
      using AF4 = FieldValue<AFRL5, 4U>;
      using AF5 = FieldValue<AFRL5, 5U>;
      using AF6 = FieldValue<AFRL5, 6U>;
      using AF7 = FieldValue<AFRL5, 7U>;
      using AF8 = FieldValue<AFRL5, 8U>;
      using AF9 = FieldValue<AFRL5, 9U>;
      using AF10 = FieldValue<AFRL5, 10U>;
      using AF11 = FieldValue<AFRL5, 11U>;
      using AF12 = FieldValue<AFRL5, 12U>;
      using AF13 = FieldValue<AFRL5, 13U>;
      using AF14 = FieldValue<AFRL5, 14U>;
      using AF15 = FieldValue<AFRL5, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL4 : RegisterField<AFRL, 16, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL4, 0U>;
      using AF1 = FieldValue<AFRL4, 1U>;
      using AF2 = FieldValue<AFRL4, 2U>;
      using AF3 = FieldValue<AFRL4, 3U>;
      using AF4 = FieldValue<AFRL4, 4U>;
      using AF5 = FieldValue<AFRL4, 5U>;
      using AF6 = FieldValue<AFRL4, 6U>;
      using AF7 = FieldValue<AFRL4, 7U>;
      using AF8 = FieldValue<AFRL4, 8U>;
      using AF9 = FieldValue<AFRL4, 9U>;
      using AF10 = FieldValue<AFRL4, 10U>;
      using AF11 = FieldValue<AFRL4, 11U>;
      using AF12 = FieldValue<AFRL4, 12U>;
      using AF13 = FieldValue<AFRL4, 13U>;
      using AF14 = FieldValue<AFRL4, 14U>;
      using AF15 = FieldValue<AFRL4, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL3 : RegisterField<AFRL, 12, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL3, 0U>;
      using AF1 = FieldValue<AFRL3, 1U>;
      using AF2 = FieldValue<AFRL3, 2U>;
      using AF3 = FieldValue<AFRL3, 3U>;
      using AF4 = FieldValue<AFRL3, 4U>;
      using AF5 = FieldValue<AFRL3, 5U>;
      using AF6 = FieldValue<AFRL3, 6U>;
      using AF7 = FieldValue<AFRL3, 7U>;
      using AF8 = FieldValue<AFRL3, 8U>;
      using AF9 = FieldValue<AFRL3, 9U>;
      using AF10 = FieldValue<AFRL3, 10U>;
      using AF11 = FieldValue<AFRL3, 11U>;
      using AF12 = FieldValue<AFRL3, 12U>;
      using AF13 = FieldValue<AFRL3, 13U>;
      using AF14 = FieldValue<AFRL3, 14U>;
      using AF15 = FieldValue<AFRL3, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL2 : RegisterField<AFRL, 8, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL2, 0U>;
      using AF1 = FieldValue<AFRL2, 1U>;
      using AF2 = FieldValue<AFRL2, 2U>;
      using AF3 = FieldValue<AFRL2, 3U>;
      using AF4 = FieldValue<AFRL2, 4U>;
      using AF5 = FieldValue<AFRL2, 5U>;
      using AF6 = FieldValue<AFRL2, 6U>;
      using AF7 = FieldValue<AFRL2, 7U>;
      using AF8 = FieldValue<AFRL2, 8U>;
      using AF9 = FieldValue<AFRL2, 9U>;
      using AF10 = FieldValue<AFRL2, 10U>;
      using AF11 = FieldValue<AFRL2, 11U>;
      using AF12 = FieldValue<AFRL2, 12U>;
      using AF13 = FieldValue<AFRL2, 13U>;
      using AF14 = FieldValue<AFRL2, 14U>;
      using AF15 = FieldValue<AFRL2, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL1 : RegisterField<AFRL, 4, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL1, 0U>;
      using AF1 = FieldValue<AFRL1, 1U>;
      using AF2 = FieldValue<AFRL1, 2U>;
      using AF3 = FieldValue<AFRL1, 3U>;
      using AF4 = FieldValue<AFRL1, 4U>;
      using AF5 = FieldValue<AFRL1, 5U>;
      using AF6 = FieldValue<AFRL1, 6U>;
      using AF7 = FieldValue<AFRL1, 7U>;
      using AF8 = FieldValue<AFRL1, 8U>;
      using AF9 = FieldValue<AFRL1, 9U>;
      using AF10 = FieldValue<AFRL1, 10U>;
      using AF11 = FieldValue<AFRL1, 11U>;
      using AF12 = FieldValue<AFRL1, 12U>;
      using AF13 = FieldValue<AFRL1, 13U>;
      using AF14 = FieldValue<AFRL1, 14U>;
      using AF15 = FieldValue<AFRL1, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL0 : RegisterField<AFRL, 0, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL0, 0U>;
      using AF1 = FieldValue<AFRL0, 1U>;
      using AF2 = FieldValue<AFRL0, 2U>;
      using AF3 = FieldValue<AFRL0, 3U>;
      using AF4 = FieldValue<AFRL0, 4U>;
      using AF5 = FieldValue<AFRL0, 5U>;
      using AF6 = FieldValue<AFRL0, 6U>;
      using AF7 = FieldValue<AFRL0, 7U>;
      using AF8 = FieldValue<AFRL0, 8U>;
      using AF9 = FieldValue<AFRL0, 9U>;
      using AF10 = FieldValue<AFRL0, 10U>;
      using AF11 = FieldValue<AFRL0, 11U>;
      using AF12 = FieldValue<AFRL0, 12U>;
      using AF13 = FieldValue<AFRL0, 13U>;
      using AF14 = FieldValue<AFRL0, 14U>;
      using AF15 = FieldValue<AFRL0, 15U>;
    };
  };

  // GPIO alternate function high register
  struct AFRH : Register<0x40021424, ReadWriteMode, 0x0>
  {
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH15 : RegisterField<AFRH, 28, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH15, 0U>;
      using AF1 = FieldValue<AFRH15, 1U>;
      using AF2 = FieldValue<AFRH15, 2U>;
      using AF3 = FieldValue<AFRH15, 3U>;
      using AF4 = FieldValue<AFRH15, 4U>;
      using AF5 = FieldValue<AFRH15, 5U>;
      using AF6 = FieldValue<AFRH15, 6U>;
      using AF7 = FieldValue<AFRH15, 7U>;
      using AF8 = FieldValue<AFRH15, 8U>;
      using AF9 = FieldValue<AFRH15, 9U>;
      using AF10 = FieldValue<AFRH15, 10U>;
      using AF11 = FieldValue<AFRH15, 11U>;
      using AF12 = FieldValue<AFRH15, 12U>;
      using AF13 = FieldValue<AFRH15, 13U>;
      using AF14 = FieldValue<AFRH15, 14U>;
      using AF15 = FieldValue<AFRH15, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH14 : RegisterField<AFRH, 24, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH14, 0U>;
      using AF1 = FieldValue<AFRH14, 1U>;
      using AF2 = FieldValue<AFRH14, 2U>;
      using AF3 = FieldValue<AFRH14, 3U>;
      using AF4 = FieldValue<AFRH14, 4U>;
      using AF5 = FieldValue<AFRH14, 5U>;
      using AF6 = FieldValue<AFRH14, 6U>;
      using AF7 = FieldValue<AFRH14, 7U>;
      using AF8 = FieldValue<AFRH14, 8U>;
      using AF9 = FieldValue<AFRH14, 9U>;
      using AF10 = FieldValue<AFRH14, 10U>;
      using AF11 = FieldValue<AFRH14, 11U>;
      using AF12 = FieldValue<AFRH14, 12U>;
      using AF13 = FieldValue<AFRH14, 13U>;
      using AF14 = FieldValue<AFRH14, 14U>;
      using AF15 = FieldValue<AFRH14, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH13 : RegisterField<AFRH, 20, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH13, 0U>;
      using AF1 = FieldValue<AFRH13, 1U>;
      using AF2 = FieldValue<AFRH13, 2U>;
      using AF3 = FieldValue<AFRH13, 3U>;
      using AF4 = FieldValue<AFRH13, 4U>;
      using AF5 = FieldValue<AFRH13, 5U>;
      using AF6 = FieldValue<AFRH13, 6U>;
      using AF7 = FieldValue<AFRH13, 7U>;
      using AF8 = FieldValue<AFRH13, 8U>;
      using AF9 = FieldValue<AFRH13, 9U>;
      using AF10 = FieldValue<AFRH13, 10U>;
      using AF11 = FieldValue<AFRH13, 11U>;
      using AF12 = FieldValue<AFRH13, 12U>;
      using AF13 = FieldValue<AFRH13, 13U>;
      using AF14 = FieldValue<AFRH13, 14U>;
      using AF15 = FieldValue<AFRH13, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH12 : RegisterField<AFRH, 16, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH12, 0U>;
      using AF1 = FieldValue<AFRH12, 1U>;
      using AF2 = FieldValue<AFRH12, 2U>;
      using AF3 = FieldValue<AFRH12, 3U>;
      using AF4 = FieldValue<AFRH12, 4U>;
      using AF5 = FieldValue<AFRH12, 5U>;
      using AF6 = FieldValue<AFRH12, 6U>;
      using AF7 = FieldValue<AFRH12, 7U>;
      using AF8 = FieldValue<AFRH12, 8U>;
      using AF9 = FieldValue<AFRH12, 9U>;
      using AF10 = FieldValue<AFRH12, 10U>;
      using AF11 = FieldValue<AFRH12, 11U>;
      using AF12 = FieldValue<AFRH12, 12U>;
      using AF13 = FieldValue<AFRH12, 13U>;
      using AF14 = FieldValue<AFRH12, 14U>;
      using AF15 = FieldValue<AFRH12, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH11 : RegisterField<AFRH, 12, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH11, 0U>;
      using AF1 = FieldValue<AFRH11, 1U>;
      using AF2 = FieldValue<AFRH11, 2U>;
      using AF3 = FieldValue<AFRH11, 3U>;
      using AF4 = FieldValue<AFRH11, 4U>;
      using AF5 = FieldValue<AFRH11, 5U>;
      using AF6 = FieldValue<AFRH11, 6U>;
      using AF7 = FieldValue<AFRH11, 7U>;
      using AF8 = FieldValue<AFRH11, 8U>;
      using AF9 = FieldValue<AFRH11, 9U>;
      using AF10 = FieldValue<AFRH11, 10U>;
      using AF11 = FieldValue<AFRH11, 11U>;
      using AF12 = FieldValue<AFRH11, 12U>;
      using AF13 = FieldValue<AFRH11, 13U>;
      using AF14 = FieldValue<AFRH11, 14U>;
      using AF15 = FieldValue<AFRH11, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH10 : RegisterField<AFRH, 8, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH10, 0U>;
      using AF1 = FieldValue<AFRH10, 1U>;
      using AF2 = FieldValue<AFRH10, 2U>;
      using AF3 = FieldValue<AFRH10, 3U>;
      using AF4 = FieldValue<AFRH10, 4U>;
      using AF5 = FieldValue<AFRH10, 5U>;
      using AF6 = FieldValue<AFRH10, 6U>;
      using AF7 = FieldValue<AFRH10, 7U>;
      using AF8 = FieldValue<AFRH10, 8U>;
      using AF9 = FieldValue<AFRH10, 9U>;
      using AF10 = FieldValue<AFRH10, 10U>;
      using AF11 = FieldValue<AFRH10, 11U>;
      using AF12 = FieldValue<AFRH10, 12U>;
      using AF13 = FieldValue<AFRH10, 13U>;
      using AF14 = FieldValue<AFRH10, 14U>;
      using AF15 = FieldValue<AFRH10, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH9 : RegisterField<AFRH, 4, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH9, 0U>;
      using AF1 = FieldValue<AFRH9, 1U>;
      using AF2 = FieldValue<AFRH9, 2U>;
      using AF3 = FieldValue<AFRH9, 3U>;
      using AF4 = FieldValue<AFRH9, 4U>;
      using AF5 = FieldValue<AFRH9, 5U>;
      using AF6 = FieldValue<AFRH9, 6U>;
      using AF7 = FieldValue<AFRH9, 7U>;
      using AF8 = FieldValue<AFRH9, 8U>;
      using AF9 = FieldValue<AFRH9, 9U>;
      using AF10 = FieldValue<AFRH9, 10U>;
      using AF11 = FieldValue<AFRH9, 11U>;
      using AF12 = FieldValue<AFRH9, 12U>;
      using AF13 = FieldValue<AFRH9, 13U>;
      using AF14 = FieldValue<AFRH9, 14U>;
      using AF15 = FieldValue<AFRH9, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH8 : RegisterField<AFRH, 0, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH8, 0U>;
      using AF1 = FieldValue<AFRH8, 1U>;
      using AF2 = FieldValue<AFRH8, 2U>;
      using AF3 = FieldValue<AFRH8, 3U>;
      using AF4 = FieldValue<AFRH8, 4U>;
      using AF5 = FieldValue<AFRH8, 5U>;
      using AF6 = FieldValue<AFRH8, 6U>;
      using AF7 = FieldValue<AFRH8, 7U>;
      using AF8 = FieldValue<AFRH8, 8U>;
      using AF9 = FieldValue<AFRH8, 9U>;
      using AF10 = FieldValue<AFRH8, 10U>;
      using AF11 = FieldValue<AFRH8, 11U>;
      using AF12 = FieldValue<AFRH8, 12U>;
      using AF13 = FieldValue<AFRH8, 13U>;
      using AF14 = FieldValue<AFRH8, 14U>;
      using AF15 = FieldValue<AFRH8, 15U>;
    };
  };

// Large Registers

  // GPIO alternate function low register
  template<auto num>
  struct AFR_AF : RegisterField<Register<0x40021420 + 4 * (num / 8), ReadWriteMode, 0x0>, 4 * (num % 8), 4, ReadWriteMode>
  {
    using AF0 = FieldValue<AFR_AF, 0U>;
    using AF1 = FieldValue<AFR_AF, 1U>;
    using AF2 = FieldValue<AFR_AF, 2U>;
    using AF3 = FieldValue<AFR_AF, 3U>;
    using AF4 = FieldValue<AFR_AF, 4U>;
    using AF5 = FieldValue<AFR_AF, 5U>;
    using AF6 = FieldValue<AFR_AF, 6U>;
    using AF7 = FieldValue<AFR_AF, 7U>;
    using AF8 = FieldValue<AFR_AF, 8U>;
    using AF9 = FieldValue<AFR_AF, 9U>;
    using AF10 = FieldValue<AFR_AF, 10U>;
    using AF11 = FieldValue<AFR_AF, 11U>;
    using AF12 = FieldValue<AFR_AF, 12U>;
    using AF13 = FieldValue<AFR_AF, 13U>;
    using AF14 = FieldValue<AFR_AF, 14U>;
    using AF15 = FieldValue<AFR_AF, 15U>;
  };

};


struct GPIOE
{
  static constexpr auto periphNum = 4;

  // GPIO port mode register
  struct MODER : Register<0x40021000, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct MODER15 : RegisterField<MODER, 30, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER15, 0U>;
      using Output = FieldValue<MODER15, 1U>;
      using Alternate = FieldValue<MODER15, 2U>;
      using Analog = FieldValue<MODER15, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER14 : RegisterField<MODER, 28, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER14, 0U>;
      using Output = FieldValue<MODER14, 1U>;
      using Alternate = FieldValue<MODER14, 2U>;
      using Analog = FieldValue<MODER14, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER13 : RegisterField<MODER, 26, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER13, 0U>;
      using Output = FieldValue<MODER13, 1U>;
      using Alternate = FieldValue<MODER13, 2U>;
      using Analog = FieldValue<MODER13, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER12 : RegisterField<MODER, 24, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER12, 0U>;
      using Output = FieldValue<MODER12, 1U>;
      using Alternate = FieldValue<MODER12, 2U>;
      using Analog = FieldValue<MODER12, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER11 : RegisterField<MODER, 22, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER11, 0U>;
      using Output = FieldValue<MODER11, 1U>;
      using Alternate = FieldValue<MODER11, 2U>;
      using Analog = FieldValue<MODER11, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER10 : RegisterField<MODER, 20, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER10, 0U>;
      using Output = FieldValue<MODER10, 1U>;
      using Alternate = FieldValue<MODER10, 2U>;
      using Analog = FieldValue<MODER10, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER9 : RegisterField<MODER, 18, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER9, 0U>;
      using Output = FieldValue<MODER9, 1U>;
      using Alternate = FieldValue<MODER9, 2U>;
      using Analog = FieldValue<MODER9, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER8 : RegisterField<MODER, 16, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER8, 0U>;
      using Output = FieldValue<MODER8, 1U>;
      using Alternate = FieldValue<MODER8, 2U>;
      using Analog = FieldValue<MODER8, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER7 : RegisterField<MODER, 14, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER7, 0U>;
      using Output = FieldValue<MODER7, 1U>;
      using Alternate = FieldValue<MODER7, 2U>;
      using Analog = FieldValue<MODER7, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER6 : RegisterField<MODER, 12, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER6, 0U>;
      using Output = FieldValue<MODER6, 1U>;
      using Alternate = FieldValue<MODER6, 2U>;
      using Analog = FieldValue<MODER6, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER5 : RegisterField<MODER, 10, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER5, 0U>;
      using Output = FieldValue<MODER5, 1U>;
      using Alternate = FieldValue<MODER5, 2U>;
      using Analog = FieldValue<MODER5, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER4 : RegisterField<MODER, 8, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER4, 0U>;
      using Output = FieldValue<MODER4, 1U>;
      using Alternate = FieldValue<MODER4, 2U>;
      using Analog = FieldValue<MODER4, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER3 : RegisterField<MODER, 6, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER3, 0U>;
      using Output = FieldValue<MODER3, 1U>;
      using Alternate = FieldValue<MODER3, 2U>;
      using Analog = FieldValue<MODER3, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER2 : RegisterField<MODER, 4, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER2, 0U>;
      using Output = FieldValue<MODER2, 1U>;
      using Alternate = FieldValue<MODER2, 2U>;
      using Analog = FieldValue<MODER2, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER1 : RegisterField<MODER, 2, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER1, 0U>;
      using Output = FieldValue<MODER1, 1U>;
      using Alternate = FieldValue<MODER1, 2U>;
      using Analog = FieldValue<MODER1, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER0 : RegisterField<MODER, 0, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER0, 0U>;
      using Output = FieldValue<MODER0, 1U>;
      using Alternate = FieldValue<MODER0, 2U>;
      using Analog = FieldValue<MODER0, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct MODERx : RegisterField<MODER, 0 + 2 * num, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODERx, 0U>;
      using Output = FieldValue<MODERx, 1U>;
      using Alternate = FieldValue<MODERx, 2U>;
      using Analog = FieldValue<MODERx, 3U>;
    };
  };

  // GPIO port output type register
  struct OTYPER : Register<0x40021004, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct OT15 : RegisterField<OTYPER, 15, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT15, 0U>;
      using Open_drain = FieldValue<OT15, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT14 : RegisterField<OTYPER, 14, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT14, 0U>;
      using Open_drain = FieldValue<OT14, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT13 : RegisterField<OTYPER, 13, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT13, 0U>;
      using Open_drain = FieldValue<OT13, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT12 : RegisterField<OTYPER, 12, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT12, 0U>;
      using Open_drain = FieldValue<OT12, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT11 : RegisterField<OTYPER, 11, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT11, 0U>;
      using Open_drain = FieldValue<OT11, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT10 : RegisterField<OTYPER, 10, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT10, 0U>;
      using Open_drain = FieldValue<OT10, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT9 : RegisterField<OTYPER, 9, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT9, 0U>;
      using Open_drain = FieldValue<OT9, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT8 : RegisterField<OTYPER, 8, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT8, 0U>;
      using Open_drain = FieldValue<OT8, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT7 : RegisterField<OTYPER, 7, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT7, 0U>;
      using Open_drain = FieldValue<OT7, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT6 : RegisterField<OTYPER, 6, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT6, 0U>;
      using Open_drain = FieldValue<OT6, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT5 : RegisterField<OTYPER, 5, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT5, 0U>;
      using Open_drain = FieldValue<OT5, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT4 : RegisterField<OTYPER, 4, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT4, 0U>;
      using Open_drain = FieldValue<OT4, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT3 : RegisterField<OTYPER, 3, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT3, 0U>;
      using Open_drain = FieldValue<OT3, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT2 : RegisterField<OTYPER, 2, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT2, 0U>;
      using Open_drain = FieldValue<OT2, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT1 : RegisterField<OTYPER, 1, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT1, 0U>;
      using Open_drain = FieldValue<OT1, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT0 : RegisterField<OTYPER, 0, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT0, 0U>;
      using Open_drain = FieldValue<OT0, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct OTx : RegisterField<OTYPER, 0 + 1 * num, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OTx, 0U>;
      using Open_drain = FieldValue<OTx, 1U>;
    };
  };

  // GPIO port output speed register
  struct OSPEEDR : Register<0x40021008, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR15 : RegisterField<OSPEEDR, 30, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR15, 0U>;
      using Medium = FieldValue<OSPEEDR15, 1U>;
      using Fast = FieldValue<OSPEEDR15, 2U>;
      using High = FieldValue<OSPEEDR15, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR14 : RegisterField<OSPEEDR, 28, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR14, 0U>;
      using Medium = FieldValue<OSPEEDR14, 1U>;
      using Fast = FieldValue<OSPEEDR14, 2U>;
      using High = FieldValue<OSPEEDR14, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR13 : RegisterField<OSPEEDR, 26, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR13, 0U>;
      using Medium = FieldValue<OSPEEDR13, 1U>;
      using Fast = FieldValue<OSPEEDR13, 2U>;
      using High = FieldValue<OSPEEDR13, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR12 : RegisterField<OSPEEDR, 24, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR12, 0U>;
      using Medium = FieldValue<OSPEEDR12, 1U>;
      using Fast = FieldValue<OSPEEDR12, 2U>;
      using High = FieldValue<OSPEEDR12, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR11 : RegisterField<OSPEEDR, 22, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR11, 0U>;
      using Medium = FieldValue<OSPEEDR11, 1U>;
      using Fast = FieldValue<OSPEEDR11, 2U>;
      using High = FieldValue<OSPEEDR11, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR10 : RegisterField<OSPEEDR, 20, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR10, 0U>;
      using Medium = FieldValue<OSPEEDR10, 1U>;
      using Fast = FieldValue<OSPEEDR10, 2U>;
      using High = FieldValue<OSPEEDR10, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR9 : RegisterField<OSPEEDR, 18, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR9, 0U>;
      using Medium = FieldValue<OSPEEDR9, 1U>;
      using Fast = FieldValue<OSPEEDR9, 2U>;
      using High = FieldValue<OSPEEDR9, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR8 : RegisterField<OSPEEDR, 16, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR8, 0U>;
      using Medium = FieldValue<OSPEEDR8, 1U>;
      using Fast = FieldValue<OSPEEDR8, 2U>;
      using High = FieldValue<OSPEEDR8, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR7 : RegisterField<OSPEEDR, 14, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR7, 0U>;
      using Medium = FieldValue<OSPEEDR7, 1U>;
      using Fast = FieldValue<OSPEEDR7, 2U>;
      using High = FieldValue<OSPEEDR7, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR6 : RegisterField<OSPEEDR, 12, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR6, 0U>;
      using Medium = FieldValue<OSPEEDR6, 1U>;
      using Fast = FieldValue<OSPEEDR6, 2U>;
      using High = FieldValue<OSPEEDR6, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR5 : RegisterField<OSPEEDR, 10, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR5, 0U>;
      using Medium = FieldValue<OSPEEDR5, 1U>;
      using Fast = FieldValue<OSPEEDR5, 2U>;
      using High = FieldValue<OSPEEDR5, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR4 : RegisterField<OSPEEDR, 8, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR4, 0U>;
      using Medium = FieldValue<OSPEEDR4, 1U>;
      using Fast = FieldValue<OSPEEDR4, 2U>;
      using High = FieldValue<OSPEEDR4, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR3 : RegisterField<OSPEEDR, 6, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR3, 0U>;
      using Medium = FieldValue<OSPEEDR3, 1U>;
      using Fast = FieldValue<OSPEEDR3, 2U>;
      using High = FieldValue<OSPEEDR3, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR2 : RegisterField<OSPEEDR, 4, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR2, 0U>;
      using Medium = FieldValue<OSPEEDR2, 1U>;
      using Fast = FieldValue<OSPEEDR2, 2U>;
      using High = FieldValue<OSPEEDR2, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR1 : RegisterField<OSPEEDR, 2, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR1, 0U>;
      using Medium = FieldValue<OSPEEDR1, 1U>;
      using Fast = FieldValue<OSPEEDR1, 2U>;
      using High = FieldValue<OSPEEDR1, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR0 : RegisterField<OSPEEDR, 0, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR0, 0U>;
      using Medium = FieldValue<OSPEEDR0, 1U>;
      using Fast = FieldValue<OSPEEDR0, 2U>;
      using High = FieldValue<OSPEEDR0, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct OSPEEDRx : RegisterField<OSPEEDR, 0 + 2 * num, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDRx, 0U>;
      using Medium = FieldValue<OSPEEDRx, 1U>;
      using Fast = FieldValue<OSPEEDRx, 2U>;
      using High = FieldValue<OSPEEDRx, 3U>;
    };
  };

  // GPIO port pull-up/pull-down register
  struct PUPDR : Register<0x4002100c, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct PUPDR15 : RegisterField<PUPDR, 30, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR15, 0U>;
      using Pull_up = FieldValue<PUPDR15, 1U>;
      using Pull_down = FieldValue<PUPDR15, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR14 : RegisterField<PUPDR, 28, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR14, 0U>;
      using Pull_up = FieldValue<PUPDR14, 1U>;
      using Pull_down = FieldValue<PUPDR14, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR13 : RegisterField<PUPDR, 26, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR13, 0U>;
      using Pull_up = FieldValue<PUPDR13, 1U>;
      using Pull_down = FieldValue<PUPDR13, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR12 : RegisterField<PUPDR, 24, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR12, 0U>;
      using Pull_up = FieldValue<PUPDR12, 1U>;
      using Pull_down = FieldValue<PUPDR12, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR11 : RegisterField<PUPDR, 22, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR11, 0U>;
      using Pull_up = FieldValue<PUPDR11, 1U>;
      using Pull_down = FieldValue<PUPDR11, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR10 : RegisterField<PUPDR, 20, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR10, 0U>;
      using Pull_up = FieldValue<PUPDR10, 1U>;
      using Pull_down = FieldValue<PUPDR10, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR9 : RegisterField<PUPDR, 18, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR9, 0U>;
      using Pull_up = FieldValue<PUPDR9, 1U>;
      using Pull_down = FieldValue<PUPDR9, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR8 : RegisterField<PUPDR, 16, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR8, 0U>;
      using Pull_up = FieldValue<PUPDR8, 1U>;
      using Pull_down = FieldValue<PUPDR8, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR7 : RegisterField<PUPDR, 14, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR7, 0U>;
      using Pull_up = FieldValue<PUPDR7, 1U>;
      using Pull_down = FieldValue<PUPDR7, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR6 : RegisterField<PUPDR, 12, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR6, 0U>;
      using Pull_up = FieldValue<PUPDR6, 1U>;
      using Pull_down = FieldValue<PUPDR6, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR5 : RegisterField<PUPDR, 10, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR5, 0U>;
      using Pull_up = FieldValue<PUPDR5, 1U>;
      using Pull_down = FieldValue<PUPDR5, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR4 : RegisterField<PUPDR, 8, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR4, 0U>;
      using Pull_up = FieldValue<PUPDR4, 1U>;
      using Pull_down = FieldValue<PUPDR4, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR3 : RegisterField<PUPDR, 6, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR3, 0U>;
      using Pull_up = FieldValue<PUPDR3, 1U>;
      using Pull_down = FieldValue<PUPDR3, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR2 : RegisterField<PUPDR, 4, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR2, 0U>;
      using Pull_up = FieldValue<PUPDR2, 1U>;
      using Pull_down = FieldValue<PUPDR2, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR1 : RegisterField<PUPDR, 2, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR1, 0U>;
      using Pull_up = FieldValue<PUPDR1, 1U>;
      using Pull_down = FieldValue<PUPDR1, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR0 : RegisterField<PUPDR, 0, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR0, 0U>;
      using Pull_up = FieldValue<PUPDR0, 1U>;
      using Pull_down = FieldValue<PUPDR0, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct PUPDRx : RegisterField<PUPDR, 0 + 2 * num, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDRx, 0U>;
      using Pull_up = FieldValue<PUPDRx, 1U>;
      using Pull_down = FieldValue<PUPDRx, 2U>;
    };
  };

  // GPIO port input data register
  struct IDR : Register<0x40021010, ReadMode, 0x0>
  {
    // Port input data (y = 0..15)
    struct IDR15 : RegisterField<IDR, 15, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR14 : RegisterField<IDR, 14, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR13 : RegisterField<IDR, 13, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR12 : RegisterField<IDR, 12, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR11 : RegisterField<IDR, 11, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR10 : RegisterField<IDR, 10, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR9 : RegisterField<IDR, 9, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR8 : RegisterField<IDR, 8, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR7 : RegisterField<IDR, 7, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR6 : RegisterField<IDR, 6, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR5 : RegisterField<IDR, 5, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR4 : RegisterField<IDR, 4, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR3 : RegisterField<IDR, 3, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR2 : RegisterField<IDR, 2, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR1 : RegisterField<IDR, 1, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR0 : RegisterField<IDR, 0, 1, ReadMode>
    {
    };
  };

  // GPIO port output data register
  struct ODR : Register<0x40021014, ReadWriteMode, 0x0>
  {
    // Port output data (y = 0..15)
    struct ODR15 : RegisterField<ODR, 15, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR14 : RegisterField<ODR, 14, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR13 : RegisterField<ODR, 13, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR12 : RegisterField<ODR, 12, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR11 : RegisterField<ODR, 11, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR10 : RegisterField<ODR, 10, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR9 : RegisterField<ODR, 9, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR8 : RegisterField<ODR, 8, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR7 : RegisterField<ODR, 7, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR6 : RegisterField<ODR, 6, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR5 : RegisterField<ODR, 5, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR4 : RegisterField<ODR, 4, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR3 : RegisterField<ODR, 3, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR2 : RegisterField<ODR, 2, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR1 : RegisterField<ODR, 1, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR0 : RegisterField<ODR, 0, 1, ReadWriteMode>
    {
    };
  };

  // GPIO port bit set/reset register
  struct BSRR : Register<0x40021018, WriteMode, 0x0>
  {
    // Port x reset bit y (y = 0..15)
    struct BR15 : RegisterField<BSRR, 31, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR14 : RegisterField<BSRR, 30, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR13 : RegisterField<BSRR, 29, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR12 : RegisterField<BSRR, 28, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR11 : RegisterField<BSRR, 27, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR10 : RegisterField<BSRR, 26, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR9 : RegisterField<BSRR, 25, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR8 : RegisterField<BSRR, 24, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR7 : RegisterField<BSRR, 23, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR6 : RegisterField<BSRR, 22, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR5 : RegisterField<BSRR, 21, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR4 : RegisterField<BSRR, 20, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR3 : RegisterField<BSRR, 19, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR2 : RegisterField<BSRR, 18, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR1 : RegisterField<BSRR, 17, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BR0 : RegisterField<BSRR, 16, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS15 : RegisterField<BSRR, 15, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS14 : RegisterField<BSRR, 14, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS13 : RegisterField<BSRR, 13, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS12 : RegisterField<BSRR, 12, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS11 : RegisterField<BSRR, 11, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS10 : RegisterField<BSRR, 10, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS9 : RegisterField<BSRR, 9, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS8 : RegisterField<BSRR, 8, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS7 : RegisterField<BSRR, 7, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS6 : RegisterField<BSRR, 6, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS5 : RegisterField<BSRR, 5, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS4 : RegisterField<BSRR, 4, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS3 : RegisterField<BSRR, 3, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS2 : RegisterField<BSRR, 2, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS1 : RegisterField<BSRR, 1, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS0 : RegisterField<BSRR, 0, 1, WriteMode>
    {
    };
  };

  // GPIO port configuration lock register
  struct LCKR : Register<0x4002101c, ReadWriteMode, 0x0>
  {
    // Port x lock bit y (y= 0..15)
    struct LCKK : RegisterField<LCKR, 16, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK15 : RegisterField<LCKR, 15, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK14 : RegisterField<LCKR, 14, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK13 : RegisterField<LCKR, 13, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK12 : RegisterField<LCKR, 12, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK11 : RegisterField<LCKR, 11, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK10 : RegisterField<LCKR, 10, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK9 : RegisterField<LCKR, 9, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK8 : RegisterField<LCKR, 8, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK7 : RegisterField<LCKR, 7, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK6 : RegisterField<LCKR, 6, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK5 : RegisterField<LCKR, 5, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK4 : RegisterField<LCKR, 4, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK3 : RegisterField<LCKR, 3, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK2 : RegisterField<LCKR, 2, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK1 : RegisterField<LCKR, 1, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK0 : RegisterField<LCKR, 0, 1, ReadWriteMode>
    {
    };
  };

  // GPIO alternate function low register
  struct AFRL : Register<0x40021020, ReadWriteMode, 0x0>
  {
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL7 : RegisterField<AFRL, 28, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL7, 0U>;
      using AF1 = FieldValue<AFRL7, 1U>;
      using AF2 = FieldValue<AFRL7, 2U>;
      using AF3 = FieldValue<AFRL7, 3U>;
      using AF4 = FieldValue<AFRL7, 4U>;
      using AF5 = FieldValue<AFRL7, 5U>;
      using AF6 = FieldValue<AFRL7, 6U>;
      using AF7 = FieldValue<AFRL7, 7U>;
      using AF8 = FieldValue<AFRL7, 8U>;
      using AF9 = FieldValue<AFRL7, 9U>;
      using AF10 = FieldValue<AFRL7, 10U>;
      using AF11 = FieldValue<AFRL7, 11U>;
      using AF12 = FieldValue<AFRL7, 12U>;
      using AF13 = FieldValue<AFRL7, 13U>;
      using AF14 = FieldValue<AFRL7, 14U>;
      using AF15 = FieldValue<AFRL7, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL6 : RegisterField<AFRL, 24, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL6, 0U>;
      using AF1 = FieldValue<AFRL6, 1U>;
      using AF2 = FieldValue<AFRL6, 2U>;
      using AF3 = FieldValue<AFRL6, 3U>;
      using AF4 = FieldValue<AFRL6, 4U>;
      using AF5 = FieldValue<AFRL6, 5U>;
      using AF6 = FieldValue<AFRL6, 6U>;
      using AF7 = FieldValue<AFRL6, 7U>;
      using AF8 = FieldValue<AFRL6, 8U>;
      using AF9 = FieldValue<AFRL6, 9U>;
      using AF10 = FieldValue<AFRL6, 10U>;
      using AF11 = FieldValue<AFRL6, 11U>;
      using AF12 = FieldValue<AFRL6, 12U>;
      using AF13 = FieldValue<AFRL6, 13U>;
      using AF14 = FieldValue<AFRL6, 14U>;
      using AF15 = FieldValue<AFRL6, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL5 : RegisterField<AFRL, 20, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL5, 0U>;
      using AF1 = FieldValue<AFRL5, 1U>;
      using AF2 = FieldValue<AFRL5, 2U>;
      using AF3 = FieldValue<AFRL5, 3U>;
      using AF4 = FieldValue<AFRL5, 4U>;
      using AF5 = FieldValue<AFRL5, 5U>;
      using AF6 = FieldValue<AFRL5, 6U>;
      using AF7 = FieldValue<AFRL5, 7U>;
      using AF8 = FieldValue<AFRL5, 8U>;
      using AF9 = FieldValue<AFRL5, 9U>;
      using AF10 = FieldValue<AFRL5, 10U>;
      using AF11 = FieldValue<AFRL5, 11U>;
      using AF12 = FieldValue<AFRL5, 12U>;
      using AF13 = FieldValue<AFRL5, 13U>;
      using AF14 = FieldValue<AFRL5, 14U>;
      using AF15 = FieldValue<AFRL5, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL4 : RegisterField<AFRL, 16, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL4, 0U>;
      using AF1 = FieldValue<AFRL4, 1U>;
      using AF2 = FieldValue<AFRL4, 2U>;
      using AF3 = FieldValue<AFRL4, 3U>;
      using AF4 = FieldValue<AFRL4, 4U>;
      using AF5 = FieldValue<AFRL4, 5U>;
      using AF6 = FieldValue<AFRL4, 6U>;
      using AF7 = FieldValue<AFRL4, 7U>;
      using AF8 = FieldValue<AFRL4, 8U>;
      using AF9 = FieldValue<AFRL4, 9U>;
      using AF10 = FieldValue<AFRL4, 10U>;
      using AF11 = FieldValue<AFRL4, 11U>;
      using AF12 = FieldValue<AFRL4, 12U>;
      using AF13 = FieldValue<AFRL4, 13U>;
      using AF14 = FieldValue<AFRL4, 14U>;
      using AF15 = FieldValue<AFRL4, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL3 : RegisterField<AFRL, 12, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL3, 0U>;
      using AF1 = FieldValue<AFRL3, 1U>;
      using AF2 = FieldValue<AFRL3, 2U>;
      using AF3 = FieldValue<AFRL3, 3U>;
      using AF4 = FieldValue<AFRL3, 4U>;
      using AF5 = FieldValue<AFRL3, 5U>;
      using AF6 = FieldValue<AFRL3, 6U>;
      using AF7 = FieldValue<AFRL3, 7U>;
      using AF8 = FieldValue<AFRL3, 8U>;
      using AF9 = FieldValue<AFRL3, 9U>;
      using AF10 = FieldValue<AFRL3, 10U>;
      using AF11 = FieldValue<AFRL3, 11U>;
      using AF12 = FieldValue<AFRL3, 12U>;
      using AF13 = FieldValue<AFRL3, 13U>;
      using AF14 = FieldValue<AFRL3, 14U>;
      using AF15 = FieldValue<AFRL3, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL2 : RegisterField<AFRL, 8, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL2, 0U>;
      using AF1 = FieldValue<AFRL2, 1U>;
      using AF2 = FieldValue<AFRL2, 2U>;
      using AF3 = FieldValue<AFRL2, 3U>;
      using AF4 = FieldValue<AFRL2, 4U>;
      using AF5 = FieldValue<AFRL2, 5U>;
      using AF6 = FieldValue<AFRL2, 6U>;
      using AF7 = FieldValue<AFRL2, 7U>;
      using AF8 = FieldValue<AFRL2, 8U>;
      using AF9 = FieldValue<AFRL2, 9U>;
      using AF10 = FieldValue<AFRL2, 10U>;
      using AF11 = FieldValue<AFRL2, 11U>;
      using AF12 = FieldValue<AFRL2, 12U>;
      using AF13 = FieldValue<AFRL2, 13U>;
      using AF14 = FieldValue<AFRL2, 14U>;
      using AF15 = FieldValue<AFRL2, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL1 : RegisterField<AFRL, 4, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL1, 0U>;
      using AF1 = FieldValue<AFRL1, 1U>;
      using AF2 = FieldValue<AFRL1, 2U>;
      using AF3 = FieldValue<AFRL1, 3U>;
      using AF4 = FieldValue<AFRL1, 4U>;
      using AF5 = FieldValue<AFRL1, 5U>;
      using AF6 = FieldValue<AFRL1, 6U>;
      using AF7 = FieldValue<AFRL1, 7U>;
      using AF8 = FieldValue<AFRL1, 8U>;
      using AF9 = FieldValue<AFRL1, 9U>;
      using AF10 = FieldValue<AFRL1, 10U>;
      using AF11 = FieldValue<AFRL1, 11U>;
      using AF12 = FieldValue<AFRL1, 12U>;
      using AF13 = FieldValue<AFRL1, 13U>;
      using AF14 = FieldValue<AFRL1, 14U>;
      using AF15 = FieldValue<AFRL1, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL0 : RegisterField<AFRL, 0, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL0, 0U>;
      using AF1 = FieldValue<AFRL0, 1U>;
      using AF2 = FieldValue<AFRL0, 2U>;
      using AF3 = FieldValue<AFRL0, 3U>;
      using AF4 = FieldValue<AFRL0, 4U>;
      using AF5 = FieldValue<AFRL0, 5U>;
      using AF6 = FieldValue<AFRL0, 6U>;
      using AF7 = FieldValue<AFRL0, 7U>;
      using AF8 = FieldValue<AFRL0, 8U>;
      using AF9 = FieldValue<AFRL0, 9U>;
      using AF10 = FieldValue<AFRL0, 10U>;
      using AF11 = FieldValue<AFRL0, 11U>;
      using AF12 = FieldValue<AFRL0, 12U>;
      using AF13 = FieldValue<AFRL0, 13U>;
      using AF14 = FieldValue<AFRL0, 14U>;
      using AF15 = FieldValue<AFRL0, 15U>;
    };
  };

  // GPIO alternate function high register
  struct AFRH : Register<0x40021024, ReadWriteMode, 0x0>
  {
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH15 : RegisterField<AFRH, 28, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH15, 0U>;
      using AF1 = FieldValue<AFRH15, 1U>;
      using AF2 = FieldValue<AFRH15, 2U>;
      using AF3 = FieldValue<AFRH15, 3U>;
      using AF4 = FieldValue<AFRH15, 4U>;
      using AF5 = FieldValue<AFRH15, 5U>;
      using AF6 = FieldValue<AFRH15, 6U>;
      using AF7 = FieldValue<AFRH15, 7U>;
      using AF8 = FieldValue<AFRH15, 8U>;
      using AF9 = FieldValue<AFRH15, 9U>;
      using AF10 = FieldValue<AFRH15, 10U>;
      using AF11 = FieldValue<AFRH15, 11U>;
      using AF12 = FieldValue<AFRH15, 12U>;
      using AF13 = FieldValue<AFRH15, 13U>;
      using AF14 = FieldValue<AFRH15, 14U>;
      using AF15 = FieldValue<AFRH15, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH14 : RegisterField<AFRH, 24, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH14, 0U>;
      using AF1 = FieldValue<AFRH14, 1U>;
      using AF2 = FieldValue<AFRH14, 2U>;
      using AF3 = FieldValue<AFRH14, 3U>;
      using AF4 = FieldValue<AFRH14, 4U>;
      using AF5 = FieldValue<AFRH14, 5U>;
      using AF6 = FieldValue<AFRH14, 6U>;
      using AF7 = FieldValue<AFRH14, 7U>;
      using AF8 = FieldValue<AFRH14, 8U>;
      using AF9 = FieldValue<AFRH14, 9U>;
      using AF10 = FieldValue<AFRH14, 10U>;
      using AF11 = FieldValue<AFRH14, 11U>;
      using AF12 = FieldValue<AFRH14, 12U>;
      using AF13 = FieldValue<AFRH14, 13U>;
      using AF14 = FieldValue<AFRH14, 14U>;
      using AF15 = FieldValue<AFRH14, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH13 : RegisterField<AFRH, 20, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH13, 0U>;
      using AF1 = FieldValue<AFRH13, 1U>;
      using AF2 = FieldValue<AFRH13, 2U>;
      using AF3 = FieldValue<AFRH13, 3U>;
      using AF4 = FieldValue<AFRH13, 4U>;
      using AF5 = FieldValue<AFRH13, 5U>;
      using AF6 = FieldValue<AFRH13, 6U>;
      using AF7 = FieldValue<AFRH13, 7U>;
      using AF8 = FieldValue<AFRH13, 8U>;
      using AF9 = FieldValue<AFRH13, 9U>;
      using AF10 = FieldValue<AFRH13, 10U>;
      using AF11 = FieldValue<AFRH13, 11U>;
      using AF12 = FieldValue<AFRH13, 12U>;
      using AF13 = FieldValue<AFRH13, 13U>;
      using AF14 = FieldValue<AFRH13, 14U>;
      using AF15 = FieldValue<AFRH13, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH12 : RegisterField<AFRH, 16, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH12, 0U>;
      using AF1 = FieldValue<AFRH12, 1U>;
      using AF2 = FieldValue<AFRH12, 2U>;
      using AF3 = FieldValue<AFRH12, 3U>;
      using AF4 = FieldValue<AFRH12, 4U>;
      using AF5 = FieldValue<AFRH12, 5U>;
      using AF6 = FieldValue<AFRH12, 6U>;
      using AF7 = FieldValue<AFRH12, 7U>;
      using AF8 = FieldValue<AFRH12, 8U>;
      using AF9 = FieldValue<AFRH12, 9U>;
      using AF10 = FieldValue<AFRH12, 10U>;
      using AF11 = FieldValue<AFRH12, 11U>;
      using AF12 = FieldValue<AFRH12, 12U>;
      using AF13 = FieldValue<AFRH12, 13U>;
      using AF14 = FieldValue<AFRH12, 14U>;
      using AF15 = FieldValue<AFRH12, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH11 : RegisterField<AFRH, 12, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH11, 0U>;
      using AF1 = FieldValue<AFRH11, 1U>;
      using AF2 = FieldValue<AFRH11, 2U>;
      using AF3 = FieldValue<AFRH11, 3U>;
      using AF4 = FieldValue<AFRH11, 4U>;
      using AF5 = FieldValue<AFRH11, 5U>;
      using AF6 = FieldValue<AFRH11, 6U>;
      using AF7 = FieldValue<AFRH11, 7U>;
      using AF8 = FieldValue<AFRH11, 8U>;
      using AF9 = FieldValue<AFRH11, 9U>;
      using AF10 = FieldValue<AFRH11, 10U>;
      using AF11 = FieldValue<AFRH11, 11U>;
      using AF12 = FieldValue<AFRH11, 12U>;
      using AF13 = FieldValue<AFRH11, 13U>;
      using AF14 = FieldValue<AFRH11, 14U>;
      using AF15 = FieldValue<AFRH11, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH10 : RegisterField<AFRH, 8, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH10, 0U>;
      using AF1 = FieldValue<AFRH10, 1U>;
      using AF2 = FieldValue<AFRH10, 2U>;
      using AF3 = FieldValue<AFRH10, 3U>;
      using AF4 = FieldValue<AFRH10, 4U>;
      using AF5 = FieldValue<AFRH10, 5U>;
      using AF6 = FieldValue<AFRH10, 6U>;
      using AF7 = FieldValue<AFRH10, 7U>;
      using AF8 = FieldValue<AFRH10, 8U>;
      using AF9 = FieldValue<AFRH10, 9U>;
      using AF10 = FieldValue<AFRH10, 10U>;
      using AF11 = FieldValue<AFRH10, 11U>;
      using AF12 = FieldValue<AFRH10, 12U>;
      using AF13 = FieldValue<AFRH10, 13U>;
      using AF14 = FieldValue<AFRH10, 14U>;
      using AF15 = FieldValue<AFRH10, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH9 : RegisterField<AFRH, 4, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH9, 0U>;
      using AF1 = FieldValue<AFRH9, 1U>;
      using AF2 = FieldValue<AFRH9, 2U>;
      using AF3 = FieldValue<AFRH9, 3U>;
      using AF4 = FieldValue<AFRH9, 4U>;
      using AF5 = FieldValue<AFRH9, 5U>;
      using AF6 = FieldValue<AFRH9, 6U>;
      using AF7 = FieldValue<AFRH9, 7U>;
      using AF8 = FieldValue<AFRH9, 8U>;
      using AF9 = FieldValue<AFRH9, 9U>;
      using AF10 = FieldValue<AFRH9, 10U>;
      using AF11 = FieldValue<AFRH9, 11U>;
      using AF12 = FieldValue<AFRH9, 12U>;
      using AF13 = FieldValue<AFRH9, 13U>;
      using AF14 = FieldValue<AFRH9, 14U>;
      using AF15 = FieldValue<AFRH9, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH8 : RegisterField<AFRH, 0, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH8, 0U>;
      using AF1 = FieldValue<AFRH8, 1U>;
      using AF2 = FieldValue<AFRH8, 2U>;
      using AF3 = FieldValue<AFRH8, 3U>;
      using AF4 = FieldValue<AFRH8, 4U>;
      using AF5 = FieldValue<AFRH8, 5U>;
      using AF6 = FieldValue<AFRH8, 6U>;
      using AF7 = FieldValue<AFRH8, 7U>;
      using AF8 = FieldValue<AFRH8, 8U>;
      using AF9 = FieldValue<AFRH8, 9U>;
      using AF10 = FieldValue<AFRH8, 10U>;
      using AF11 = FieldValue<AFRH8, 11U>;
      using AF12 = FieldValue<AFRH8, 12U>;
      using AF13 = FieldValue<AFRH8, 13U>;
      using AF14 = FieldValue<AFRH8, 14U>;
      using AF15 = FieldValue<AFRH8, 15U>;
    };
  };

// Large Registers

  // GPIO alternate function low register
  template<auto num>
  struct AFR_AF : RegisterField<Register<0x40021020 + 4 * (num / 8), ReadWriteMode, 0x0>, 4 * (num % 8), 4, ReadWriteMode>
  {
    using AF0 = FieldValue<AFR_AF, 0U>;
    using AF1 = FieldValue<AFR_AF, 1U>;
    using AF2 = FieldValue<AFR_AF, 2U>;
    using AF3 = FieldValue<AFR_AF, 3U>;
    using AF4 = FieldValue<AFR_AF, 4U>;
    using AF5 = FieldValue<AFR_AF, 5U>;
    using AF6 = FieldValue<AFR_AF, 6U>;
    using AF7 = FieldValue<AFR_AF, 7U>;
    using AF8 = FieldValue<AFR_AF, 8U>;
    using AF9 = FieldValue<AFR_AF, 9U>;
    using AF10 = FieldValue<AFR_AF, 10U>;
    using AF11 = FieldValue<AFR_AF, 11U>;
    using AF12 = FieldValue<AFR_AF, 12U>;
    using AF13 = FieldValue<AFR_AF, 13U>;
    using AF14 = FieldValue<AFR_AF, 14U>;
    using AF15 = FieldValue<AFR_AF, 15U>;
  };

};


struct GPIOD
{
  static constexpr auto periphNum = 3;

  // GPIO port mode register
  struct MODER : Register<0x40020c00, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct MODER15 : RegisterField<MODER, 30, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER15, 0U>;
      using Output = FieldValue<MODER15, 1U>;
      using Alternate = FieldValue<MODER15, 2U>;
      using Analog = FieldValue<MODER15, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER14 : RegisterField<MODER, 28, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER14, 0U>;
      using Output = FieldValue<MODER14, 1U>;
      using Alternate = FieldValue<MODER14, 2U>;
      using Analog = FieldValue<MODER14, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER13 : RegisterField<MODER, 26, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER13, 0U>;
      using Output = FieldValue<MODER13, 1U>;
      using Alternate = FieldValue<MODER13, 2U>;
      using Analog = FieldValue<MODER13, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER12 : RegisterField<MODER, 24, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER12, 0U>;
      using Output = FieldValue<MODER12, 1U>;
      using Alternate = FieldValue<MODER12, 2U>;
      using Analog = FieldValue<MODER12, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER11 : RegisterField<MODER, 22, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER11, 0U>;
      using Output = FieldValue<MODER11, 1U>;
      using Alternate = FieldValue<MODER11, 2U>;
      using Analog = FieldValue<MODER11, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER10 : RegisterField<MODER, 20, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER10, 0U>;
      using Output = FieldValue<MODER10, 1U>;
      using Alternate = FieldValue<MODER10, 2U>;
      using Analog = FieldValue<MODER10, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER9 : RegisterField<MODER, 18, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER9, 0U>;
      using Output = FieldValue<MODER9, 1U>;
      using Alternate = FieldValue<MODER9, 2U>;
      using Analog = FieldValue<MODER9, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER8 : RegisterField<MODER, 16, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER8, 0U>;
      using Output = FieldValue<MODER8, 1U>;
      using Alternate = FieldValue<MODER8, 2U>;
      using Analog = FieldValue<MODER8, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER7 : RegisterField<MODER, 14, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER7, 0U>;
      using Output = FieldValue<MODER7, 1U>;
      using Alternate = FieldValue<MODER7, 2U>;
      using Analog = FieldValue<MODER7, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER6 : RegisterField<MODER, 12, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER6, 0U>;
      using Output = FieldValue<MODER6, 1U>;
      using Alternate = FieldValue<MODER6, 2U>;
      using Analog = FieldValue<MODER6, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER5 : RegisterField<MODER, 10, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER5, 0U>;
      using Output = FieldValue<MODER5, 1U>;
      using Alternate = FieldValue<MODER5, 2U>;
      using Analog = FieldValue<MODER5, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER4 : RegisterField<MODER, 8, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER4, 0U>;
      using Output = FieldValue<MODER4, 1U>;
      using Alternate = FieldValue<MODER4, 2U>;
      using Analog = FieldValue<MODER4, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER3 : RegisterField<MODER, 6, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER3, 0U>;
      using Output = FieldValue<MODER3, 1U>;
      using Alternate = FieldValue<MODER3, 2U>;
      using Analog = FieldValue<MODER3, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER2 : RegisterField<MODER, 4, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER2, 0U>;
      using Output = FieldValue<MODER2, 1U>;
      using Alternate = FieldValue<MODER2, 2U>;
      using Analog = FieldValue<MODER2, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER1 : RegisterField<MODER, 2, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER1, 0U>;
      using Output = FieldValue<MODER1, 1U>;
      using Alternate = FieldValue<MODER1, 2U>;
      using Analog = FieldValue<MODER1, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER0 : RegisterField<MODER, 0, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER0, 0U>;
      using Output = FieldValue<MODER0, 1U>;
      using Alternate = FieldValue<MODER0, 2U>;
      using Analog = FieldValue<MODER0, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct MODERx : RegisterField<MODER, 0 + 2 * num, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODERx, 0U>;
      using Output = FieldValue<MODERx, 1U>;
      using Alternate = FieldValue<MODERx, 2U>;
      using Analog = FieldValue<MODERx, 3U>;
    };
  };

  // GPIO port output type register
  struct OTYPER : Register<0x40020c04, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct OT15 : RegisterField<OTYPER, 15, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT15, 0U>;
      using Open_drain = FieldValue<OT15, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT14 : RegisterField<OTYPER, 14, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT14, 0U>;
      using Open_drain = FieldValue<OT14, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT13 : RegisterField<OTYPER, 13, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT13, 0U>;
      using Open_drain = FieldValue<OT13, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT12 : RegisterField<OTYPER, 12, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT12, 0U>;
      using Open_drain = FieldValue<OT12, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT11 : RegisterField<OTYPER, 11, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT11, 0U>;
      using Open_drain = FieldValue<OT11, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT10 : RegisterField<OTYPER, 10, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT10, 0U>;
      using Open_drain = FieldValue<OT10, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT9 : RegisterField<OTYPER, 9, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT9, 0U>;
      using Open_drain = FieldValue<OT9, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT8 : RegisterField<OTYPER, 8, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT8, 0U>;
      using Open_drain = FieldValue<OT8, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT7 : RegisterField<OTYPER, 7, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT7, 0U>;
      using Open_drain = FieldValue<OT7, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT6 : RegisterField<OTYPER, 6, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT6, 0U>;
      using Open_drain = FieldValue<OT6, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT5 : RegisterField<OTYPER, 5, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT5, 0U>;
      using Open_drain = FieldValue<OT5, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT4 : RegisterField<OTYPER, 4, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT4, 0U>;
      using Open_drain = FieldValue<OT4, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT3 : RegisterField<OTYPER, 3, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT3, 0U>;
      using Open_drain = FieldValue<OT3, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT2 : RegisterField<OTYPER, 2, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT2, 0U>;
      using Open_drain = FieldValue<OT2, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT1 : RegisterField<OTYPER, 1, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT1, 0U>;
      using Open_drain = FieldValue<OT1, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT0 : RegisterField<OTYPER, 0, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT0, 0U>;
      using Open_drain = FieldValue<OT0, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct OTx : RegisterField<OTYPER, 0 + 1 * num, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OTx, 0U>;
      using Open_drain = FieldValue<OTx, 1U>;
    };
  };

  // GPIO port output speed register
  struct OSPEEDR : Register<0x40020c08, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR15 : RegisterField<OSPEEDR, 30, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR15, 0U>;
      using Medium = FieldValue<OSPEEDR15, 1U>;
      using Fast = FieldValue<OSPEEDR15, 2U>;
      using High = FieldValue<OSPEEDR15, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR14 : RegisterField<OSPEEDR, 28, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR14, 0U>;
      using Medium = FieldValue<OSPEEDR14, 1U>;
      using Fast = FieldValue<OSPEEDR14, 2U>;
      using High = FieldValue<OSPEEDR14, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR13 : RegisterField<OSPEEDR, 26, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR13, 0U>;
      using Medium = FieldValue<OSPEEDR13, 1U>;
      using Fast = FieldValue<OSPEEDR13, 2U>;
      using High = FieldValue<OSPEEDR13, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR12 : RegisterField<OSPEEDR, 24, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR12, 0U>;
      using Medium = FieldValue<OSPEEDR12, 1U>;
      using Fast = FieldValue<OSPEEDR12, 2U>;
      using High = FieldValue<OSPEEDR12, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR11 : RegisterField<OSPEEDR, 22, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR11, 0U>;
      using Medium = FieldValue<OSPEEDR11, 1U>;
      using Fast = FieldValue<OSPEEDR11, 2U>;
      using High = FieldValue<OSPEEDR11, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR10 : RegisterField<OSPEEDR, 20, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR10, 0U>;
      using Medium = FieldValue<OSPEEDR10, 1U>;
      using Fast = FieldValue<OSPEEDR10, 2U>;
      using High = FieldValue<OSPEEDR10, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR9 : RegisterField<OSPEEDR, 18, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR9, 0U>;
      using Medium = FieldValue<OSPEEDR9, 1U>;
      using Fast = FieldValue<OSPEEDR9, 2U>;
      using High = FieldValue<OSPEEDR9, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR8 : RegisterField<OSPEEDR, 16, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR8, 0U>;
      using Medium = FieldValue<OSPEEDR8, 1U>;
      using Fast = FieldValue<OSPEEDR8, 2U>;
      using High = FieldValue<OSPEEDR8, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR7 : RegisterField<OSPEEDR, 14, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR7, 0U>;
      using Medium = FieldValue<OSPEEDR7, 1U>;
      using Fast = FieldValue<OSPEEDR7, 2U>;
      using High = FieldValue<OSPEEDR7, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR6 : RegisterField<OSPEEDR, 12, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR6, 0U>;
      using Medium = FieldValue<OSPEEDR6, 1U>;
      using Fast = FieldValue<OSPEEDR6, 2U>;
      using High = FieldValue<OSPEEDR6, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR5 : RegisterField<OSPEEDR, 10, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR5, 0U>;
      using Medium = FieldValue<OSPEEDR5, 1U>;
      using Fast = FieldValue<OSPEEDR5, 2U>;
      using High = FieldValue<OSPEEDR5, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR4 : RegisterField<OSPEEDR, 8, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR4, 0U>;
      using Medium = FieldValue<OSPEEDR4, 1U>;
      using Fast = FieldValue<OSPEEDR4, 2U>;
      using High = FieldValue<OSPEEDR4, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR3 : RegisterField<OSPEEDR, 6, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR3, 0U>;
      using Medium = FieldValue<OSPEEDR3, 1U>;
      using Fast = FieldValue<OSPEEDR3, 2U>;
      using High = FieldValue<OSPEEDR3, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR2 : RegisterField<OSPEEDR, 4, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR2, 0U>;
      using Medium = FieldValue<OSPEEDR2, 1U>;
      using Fast = FieldValue<OSPEEDR2, 2U>;
      using High = FieldValue<OSPEEDR2, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR1 : RegisterField<OSPEEDR, 2, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR1, 0U>;
      using Medium = FieldValue<OSPEEDR1, 1U>;
      using Fast = FieldValue<OSPEEDR1, 2U>;
      using High = FieldValue<OSPEEDR1, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR0 : RegisterField<OSPEEDR, 0, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR0, 0U>;
      using Medium = FieldValue<OSPEEDR0, 1U>;
      using Fast = FieldValue<OSPEEDR0, 2U>;
      using High = FieldValue<OSPEEDR0, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct OSPEEDRx : RegisterField<OSPEEDR, 0 + 2 * num, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDRx, 0U>;
      using Medium = FieldValue<OSPEEDRx, 1U>;
      using Fast = FieldValue<OSPEEDRx, 2U>;
      using High = FieldValue<OSPEEDRx, 3U>;
    };
  };

  // GPIO port pull-up/pull-down register
  struct PUPDR : Register<0x40020c0c, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct PUPDR15 : RegisterField<PUPDR, 30, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR15, 0U>;
      using Pull_up = FieldValue<PUPDR15, 1U>;
      using Pull_down = FieldValue<PUPDR15, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR14 : RegisterField<PUPDR, 28, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR14, 0U>;
      using Pull_up = FieldValue<PUPDR14, 1U>;
      using Pull_down = FieldValue<PUPDR14, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR13 : RegisterField<PUPDR, 26, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR13, 0U>;
      using Pull_up = FieldValue<PUPDR13, 1U>;
      using Pull_down = FieldValue<PUPDR13, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR12 : RegisterField<PUPDR, 24, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR12, 0U>;
      using Pull_up = FieldValue<PUPDR12, 1U>;
      using Pull_down = FieldValue<PUPDR12, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR11 : RegisterField<PUPDR, 22, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR11, 0U>;
      using Pull_up = FieldValue<PUPDR11, 1U>;
      using Pull_down = FieldValue<PUPDR11, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR10 : RegisterField<PUPDR, 20, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR10, 0U>;
      using Pull_up = FieldValue<PUPDR10, 1U>;
      using Pull_down = FieldValue<PUPDR10, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR9 : RegisterField<PUPDR, 18, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR9, 0U>;
      using Pull_up = FieldValue<PUPDR9, 1U>;
      using Pull_down = FieldValue<PUPDR9, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR8 : RegisterField<PUPDR, 16, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR8, 0U>;
      using Pull_up = FieldValue<PUPDR8, 1U>;
      using Pull_down = FieldValue<PUPDR8, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR7 : RegisterField<PUPDR, 14, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR7, 0U>;
      using Pull_up = FieldValue<PUPDR7, 1U>;
      using Pull_down = FieldValue<PUPDR7, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR6 : RegisterField<PUPDR, 12, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR6, 0U>;
      using Pull_up = FieldValue<PUPDR6, 1U>;
      using Pull_down = FieldValue<PUPDR6, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR5 : RegisterField<PUPDR, 10, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR5, 0U>;
      using Pull_up = FieldValue<PUPDR5, 1U>;
      using Pull_down = FieldValue<PUPDR5, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR4 : RegisterField<PUPDR, 8, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR4, 0U>;
      using Pull_up = FieldValue<PUPDR4, 1U>;
      using Pull_down = FieldValue<PUPDR4, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR3 : RegisterField<PUPDR, 6, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR3, 0U>;
      using Pull_up = FieldValue<PUPDR3, 1U>;
      using Pull_down = FieldValue<PUPDR3, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR2 : RegisterField<PUPDR, 4, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR2, 0U>;
      using Pull_up = FieldValue<PUPDR2, 1U>;
      using Pull_down = FieldValue<PUPDR2, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR1 : RegisterField<PUPDR, 2, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR1, 0U>;
      using Pull_up = FieldValue<PUPDR1, 1U>;
      using Pull_down = FieldValue<PUPDR1, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR0 : RegisterField<PUPDR, 0, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR0, 0U>;
      using Pull_up = FieldValue<PUPDR0, 1U>;
      using Pull_down = FieldValue<PUPDR0, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct PUPDRx : RegisterField<PUPDR, 0 + 2 * num, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDRx, 0U>;
      using Pull_up = FieldValue<PUPDRx, 1U>;
      using Pull_down = FieldValue<PUPDRx, 2U>;
    };
  };

  // GPIO port input data register
  struct IDR : Register<0x40020c10, ReadMode, 0x0>
  {
    // Port input data (y = 0..15)
    struct IDR15 : RegisterField<IDR, 15, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR14 : RegisterField<IDR, 14, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR13 : RegisterField<IDR, 13, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR12 : RegisterField<IDR, 12, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR11 : RegisterField<IDR, 11, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR10 : RegisterField<IDR, 10, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR9 : RegisterField<IDR, 9, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR8 : RegisterField<IDR, 8, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR7 : RegisterField<IDR, 7, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR6 : RegisterField<IDR, 6, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR5 : RegisterField<IDR, 5, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR4 : RegisterField<IDR, 4, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR3 : RegisterField<IDR, 3, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR2 : RegisterField<IDR, 2, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR1 : RegisterField<IDR, 1, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR0 : RegisterField<IDR, 0, 1, ReadMode>
    {
    };
  };

  // GPIO port output data register
  struct ODR : Register<0x40020c14, ReadWriteMode, 0x0>
  {
    // Port output data (y = 0..15)
    struct ODR15 : RegisterField<ODR, 15, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR14 : RegisterField<ODR, 14, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR13 : RegisterField<ODR, 13, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR12 : RegisterField<ODR, 12, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR11 : RegisterField<ODR, 11, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR10 : RegisterField<ODR, 10, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR9 : RegisterField<ODR, 9, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR8 : RegisterField<ODR, 8, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR7 : RegisterField<ODR, 7, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR6 : RegisterField<ODR, 6, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR5 : RegisterField<ODR, 5, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR4 : RegisterField<ODR, 4, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR3 : RegisterField<ODR, 3, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR2 : RegisterField<ODR, 2, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR1 : RegisterField<ODR, 1, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR0 : RegisterField<ODR, 0, 1, ReadWriteMode>
    {
    };
  };

  // GPIO port bit set/reset register
  struct BSRR : Register<0x40020c18, WriteMode, 0x0>
  {
    // Port x reset bit y (y = 0..15)
    struct BR15 : RegisterField<BSRR, 31, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR14 : RegisterField<BSRR, 30, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR13 : RegisterField<BSRR, 29, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR12 : RegisterField<BSRR, 28, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR11 : RegisterField<BSRR, 27, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR10 : RegisterField<BSRR, 26, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR9 : RegisterField<BSRR, 25, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR8 : RegisterField<BSRR, 24, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR7 : RegisterField<BSRR, 23, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR6 : RegisterField<BSRR, 22, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR5 : RegisterField<BSRR, 21, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR4 : RegisterField<BSRR, 20, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR3 : RegisterField<BSRR, 19, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR2 : RegisterField<BSRR, 18, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR1 : RegisterField<BSRR, 17, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BR0 : RegisterField<BSRR, 16, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS15 : RegisterField<BSRR, 15, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS14 : RegisterField<BSRR, 14, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS13 : RegisterField<BSRR, 13, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS12 : RegisterField<BSRR, 12, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS11 : RegisterField<BSRR, 11, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS10 : RegisterField<BSRR, 10, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS9 : RegisterField<BSRR, 9, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS8 : RegisterField<BSRR, 8, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS7 : RegisterField<BSRR, 7, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS6 : RegisterField<BSRR, 6, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS5 : RegisterField<BSRR, 5, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS4 : RegisterField<BSRR, 4, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS3 : RegisterField<BSRR, 3, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS2 : RegisterField<BSRR, 2, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS1 : RegisterField<BSRR, 1, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS0 : RegisterField<BSRR, 0, 1, WriteMode>
    {
    };
  };

  // GPIO port configuration lock register
  struct LCKR : Register<0x40020c1c, ReadWriteMode, 0x0>
  {
    // Port x lock bit y (y= 0..15)
    struct LCKK : RegisterField<LCKR, 16, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK15 : RegisterField<LCKR, 15, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK14 : RegisterField<LCKR, 14, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK13 : RegisterField<LCKR, 13, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK12 : RegisterField<LCKR, 12, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK11 : RegisterField<LCKR, 11, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK10 : RegisterField<LCKR, 10, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK9 : RegisterField<LCKR, 9, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK8 : RegisterField<LCKR, 8, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK7 : RegisterField<LCKR, 7, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK6 : RegisterField<LCKR, 6, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK5 : RegisterField<LCKR, 5, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK4 : RegisterField<LCKR, 4, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK3 : RegisterField<LCKR, 3, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK2 : RegisterField<LCKR, 2, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK1 : RegisterField<LCKR, 1, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK0 : RegisterField<LCKR, 0, 1, ReadWriteMode>
    {
    };
  };

  // GPIO alternate function low register
  struct AFRL : Register<0x40020c20, ReadWriteMode, 0x0>
  {
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL7 : RegisterField<AFRL, 28, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL7, 0U>;
      using AF1 = FieldValue<AFRL7, 1U>;
      using AF2 = FieldValue<AFRL7, 2U>;
      using AF3 = FieldValue<AFRL7, 3U>;
      using AF4 = FieldValue<AFRL7, 4U>;
      using AF5 = FieldValue<AFRL7, 5U>;
      using AF6 = FieldValue<AFRL7, 6U>;
      using AF7 = FieldValue<AFRL7, 7U>;
      using AF8 = FieldValue<AFRL7, 8U>;
      using AF9 = FieldValue<AFRL7, 9U>;
      using AF10 = FieldValue<AFRL7, 10U>;
      using AF11 = FieldValue<AFRL7, 11U>;
      using AF12 = FieldValue<AFRL7, 12U>;
      using AF13 = FieldValue<AFRL7, 13U>;
      using AF14 = FieldValue<AFRL7, 14U>;
      using AF15 = FieldValue<AFRL7, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL6 : RegisterField<AFRL, 24, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL6, 0U>;
      using AF1 = FieldValue<AFRL6, 1U>;
      using AF2 = FieldValue<AFRL6, 2U>;
      using AF3 = FieldValue<AFRL6, 3U>;
      using AF4 = FieldValue<AFRL6, 4U>;
      using AF5 = FieldValue<AFRL6, 5U>;
      using AF6 = FieldValue<AFRL6, 6U>;
      using AF7 = FieldValue<AFRL6, 7U>;
      using AF8 = FieldValue<AFRL6, 8U>;
      using AF9 = FieldValue<AFRL6, 9U>;
      using AF10 = FieldValue<AFRL6, 10U>;
      using AF11 = FieldValue<AFRL6, 11U>;
      using AF12 = FieldValue<AFRL6, 12U>;
      using AF13 = FieldValue<AFRL6, 13U>;
      using AF14 = FieldValue<AFRL6, 14U>;
      using AF15 = FieldValue<AFRL6, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL5 : RegisterField<AFRL, 20, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL5, 0U>;
      using AF1 = FieldValue<AFRL5, 1U>;
      using AF2 = FieldValue<AFRL5, 2U>;
      using AF3 = FieldValue<AFRL5, 3U>;
      using AF4 = FieldValue<AFRL5, 4U>;
      using AF5 = FieldValue<AFRL5, 5U>;
      using AF6 = FieldValue<AFRL5, 6U>;
      using AF7 = FieldValue<AFRL5, 7U>;
      using AF8 = FieldValue<AFRL5, 8U>;
      using AF9 = FieldValue<AFRL5, 9U>;
      using AF10 = FieldValue<AFRL5, 10U>;
      using AF11 = FieldValue<AFRL5, 11U>;
      using AF12 = FieldValue<AFRL5, 12U>;
      using AF13 = FieldValue<AFRL5, 13U>;
      using AF14 = FieldValue<AFRL5, 14U>;
      using AF15 = FieldValue<AFRL5, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL4 : RegisterField<AFRL, 16, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL4, 0U>;
      using AF1 = FieldValue<AFRL4, 1U>;
      using AF2 = FieldValue<AFRL4, 2U>;
      using AF3 = FieldValue<AFRL4, 3U>;
      using AF4 = FieldValue<AFRL4, 4U>;
      using AF5 = FieldValue<AFRL4, 5U>;
      using AF6 = FieldValue<AFRL4, 6U>;
      using AF7 = FieldValue<AFRL4, 7U>;
      using AF8 = FieldValue<AFRL4, 8U>;
      using AF9 = FieldValue<AFRL4, 9U>;
      using AF10 = FieldValue<AFRL4, 10U>;
      using AF11 = FieldValue<AFRL4, 11U>;
      using AF12 = FieldValue<AFRL4, 12U>;
      using AF13 = FieldValue<AFRL4, 13U>;
      using AF14 = FieldValue<AFRL4, 14U>;
      using AF15 = FieldValue<AFRL4, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL3 : RegisterField<AFRL, 12, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL3, 0U>;
      using AF1 = FieldValue<AFRL3, 1U>;
      using AF2 = FieldValue<AFRL3, 2U>;
      using AF3 = FieldValue<AFRL3, 3U>;
      using AF4 = FieldValue<AFRL3, 4U>;
      using AF5 = FieldValue<AFRL3, 5U>;
      using AF6 = FieldValue<AFRL3, 6U>;
      using AF7 = FieldValue<AFRL3, 7U>;
      using AF8 = FieldValue<AFRL3, 8U>;
      using AF9 = FieldValue<AFRL3, 9U>;
      using AF10 = FieldValue<AFRL3, 10U>;
      using AF11 = FieldValue<AFRL3, 11U>;
      using AF12 = FieldValue<AFRL3, 12U>;
      using AF13 = FieldValue<AFRL3, 13U>;
      using AF14 = FieldValue<AFRL3, 14U>;
      using AF15 = FieldValue<AFRL3, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL2 : RegisterField<AFRL, 8, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL2, 0U>;
      using AF1 = FieldValue<AFRL2, 1U>;
      using AF2 = FieldValue<AFRL2, 2U>;
      using AF3 = FieldValue<AFRL2, 3U>;
      using AF4 = FieldValue<AFRL2, 4U>;
      using AF5 = FieldValue<AFRL2, 5U>;
      using AF6 = FieldValue<AFRL2, 6U>;
      using AF7 = FieldValue<AFRL2, 7U>;
      using AF8 = FieldValue<AFRL2, 8U>;
      using AF9 = FieldValue<AFRL2, 9U>;
      using AF10 = FieldValue<AFRL2, 10U>;
      using AF11 = FieldValue<AFRL2, 11U>;
      using AF12 = FieldValue<AFRL2, 12U>;
      using AF13 = FieldValue<AFRL2, 13U>;
      using AF14 = FieldValue<AFRL2, 14U>;
      using AF15 = FieldValue<AFRL2, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL1 : RegisterField<AFRL, 4, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL1, 0U>;
      using AF1 = FieldValue<AFRL1, 1U>;
      using AF2 = FieldValue<AFRL1, 2U>;
      using AF3 = FieldValue<AFRL1, 3U>;
      using AF4 = FieldValue<AFRL1, 4U>;
      using AF5 = FieldValue<AFRL1, 5U>;
      using AF6 = FieldValue<AFRL1, 6U>;
      using AF7 = FieldValue<AFRL1, 7U>;
      using AF8 = FieldValue<AFRL1, 8U>;
      using AF9 = FieldValue<AFRL1, 9U>;
      using AF10 = FieldValue<AFRL1, 10U>;
      using AF11 = FieldValue<AFRL1, 11U>;
      using AF12 = FieldValue<AFRL1, 12U>;
      using AF13 = FieldValue<AFRL1, 13U>;
      using AF14 = FieldValue<AFRL1, 14U>;
      using AF15 = FieldValue<AFRL1, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL0 : RegisterField<AFRL, 0, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL0, 0U>;
      using AF1 = FieldValue<AFRL0, 1U>;
      using AF2 = FieldValue<AFRL0, 2U>;
      using AF3 = FieldValue<AFRL0, 3U>;
      using AF4 = FieldValue<AFRL0, 4U>;
      using AF5 = FieldValue<AFRL0, 5U>;
      using AF6 = FieldValue<AFRL0, 6U>;
      using AF7 = FieldValue<AFRL0, 7U>;
      using AF8 = FieldValue<AFRL0, 8U>;
      using AF9 = FieldValue<AFRL0, 9U>;
      using AF10 = FieldValue<AFRL0, 10U>;
      using AF11 = FieldValue<AFRL0, 11U>;
      using AF12 = FieldValue<AFRL0, 12U>;
      using AF13 = FieldValue<AFRL0, 13U>;
      using AF14 = FieldValue<AFRL0, 14U>;
      using AF15 = FieldValue<AFRL0, 15U>;
    };
  };

  // GPIO alternate function high register
  struct AFRH : Register<0x40020c24, ReadWriteMode, 0x0>
  {
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH15 : RegisterField<AFRH, 28, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH15, 0U>;
      using AF1 = FieldValue<AFRH15, 1U>;
      using AF2 = FieldValue<AFRH15, 2U>;
      using AF3 = FieldValue<AFRH15, 3U>;
      using AF4 = FieldValue<AFRH15, 4U>;
      using AF5 = FieldValue<AFRH15, 5U>;
      using AF6 = FieldValue<AFRH15, 6U>;
      using AF7 = FieldValue<AFRH15, 7U>;
      using AF8 = FieldValue<AFRH15, 8U>;
      using AF9 = FieldValue<AFRH15, 9U>;
      using AF10 = FieldValue<AFRH15, 10U>;
      using AF11 = FieldValue<AFRH15, 11U>;
      using AF12 = FieldValue<AFRH15, 12U>;
      using AF13 = FieldValue<AFRH15, 13U>;
      using AF14 = FieldValue<AFRH15, 14U>;
      using AF15 = FieldValue<AFRH15, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH14 : RegisterField<AFRH, 24, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH14, 0U>;
      using AF1 = FieldValue<AFRH14, 1U>;
      using AF2 = FieldValue<AFRH14, 2U>;
      using AF3 = FieldValue<AFRH14, 3U>;
      using AF4 = FieldValue<AFRH14, 4U>;
      using AF5 = FieldValue<AFRH14, 5U>;
      using AF6 = FieldValue<AFRH14, 6U>;
      using AF7 = FieldValue<AFRH14, 7U>;
      using AF8 = FieldValue<AFRH14, 8U>;
      using AF9 = FieldValue<AFRH14, 9U>;
      using AF10 = FieldValue<AFRH14, 10U>;
      using AF11 = FieldValue<AFRH14, 11U>;
      using AF12 = FieldValue<AFRH14, 12U>;
      using AF13 = FieldValue<AFRH14, 13U>;
      using AF14 = FieldValue<AFRH14, 14U>;
      using AF15 = FieldValue<AFRH14, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH13 : RegisterField<AFRH, 20, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH13, 0U>;
      using AF1 = FieldValue<AFRH13, 1U>;
      using AF2 = FieldValue<AFRH13, 2U>;
      using AF3 = FieldValue<AFRH13, 3U>;
      using AF4 = FieldValue<AFRH13, 4U>;
      using AF5 = FieldValue<AFRH13, 5U>;
      using AF6 = FieldValue<AFRH13, 6U>;
      using AF7 = FieldValue<AFRH13, 7U>;
      using AF8 = FieldValue<AFRH13, 8U>;
      using AF9 = FieldValue<AFRH13, 9U>;
      using AF10 = FieldValue<AFRH13, 10U>;
      using AF11 = FieldValue<AFRH13, 11U>;
      using AF12 = FieldValue<AFRH13, 12U>;
      using AF13 = FieldValue<AFRH13, 13U>;
      using AF14 = FieldValue<AFRH13, 14U>;
      using AF15 = FieldValue<AFRH13, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH12 : RegisterField<AFRH, 16, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH12, 0U>;
      using AF1 = FieldValue<AFRH12, 1U>;
      using AF2 = FieldValue<AFRH12, 2U>;
      using AF3 = FieldValue<AFRH12, 3U>;
      using AF4 = FieldValue<AFRH12, 4U>;
      using AF5 = FieldValue<AFRH12, 5U>;
      using AF6 = FieldValue<AFRH12, 6U>;
      using AF7 = FieldValue<AFRH12, 7U>;
      using AF8 = FieldValue<AFRH12, 8U>;
      using AF9 = FieldValue<AFRH12, 9U>;
      using AF10 = FieldValue<AFRH12, 10U>;
      using AF11 = FieldValue<AFRH12, 11U>;
      using AF12 = FieldValue<AFRH12, 12U>;
      using AF13 = FieldValue<AFRH12, 13U>;
      using AF14 = FieldValue<AFRH12, 14U>;
      using AF15 = FieldValue<AFRH12, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH11 : RegisterField<AFRH, 12, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH11, 0U>;
      using AF1 = FieldValue<AFRH11, 1U>;
      using AF2 = FieldValue<AFRH11, 2U>;
      using AF3 = FieldValue<AFRH11, 3U>;
      using AF4 = FieldValue<AFRH11, 4U>;
      using AF5 = FieldValue<AFRH11, 5U>;
      using AF6 = FieldValue<AFRH11, 6U>;
      using AF7 = FieldValue<AFRH11, 7U>;
      using AF8 = FieldValue<AFRH11, 8U>;
      using AF9 = FieldValue<AFRH11, 9U>;
      using AF10 = FieldValue<AFRH11, 10U>;
      using AF11 = FieldValue<AFRH11, 11U>;
      using AF12 = FieldValue<AFRH11, 12U>;
      using AF13 = FieldValue<AFRH11, 13U>;
      using AF14 = FieldValue<AFRH11, 14U>;
      using AF15 = FieldValue<AFRH11, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH10 : RegisterField<AFRH, 8, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH10, 0U>;
      using AF1 = FieldValue<AFRH10, 1U>;
      using AF2 = FieldValue<AFRH10, 2U>;
      using AF3 = FieldValue<AFRH10, 3U>;
      using AF4 = FieldValue<AFRH10, 4U>;
      using AF5 = FieldValue<AFRH10, 5U>;
      using AF6 = FieldValue<AFRH10, 6U>;
      using AF7 = FieldValue<AFRH10, 7U>;
      using AF8 = FieldValue<AFRH10, 8U>;
      using AF9 = FieldValue<AFRH10, 9U>;
      using AF10 = FieldValue<AFRH10, 10U>;
      using AF11 = FieldValue<AFRH10, 11U>;
      using AF12 = FieldValue<AFRH10, 12U>;
      using AF13 = FieldValue<AFRH10, 13U>;
      using AF14 = FieldValue<AFRH10, 14U>;
      using AF15 = FieldValue<AFRH10, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH9 : RegisterField<AFRH, 4, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH9, 0U>;
      using AF1 = FieldValue<AFRH9, 1U>;
      using AF2 = FieldValue<AFRH9, 2U>;
      using AF3 = FieldValue<AFRH9, 3U>;
      using AF4 = FieldValue<AFRH9, 4U>;
      using AF5 = FieldValue<AFRH9, 5U>;
      using AF6 = FieldValue<AFRH9, 6U>;
      using AF7 = FieldValue<AFRH9, 7U>;
      using AF8 = FieldValue<AFRH9, 8U>;
      using AF9 = FieldValue<AFRH9, 9U>;
      using AF10 = FieldValue<AFRH9, 10U>;
      using AF11 = FieldValue<AFRH9, 11U>;
      using AF12 = FieldValue<AFRH9, 12U>;
      using AF13 = FieldValue<AFRH9, 13U>;
      using AF14 = FieldValue<AFRH9, 14U>;
      using AF15 = FieldValue<AFRH9, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH8 : RegisterField<AFRH, 0, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH8, 0U>;
      using AF1 = FieldValue<AFRH8, 1U>;
      using AF2 = FieldValue<AFRH8, 2U>;
      using AF3 = FieldValue<AFRH8, 3U>;
      using AF4 = FieldValue<AFRH8, 4U>;
      using AF5 = FieldValue<AFRH8, 5U>;
      using AF6 = FieldValue<AFRH8, 6U>;
      using AF7 = FieldValue<AFRH8, 7U>;
      using AF8 = FieldValue<AFRH8, 8U>;
      using AF9 = FieldValue<AFRH8, 9U>;
      using AF10 = FieldValue<AFRH8, 10U>;
      using AF11 = FieldValue<AFRH8, 11U>;
      using AF12 = FieldValue<AFRH8, 12U>;
      using AF13 = FieldValue<AFRH8, 13U>;
      using AF14 = FieldValue<AFRH8, 14U>;
      using AF15 = FieldValue<AFRH8, 15U>;
    };
  };

// Large Registers

  // GPIO alternate function low register
  template<auto num>
  struct AFR_AF : RegisterField<Register<0x40020c20 + 4 * (num / 8), ReadWriteMode, 0x0>, 4 * (num % 8), 4, ReadWriteMode>
  {
    using AF0 = FieldValue<AFR_AF, 0U>;
    using AF1 = FieldValue<AFR_AF, 1U>;
    using AF2 = FieldValue<AFR_AF, 2U>;
    using AF3 = FieldValue<AFR_AF, 3U>;
    using AF4 = FieldValue<AFR_AF, 4U>;
    using AF5 = FieldValue<AFR_AF, 5U>;
    using AF6 = FieldValue<AFR_AF, 6U>;
    using AF7 = FieldValue<AFR_AF, 7U>;
    using AF8 = FieldValue<AFR_AF, 8U>;
    using AF9 = FieldValue<AFR_AF, 9U>;
    using AF10 = FieldValue<AFR_AF, 10U>;
    using AF11 = FieldValue<AFR_AF, 11U>;
    using AF12 = FieldValue<AFR_AF, 12U>;
    using AF13 = FieldValue<AFR_AF, 13U>;
    using AF14 = FieldValue<AFR_AF, 14U>;
    using AF15 = FieldValue<AFR_AF, 15U>;
  };

};


struct GPIOC
{
  static constexpr auto periphNum = 2;

  // GPIO port mode register
  struct MODER : Register<0x40020800, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct MODER15 : RegisterField<MODER, 30, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER15, 0U>;
      using Output = FieldValue<MODER15, 1U>;
      using Alternate = FieldValue<MODER15, 2U>;
      using Analog = FieldValue<MODER15, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER14 : RegisterField<MODER, 28, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER14, 0U>;
      using Output = FieldValue<MODER14, 1U>;
      using Alternate = FieldValue<MODER14, 2U>;
      using Analog = FieldValue<MODER14, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER13 : RegisterField<MODER, 26, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER13, 0U>;
      using Output = FieldValue<MODER13, 1U>;
      using Alternate = FieldValue<MODER13, 2U>;
      using Analog = FieldValue<MODER13, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER12 : RegisterField<MODER, 24, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER12, 0U>;
      using Output = FieldValue<MODER12, 1U>;
      using Alternate = FieldValue<MODER12, 2U>;
      using Analog = FieldValue<MODER12, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER11 : RegisterField<MODER, 22, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER11, 0U>;
      using Output = FieldValue<MODER11, 1U>;
      using Alternate = FieldValue<MODER11, 2U>;
      using Analog = FieldValue<MODER11, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER10 : RegisterField<MODER, 20, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER10, 0U>;
      using Output = FieldValue<MODER10, 1U>;
      using Alternate = FieldValue<MODER10, 2U>;
      using Analog = FieldValue<MODER10, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER9 : RegisterField<MODER, 18, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER9, 0U>;
      using Output = FieldValue<MODER9, 1U>;
      using Alternate = FieldValue<MODER9, 2U>;
      using Analog = FieldValue<MODER9, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER8 : RegisterField<MODER, 16, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER8, 0U>;
      using Output = FieldValue<MODER8, 1U>;
      using Alternate = FieldValue<MODER8, 2U>;
      using Analog = FieldValue<MODER8, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER7 : RegisterField<MODER, 14, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER7, 0U>;
      using Output = FieldValue<MODER7, 1U>;
      using Alternate = FieldValue<MODER7, 2U>;
      using Analog = FieldValue<MODER7, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER6 : RegisterField<MODER, 12, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER6, 0U>;
      using Output = FieldValue<MODER6, 1U>;
      using Alternate = FieldValue<MODER6, 2U>;
      using Analog = FieldValue<MODER6, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER5 : RegisterField<MODER, 10, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER5, 0U>;
      using Output = FieldValue<MODER5, 1U>;
      using Alternate = FieldValue<MODER5, 2U>;
      using Analog = FieldValue<MODER5, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER4 : RegisterField<MODER, 8, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER4, 0U>;
      using Output = FieldValue<MODER4, 1U>;
      using Alternate = FieldValue<MODER4, 2U>;
      using Analog = FieldValue<MODER4, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER3 : RegisterField<MODER, 6, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER3, 0U>;
      using Output = FieldValue<MODER3, 1U>;
      using Alternate = FieldValue<MODER3, 2U>;
      using Analog = FieldValue<MODER3, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER2 : RegisterField<MODER, 4, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER2, 0U>;
      using Output = FieldValue<MODER2, 1U>;
      using Alternate = FieldValue<MODER2, 2U>;
      using Analog = FieldValue<MODER2, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER1 : RegisterField<MODER, 2, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER1, 0U>;
      using Output = FieldValue<MODER1, 1U>;
      using Alternate = FieldValue<MODER1, 2U>;
      using Analog = FieldValue<MODER1, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER0 : RegisterField<MODER, 0, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER0, 0U>;
      using Output = FieldValue<MODER0, 1U>;
      using Alternate = FieldValue<MODER0, 2U>;
      using Analog = FieldValue<MODER0, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct MODERx : RegisterField<MODER, 0 + 2 * num, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODERx, 0U>;
      using Output = FieldValue<MODERx, 1U>;
      using Alternate = FieldValue<MODERx, 2U>;
      using Analog = FieldValue<MODERx, 3U>;
    };
  };

  // GPIO port output type register
  struct OTYPER : Register<0x40020804, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct OT15 : RegisterField<OTYPER, 15, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT15, 0U>;
      using Open_drain = FieldValue<OT15, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT14 : RegisterField<OTYPER, 14, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT14, 0U>;
      using Open_drain = FieldValue<OT14, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT13 : RegisterField<OTYPER, 13, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT13, 0U>;
      using Open_drain = FieldValue<OT13, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT12 : RegisterField<OTYPER, 12, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT12, 0U>;
      using Open_drain = FieldValue<OT12, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT11 : RegisterField<OTYPER, 11, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT11, 0U>;
      using Open_drain = FieldValue<OT11, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT10 : RegisterField<OTYPER, 10, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT10, 0U>;
      using Open_drain = FieldValue<OT10, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT9 : RegisterField<OTYPER, 9, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT9, 0U>;
      using Open_drain = FieldValue<OT9, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT8 : RegisterField<OTYPER, 8, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT8, 0U>;
      using Open_drain = FieldValue<OT8, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT7 : RegisterField<OTYPER, 7, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT7, 0U>;
      using Open_drain = FieldValue<OT7, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT6 : RegisterField<OTYPER, 6, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT6, 0U>;
      using Open_drain = FieldValue<OT6, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT5 : RegisterField<OTYPER, 5, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT5, 0U>;
      using Open_drain = FieldValue<OT5, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT4 : RegisterField<OTYPER, 4, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT4, 0U>;
      using Open_drain = FieldValue<OT4, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT3 : RegisterField<OTYPER, 3, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT3, 0U>;
      using Open_drain = FieldValue<OT3, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT2 : RegisterField<OTYPER, 2, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT2, 0U>;
      using Open_drain = FieldValue<OT2, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT1 : RegisterField<OTYPER, 1, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT1, 0U>;
      using Open_drain = FieldValue<OT1, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT0 : RegisterField<OTYPER, 0, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT0, 0U>;
      using Open_drain = FieldValue<OT0, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct OTx : RegisterField<OTYPER, 0 + 1 * num, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OTx, 0U>;
      using Open_drain = FieldValue<OTx, 1U>;
    };
  };

  // GPIO port output speed register
  struct OSPEEDR : Register<0x40020808, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR15 : RegisterField<OSPEEDR, 30, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR15, 0U>;
      using Medium = FieldValue<OSPEEDR15, 1U>;
      using Fast = FieldValue<OSPEEDR15, 2U>;
      using High = FieldValue<OSPEEDR15, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR14 : RegisterField<OSPEEDR, 28, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR14, 0U>;
      using Medium = FieldValue<OSPEEDR14, 1U>;
      using Fast = FieldValue<OSPEEDR14, 2U>;
      using High = FieldValue<OSPEEDR14, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR13 : RegisterField<OSPEEDR, 26, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR13, 0U>;
      using Medium = FieldValue<OSPEEDR13, 1U>;
      using Fast = FieldValue<OSPEEDR13, 2U>;
      using High = FieldValue<OSPEEDR13, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR12 : RegisterField<OSPEEDR, 24, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR12, 0U>;
      using Medium = FieldValue<OSPEEDR12, 1U>;
      using Fast = FieldValue<OSPEEDR12, 2U>;
      using High = FieldValue<OSPEEDR12, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR11 : RegisterField<OSPEEDR, 22, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR11, 0U>;
      using Medium = FieldValue<OSPEEDR11, 1U>;
      using Fast = FieldValue<OSPEEDR11, 2U>;
      using High = FieldValue<OSPEEDR11, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR10 : RegisterField<OSPEEDR, 20, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR10, 0U>;
      using Medium = FieldValue<OSPEEDR10, 1U>;
      using Fast = FieldValue<OSPEEDR10, 2U>;
      using High = FieldValue<OSPEEDR10, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR9 : RegisterField<OSPEEDR, 18, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR9, 0U>;
      using Medium = FieldValue<OSPEEDR9, 1U>;
      using Fast = FieldValue<OSPEEDR9, 2U>;
      using High = FieldValue<OSPEEDR9, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR8 : RegisterField<OSPEEDR, 16, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR8, 0U>;
      using Medium = FieldValue<OSPEEDR8, 1U>;
      using Fast = FieldValue<OSPEEDR8, 2U>;
      using High = FieldValue<OSPEEDR8, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR7 : RegisterField<OSPEEDR, 14, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR7, 0U>;
      using Medium = FieldValue<OSPEEDR7, 1U>;
      using Fast = FieldValue<OSPEEDR7, 2U>;
      using High = FieldValue<OSPEEDR7, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR6 : RegisterField<OSPEEDR, 12, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR6, 0U>;
      using Medium = FieldValue<OSPEEDR6, 1U>;
      using Fast = FieldValue<OSPEEDR6, 2U>;
      using High = FieldValue<OSPEEDR6, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR5 : RegisterField<OSPEEDR, 10, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR5, 0U>;
      using Medium = FieldValue<OSPEEDR5, 1U>;
      using Fast = FieldValue<OSPEEDR5, 2U>;
      using High = FieldValue<OSPEEDR5, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR4 : RegisterField<OSPEEDR, 8, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR4, 0U>;
      using Medium = FieldValue<OSPEEDR4, 1U>;
      using Fast = FieldValue<OSPEEDR4, 2U>;
      using High = FieldValue<OSPEEDR4, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR3 : RegisterField<OSPEEDR, 6, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR3, 0U>;
      using Medium = FieldValue<OSPEEDR3, 1U>;
      using Fast = FieldValue<OSPEEDR3, 2U>;
      using High = FieldValue<OSPEEDR3, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR2 : RegisterField<OSPEEDR, 4, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR2, 0U>;
      using Medium = FieldValue<OSPEEDR2, 1U>;
      using Fast = FieldValue<OSPEEDR2, 2U>;
      using High = FieldValue<OSPEEDR2, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR1 : RegisterField<OSPEEDR, 2, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR1, 0U>;
      using Medium = FieldValue<OSPEEDR1, 1U>;
      using Fast = FieldValue<OSPEEDR1, 2U>;
      using High = FieldValue<OSPEEDR1, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR0 : RegisterField<OSPEEDR, 0, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR0, 0U>;
      using Medium = FieldValue<OSPEEDR0, 1U>;
      using Fast = FieldValue<OSPEEDR0, 2U>;
      using High = FieldValue<OSPEEDR0, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct OSPEEDRx : RegisterField<OSPEEDR, 0 + 2 * num, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDRx, 0U>;
      using Medium = FieldValue<OSPEEDRx, 1U>;
      using Fast = FieldValue<OSPEEDRx, 2U>;
      using High = FieldValue<OSPEEDRx, 3U>;
    };
  };

  // GPIO port pull-up/pull-down register
  struct PUPDR : Register<0x4002080c, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct PUPDR15 : RegisterField<PUPDR, 30, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR15, 0U>;
      using Pull_up = FieldValue<PUPDR15, 1U>;
      using Pull_down = FieldValue<PUPDR15, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR14 : RegisterField<PUPDR, 28, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR14, 0U>;
      using Pull_up = FieldValue<PUPDR14, 1U>;
      using Pull_down = FieldValue<PUPDR14, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR13 : RegisterField<PUPDR, 26, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR13, 0U>;
      using Pull_up = FieldValue<PUPDR13, 1U>;
      using Pull_down = FieldValue<PUPDR13, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR12 : RegisterField<PUPDR, 24, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR12, 0U>;
      using Pull_up = FieldValue<PUPDR12, 1U>;
      using Pull_down = FieldValue<PUPDR12, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR11 : RegisterField<PUPDR, 22, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR11, 0U>;
      using Pull_up = FieldValue<PUPDR11, 1U>;
      using Pull_down = FieldValue<PUPDR11, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR10 : RegisterField<PUPDR, 20, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR10, 0U>;
      using Pull_up = FieldValue<PUPDR10, 1U>;
      using Pull_down = FieldValue<PUPDR10, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR9 : RegisterField<PUPDR, 18, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR9, 0U>;
      using Pull_up = FieldValue<PUPDR9, 1U>;
      using Pull_down = FieldValue<PUPDR9, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR8 : RegisterField<PUPDR, 16, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR8, 0U>;
      using Pull_up = FieldValue<PUPDR8, 1U>;
      using Pull_down = FieldValue<PUPDR8, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR7 : RegisterField<PUPDR, 14, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR7, 0U>;
      using Pull_up = FieldValue<PUPDR7, 1U>;
      using Pull_down = FieldValue<PUPDR7, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR6 : RegisterField<PUPDR, 12, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR6, 0U>;
      using Pull_up = FieldValue<PUPDR6, 1U>;
      using Pull_down = FieldValue<PUPDR6, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR5 : RegisterField<PUPDR, 10, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR5, 0U>;
      using Pull_up = FieldValue<PUPDR5, 1U>;
      using Pull_down = FieldValue<PUPDR5, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR4 : RegisterField<PUPDR, 8, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR4, 0U>;
      using Pull_up = FieldValue<PUPDR4, 1U>;
      using Pull_down = FieldValue<PUPDR4, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR3 : RegisterField<PUPDR, 6, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR3, 0U>;
      using Pull_up = FieldValue<PUPDR3, 1U>;
      using Pull_down = FieldValue<PUPDR3, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR2 : RegisterField<PUPDR, 4, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR2, 0U>;
      using Pull_up = FieldValue<PUPDR2, 1U>;
      using Pull_down = FieldValue<PUPDR2, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR1 : RegisterField<PUPDR, 2, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR1, 0U>;
      using Pull_up = FieldValue<PUPDR1, 1U>;
      using Pull_down = FieldValue<PUPDR1, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR0 : RegisterField<PUPDR, 0, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR0, 0U>;
      using Pull_up = FieldValue<PUPDR0, 1U>;
      using Pull_down = FieldValue<PUPDR0, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct PUPDRx : RegisterField<PUPDR, 0 + 2 * num, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDRx, 0U>;
      using Pull_up = FieldValue<PUPDRx, 1U>;
      using Pull_down = FieldValue<PUPDRx, 2U>;
    };
  };

  // GPIO port input data register
  struct IDR : Register<0x40020810, ReadMode, 0x0>
  {
    // Port input data (y = 0..15)
    struct IDR15 : RegisterField<IDR, 15, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR14 : RegisterField<IDR, 14, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR13 : RegisterField<IDR, 13, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR12 : RegisterField<IDR, 12, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR11 : RegisterField<IDR, 11, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR10 : RegisterField<IDR, 10, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR9 : RegisterField<IDR, 9, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR8 : RegisterField<IDR, 8, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR7 : RegisterField<IDR, 7, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR6 : RegisterField<IDR, 6, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR5 : RegisterField<IDR, 5, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR4 : RegisterField<IDR, 4, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR3 : RegisterField<IDR, 3, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR2 : RegisterField<IDR, 2, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR1 : RegisterField<IDR, 1, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR0 : RegisterField<IDR, 0, 1, ReadMode>
    {
    };
  };

  // GPIO port output data register
  struct ODR : Register<0x40020814, ReadWriteMode, 0x0>
  {
    // Port output data (y = 0..15)
    struct ODR15 : RegisterField<ODR, 15, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR14 : RegisterField<ODR, 14, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR13 : RegisterField<ODR, 13, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR12 : RegisterField<ODR, 12, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR11 : RegisterField<ODR, 11, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR10 : RegisterField<ODR, 10, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR9 : RegisterField<ODR, 9, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR8 : RegisterField<ODR, 8, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR7 : RegisterField<ODR, 7, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR6 : RegisterField<ODR, 6, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR5 : RegisterField<ODR, 5, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR4 : RegisterField<ODR, 4, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR3 : RegisterField<ODR, 3, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR2 : RegisterField<ODR, 2, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR1 : RegisterField<ODR, 1, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR0 : RegisterField<ODR, 0, 1, ReadWriteMode>
    {
    };
  };

  // GPIO port bit set/reset register
  struct BSRR : Register<0x40020818, WriteMode, 0x0>
  {
    // Port x reset bit y (y = 0..15)
    struct BR15 : RegisterField<BSRR, 31, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR14 : RegisterField<BSRR, 30, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR13 : RegisterField<BSRR, 29, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR12 : RegisterField<BSRR, 28, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR11 : RegisterField<BSRR, 27, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR10 : RegisterField<BSRR, 26, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR9 : RegisterField<BSRR, 25, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR8 : RegisterField<BSRR, 24, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR7 : RegisterField<BSRR, 23, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR6 : RegisterField<BSRR, 22, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR5 : RegisterField<BSRR, 21, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR4 : RegisterField<BSRR, 20, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR3 : RegisterField<BSRR, 19, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR2 : RegisterField<BSRR, 18, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR1 : RegisterField<BSRR, 17, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BR0 : RegisterField<BSRR, 16, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS15 : RegisterField<BSRR, 15, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS14 : RegisterField<BSRR, 14, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS13 : RegisterField<BSRR, 13, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS12 : RegisterField<BSRR, 12, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS11 : RegisterField<BSRR, 11, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS10 : RegisterField<BSRR, 10, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS9 : RegisterField<BSRR, 9, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS8 : RegisterField<BSRR, 8, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS7 : RegisterField<BSRR, 7, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS6 : RegisterField<BSRR, 6, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS5 : RegisterField<BSRR, 5, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS4 : RegisterField<BSRR, 4, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS3 : RegisterField<BSRR, 3, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS2 : RegisterField<BSRR, 2, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS1 : RegisterField<BSRR, 1, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS0 : RegisterField<BSRR, 0, 1, WriteMode>
    {
    };
  };

  // GPIO port configuration lock register
  struct LCKR : Register<0x4002081c, ReadWriteMode, 0x0>
  {
    // Port x lock bit y (y= 0..15)
    struct LCKK : RegisterField<LCKR, 16, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK15 : RegisterField<LCKR, 15, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK14 : RegisterField<LCKR, 14, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK13 : RegisterField<LCKR, 13, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK12 : RegisterField<LCKR, 12, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK11 : RegisterField<LCKR, 11, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK10 : RegisterField<LCKR, 10, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK9 : RegisterField<LCKR, 9, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK8 : RegisterField<LCKR, 8, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK7 : RegisterField<LCKR, 7, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK6 : RegisterField<LCKR, 6, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK5 : RegisterField<LCKR, 5, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK4 : RegisterField<LCKR, 4, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK3 : RegisterField<LCKR, 3, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK2 : RegisterField<LCKR, 2, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK1 : RegisterField<LCKR, 1, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK0 : RegisterField<LCKR, 0, 1, ReadWriteMode>
    {
    };
  };

  // GPIO alternate function low register
  struct AFRL : Register<0x40020820, ReadWriteMode, 0x0>
  {
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL7 : RegisterField<AFRL, 28, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL7, 0U>;
      using AF1 = FieldValue<AFRL7, 1U>;
      using AF2 = FieldValue<AFRL7, 2U>;
      using AF3 = FieldValue<AFRL7, 3U>;
      using AF4 = FieldValue<AFRL7, 4U>;
      using AF5 = FieldValue<AFRL7, 5U>;
      using AF6 = FieldValue<AFRL7, 6U>;
      using AF7 = FieldValue<AFRL7, 7U>;
      using AF8 = FieldValue<AFRL7, 8U>;
      using AF9 = FieldValue<AFRL7, 9U>;
      using AF10 = FieldValue<AFRL7, 10U>;
      using AF11 = FieldValue<AFRL7, 11U>;
      using AF12 = FieldValue<AFRL7, 12U>;
      using AF13 = FieldValue<AFRL7, 13U>;
      using AF14 = FieldValue<AFRL7, 14U>;
      using AF15 = FieldValue<AFRL7, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL6 : RegisterField<AFRL, 24, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL6, 0U>;
      using AF1 = FieldValue<AFRL6, 1U>;
      using AF2 = FieldValue<AFRL6, 2U>;
      using AF3 = FieldValue<AFRL6, 3U>;
      using AF4 = FieldValue<AFRL6, 4U>;
      using AF5 = FieldValue<AFRL6, 5U>;
      using AF6 = FieldValue<AFRL6, 6U>;
      using AF7 = FieldValue<AFRL6, 7U>;
      using AF8 = FieldValue<AFRL6, 8U>;
      using AF9 = FieldValue<AFRL6, 9U>;
      using AF10 = FieldValue<AFRL6, 10U>;
      using AF11 = FieldValue<AFRL6, 11U>;
      using AF12 = FieldValue<AFRL6, 12U>;
      using AF13 = FieldValue<AFRL6, 13U>;
      using AF14 = FieldValue<AFRL6, 14U>;
      using AF15 = FieldValue<AFRL6, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL5 : RegisterField<AFRL, 20, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL5, 0U>;
      using AF1 = FieldValue<AFRL5, 1U>;
      using AF2 = FieldValue<AFRL5, 2U>;
      using AF3 = FieldValue<AFRL5, 3U>;
      using AF4 = FieldValue<AFRL5, 4U>;
      using AF5 = FieldValue<AFRL5, 5U>;
      using AF6 = FieldValue<AFRL5, 6U>;
      using AF7 = FieldValue<AFRL5, 7U>;
      using AF8 = FieldValue<AFRL5, 8U>;
      using AF9 = FieldValue<AFRL5, 9U>;
      using AF10 = FieldValue<AFRL5, 10U>;
      using AF11 = FieldValue<AFRL5, 11U>;
      using AF12 = FieldValue<AFRL5, 12U>;
      using AF13 = FieldValue<AFRL5, 13U>;
      using AF14 = FieldValue<AFRL5, 14U>;
      using AF15 = FieldValue<AFRL5, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL4 : RegisterField<AFRL, 16, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL4, 0U>;
      using AF1 = FieldValue<AFRL4, 1U>;
      using AF2 = FieldValue<AFRL4, 2U>;
      using AF3 = FieldValue<AFRL4, 3U>;
      using AF4 = FieldValue<AFRL4, 4U>;
      using AF5 = FieldValue<AFRL4, 5U>;
      using AF6 = FieldValue<AFRL4, 6U>;
      using AF7 = FieldValue<AFRL4, 7U>;
      using AF8 = FieldValue<AFRL4, 8U>;
      using AF9 = FieldValue<AFRL4, 9U>;
      using AF10 = FieldValue<AFRL4, 10U>;
      using AF11 = FieldValue<AFRL4, 11U>;
      using AF12 = FieldValue<AFRL4, 12U>;
      using AF13 = FieldValue<AFRL4, 13U>;
      using AF14 = FieldValue<AFRL4, 14U>;
      using AF15 = FieldValue<AFRL4, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL3 : RegisterField<AFRL, 12, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL3, 0U>;
      using AF1 = FieldValue<AFRL3, 1U>;
      using AF2 = FieldValue<AFRL3, 2U>;
      using AF3 = FieldValue<AFRL3, 3U>;
      using AF4 = FieldValue<AFRL3, 4U>;
      using AF5 = FieldValue<AFRL3, 5U>;
      using AF6 = FieldValue<AFRL3, 6U>;
      using AF7 = FieldValue<AFRL3, 7U>;
      using AF8 = FieldValue<AFRL3, 8U>;
      using AF9 = FieldValue<AFRL3, 9U>;
      using AF10 = FieldValue<AFRL3, 10U>;
      using AF11 = FieldValue<AFRL3, 11U>;
      using AF12 = FieldValue<AFRL3, 12U>;
      using AF13 = FieldValue<AFRL3, 13U>;
      using AF14 = FieldValue<AFRL3, 14U>;
      using AF15 = FieldValue<AFRL3, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL2 : RegisterField<AFRL, 8, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL2, 0U>;
      using AF1 = FieldValue<AFRL2, 1U>;
      using AF2 = FieldValue<AFRL2, 2U>;
      using AF3 = FieldValue<AFRL2, 3U>;
      using AF4 = FieldValue<AFRL2, 4U>;
      using AF5 = FieldValue<AFRL2, 5U>;
      using AF6 = FieldValue<AFRL2, 6U>;
      using AF7 = FieldValue<AFRL2, 7U>;
      using AF8 = FieldValue<AFRL2, 8U>;
      using AF9 = FieldValue<AFRL2, 9U>;
      using AF10 = FieldValue<AFRL2, 10U>;
      using AF11 = FieldValue<AFRL2, 11U>;
      using AF12 = FieldValue<AFRL2, 12U>;
      using AF13 = FieldValue<AFRL2, 13U>;
      using AF14 = FieldValue<AFRL2, 14U>;
      using AF15 = FieldValue<AFRL2, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL1 : RegisterField<AFRL, 4, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL1, 0U>;
      using AF1 = FieldValue<AFRL1, 1U>;
      using AF2 = FieldValue<AFRL1, 2U>;
      using AF3 = FieldValue<AFRL1, 3U>;
      using AF4 = FieldValue<AFRL1, 4U>;
      using AF5 = FieldValue<AFRL1, 5U>;
      using AF6 = FieldValue<AFRL1, 6U>;
      using AF7 = FieldValue<AFRL1, 7U>;
      using AF8 = FieldValue<AFRL1, 8U>;
      using AF9 = FieldValue<AFRL1, 9U>;
      using AF10 = FieldValue<AFRL1, 10U>;
      using AF11 = FieldValue<AFRL1, 11U>;
      using AF12 = FieldValue<AFRL1, 12U>;
      using AF13 = FieldValue<AFRL1, 13U>;
      using AF14 = FieldValue<AFRL1, 14U>;
      using AF15 = FieldValue<AFRL1, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL0 : RegisterField<AFRL, 0, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL0, 0U>;
      using AF1 = FieldValue<AFRL0, 1U>;
      using AF2 = FieldValue<AFRL0, 2U>;
      using AF3 = FieldValue<AFRL0, 3U>;
      using AF4 = FieldValue<AFRL0, 4U>;
      using AF5 = FieldValue<AFRL0, 5U>;
      using AF6 = FieldValue<AFRL0, 6U>;
      using AF7 = FieldValue<AFRL0, 7U>;
      using AF8 = FieldValue<AFRL0, 8U>;
      using AF9 = FieldValue<AFRL0, 9U>;
      using AF10 = FieldValue<AFRL0, 10U>;
      using AF11 = FieldValue<AFRL0, 11U>;
      using AF12 = FieldValue<AFRL0, 12U>;
      using AF13 = FieldValue<AFRL0, 13U>;
      using AF14 = FieldValue<AFRL0, 14U>;
      using AF15 = FieldValue<AFRL0, 15U>;
    };
  };

  // GPIO alternate function high register
  struct AFRH : Register<0x40020824, ReadWriteMode, 0x0>
  {
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH15 : RegisterField<AFRH, 28, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH15, 0U>;
      using AF1 = FieldValue<AFRH15, 1U>;
      using AF2 = FieldValue<AFRH15, 2U>;
      using AF3 = FieldValue<AFRH15, 3U>;
      using AF4 = FieldValue<AFRH15, 4U>;
      using AF5 = FieldValue<AFRH15, 5U>;
      using AF6 = FieldValue<AFRH15, 6U>;
      using AF7 = FieldValue<AFRH15, 7U>;
      using AF8 = FieldValue<AFRH15, 8U>;
      using AF9 = FieldValue<AFRH15, 9U>;
      using AF10 = FieldValue<AFRH15, 10U>;
      using AF11 = FieldValue<AFRH15, 11U>;
      using AF12 = FieldValue<AFRH15, 12U>;
      using AF13 = FieldValue<AFRH15, 13U>;
      using AF14 = FieldValue<AFRH15, 14U>;
      using AF15 = FieldValue<AFRH15, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH14 : RegisterField<AFRH, 24, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH14, 0U>;
      using AF1 = FieldValue<AFRH14, 1U>;
      using AF2 = FieldValue<AFRH14, 2U>;
      using AF3 = FieldValue<AFRH14, 3U>;
      using AF4 = FieldValue<AFRH14, 4U>;
      using AF5 = FieldValue<AFRH14, 5U>;
      using AF6 = FieldValue<AFRH14, 6U>;
      using AF7 = FieldValue<AFRH14, 7U>;
      using AF8 = FieldValue<AFRH14, 8U>;
      using AF9 = FieldValue<AFRH14, 9U>;
      using AF10 = FieldValue<AFRH14, 10U>;
      using AF11 = FieldValue<AFRH14, 11U>;
      using AF12 = FieldValue<AFRH14, 12U>;
      using AF13 = FieldValue<AFRH14, 13U>;
      using AF14 = FieldValue<AFRH14, 14U>;
      using AF15 = FieldValue<AFRH14, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH13 : RegisterField<AFRH, 20, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH13, 0U>;
      using AF1 = FieldValue<AFRH13, 1U>;
      using AF2 = FieldValue<AFRH13, 2U>;
      using AF3 = FieldValue<AFRH13, 3U>;
      using AF4 = FieldValue<AFRH13, 4U>;
      using AF5 = FieldValue<AFRH13, 5U>;
      using AF6 = FieldValue<AFRH13, 6U>;
      using AF7 = FieldValue<AFRH13, 7U>;
      using AF8 = FieldValue<AFRH13, 8U>;
      using AF9 = FieldValue<AFRH13, 9U>;
      using AF10 = FieldValue<AFRH13, 10U>;
      using AF11 = FieldValue<AFRH13, 11U>;
      using AF12 = FieldValue<AFRH13, 12U>;
      using AF13 = FieldValue<AFRH13, 13U>;
      using AF14 = FieldValue<AFRH13, 14U>;
      using AF15 = FieldValue<AFRH13, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH12 : RegisterField<AFRH, 16, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH12, 0U>;
      using AF1 = FieldValue<AFRH12, 1U>;
      using AF2 = FieldValue<AFRH12, 2U>;
      using AF3 = FieldValue<AFRH12, 3U>;
      using AF4 = FieldValue<AFRH12, 4U>;
      using AF5 = FieldValue<AFRH12, 5U>;
      using AF6 = FieldValue<AFRH12, 6U>;
      using AF7 = FieldValue<AFRH12, 7U>;
      using AF8 = FieldValue<AFRH12, 8U>;
      using AF9 = FieldValue<AFRH12, 9U>;
      using AF10 = FieldValue<AFRH12, 10U>;
      using AF11 = FieldValue<AFRH12, 11U>;
      using AF12 = FieldValue<AFRH12, 12U>;
      using AF13 = FieldValue<AFRH12, 13U>;
      using AF14 = FieldValue<AFRH12, 14U>;
      using AF15 = FieldValue<AFRH12, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH11 : RegisterField<AFRH, 12, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH11, 0U>;
      using AF1 = FieldValue<AFRH11, 1U>;
      using AF2 = FieldValue<AFRH11, 2U>;
      using AF3 = FieldValue<AFRH11, 3U>;
      using AF4 = FieldValue<AFRH11, 4U>;
      using AF5 = FieldValue<AFRH11, 5U>;
      using AF6 = FieldValue<AFRH11, 6U>;
      using AF7 = FieldValue<AFRH11, 7U>;
      using AF8 = FieldValue<AFRH11, 8U>;
      using AF9 = FieldValue<AFRH11, 9U>;
      using AF10 = FieldValue<AFRH11, 10U>;
      using AF11 = FieldValue<AFRH11, 11U>;
      using AF12 = FieldValue<AFRH11, 12U>;
      using AF13 = FieldValue<AFRH11, 13U>;
      using AF14 = FieldValue<AFRH11, 14U>;
      using AF15 = FieldValue<AFRH11, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH10 : RegisterField<AFRH, 8, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH10, 0U>;
      using AF1 = FieldValue<AFRH10, 1U>;
      using AF2 = FieldValue<AFRH10, 2U>;
      using AF3 = FieldValue<AFRH10, 3U>;
      using AF4 = FieldValue<AFRH10, 4U>;
      using AF5 = FieldValue<AFRH10, 5U>;
      using AF6 = FieldValue<AFRH10, 6U>;
      using AF7 = FieldValue<AFRH10, 7U>;
      using AF8 = FieldValue<AFRH10, 8U>;
      using AF9 = FieldValue<AFRH10, 9U>;
      using AF10 = FieldValue<AFRH10, 10U>;
      using AF11 = FieldValue<AFRH10, 11U>;
      using AF12 = FieldValue<AFRH10, 12U>;
      using AF13 = FieldValue<AFRH10, 13U>;
      using AF14 = FieldValue<AFRH10, 14U>;
      using AF15 = FieldValue<AFRH10, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH9 : RegisterField<AFRH, 4, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH9, 0U>;
      using AF1 = FieldValue<AFRH9, 1U>;
      using AF2 = FieldValue<AFRH9, 2U>;
      using AF3 = FieldValue<AFRH9, 3U>;
      using AF4 = FieldValue<AFRH9, 4U>;
      using AF5 = FieldValue<AFRH9, 5U>;
      using AF6 = FieldValue<AFRH9, 6U>;
      using AF7 = FieldValue<AFRH9, 7U>;
      using AF8 = FieldValue<AFRH9, 8U>;
      using AF9 = FieldValue<AFRH9, 9U>;
      using AF10 = FieldValue<AFRH9, 10U>;
      using AF11 = FieldValue<AFRH9, 11U>;
      using AF12 = FieldValue<AFRH9, 12U>;
      using AF13 = FieldValue<AFRH9, 13U>;
      using AF14 = FieldValue<AFRH9, 14U>;
      using AF15 = FieldValue<AFRH9, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH8 : RegisterField<AFRH, 0, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH8, 0U>;
      using AF1 = FieldValue<AFRH8, 1U>;
      using AF2 = FieldValue<AFRH8, 2U>;
      using AF3 = FieldValue<AFRH8, 3U>;
      using AF4 = FieldValue<AFRH8, 4U>;
      using AF5 = FieldValue<AFRH8, 5U>;
      using AF6 = FieldValue<AFRH8, 6U>;
      using AF7 = FieldValue<AFRH8, 7U>;
      using AF8 = FieldValue<AFRH8, 8U>;
      using AF9 = FieldValue<AFRH8, 9U>;
      using AF10 = FieldValue<AFRH8, 10U>;
      using AF11 = FieldValue<AFRH8, 11U>;
      using AF12 = FieldValue<AFRH8, 12U>;
      using AF13 = FieldValue<AFRH8, 13U>;
      using AF14 = FieldValue<AFRH8, 14U>;
      using AF15 = FieldValue<AFRH8, 15U>;
    };
  };

// Large Registers

  // GPIO alternate function low register
  template<auto num>
  struct AFR_AF : RegisterField<Register<0x40020820 + 4 * (num / 8), ReadWriteMode, 0x0>, 4 * (num % 8), 4, ReadWriteMode>
  {
    using AF0 = FieldValue<AFR_AF, 0U>;
    using AF1 = FieldValue<AFR_AF, 1U>;
    using AF2 = FieldValue<AFR_AF, 2U>;
    using AF3 = FieldValue<AFR_AF, 3U>;
    using AF4 = FieldValue<AFR_AF, 4U>;
    using AF5 = FieldValue<AFR_AF, 5U>;
    using AF6 = FieldValue<AFR_AF, 6U>;
    using AF7 = FieldValue<AFR_AF, 7U>;
    using AF8 = FieldValue<AFR_AF, 8U>;
    using AF9 = FieldValue<AFR_AF, 9U>;
    using AF10 = FieldValue<AFR_AF, 10U>;
    using AF11 = FieldValue<AFR_AF, 11U>;
    using AF12 = FieldValue<AFR_AF, 12U>;
    using AF13 = FieldValue<AFR_AF, 13U>;
    using AF14 = FieldValue<AFR_AF, 14U>;
    using AF15 = FieldValue<AFR_AF, 15U>;
  };

};


struct GPIOB
{
  static constexpr auto periphNum = 1;

  // GPIO port mode register
  struct MODER : Register<0x40020400, ReadWriteMode, 0x280>
  {
    // Port x configuration bits (y = 0..15)
    struct MODER15 : RegisterField<MODER, 30, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER15, 0U>;
      using Output = FieldValue<MODER15, 1U>;
      using Alternate = FieldValue<MODER15, 2U>;
      using Analog = FieldValue<MODER15, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER14 : RegisterField<MODER, 28, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER14, 0U>;
      using Output = FieldValue<MODER14, 1U>;
      using Alternate = FieldValue<MODER14, 2U>;
      using Analog = FieldValue<MODER14, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER13 : RegisterField<MODER, 26, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER13, 0U>;
      using Output = FieldValue<MODER13, 1U>;
      using Alternate = FieldValue<MODER13, 2U>;
      using Analog = FieldValue<MODER13, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER12 : RegisterField<MODER, 24, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER12, 0U>;
      using Output = FieldValue<MODER12, 1U>;
      using Alternate = FieldValue<MODER12, 2U>;
      using Analog = FieldValue<MODER12, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER11 : RegisterField<MODER, 22, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER11, 0U>;
      using Output = FieldValue<MODER11, 1U>;
      using Alternate = FieldValue<MODER11, 2U>;
      using Analog = FieldValue<MODER11, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER10 : RegisterField<MODER, 20, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER10, 0U>;
      using Output = FieldValue<MODER10, 1U>;
      using Alternate = FieldValue<MODER10, 2U>;
      using Analog = FieldValue<MODER10, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER9 : RegisterField<MODER, 18, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER9, 0U>;
      using Output = FieldValue<MODER9, 1U>;
      using Alternate = FieldValue<MODER9, 2U>;
      using Analog = FieldValue<MODER9, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER8 : RegisterField<MODER, 16, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER8, 0U>;
      using Output = FieldValue<MODER8, 1U>;
      using Alternate = FieldValue<MODER8, 2U>;
      using Analog = FieldValue<MODER8, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER7 : RegisterField<MODER, 14, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER7, 0U>;
      using Output = FieldValue<MODER7, 1U>;
      using Alternate = FieldValue<MODER7, 2U>;
      using Analog = FieldValue<MODER7, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER6 : RegisterField<MODER, 12, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER6, 0U>;
      using Output = FieldValue<MODER6, 1U>;
      using Alternate = FieldValue<MODER6, 2U>;
      using Analog = FieldValue<MODER6, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER5 : RegisterField<MODER, 10, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER5, 0U>;
      using Output = FieldValue<MODER5, 1U>;
      using Alternate = FieldValue<MODER5, 2U>;
      using Analog = FieldValue<MODER5, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER4 : RegisterField<MODER, 8, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER4, 0U>;
      using Output = FieldValue<MODER4, 1U>;
      using Alternate = FieldValue<MODER4, 2U>;
      using Analog = FieldValue<MODER4, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER3 : RegisterField<MODER, 6, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER3, 0U>;
      using Output = FieldValue<MODER3, 1U>;
      using Alternate = FieldValue<MODER3, 2U>;
      using Analog = FieldValue<MODER3, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER2 : RegisterField<MODER, 4, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER2, 0U>;
      using Output = FieldValue<MODER2, 1U>;
      using Alternate = FieldValue<MODER2, 2U>;
      using Analog = FieldValue<MODER2, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER1 : RegisterField<MODER, 2, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER1, 0U>;
      using Output = FieldValue<MODER1, 1U>;
      using Alternate = FieldValue<MODER1, 2U>;
      using Analog = FieldValue<MODER1, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER0 : RegisterField<MODER, 0, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER0, 0U>;
      using Output = FieldValue<MODER0, 1U>;
      using Alternate = FieldValue<MODER0, 2U>;
      using Analog = FieldValue<MODER0, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct MODERx : RegisterField<MODER, 0 + 2 * num, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODERx, 0U>;
      using Output = FieldValue<MODERx, 1U>;
      using Alternate = FieldValue<MODERx, 2U>;
      using Analog = FieldValue<MODERx, 3U>;
    };
  };

  // GPIO port output type register
  struct OTYPER : Register<0x40020404, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct OT15 : RegisterField<OTYPER, 15, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT15, 0U>;
      using Open_drain = FieldValue<OT15, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT14 : RegisterField<OTYPER, 14, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT14, 0U>;
      using Open_drain = FieldValue<OT14, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT13 : RegisterField<OTYPER, 13, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT13, 0U>;
      using Open_drain = FieldValue<OT13, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT12 : RegisterField<OTYPER, 12, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT12, 0U>;
      using Open_drain = FieldValue<OT12, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT11 : RegisterField<OTYPER, 11, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT11, 0U>;
      using Open_drain = FieldValue<OT11, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT10 : RegisterField<OTYPER, 10, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT10, 0U>;
      using Open_drain = FieldValue<OT10, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT9 : RegisterField<OTYPER, 9, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT9, 0U>;
      using Open_drain = FieldValue<OT9, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT8 : RegisterField<OTYPER, 8, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT8, 0U>;
      using Open_drain = FieldValue<OT8, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT7 : RegisterField<OTYPER, 7, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT7, 0U>;
      using Open_drain = FieldValue<OT7, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT6 : RegisterField<OTYPER, 6, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT6, 0U>;
      using Open_drain = FieldValue<OT6, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT5 : RegisterField<OTYPER, 5, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT5, 0U>;
      using Open_drain = FieldValue<OT5, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT4 : RegisterField<OTYPER, 4, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT4, 0U>;
      using Open_drain = FieldValue<OT4, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT3 : RegisterField<OTYPER, 3, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT3, 0U>;
      using Open_drain = FieldValue<OT3, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT2 : RegisterField<OTYPER, 2, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT2, 0U>;
      using Open_drain = FieldValue<OT2, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT1 : RegisterField<OTYPER, 1, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT1, 0U>;
      using Open_drain = FieldValue<OT1, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT0 : RegisterField<OTYPER, 0, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT0, 0U>;
      using Open_drain = FieldValue<OT0, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct OTx : RegisterField<OTYPER, 0 + 1 * num, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OTx, 0U>;
      using Open_drain = FieldValue<OTx, 1U>;
    };
  };

  // GPIO port output speed register
  struct OSPEEDR : Register<0x40020408, ReadWriteMode, 0xc0>
  {
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR15 : RegisterField<OSPEEDR, 30, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR15, 0U>;
      using Medium = FieldValue<OSPEEDR15, 1U>;
      using Fast = FieldValue<OSPEEDR15, 2U>;
      using High = FieldValue<OSPEEDR15, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR14 : RegisterField<OSPEEDR, 28, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR14, 0U>;
      using Medium = FieldValue<OSPEEDR14, 1U>;
      using Fast = FieldValue<OSPEEDR14, 2U>;
      using High = FieldValue<OSPEEDR14, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR13 : RegisterField<OSPEEDR, 26, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR13, 0U>;
      using Medium = FieldValue<OSPEEDR13, 1U>;
      using Fast = FieldValue<OSPEEDR13, 2U>;
      using High = FieldValue<OSPEEDR13, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR12 : RegisterField<OSPEEDR, 24, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR12, 0U>;
      using Medium = FieldValue<OSPEEDR12, 1U>;
      using Fast = FieldValue<OSPEEDR12, 2U>;
      using High = FieldValue<OSPEEDR12, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR11 : RegisterField<OSPEEDR, 22, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR11, 0U>;
      using Medium = FieldValue<OSPEEDR11, 1U>;
      using Fast = FieldValue<OSPEEDR11, 2U>;
      using High = FieldValue<OSPEEDR11, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR10 : RegisterField<OSPEEDR, 20, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR10, 0U>;
      using Medium = FieldValue<OSPEEDR10, 1U>;
      using Fast = FieldValue<OSPEEDR10, 2U>;
      using High = FieldValue<OSPEEDR10, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR9 : RegisterField<OSPEEDR, 18, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR9, 0U>;
      using Medium = FieldValue<OSPEEDR9, 1U>;
      using Fast = FieldValue<OSPEEDR9, 2U>;
      using High = FieldValue<OSPEEDR9, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR8 : RegisterField<OSPEEDR, 16, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR8, 0U>;
      using Medium = FieldValue<OSPEEDR8, 1U>;
      using Fast = FieldValue<OSPEEDR8, 2U>;
      using High = FieldValue<OSPEEDR8, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR7 : RegisterField<OSPEEDR, 14, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR7, 0U>;
      using Medium = FieldValue<OSPEEDR7, 1U>;
      using Fast = FieldValue<OSPEEDR7, 2U>;
      using High = FieldValue<OSPEEDR7, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR6 : RegisterField<OSPEEDR, 12, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR6, 0U>;
      using Medium = FieldValue<OSPEEDR6, 1U>;
      using Fast = FieldValue<OSPEEDR6, 2U>;
      using High = FieldValue<OSPEEDR6, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR5 : RegisterField<OSPEEDR, 10, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR5, 0U>;
      using Medium = FieldValue<OSPEEDR5, 1U>;
      using Fast = FieldValue<OSPEEDR5, 2U>;
      using High = FieldValue<OSPEEDR5, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR4 : RegisterField<OSPEEDR, 8, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR4, 0U>;
      using Medium = FieldValue<OSPEEDR4, 1U>;
      using Fast = FieldValue<OSPEEDR4, 2U>;
      using High = FieldValue<OSPEEDR4, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR3 : RegisterField<OSPEEDR, 6, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR3, 0U>;
      using Medium = FieldValue<OSPEEDR3, 1U>;
      using Fast = FieldValue<OSPEEDR3, 2U>;
      using High = FieldValue<OSPEEDR3, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR2 : RegisterField<OSPEEDR, 4, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR2, 0U>;
      using Medium = FieldValue<OSPEEDR2, 1U>;
      using Fast = FieldValue<OSPEEDR2, 2U>;
      using High = FieldValue<OSPEEDR2, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR1 : RegisterField<OSPEEDR, 2, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR1, 0U>;
      using Medium = FieldValue<OSPEEDR1, 1U>;
      using Fast = FieldValue<OSPEEDR1, 2U>;
      using High = FieldValue<OSPEEDR1, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR0 : RegisterField<OSPEEDR, 0, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR0, 0U>;
      using Medium = FieldValue<OSPEEDR0, 1U>;
      using Fast = FieldValue<OSPEEDR0, 2U>;
      using High = FieldValue<OSPEEDR0, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct OSPEEDRx : RegisterField<OSPEEDR, 0 + 2 * num, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDRx, 0U>;
      using Medium = FieldValue<OSPEEDRx, 1U>;
      using Fast = FieldValue<OSPEEDRx, 2U>;
      using High = FieldValue<OSPEEDRx, 3U>;
    };
  };

  // GPIO port pull-up/pull-down register
  struct PUPDR : Register<0x4002040c, ReadWriteMode, 0x100>
  {
    // Port x configuration bits (y = 0..15)
    struct PUPDR15 : RegisterField<PUPDR, 30, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR15, 0U>;
      using Pull_up = FieldValue<PUPDR15, 1U>;
      using Pull_down = FieldValue<PUPDR15, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR14 : RegisterField<PUPDR, 28, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR14, 0U>;
      using Pull_up = FieldValue<PUPDR14, 1U>;
      using Pull_down = FieldValue<PUPDR14, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR13 : RegisterField<PUPDR, 26, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR13, 0U>;
      using Pull_up = FieldValue<PUPDR13, 1U>;
      using Pull_down = FieldValue<PUPDR13, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR12 : RegisterField<PUPDR, 24, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR12, 0U>;
      using Pull_up = FieldValue<PUPDR12, 1U>;
      using Pull_down = FieldValue<PUPDR12, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR11 : RegisterField<PUPDR, 22, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR11, 0U>;
      using Pull_up = FieldValue<PUPDR11, 1U>;
      using Pull_down = FieldValue<PUPDR11, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR10 : RegisterField<PUPDR, 20, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR10, 0U>;
      using Pull_up = FieldValue<PUPDR10, 1U>;
      using Pull_down = FieldValue<PUPDR10, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR9 : RegisterField<PUPDR, 18, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR9, 0U>;
      using Pull_up = FieldValue<PUPDR9, 1U>;
      using Pull_down = FieldValue<PUPDR9, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR8 : RegisterField<PUPDR, 16, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR8, 0U>;
      using Pull_up = FieldValue<PUPDR8, 1U>;
      using Pull_down = FieldValue<PUPDR8, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR7 : RegisterField<PUPDR, 14, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR7, 0U>;
      using Pull_up = FieldValue<PUPDR7, 1U>;
      using Pull_down = FieldValue<PUPDR7, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR6 : RegisterField<PUPDR, 12, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR6, 0U>;
      using Pull_up = FieldValue<PUPDR6, 1U>;
      using Pull_down = FieldValue<PUPDR6, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR5 : RegisterField<PUPDR, 10, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR5, 0U>;
      using Pull_up = FieldValue<PUPDR5, 1U>;
      using Pull_down = FieldValue<PUPDR5, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR4 : RegisterField<PUPDR, 8, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR4, 0U>;
      using Pull_up = FieldValue<PUPDR4, 1U>;
      using Pull_down = FieldValue<PUPDR4, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR3 : RegisterField<PUPDR, 6, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR3, 0U>;
      using Pull_up = FieldValue<PUPDR3, 1U>;
      using Pull_down = FieldValue<PUPDR3, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR2 : RegisterField<PUPDR, 4, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR2, 0U>;
      using Pull_up = FieldValue<PUPDR2, 1U>;
      using Pull_down = FieldValue<PUPDR2, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR1 : RegisterField<PUPDR, 2, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR1, 0U>;
      using Pull_up = FieldValue<PUPDR1, 1U>;
      using Pull_down = FieldValue<PUPDR1, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR0 : RegisterField<PUPDR, 0, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR0, 0U>;
      using Pull_up = FieldValue<PUPDR0, 1U>;
      using Pull_down = FieldValue<PUPDR0, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct PUPDRx : RegisterField<PUPDR, 0 + 2 * num, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDRx, 0U>;
      using Pull_up = FieldValue<PUPDRx, 1U>;
      using Pull_down = FieldValue<PUPDRx, 2U>;
    };
  };

  // GPIO port input data register
  struct IDR : Register<0x40020410, ReadMode, 0x0>
  {
    // Port input data (y = 0..15)
    struct IDR15 : RegisterField<IDR, 15, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR14 : RegisterField<IDR, 14, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR13 : RegisterField<IDR, 13, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR12 : RegisterField<IDR, 12, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR11 : RegisterField<IDR, 11, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR10 : RegisterField<IDR, 10, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR9 : RegisterField<IDR, 9, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR8 : RegisterField<IDR, 8, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR7 : RegisterField<IDR, 7, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR6 : RegisterField<IDR, 6, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR5 : RegisterField<IDR, 5, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR4 : RegisterField<IDR, 4, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR3 : RegisterField<IDR, 3, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR2 : RegisterField<IDR, 2, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR1 : RegisterField<IDR, 1, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR0 : RegisterField<IDR, 0, 1, ReadMode>
    {
    };
  };

  // GPIO port output data register
  struct ODR : Register<0x40020414, ReadWriteMode, 0x0>
  {
    // Port output data (y = 0..15)
    struct ODR15 : RegisterField<ODR, 15, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR14 : RegisterField<ODR, 14, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR13 : RegisterField<ODR, 13, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR12 : RegisterField<ODR, 12, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR11 : RegisterField<ODR, 11, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR10 : RegisterField<ODR, 10, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR9 : RegisterField<ODR, 9, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR8 : RegisterField<ODR, 8, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR7 : RegisterField<ODR, 7, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR6 : RegisterField<ODR, 6, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR5 : RegisterField<ODR, 5, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR4 : RegisterField<ODR, 4, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR3 : RegisterField<ODR, 3, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR2 : RegisterField<ODR, 2, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR1 : RegisterField<ODR, 1, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR0 : RegisterField<ODR, 0, 1, ReadWriteMode>
    {
    };
  };

  // GPIO port bit set/reset register
  struct BSRR : Register<0x40020418, WriteMode, 0x0>
  {
    // Port x reset bit y (y = 0..15)
    struct BR15 : RegisterField<BSRR, 31, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR14 : RegisterField<BSRR, 30, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR13 : RegisterField<BSRR, 29, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR12 : RegisterField<BSRR, 28, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR11 : RegisterField<BSRR, 27, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR10 : RegisterField<BSRR, 26, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR9 : RegisterField<BSRR, 25, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR8 : RegisterField<BSRR, 24, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR7 : RegisterField<BSRR, 23, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR6 : RegisterField<BSRR, 22, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR5 : RegisterField<BSRR, 21, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR4 : RegisterField<BSRR, 20, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR3 : RegisterField<BSRR, 19, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR2 : RegisterField<BSRR, 18, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR1 : RegisterField<BSRR, 17, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BR0 : RegisterField<BSRR, 16, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS15 : RegisterField<BSRR, 15, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS14 : RegisterField<BSRR, 14, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS13 : RegisterField<BSRR, 13, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS12 : RegisterField<BSRR, 12, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS11 : RegisterField<BSRR, 11, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS10 : RegisterField<BSRR, 10, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS9 : RegisterField<BSRR, 9, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS8 : RegisterField<BSRR, 8, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS7 : RegisterField<BSRR, 7, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS6 : RegisterField<BSRR, 6, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS5 : RegisterField<BSRR, 5, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS4 : RegisterField<BSRR, 4, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS3 : RegisterField<BSRR, 3, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS2 : RegisterField<BSRR, 2, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS1 : RegisterField<BSRR, 1, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS0 : RegisterField<BSRR, 0, 1, WriteMode>
    {
    };
  };

  // GPIO port configuration lock register
  struct LCKR : Register<0x4002041c, ReadWriteMode, 0x0>
  {
    // Port x lock bit y (y= 0..15)
    struct LCKK : RegisterField<LCKR, 16, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK15 : RegisterField<LCKR, 15, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK14 : RegisterField<LCKR, 14, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK13 : RegisterField<LCKR, 13, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK12 : RegisterField<LCKR, 12, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK11 : RegisterField<LCKR, 11, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK10 : RegisterField<LCKR, 10, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK9 : RegisterField<LCKR, 9, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK8 : RegisterField<LCKR, 8, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK7 : RegisterField<LCKR, 7, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK6 : RegisterField<LCKR, 6, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK5 : RegisterField<LCKR, 5, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK4 : RegisterField<LCKR, 4, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK3 : RegisterField<LCKR, 3, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK2 : RegisterField<LCKR, 2, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK1 : RegisterField<LCKR, 1, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK0 : RegisterField<LCKR, 0, 1, ReadWriteMode>
    {
    };
  };

  // GPIO alternate function low register
  struct AFRL : Register<0x40020420, ReadWriteMode, 0x0>
  {
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL7 : RegisterField<AFRL, 28, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL7, 0U>;
      using AF1 = FieldValue<AFRL7, 1U>;
      using AF2 = FieldValue<AFRL7, 2U>;
      using AF3 = FieldValue<AFRL7, 3U>;
      using AF4 = FieldValue<AFRL7, 4U>;
      using AF5 = FieldValue<AFRL7, 5U>;
      using AF6 = FieldValue<AFRL7, 6U>;
      using AF7 = FieldValue<AFRL7, 7U>;
      using AF8 = FieldValue<AFRL7, 8U>;
      using AF9 = FieldValue<AFRL7, 9U>;
      using AF10 = FieldValue<AFRL7, 10U>;
      using AF11 = FieldValue<AFRL7, 11U>;
      using AF12 = FieldValue<AFRL7, 12U>;
      using AF13 = FieldValue<AFRL7, 13U>;
      using AF14 = FieldValue<AFRL7, 14U>;
      using AF15 = FieldValue<AFRL7, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL6 : RegisterField<AFRL, 24, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL6, 0U>;
      using AF1 = FieldValue<AFRL6, 1U>;
      using AF2 = FieldValue<AFRL6, 2U>;
      using AF3 = FieldValue<AFRL6, 3U>;
      using AF4 = FieldValue<AFRL6, 4U>;
      using AF5 = FieldValue<AFRL6, 5U>;
      using AF6 = FieldValue<AFRL6, 6U>;
      using AF7 = FieldValue<AFRL6, 7U>;
      using AF8 = FieldValue<AFRL6, 8U>;
      using AF9 = FieldValue<AFRL6, 9U>;
      using AF10 = FieldValue<AFRL6, 10U>;
      using AF11 = FieldValue<AFRL6, 11U>;
      using AF12 = FieldValue<AFRL6, 12U>;
      using AF13 = FieldValue<AFRL6, 13U>;
      using AF14 = FieldValue<AFRL6, 14U>;
      using AF15 = FieldValue<AFRL6, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL5 : RegisterField<AFRL, 20, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL5, 0U>;
      using AF1 = FieldValue<AFRL5, 1U>;
      using AF2 = FieldValue<AFRL5, 2U>;
      using AF3 = FieldValue<AFRL5, 3U>;
      using AF4 = FieldValue<AFRL5, 4U>;
      using AF5 = FieldValue<AFRL5, 5U>;
      using AF6 = FieldValue<AFRL5, 6U>;
      using AF7 = FieldValue<AFRL5, 7U>;
      using AF8 = FieldValue<AFRL5, 8U>;
      using AF9 = FieldValue<AFRL5, 9U>;
      using AF10 = FieldValue<AFRL5, 10U>;
      using AF11 = FieldValue<AFRL5, 11U>;
      using AF12 = FieldValue<AFRL5, 12U>;
      using AF13 = FieldValue<AFRL5, 13U>;
      using AF14 = FieldValue<AFRL5, 14U>;
      using AF15 = FieldValue<AFRL5, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL4 : RegisterField<AFRL, 16, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL4, 0U>;
      using AF1 = FieldValue<AFRL4, 1U>;
      using AF2 = FieldValue<AFRL4, 2U>;
      using AF3 = FieldValue<AFRL4, 3U>;
      using AF4 = FieldValue<AFRL4, 4U>;
      using AF5 = FieldValue<AFRL4, 5U>;
      using AF6 = FieldValue<AFRL4, 6U>;
      using AF7 = FieldValue<AFRL4, 7U>;
      using AF8 = FieldValue<AFRL4, 8U>;
      using AF9 = FieldValue<AFRL4, 9U>;
      using AF10 = FieldValue<AFRL4, 10U>;
      using AF11 = FieldValue<AFRL4, 11U>;
      using AF12 = FieldValue<AFRL4, 12U>;
      using AF13 = FieldValue<AFRL4, 13U>;
      using AF14 = FieldValue<AFRL4, 14U>;
      using AF15 = FieldValue<AFRL4, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL3 : RegisterField<AFRL, 12, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL3, 0U>;
      using AF1 = FieldValue<AFRL3, 1U>;
      using AF2 = FieldValue<AFRL3, 2U>;
      using AF3 = FieldValue<AFRL3, 3U>;
      using AF4 = FieldValue<AFRL3, 4U>;
      using AF5 = FieldValue<AFRL3, 5U>;
      using AF6 = FieldValue<AFRL3, 6U>;
      using AF7 = FieldValue<AFRL3, 7U>;
      using AF8 = FieldValue<AFRL3, 8U>;
      using AF9 = FieldValue<AFRL3, 9U>;
      using AF10 = FieldValue<AFRL3, 10U>;
      using AF11 = FieldValue<AFRL3, 11U>;
      using AF12 = FieldValue<AFRL3, 12U>;
      using AF13 = FieldValue<AFRL3, 13U>;
      using AF14 = FieldValue<AFRL3, 14U>;
      using AF15 = FieldValue<AFRL3, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL2 : RegisterField<AFRL, 8, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL2, 0U>;
      using AF1 = FieldValue<AFRL2, 1U>;
      using AF2 = FieldValue<AFRL2, 2U>;
      using AF3 = FieldValue<AFRL2, 3U>;
      using AF4 = FieldValue<AFRL2, 4U>;
      using AF5 = FieldValue<AFRL2, 5U>;
      using AF6 = FieldValue<AFRL2, 6U>;
      using AF7 = FieldValue<AFRL2, 7U>;
      using AF8 = FieldValue<AFRL2, 8U>;
      using AF9 = FieldValue<AFRL2, 9U>;
      using AF10 = FieldValue<AFRL2, 10U>;
      using AF11 = FieldValue<AFRL2, 11U>;
      using AF12 = FieldValue<AFRL2, 12U>;
      using AF13 = FieldValue<AFRL2, 13U>;
      using AF14 = FieldValue<AFRL2, 14U>;
      using AF15 = FieldValue<AFRL2, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL1 : RegisterField<AFRL, 4, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL1, 0U>;
      using AF1 = FieldValue<AFRL1, 1U>;
      using AF2 = FieldValue<AFRL1, 2U>;
      using AF3 = FieldValue<AFRL1, 3U>;
      using AF4 = FieldValue<AFRL1, 4U>;
      using AF5 = FieldValue<AFRL1, 5U>;
      using AF6 = FieldValue<AFRL1, 6U>;
      using AF7 = FieldValue<AFRL1, 7U>;
      using AF8 = FieldValue<AFRL1, 8U>;
      using AF9 = FieldValue<AFRL1, 9U>;
      using AF10 = FieldValue<AFRL1, 10U>;
      using AF11 = FieldValue<AFRL1, 11U>;
      using AF12 = FieldValue<AFRL1, 12U>;
      using AF13 = FieldValue<AFRL1, 13U>;
      using AF14 = FieldValue<AFRL1, 14U>;
      using AF15 = FieldValue<AFRL1, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL0 : RegisterField<AFRL, 0, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL0, 0U>;
      using AF1 = FieldValue<AFRL0, 1U>;
      using AF2 = FieldValue<AFRL0, 2U>;
      using AF3 = FieldValue<AFRL0, 3U>;
      using AF4 = FieldValue<AFRL0, 4U>;
      using AF5 = FieldValue<AFRL0, 5U>;
      using AF6 = FieldValue<AFRL0, 6U>;
      using AF7 = FieldValue<AFRL0, 7U>;
      using AF8 = FieldValue<AFRL0, 8U>;
      using AF9 = FieldValue<AFRL0, 9U>;
      using AF10 = FieldValue<AFRL0, 10U>;
      using AF11 = FieldValue<AFRL0, 11U>;
      using AF12 = FieldValue<AFRL0, 12U>;
      using AF13 = FieldValue<AFRL0, 13U>;
      using AF14 = FieldValue<AFRL0, 14U>;
      using AF15 = FieldValue<AFRL0, 15U>;
    };
  };

  // GPIO alternate function high register
  struct AFRH : Register<0x40020424, ReadWriteMode, 0x0>
  {
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH15 : RegisterField<AFRH, 28, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH15, 0U>;
      using AF1 = FieldValue<AFRH15, 1U>;
      using AF2 = FieldValue<AFRH15, 2U>;
      using AF3 = FieldValue<AFRH15, 3U>;
      using AF4 = FieldValue<AFRH15, 4U>;
      using AF5 = FieldValue<AFRH15, 5U>;
      using AF6 = FieldValue<AFRH15, 6U>;
      using AF7 = FieldValue<AFRH15, 7U>;
      using AF8 = FieldValue<AFRH15, 8U>;
      using AF9 = FieldValue<AFRH15, 9U>;
      using AF10 = FieldValue<AFRH15, 10U>;
      using AF11 = FieldValue<AFRH15, 11U>;
      using AF12 = FieldValue<AFRH15, 12U>;
      using AF13 = FieldValue<AFRH15, 13U>;
      using AF14 = FieldValue<AFRH15, 14U>;
      using AF15 = FieldValue<AFRH15, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH14 : RegisterField<AFRH, 24, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH14, 0U>;
      using AF1 = FieldValue<AFRH14, 1U>;
      using AF2 = FieldValue<AFRH14, 2U>;
      using AF3 = FieldValue<AFRH14, 3U>;
      using AF4 = FieldValue<AFRH14, 4U>;
      using AF5 = FieldValue<AFRH14, 5U>;
      using AF6 = FieldValue<AFRH14, 6U>;
      using AF7 = FieldValue<AFRH14, 7U>;
      using AF8 = FieldValue<AFRH14, 8U>;
      using AF9 = FieldValue<AFRH14, 9U>;
      using AF10 = FieldValue<AFRH14, 10U>;
      using AF11 = FieldValue<AFRH14, 11U>;
      using AF12 = FieldValue<AFRH14, 12U>;
      using AF13 = FieldValue<AFRH14, 13U>;
      using AF14 = FieldValue<AFRH14, 14U>;
      using AF15 = FieldValue<AFRH14, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH13 : RegisterField<AFRH, 20, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH13, 0U>;
      using AF1 = FieldValue<AFRH13, 1U>;
      using AF2 = FieldValue<AFRH13, 2U>;
      using AF3 = FieldValue<AFRH13, 3U>;
      using AF4 = FieldValue<AFRH13, 4U>;
      using AF5 = FieldValue<AFRH13, 5U>;
      using AF6 = FieldValue<AFRH13, 6U>;
      using AF7 = FieldValue<AFRH13, 7U>;
      using AF8 = FieldValue<AFRH13, 8U>;
      using AF9 = FieldValue<AFRH13, 9U>;
      using AF10 = FieldValue<AFRH13, 10U>;
      using AF11 = FieldValue<AFRH13, 11U>;
      using AF12 = FieldValue<AFRH13, 12U>;
      using AF13 = FieldValue<AFRH13, 13U>;
      using AF14 = FieldValue<AFRH13, 14U>;
      using AF15 = FieldValue<AFRH13, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH12 : RegisterField<AFRH, 16, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH12, 0U>;
      using AF1 = FieldValue<AFRH12, 1U>;
      using AF2 = FieldValue<AFRH12, 2U>;
      using AF3 = FieldValue<AFRH12, 3U>;
      using AF4 = FieldValue<AFRH12, 4U>;
      using AF5 = FieldValue<AFRH12, 5U>;
      using AF6 = FieldValue<AFRH12, 6U>;
      using AF7 = FieldValue<AFRH12, 7U>;
      using AF8 = FieldValue<AFRH12, 8U>;
      using AF9 = FieldValue<AFRH12, 9U>;
      using AF10 = FieldValue<AFRH12, 10U>;
      using AF11 = FieldValue<AFRH12, 11U>;
      using AF12 = FieldValue<AFRH12, 12U>;
      using AF13 = FieldValue<AFRH12, 13U>;
      using AF14 = FieldValue<AFRH12, 14U>;
      using AF15 = FieldValue<AFRH12, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH11 : RegisterField<AFRH, 12, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH11, 0U>;
      using AF1 = FieldValue<AFRH11, 1U>;
      using AF2 = FieldValue<AFRH11, 2U>;
      using AF3 = FieldValue<AFRH11, 3U>;
      using AF4 = FieldValue<AFRH11, 4U>;
      using AF5 = FieldValue<AFRH11, 5U>;
      using AF6 = FieldValue<AFRH11, 6U>;
      using AF7 = FieldValue<AFRH11, 7U>;
      using AF8 = FieldValue<AFRH11, 8U>;
      using AF9 = FieldValue<AFRH11, 9U>;
      using AF10 = FieldValue<AFRH11, 10U>;
      using AF11 = FieldValue<AFRH11, 11U>;
      using AF12 = FieldValue<AFRH11, 12U>;
      using AF13 = FieldValue<AFRH11, 13U>;
      using AF14 = FieldValue<AFRH11, 14U>;
      using AF15 = FieldValue<AFRH11, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH10 : RegisterField<AFRH, 8, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH10, 0U>;
      using AF1 = FieldValue<AFRH10, 1U>;
      using AF2 = FieldValue<AFRH10, 2U>;
      using AF3 = FieldValue<AFRH10, 3U>;
      using AF4 = FieldValue<AFRH10, 4U>;
      using AF5 = FieldValue<AFRH10, 5U>;
      using AF6 = FieldValue<AFRH10, 6U>;
      using AF7 = FieldValue<AFRH10, 7U>;
      using AF8 = FieldValue<AFRH10, 8U>;
      using AF9 = FieldValue<AFRH10, 9U>;
      using AF10 = FieldValue<AFRH10, 10U>;
      using AF11 = FieldValue<AFRH10, 11U>;
      using AF12 = FieldValue<AFRH10, 12U>;
      using AF13 = FieldValue<AFRH10, 13U>;
      using AF14 = FieldValue<AFRH10, 14U>;
      using AF15 = FieldValue<AFRH10, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH9 : RegisterField<AFRH, 4, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH9, 0U>;
      using AF1 = FieldValue<AFRH9, 1U>;
      using AF2 = FieldValue<AFRH9, 2U>;
      using AF3 = FieldValue<AFRH9, 3U>;
      using AF4 = FieldValue<AFRH9, 4U>;
      using AF5 = FieldValue<AFRH9, 5U>;
      using AF6 = FieldValue<AFRH9, 6U>;
      using AF7 = FieldValue<AFRH9, 7U>;
      using AF8 = FieldValue<AFRH9, 8U>;
      using AF9 = FieldValue<AFRH9, 9U>;
      using AF10 = FieldValue<AFRH9, 10U>;
      using AF11 = FieldValue<AFRH9, 11U>;
      using AF12 = FieldValue<AFRH9, 12U>;
      using AF13 = FieldValue<AFRH9, 13U>;
      using AF14 = FieldValue<AFRH9, 14U>;
      using AF15 = FieldValue<AFRH9, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH8 : RegisterField<AFRH, 0, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH8, 0U>;
      using AF1 = FieldValue<AFRH8, 1U>;
      using AF2 = FieldValue<AFRH8, 2U>;
      using AF3 = FieldValue<AFRH8, 3U>;
      using AF4 = FieldValue<AFRH8, 4U>;
      using AF5 = FieldValue<AFRH8, 5U>;
      using AF6 = FieldValue<AFRH8, 6U>;
      using AF7 = FieldValue<AFRH8, 7U>;
      using AF8 = FieldValue<AFRH8, 8U>;
      using AF9 = FieldValue<AFRH8, 9U>;
      using AF10 = FieldValue<AFRH8, 10U>;
      using AF11 = FieldValue<AFRH8, 11U>;
      using AF12 = FieldValue<AFRH8, 12U>;
      using AF13 = FieldValue<AFRH8, 13U>;
      using AF14 = FieldValue<AFRH8, 14U>;
      using AF15 = FieldValue<AFRH8, 15U>;
    };
  };

// Large Registers

  // GPIO alternate function low register
  template<auto num>
  struct AFR_AF : RegisterField<Register<0x40020420 + 4 * (num / 8), ReadWriteMode, 0x0>, 4 * (num % 8), 4, ReadWriteMode>
  {
    using AF0 = FieldValue<AFR_AF, 0U>;
    using AF1 = FieldValue<AFR_AF, 1U>;
    using AF2 = FieldValue<AFR_AF, 2U>;
    using AF3 = FieldValue<AFR_AF, 3U>;
    using AF4 = FieldValue<AFR_AF, 4U>;
    using AF5 = FieldValue<AFR_AF, 5U>;
    using AF6 = FieldValue<AFR_AF, 6U>;
    using AF7 = FieldValue<AFR_AF, 7U>;
    using AF8 = FieldValue<AFR_AF, 8U>;
    using AF9 = FieldValue<AFR_AF, 9U>;
    using AF10 = FieldValue<AFR_AF, 10U>;
    using AF11 = FieldValue<AFR_AF, 11U>;
    using AF12 = FieldValue<AFR_AF, 12U>;
    using AF13 = FieldValue<AFR_AF, 13U>;
    using AF14 = FieldValue<AFR_AF, 14U>;
    using AF15 = FieldValue<AFR_AF, 15U>;
  };

};


struct GPIOA
{
  static constexpr auto periphNum = 0;

  // GPIO port mode register
  struct MODER : Register<0x40020000, ReadWriteMode, 0xa8000000>
  {
    // Port x configuration bits (y = 0..15)
    struct MODER15 : RegisterField<MODER, 30, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER15, 0U>;
      using Output = FieldValue<MODER15, 1U>;
      using Alternate = FieldValue<MODER15, 2U>;
      using Analog = FieldValue<MODER15, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER14 : RegisterField<MODER, 28, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER14, 0U>;
      using Output = FieldValue<MODER14, 1U>;
      using Alternate = FieldValue<MODER14, 2U>;
      using Analog = FieldValue<MODER14, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER13 : RegisterField<MODER, 26, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER13, 0U>;
      using Output = FieldValue<MODER13, 1U>;
      using Alternate = FieldValue<MODER13, 2U>;
      using Analog = FieldValue<MODER13, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER12 : RegisterField<MODER, 24, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER12, 0U>;
      using Output = FieldValue<MODER12, 1U>;
      using Alternate = FieldValue<MODER12, 2U>;
      using Analog = FieldValue<MODER12, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER11 : RegisterField<MODER, 22, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER11, 0U>;
      using Output = FieldValue<MODER11, 1U>;
      using Alternate = FieldValue<MODER11, 2U>;
      using Analog = FieldValue<MODER11, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER10 : RegisterField<MODER, 20, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER10, 0U>;
      using Output = FieldValue<MODER10, 1U>;
      using Alternate = FieldValue<MODER10, 2U>;
      using Analog = FieldValue<MODER10, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER9 : RegisterField<MODER, 18, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER9, 0U>;
      using Output = FieldValue<MODER9, 1U>;
      using Alternate = FieldValue<MODER9, 2U>;
      using Analog = FieldValue<MODER9, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER8 : RegisterField<MODER, 16, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER8, 0U>;
      using Output = FieldValue<MODER8, 1U>;
      using Alternate = FieldValue<MODER8, 2U>;
      using Analog = FieldValue<MODER8, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER7 : RegisterField<MODER, 14, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER7, 0U>;
      using Output = FieldValue<MODER7, 1U>;
      using Alternate = FieldValue<MODER7, 2U>;
      using Analog = FieldValue<MODER7, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER6 : RegisterField<MODER, 12, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER6, 0U>;
      using Output = FieldValue<MODER6, 1U>;
      using Alternate = FieldValue<MODER6, 2U>;
      using Analog = FieldValue<MODER6, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER5 : RegisterField<MODER, 10, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER5, 0U>;
      using Output = FieldValue<MODER5, 1U>;
      using Alternate = FieldValue<MODER5, 2U>;
      using Analog = FieldValue<MODER5, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER4 : RegisterField<MODER, 8, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER4, 0U>;
      using Output = FieldValue<MODER4, 1U>;
      using Alternate = FieldValue<MODER4, 2U>;
      using Analog = FieldValue<MODER4, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER3 : RegisterField<MODER, 6, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER3, 0U>;
      using Output = FieldValue<MODER3, 1U>;
      using Alternate = FieldValue<MODER3, 2U>;
      using Analog = FieldValue<MODER3, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER2 : RegisterField<MODER, 4, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER2, 0U>;
      using Output = FieldValue<MODER2, 1U>;
      using Alternate = FieldValue<MODER2, 2U>;
      using Analog = FieldValue<MODER2, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER1 : RegisterField<MODER, 2, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER1, 0U>;
      using Output = FieldValue<MODER1, 1U>;
      using Alternate = FieldValue<MODER1, 2U>;
      using Analog = FieldValue<MODER1, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct MODER0 : RegisterField<MODER, 0, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODER0, 0U>;
      using Output = FieldValue<MODER0, 1U>;
      using Alternate = FieldValue<MODER0, 2U>;
      using Analog = FieldValue<MODER0, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct MODERx : RegisterField<MODER, 0 + 2 * num, 2, ReadWriteMode>
    {
      using Input = FieldValue<MODERx, 0U>;
      using Output = FieldValue<MODERx, 1U>;
      using Alternate = FieldValue<MODERx, 2U>;
      using Analog = FieldValue<MODERx, 3U>;
    };
  };

  // GPIO port output type register
  struct OTYPER : Register<0x40020004, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct OT15 : RegisterField<OTYPER, 15, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT15, 0U>;
      using Open_drain = FieldValue<OT15, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT14 : RegisterField<OTYPER, 14, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT14, 0U>;
      using Open_drain = FieldValue<OT14, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT13 : RegisterField<OTYPER, 13, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT13, 0U>;
      using Open_drain = FieldValue<OT13, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT12 : RegisterField<OTYPER, 12, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT12, 0U>;
      using Open_drain = FieldValue<OT12, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT11 : RegisterField<OTYPER, 11, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT11, 0U>;
      using Open_drain = FieldValue<OT11, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT10 : RegisterField<OTYPER, 10, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT10, 0U>;
      using Open_drain = FieldValue<OT10, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT9 : RegisterField<OTYPER, 9, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT9, 0U>;
      using Open_drain = FieldValue<OT9, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT8 : RegisterField<OTYPER, 8, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT8, 0U>;
      using Open_drain = FieldValue<OT8, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT7 : RegisterField<OTYPER, 7, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT7, 0U>;
      using Open_drain = FieldValue<OT7, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT6 : RegisterField<OTYPER, 6, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT6, 0U>;
      using Open_drain = FieldValue<OT6, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT5 : RegisterField<OTYPER, 5, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT5, 0U>;
      using Open_drain = FieldValue<OT5, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT4 : RegisterField<OTYPER, 4, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT4, 0U>;
      using Open_drain = FieldValue<OT4, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT3 : RegisterField<OTYPER, 3, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT3, 0U>;
      using Open_drain = FieldValue<OT3, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT2 : RegisterField<OTYPER, 2, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT2, 0U>;
      using Open_drain = FieldValue<OT2, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT1 : RegisterField<OTYPER, 1, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT1, 0U>;
      using Open_drain = FieldValue<OT1, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OT0 : RegisterField<OTYPER, 0, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OT0, 0U>;
      using Open_drain = FieldValue<OT0, 1U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct OTx : RegisterField<OTYPER, 0 + 1 * num, 1, ReadWriteMode>
    {
      using Push_pull = FieldValue<OTx, 0U>;
      using Open_drain = FieldValue<OTx, 1U>;
    };
  };

  // GPIO port output speed register
  struct OSPEEDR : Register<0x40020008, ReadWriteMode, 0x0>
  {
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR15 : RegisterField<OSPEEDR, 30, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR15, 0U>;
      using Medium = FieldValue<OSPEEDR15, 1U>;
      using Fast = FieldValue<OSPEEDR15, 2U>;
      using High = FieldValue<OSPEEDR15, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR14 : RegisterField<OSPEEDR, 28, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR14, 0U>;
      using Medium = FieldValue<OSPEEDR14, 1U>;
      using Fast = FieldValue<OSPEEDR14, 2U>;
      using High = FieldValue<OSPEEDR14, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR13 : RegisterField<OSPEEDR, 26, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR13, 0U>;
      using Medium = FieldValue<OSPEEDR13, 1U>;
      using Fast = FieldValue<OSPEEDR13, 2U>;
      using High = FieldValue<OSPEEDR13, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR12 : RegisterField<OSPEEDR, 24, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR12, 0U>;
      using Medium = FieldValue<OSPEEDR12, 1U>;
      using Fast = FieldValue<OSPEEDR12, 2U>;
      using High = FieldValue<OSPEEDR12, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR11 : RegisterField<OSPEEDR, 22, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR11, 0U>;
      using Medium = FieldValue<OSPEEDR11, 1U>;
      using Fast = FieldValue<OSPEEDR11, 2U>;
      using High = FieldValue<OSPEEDR11, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR10 : RegisterField<OSPEEDR, 20, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR10, 0U>;
      using Medium = FieldValue<OSPEEDR10, 1U>;
      using Fast = FieldValue<OSPEEDR10, 2U>;
      using High = FieldValue<OSPEEDR10, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR9 : RegisterField<OSPEEDR, 18, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR9, 0U>;
      using Medium = FieldValue<OSPEEDR9, 1U>;
      using Fast = FieldValue<OSPEEDR9, 2U>;
      using High = FieldValue<OSPEEDR9, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR8 : RegisterField<OSPEEDR, 16, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR8, 0U>;
      using Medium = FieldValue<OSPEEDR8, 1U>;
      using Fast = FieldValue<OSPEEDR8, 2U>;
      using High = FieldValue<OSPEEDR8, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR7 : RegisterField<OSPEEDR, 14, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR7, 0U>;
      using Medium = FieldValue<OSPEEDR7, 1U>;
      using Fast = FieldValue<OSPEEDR7, 2U>;
      using High = FieldValue<OSPEEDR7, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR6 : RegisterField<OSPEEDR, 12, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR6, 0U>;
      using Medium = FieldValue<OSPEEDR6, 1U>;
      using Fast = FieldValue<OSPEEDR6, 2U>;
      using High = FieldValue<OSPEEDR6, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR5 : RegisterField<OSPEEDR, 10, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR5, 0U>;
      using Medium = FieldValue<OSPEEDR5, 1U>;
      using Fast = FieldValue<OSPEEDR5, 2U>;
      using High = FieldValue<OSPEEDR5, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR4 : RegisterField<OSPEEDR, 8, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR4, 0U>;
      using Medium = FieldValue<OSPEEDR4, 1U>;
      using Fast = FieldValue<OSPEEDR4, 2U>;
      using High = FieldValue<OSPEEDR4, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR3 : RegisterField<OSPEEDR, 6, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR3, 0U>;
      using Medium = FieldValue<OSPEEDR3, 1U>;
      using Fast = FieldValue<OSPEEDR3, 2U>;
      using High = FieldValue<OSPEEDR3, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR2 : RegisterField<OSPEEDR, 4, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR2, 0U>;
      using Medium = FieldValue<OSPEEDR2, 1U>;
      using Fast = FieldValue<OSPEEDR2, 2U>;
      using High = FieldValue<OSPEEDR2, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR1 : RegisterField<OSPEEDR, 2, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR1, 0U>;
      using Medium = FieldValue<OSPEEDR1, 1U>;
      using Fast = FieldValue<OSPEEDR1, 2U>;
      using High = FieldValue<OSPEEDR1, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    struct OSPEEDR0 : RegisterField<OSPEEDR, 0, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDR0, 0U>;
      using Medium = FieldValue<OSPEEDR0, 1U>;
      using Fast = FieldValue<OSPEEDR0, 2U>;
      using High = FieldValue<OSPEEDR0, 3U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct OSPEEDRx : RegisterField<OSPEEDR, 0 + 2 * num, 2, ReadWriteMode>
    {
      using Low = FieldValue<OSPEEDRx, 0U>;
      using Medium = FieldValue<OSPEEDRx, 1U>;
      using Fast = FieldValue<OSPEEDRx, 2U>;
      using High = FieldValue<OSPEEDRx, 3U>;
    };
  };

  // GPIO port pull-up/pull-down register
  struct PUPDR : Register<0x4002000c, ReadWriteMode, 0x64000000>
  {
    // Port x configuration bits (y = 0..15)
    struct PUPDR15 : RegisterField<PUPDR, 30, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR15, 0U>;
      using Pull_up = FieldValue<PUPDR15, 1U>;
      using Pull_down = FieldValue<PUPDR15, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR14 : RegisterField<PUPDR, 28, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR14, 0U>;
      using Pull_up = FieldValue<PUPDR14, 1U>;
      using Pull_down = FieldValue<PUPDR14, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR13 : RegisterField<PUPDR, 26, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR13, 0U>;
      using Pull_up = FieldValue<PUPDR13, 1U>;
      using Pull_down = FieldValue<PUPDR13, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR12 : RegisterField<PUPDR, 24, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR12, 0U>;
      using Pull_up = FieldValue<PUPDR12, 1U>;
      using Pull_down = FieldValue<PUPDR12, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR11 : RegisterField<PUPDR, 22, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR11, 0U>;
      using Pull_up = FieldValue<PUPDR11, 1U>;
      using Pull_down = FieldValue<PUPDR11, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR10 : RegisterField<PUPDR, 20, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR10, 0U>;
      using Pull_up = FieldValue<PUPDR10, 1U>;
      using Pull_down = FieldValue<PUPDR10, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR9 : RegisterField<PUPDR, 18, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR9, 0U>;
      using Pull_up = FieldValue<PUPDR9, 1U>;
      using Pull_down = FieldValue<PUPDR9, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR8 : RegisterField<PUPDR, 16, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR8, 0U>;
      using Pull_up = FieldValue<PUPDR8, 1U>;
      using Pull_down = FieldValue<PUPDR8, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR7 : RegisterField<PUPDR, 14, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR7, 0U>;
      using Pull_up = FieldValue<PUPDR7, 1U>;
      using Pull_down = FieldValue<PUPDR7, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR6 : RegisterField<PUPDR, 12, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR6, 0U>;
      using Pull_up = FieldValue<PUPDR6, 1U>;
      using Pull_down = FieldValue<PUPDR6, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR5 : RegisterField<PUPDR, 10, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR5, 0U>;
      using Pull_up = FieldValue<PUPDR5, 1U>;
      using Pull_down = FieldValue<PUPDR5, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR4 : RegisterField<PUPDR, 8, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR4, 0U>;
      using Pull_up = FieldValue<PUPDR4, 1U>;
      using Pull_down = FieldValue<PUPDR4, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR3 : RegisterField<PUPDR, 6, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR3, 0U>;
      using Pull_up = FieldValue<PUPDR3, 1U>;
      using Pull_down = FieldValue<PUPDR3, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR2 : RegisterField<PUPDR, 4, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR2, 0U>;
      using Pull_up = FieldValue<PUPDR2, 1U>;
      using Pull_down = FieldValue<PUPDR2, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR1 : RegisterField<PUPDR, 2, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR1, 0U>;
      using Pull_up = FieldValue<PUPDR1, 1U>;
      using Pull_down = FieldValue<PUPDR1, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    struct PUPDR0 : RegisterField<PUPDR, 0, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDR0, 0U>;
      using Pull_up = FieldValue<PUPDR0, 1U>;
      using Pull_down = FieldValue<PUPDR0, 2U>;
    };
    // Port x configuration bits (y = 0..15)
    template<auto num>
    struct PUPDRx : RegisterField<PUPDR, 0 + 2 * num, 2, ReadWriteMode>
    {
      using noPull = FieldValue<PUPDRx, 0U>;
      using Pull_up = FieldValue<PUPDRx, 1U>;
      using Pull_down = FieldValue<PUPDRx, 2U>;
    };
  };

  // GPIO port input data register
  struct IDR : Register<0x40020010, ReadMode, 0x0>
  {
    // Port input data (y = 0..15)
    struct IDR15 : RegisterField<IDR, 15, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR14 : RegisterField<IDR, 14, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR13 : RegisterField<IDR, 13, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR12 : RegisterField<IDR, 12, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR11 : RegisterField<IDR, 11, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR10 : RegisterField<IDR, 10, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR9 : RegisterField<IDR, 9, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR8 : RegisterField<IDR, 8, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR7 : RegisterField<IDR, 7, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR6 : RegisterField<IDR, 6, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR5 : RegisterField<IDR, 5, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR4 : RegisterField<IDR, 4, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR3 : RegisterField<IDR, 3, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR2 : RegisterField<IDR, 2, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR1 : RegisterField<IDR, 1, 1, ReadMode>
    {
    };
    // Port input data (y = 0..15)
    struct IDR0 : RegisterField<IDR, 0, 1, ReadMode>
    {
    };
  };

  // GPIO port output data register
  struct ODR : Register<0x40020014, ReadWriteMode, 0x0>
  {
    // Port output data (y = 0..15)
    struct ODR15 : RegisterField<ODR, 15, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR14 : RegisterField<ODR, 14, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR13 : RegisterField<ODR, 13, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR12 : RegisterField<ODR, 12, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR11 : RegisterField<ODR, 11, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR10 : RegisterField<ODR, 10, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR9 : RegisterField<ODR, 9, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR8 : RegisterField<ODR, 8, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR7 : RegisterField<ODR, 7, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR6 : RegisterField<ODR, 6, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR5 : RegisterField<ODR, 5, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR4 : RegisterField<ODR, 4, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR3 : RegisterField<ODR, 3, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR2 : RegisterField<ODR, 2, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR1 : RegisterField<ODR, 1, 1, ReadWriteMode>
    {
    };
    // Port output data (y = 0..15)
    struct ODR0 : RegisterField<ODR, 0, 1, ReadWriteMode>
    {
    };
  };

  // GPIO port bit set/reset register
  struct BSRR : Register<0x40020018, WriteMode, 0x0>
  {
    // Port x reset bit y (y = 0..15)
    struct BR15 : RegisterField<BSRR, 31, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR14 : RegisterField<BSRR, 30, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR13 : RegisterField<BSRR, 29, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR12 : RegisterField<BSRR, 28, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR11 : RegisterField<BSRR, 27, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR10 : RegisterField<BSRR, 26, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR9 : RegisterField<BSRR, 25, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR8 : RegisterField<BSRR, 24, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR7 : RegisterField<BSRR, 23, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR6 : RegisterField<BSRR, 22, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR5 : RegisterField<BSRR, 21, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR4 : RegisterField<BSRR, 20, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR3 : RegisterField<BSRR, 19, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR2 : RegisterField<BSRR, 18, 1, WriteMode>
    {
    };
    // Port x reset bit y (y = 0..15)
    struct BR1 : RegisterField<BSRR, 17, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BR0 : RegisterField<BSRR, 16, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS15 : RegisterField<BSRR, 15, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS14 : RegisterField<BSRR, 14, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS13 : RegisterField<BSRR, 13, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS12 : RegisterField<BSRR, 12, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS11 : RegisterField<BSRR, 11, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS10 : RegisterField<BSRR, 10, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS9 : RegisterField<BSRR, 9, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS8 : RegisterField<BSRR, 8, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS7 : RegisterField<BSRR, 7, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS6 : RegisterField<BSRR, 6, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS5 : RegisterField<BSRR, 5, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS4 : RegisterField<BSRR, 4, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS3 : RegisterField<BSRR, 3, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS2 : RegisterField<BSRR, 2, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS1 : RegisterField<BSRR, 1, 1, WriteMode>
    {
    };
    // Port x set bit y (y= 0..15)
    struct BS0 : RegisterField<BSRR, 0, 1, WriteMode>
    {
    };
  };

  // GPIO port configuration lock register
  struct LCKR : Register<0x4002001c, ReadWriteMode, 0x0>
  {
    // Port x lock bit y (y= 0..15)
    struct LCKK : RegisterField<LCKR, 16, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK15 : RegisterField<LCKR, 15, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK14 : RegisterField<LCKR, 14, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK13 : RegisterField<LCKR, 13, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK12 : RegisterField<LCKR, 12, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK11 : RegisterField<LCKR, 11, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK10 : RegisterField<LCKR, 10, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK9 : RegisterField<LCKR, 9, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK8 : RegisterField<LCKR, 8, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK7 : RegisterField<LCKR, 7, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK6 : RegisterField<LCKR, 6, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK5 : RegisterField<LCKR, 5, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK4 : RegisterField<LCKR, 4, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK3 : RegisterField<LCKR, 3, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK2 : RegisterField<LCKR, 2, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK1 : RegisterField<LCKR, 1, 1, ReadWriteMode>
    {
    };
    // Port x lock bit y (y= 0..15)
    struct LCK0 : RegisterField<LCKR, 0, 1, ReadWriteMode>
    {
    };
  };

  // GPIO alternate function low register
  struct AFRL : Register<0x40020020, ReadWriteMode, 0x0>
  {
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL7 : RegisterField<AFRL, 28, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL7, 0U>;
      using AF1 = FieldValue<AFRL7, 1U>;
      using AF2 = FieldValue<AFRL7, 2U>;
      using AF3 = FieldValue<AFRL7, 3U>;
      using AF4 = FieldValue<AFRL7, 4U>;
      using AF5 = FieldValue<AFRL7, 5U>;
      using AF6 = FieldValue<AFRL7, 6U>;
      using AF7 = FieldValue<AFRL7, 7U>;
      using AF8 = FieldValue<AFRL7, 8U>;
      using AF9 = FieldValue<AFRL7, 9U>;
      using AF10 = FieldValue<AFRL7, 10U>;
      using AF11 = FieldValue<AFRL7, 11U>;
      using AF12 = FieldValue<AFRL7, 12U>;
      using AF13 = FieldValue<AFRL7, 13U>;
      using AF14 = FieldValue<AFRL7, 14U>;
      using AF15 = FieldValue<AFRL7, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL6 : RegisterField<AFRL, 24, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL6, 0U>;
      using AF1 = FieldValue<AFRL6, 1U>;
      using AF2 = FieldValue<AFRL6, 2U>;
      using AF3 = FieldValue<AFRL6, 3U>;
      using AF4 = FieldValue<AFRL6, 4U>;
      using AF5 = FieldValue<AFRL6, 5U>;
      using AF6 = FieldValue<AFRL6, 6U>;
      using AF7 = FieldValue<AFRL6, 7U>;
      using AF8 = FieldValue<AFRL6, 8U>;
      using AF9 = FieldValue<AFRL6, 9U>;
      using AF10 = FieldValue<AFRL6, 10U>;
      using AF11 = FieldValue<AFRL6, 11U>;
      using AF12 = FieldValue<AFRL6, 12U>;
      using AF13 = FieldValue<AFRL6, 13U>;
      using AF14 = FieldValue<AFRL6, 14U>;
      using AF15 = FieldValue<AFRL6, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL5 : RegisterField<AFRL, 20, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL5, 0U>;
      using AF1 = FieldValue<AFRL5, 1U>;
      using AF2 = FieldValue<AFRL5, 2U>;
      using AF3 = FieldValue<AFRL5, 3U>;
      using AF4 = FieldValue<AFRL5, 4U>;
      using AF5 = FieldValue<AFRL5, 5U>;
      using AF6 = FieldValue<AFRL5, 6U>;
      using AF7 = FieldValue<AFRL5, 7U>;
      using AF8 = FieldValue<AFRL5, 8U>;
      using AF9 = FieldValue<AFRL5, 9U>;
      using AF10 = FieldValue<AFRL5, 10U>;
      using AF11 = FieldValue<AFRL5, 11U>;
      using AF12 = FieldValue<AFRL5, 12U>;
      using AF13 = FieldValue<AFRL5, 13U>;
      using AF14 = FieldValue<AFRL5, 14U>;
      using AF15 = FieldValue<AFRL5, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL4 : RegisterField<AFRL, 16, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL4, 0U>;
      using AF1 = FieldValue<AFRL4, 1U>;
      using AF2 = FieldValue<AFRL4, 2U>;
      using AF3 = FieldValue<AFRL4, 3U>;
      using AF4 = FieldValue<AFRL4, 4U>;
      using AF5 = FieldValue<AFRL4, 5U>;
      using AF6 = FieldValue<AFRL4, 6U>;
      using AF7 = FieldValue<AFRL4, 7U>;
      using AF8 = FieldValue<AFRL4, 8U>;
      using AF9 = FieldValue<AFRL4, 9U>;
      using AF10 = FieldValue<AFRL4, 10U>;
      using AF11 = FieldValue<AFRL4, 11U>;
      using AF12 = FieldValue<AFRL4, 12U>;
      using AF13 = FieldValue<AFRL4, 13U>;
      using AF14 = FieldValue<AFRL4, 14U>;
      using AF15 = FieldValue<AFRL4, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL3 : RegisterField<AFRL, 12, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL3, 0U>;
      using AF1 = FieldValue<AFRL3, 1U>;
      using AF2 = FieldValue<AFRL3, 2U>;
      using AF3 = FieldValue<AFRL3, 3U>;
      using AF4 = FieldValue<AFRL3, 4U>;
      using AF5 = FieldValue<AFRL3, 5U>;
      using AF6 = FieldValue<AFRL3, 6U>;
      using AF7 = FieldValue<AFRL3, 7U>;
      using AF8 = FieldValue<AFRL3, 8U>;
      using AF9 = FieldValue<AFRL3, 9U>;
      using AF10 = FieldValue<AFRL3, 10U>;
      using AF11 = FieldValue<AFRL3, 11U>;
      using AF12 = FieldValue<AFRL3, 12U>;
      using AF13 = FieldValue<AFRL3, 13U>;
      using AF14 = FieldValue<AFRL3, 14U>;
      using AF15 = FieldValue<AFRL3, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL2 : RegisterField<AFRL, 8, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL2, 0U>;
      using AF1 = FieldValue<AFRL2, 1U>;
      using AF2 = FieldValue<AFRL2, 2U>;
      using AF3 = FieldValue<AFRL2, 3U>;
      using AF4 = FieldValue<AFRL2, 4U>;
      using AF5 = FieldValue<AFRL2, 5U>;
      using AF6 = FieldValue<AFRL2, 6U>;
      using AF7 = FieldValue<AFRL2, 7U>;
      using AF8 = FieldValue<AFRL2, 8U>;
      using AF9 = FieldValue<AFRL2, 9U>;
      using AF10 = FieldValue<AFRL2, 10U>;
      using AF11 = FieldValue<AFRL2, 11U>;
      using AF12 = FieldValue<AFRL2, 12U>;
      using AF13 = FieldValue<AFRL2, 13U>;
      using AF14 = FieldValue<AFRL2, 14U>;
      using AF15 = FieldValue<AFRL2, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL1 : RegisterField<AFRL, 4, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL1, 0U>;
      using AF1 = FieldValue<AFRL1, 1U>;
      using AF2 = FieldValue<AFRL1, 2U>;
      using AF3 = FieldValue<AFRL1, 3U>;
      using AF4 = FieldValue<AFRL1, 4U>;
      using AF5 = FieldValue<AFRL1, 5U>;
      using AF6 = FieldValue<AFRL1, 6U>;
      using AF7 = FieldValue<AFRL1, 7U>;
      using AF8 = FieldValue<AFRL1, 8U>;
      using AF9 = FieldValue<AFRL1, 9U>;
      using AF10 = FieldValue<AFRL1, 10U>;
      using AF11 = FieldValue<AFRL1, 11U>;
      using AF12 = FieldValue<AFRL1, 12U>;
      using AF13 = FieldValue<AFRL1, 13U>;
      using AF14 = FieldValue<AFRL1, 14U>;
      using AF15 = FieldValue<AFRL1, 15U>;
    };
    // Alternate function selection for port x bit y (y = 0..7)
    struct AFRL0 : RegisterField<AFRL, 0, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRL0, 0U>;
      using AF1 = FieldValue<AFRL0, 1U>;
      using AF2 = FieldValue<AFRL0, 2U>;
      using AF3 = FieldValue<AFRL0, 3U>;
      using AF4 = FieldValue<AFRL0, 4U>;
      using AF5 = FieldValue<AFRL0, 5U>;
      using AF6 = FieldValue<AFRL0, 6U>;
      using AF7 = FieldValue<AFRL0, 7U>;
      using AF8 = FieldValue<AFRL0, 8U>;
      using AF9 = FieldValue<AFRL0, 9U>;
      using AF10 = FieldValue<AFRL0, 10U>;
      using AF11 = FieldValue<AFRL0, 11U>;
      using AF12 = FieldValue<AFRL0, 12U>;
      using AF13 = FieldValue<AFRL0, 13U>;
      using AF14 = FieldValue<AFRL0, 14U>;
      using AF15 = FieldValue<AFRL0, 15U>;
    };
  };

  // GPIO alternate function high register
  struct AFRH : Register<0x40020024, ReadWriteMode, 0x0>
  {
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH15 : RegisterField<AFRH, 28, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH15, 0U>;
      using AF1 = FieldValue<AFRH15, 1U>;
      using AF2 = FieldValue<AFRH15, 2U>;
      using AF3 = FieldValue<AFRH15, 3U>;
      using AF4 = FieldValue<AFRH15, 4U>;
      using AF5 = FieldValue<AFRH15, 5U>;
      using AF6 = FieldValue<AFRH15, 6U>;
      using AF7 = FieldValue<AFRH15, 7U>;
      using AF8 = FieldValue<AFRH15, 8U>;
      using AF9 = FieldValue<AFRH15, 9U>;
      using AF10 = FieldValue<AFRH15, 10U>;
      using AF11 = FieldValue<AFRH15, 11U>;
      using AF12 = FieldValue<AFRH15, 12U>;
      using AF13 = FieldValue<AFRH15, 13U>;
      using AF14 = FieldValue<AFRH15, 14U>;
      using AF15 = FieldValue<AFRH15, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH14 : RegisterField<AFRH, 24, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH14, 0U>;
      using AF1 = FieldValue<AFRH14, 1U>;
      using AF2 = FieldValue<AFRH14, 2U>;
      using AF3 = FieldValue<AFRH14, 3U>;
      using AF4 = FieldValue<AFRH14, 4U>;
      using AF5 = FieldValue<AFRH14, 5U>;
      using AF6 = FieldValue<AFRH14, 6U>;
      using AF7 = FieldValue<AFRH14, 7U>;
      using AF8 = FieldValue<AFRH14, 8U>;
      using AF9 = FieldValue<AFRH14, 9U>;
      using AF10 = FieldValue<AFRH14, 10U>;
      using AF11 = FieldValue<AFRH14, 11U>;
      using AF12 = FieldValue<AFRH14, 12U>;
      using AF13 = FieldValue<AFRH14, 13U>;
      using AF14 = FieldValue<AFRH14, 14U>;
      using AF15 = FieldValue<AFRH14, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH13 : RegisterField<AFRH, 20, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH13, 0U>;
      using AF1 = FieldValue<AFRH13, 1U>;
      using AF2 = FieldValue<AFRH13, 2U>;
      using AF3 = FieldValue<AFRH13, 3U>;
      using AF4 = FieldValue<AFRH13, 4U>;
      using AF5 = FieldValue<AFRH13, 5U>;
      using AF6 = FieldValue<AFRH13, 6U>;
      using AF7 = FieldValue<AFRH13, 7U>;
      using AF8 = FieldValue<AFRH13, 8U>;
      using AF9 = FieldValue<AFRH13, 9U>;
      using AF10 = FieldValue<AFRH13, 10U>;
      using AF11 = FieldValue<AFRH13, 11U>;
      using AF12 = FieldValue<AFRH13, 12U>;
      using AF13 = FieldValue<AFRH13, 13U>;
      using AF14 = FieldValue<AFRH13, 14U>;
      using AF15 = FieldValue<AFRH13, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH12 : RegisterField<AFRH, 16, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH12, 0U>;
      using AF1 = FieldValue<AFRH12, 1U>;
      using AF2 = FieldValue<AFRH12, 2U>;
      using AF3 = FieldValue<AFRH12, 3U>;
      using AF4 = FieldValue<AFRH12, 4U>;
      using AF5 = FieldValue<AFRH12, 5U>;
      using AF6 = FieldValue<AFRH12, 6U>;
      using AF7 = FieldValue<AFRH12, 7U>;
      using AF8 = FieldValue<AFRH12, 8U>;
      using AF9 = FieldValue<AFRH12, 9U>;
      using AF10 = FieldValue<AFRH12, 10U>;
      using AF11 = FieldValue<AFRH12, 11U>;
      using AF12 = FieldValue<AFRH12, 12U>;
      using AF13 = FieldValue<AFRH12, 13U>;
      using AF14 = FieldValue<AFRH12, 14U>;
      using AF15 = FieldValue<AFRH12, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH11 : RegisterField<AFRH, 12, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH11, 0U>;
      using AF1 = FieldValue<AFRH11, 1U>;
      using AF2 = FieldValue<AFRH11, 2U>;
      using AF3 = FieldValue<AFRH11, 3U>;
      using AF4 = FieldValue<AFRH11, 4U>;
      using AF5 = FieldValue<AFRH11, 5U>;
      using AF6 = FieldValue<AFRH11, 6U>;
      using AF7 = FieldValue<AFRH11, 7U>;
      using AF8 = FieldValue<AFRH11, 8U>;
      using AF9 = FieldValue<AFRH11, 9U>;
      using AF10 = FieldValue<AFRH11, 10U>;
      using AF11 = FieldValue<AFRH11, 11U>;
      using AF12 = FieldValue<AFRH11, 12U>;
      using AF13 = FieldValue<AFRH11, 13U>;
      using AF14 = FieldValue<AFRH11, 14U>;
      using AF15 = FieldValue<AFRH11, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH10 : RegisterField<AFRH, 8, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH10, 0U>;
      using AF1 = FieldValue<AFRH10, 1U>;
      using AF2 = FieldValue<AFRH10, 2U>;
      using AF3 = FieldValue<AFRH10, 3U>;
      using AF4 = FieldValue<AFRH10, 4U>;
      using AF5 = FieldValue<AFRH10, 5U>;
      using AF6 = FieldValue<AFRH10, 6U>;
      using AF7 = FieldValue<AFRH10, 7U>;
      using AF8 = FieldValue<AFRH10, 8U>;
      using AF9 = FieldValue<AFRH10, 9U>;
      using AF10 = FieldValue<AFRH10, 10U>;
      using AF11 = FieldValue<AFRH10, 11U>;
      using AF12 = FieldValue<AFRH10, 12U>;
      using AF13 = FieldValue<AFRH10, 13U>;
      using AF14 = FieldValue<AFRH10, 14U>;
      using AF15 = FieldValue<AFRH10, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH9 : RegisterField<AFRH, 4, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH9, 0U>;
      using AF1 = FieldValue<AFRH9, 1U>;
      using AF2 = FieldValue<AFRH9, 2U>;
      using AF3 = FieldValue<AFRH9, 3U>;
      using AF4 = FieldValue<AFRH9, 4U>;
      using AF5 = FieldValue<AFRH9, 5U>;
      using AF6 = FieldValue<AFRH9, 6U>;
      using AF7 = FieldValue<AFRH9, 7U>;
      using AF8 = FieldValue<AFRH9, 8U>;
      using AF9 = FieldValue<AFRH9, 9U>;
      using AF10 = FieldValue<AFRH9, 10U>;
      using AF11 = FieldValue<AFRH9, 11U>;
      using AF12 = FieldValue<AFRH9, 12U>;
      using AF13 = FieldValue<AFRH9, 13U>;
      using AF14 = FieldValue<AFRH9, 14U>;
      using AF15 = FieldValue<AFRH9, 15U>;
    };
    // Alternate function selection for port x bit y (y = 8..15)
    struct AFRH8 : RegisterField<AFRH, 0, 4, ReadWriteMode>
    {
      using AF0 = FieldValue<AFRH8, 0U>;
      using AF1 = FieldValue<AFRH8, 1U>;
      using AF2 = FieldValue<AFRH8, 2U>;
      using AF3 = FieldValue<AFRH8, 3U>;
      using AF4 = FieldValue<AFRH8, 4U>;
      using AF5 = FieldValue<AFRH8, 5U>;
      using AF6 = FieldValue<AFRH8, 6U>;
      using AF7 = FieldValue<AFRH8, 7U>;
      using AF8 = FieldValue<AFRH8, 8U>;
      using AF9 = FieldValue<AFRH8, 9U>;
      using AF10 = FieldValue<AFRH8, 10U>;
      using AF11 = FieldValue<AFRH8, 11U>;
      using AF12 = FieldValue<AFRH8, 12U>;
      using AF13 = FieldValue<AFRH8, 13U>;
      using AF14 = FieldValue<AFRH8, 14U>;
      using AF15 = FieldValue<AFRH8, 15U>;
    };
  };

// Large Registers

  // GPIO alternate function low register
  template<auto num>
  struct AFR_AF : RegisterField<Register<0x40020020 + 4 * (num / 8), ReadWriteMode, 0x0>, 4 * (num % 8), 4, ReadWriteMode>
  {
    using AF0 = FieldValue<AFR_AF, 0U>;
    using AF1 = FieldValue<AFR_AF, 1U>;
    using AF2 = FieldValue<AFR_AF, 2U>;
    using AF3 = FieldValue<AFR_AF, 3U>;
    using AF4 = FieldValue<AFR_AF, 4U>;
    using AF5 = FieldValue<AFR_AF, 5U>;
    using AF6 = FieldValue<AFR_AF, 6U>;
    using AF7 = FieldValue<AFR_AF, 7U>;
    using AF8 = FieldValue<AFR_AF, 8U>;
    using AF9 = FieldValue<AFR_AF, 9U>;
    using AF10 = FieldValue<AFR_AF, 10U>;
    using AF11 = FieldValue<AFR_AF, 11U>;
    using AF12 = FieldValue<AFR_AF, 12U>;
    using AF13 = FieldValue<AFR_AF, 13U>;
    using AF14 = FieldValue<AFR_AF, 14U>;
    using AF15 = FieldValue<AFR_AF, 15U>;
  };

};


