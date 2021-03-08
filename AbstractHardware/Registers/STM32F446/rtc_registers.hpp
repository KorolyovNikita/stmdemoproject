/******************************************************************************
* Filename : rtc_registers.hpp
*
* Details  : Real-time clock
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct RTC
{
  // time register
  struct TR : Register<0x40002800, ReadWriteMode, 0x0>
  {
    // AM/PM notation
    struct PM : RegisterField<TR, 22, 1, ReadWriteMode>
    {
    };
    // Hour tens in BCD format
    struct HT : RegisterField<TR, 20, 2, ReadWriteMode>
    {
    };
    // Hour units in BCD format
    struct HU : RegisterField<TR, 16, 4, ReadWriteMode>
    {
    };
    // Minute tens in BCD format
    struct MNT : RegisterField<TR, 12, 3, ReadWriteMode>
    {
    };
    // Minute units in BCD format
    struct MNU : RegisterField<TR, 8, 4, ReadWriteMode>
    {
    };
    // Second tens in BCD format
    struct ST : RegisterField<TR, 4, 3, ReadWriteMode>
    {
    };
    // Second units in BCD format
    struct SU : RegisterField<TR, 0, 4, ReadWriteMode>
    {
    };
  };

  // date register
  struct DR : Register<0x40002804, ReadWriteMode, 0x2101>
  {
    // Year tens in BCD format
    struct YT : RegisterField<DR, 20, 4, ReadWriteMode>
    {
    };
    // Year units in BCD format
    struct YU : RegisterField<DR, 16, 4, ReadWriteMode>
    {
    };
    // Week day units
    struct WDU : RegisterField<DR, 13, 3, ReadWriteMode>
    {
    };
    // Month tens in BCD format
    struct MT : RegisterField<DR, 12, 1, ReadWriteMode>
    {
    };
    // Month units in BCD format
    struct MU : RegisterField<DR, 8, 4, ReadWriteMode>
    {
    };
    // Date tens in BCD format
    struct DT : RegisterField<DR, 4, 2, ReadWriteMode>
    {
    };
    // Date units in BCD format
    struct DU : RegisterField<DR, 0, 4, ReadWriteMode>
    {
    };
  };

  // control register
  struct CR : Register<0x40002808, ReadWriteMode, 0x0>
  {
    // Calibration output enable
    struct COE : RegisterField<CR, 23, 1, ReadWriteMode>
    {
    };
    // Output selection
    struct OSEL : RegisterField<CR, 21, 2, ReadWriteMode>
    {
    };
    // Output polarity
    struct POL : RegisterField<CR, 20, 1, ReadWriteMode>
    {
    };
    // Backup
    struct BKP : RegisterField<CR, 18, 1, ReadWriteMode>
    {
    };
    // Subtract 1 hour (winter time change)
    struct SUB1H : RegisterField<CR, 17, 1, ReadWriteMode>
    {
    };
    // Add 1 hour (summer time change)
    struct ADD1H : RegisterField<CR, 16, 1, ReadWriteMode>
    {
    };
    // Time-stamp interrupt enable
    struct TSIE : RegisterField<CR, 15, 1, ReadWriteMode>
    {
    };
    // Wakeup timer interrupt enable
    struct WUTIE : RegisterField<CR, 14, 1, ReadWriteMode>
    {
    };
    // Alarm B interrupt enable
    struct ALRBIE : RegisterField<CR, 13, 1, ReadWriteMode>
    {
    };
    // Alarm A interrupt enable
    struct ALRAIE : RegisterField<CR, 12, 1, ReadWriteMode>
    {
    };
    // Time stamp enable
    struct TSE : RegisterField<CR, 11, 1, ReadWriteMode>
    {
    };
    // Wakeup timer enable
    struct WUTE : RegisterField<CR, 10, 1, ReadWriteMode>
    {
    };
    // Alarm B enable
    struct ALRBE : RegisterField<CR, 9, 1, ReadWriteMode>
    {
    };
    // Alarm A enable
    struct ALRAE : RegisterField<CR, 8, 1, ReadWriteMode>
    {
    };
    // Coarse digital calibration enable
    struct DCE : RegisterField<CR, 7, 1, ReadWriteMode>
    {
    };
    // Hour format
    struct FMT : RegisterField<CR, 6, 1, ReadWriteMode>
    {
    };
    // Reference clock detection enable (50 or 60 Hz)
    struct REFCKON : RegisterField<CR, 4, 1, ReadWriteMode>
    {
    };
    // Time-stamp event active edge
    struct TSEDGE : RegisterField<CR, 3, 1, ReadWriteMode>
    {
    };
    // Wakeup clock selection
    struct WCKSEL : RegisterField<CR, 0, 3, ReadWriteMode>
    {
    };
  };

  // initialization and status register
  struct ISR : Register<0x4000280c, ReadWriteMode, 0x7>
  {
    // Recalibration pending Flag
    struct RECALPF : RegisterField<ISR, 16, 1, ReadMode>
    {
    };
    // TAMPER2 detection flag
    struct TAMP2F : RegisterField<ISR, 14, 1, ReadWriteMode>
    {
    };
    // Tamper detection flag
    struct TAMP1F : RegisterField<ISR, 13, 1, ReadWriteMode>
    {
    };
    // Time-stamp overflow flag
    struct TSOVF : RegisterField<ISR, 12, 1, ReadWriteMode>
    {
    };
    // Time-stamp flag
    struct TSF : RegisterField<ISR, 11, 1, ReadWriteMode>
    {
    };
    // Wakeup timer flag
    struct WUTF : RegisterField<ISR, 10, 1, ReadWriteMode>
    {
    };
    // Alarm B flag
    struct ALRBF : RegisterField<ISR, 9, 1, ReadWriteMode>
    {
    };
    // Alarm A flag
    struct ALRAF : RegisterField<ISR, 8, 1, ReadWriteMode>
    {
    };
    // Initialization mode
    struct INIT : RegisterField<ISR, 7, 1, ReadWriteMode>
    {
    };
    // Initialization flag
    struct INITF : RegisterField<ISR, 6, 1, ReadMode>
    {
    };
    // Registers synchronization flag
    struct RSF : RegisterField<ISR, 5, 1, ReadWriteMode>
    {
    };
    // Initialization status flag
    struct INITS : RegisterField<ISR, 4, 1, ReadMode>
    {
    };
    // Shift operation pending
    struct SHPF : RegisterField<ISR, 3, 1, ReadWriteMode>
    {
    };
    // Wakeup timer write flag
    struct WUTWF : RegisterField<ISR, 2, 1, ReadMode>
    {
    };
    // Alarm B write flag
    struct ALRBWF : RegisterField<ISR, 1, 1, ReadMode>
    {
    };
    // Alarm A write flag
    struct ALRAWF : RegisterField<ISR, 0, 1, ReadMode>
    {
    };
  };

  // prescaler register
  struct PRER : Register<0x40002810, ReadWriteMode, 0x7f00ff>
  {
    // Asynchronous prescaler factor
    struct PREDIV_A : RegisterField<PRER, 16, 7, ReadWriteMode>
    {
    };
    // Synchronous prescaler factor
    struct PREDIV_S : RegisterField<PRER, 0, 15, ReadWriteMode>
    {
    };
  };

  // wakeup timer register
  struct WUTR : Register<0x40002814, ReadWriteMode, 0xffff>
  {
    // Wakeup auto-reload value bits
    struct WUT : RegisterField<WUTR, 0, 16, ReadWriteMode>
    {
    };
  };

  // calibration register
  struct CALIBR : Register<0x40002818, ReadWriteMode, 0x0>
  {
    // Digital calibration sign
    struct DCS : RegisterField<CALIBR, 7, 1, ReadWriteMode>
    {
    };
    // Digital calibration
    struct DC : RegisterField<CALIBR, 0, 5, ReadWriteMode>
    {
    };
  };

  // alarm A register
  struct ALRMAR : Register<0x4000281c, ReadWriteMode, 0x0>
  {
    // Alarm A date mask
    struct MSK4 : RegisterField<ALRMAR, 31, 1, ReadWriteMode>
    {
    };
    // Week day selection
    struct WDSEL : RegisterField<ALRMAR, 30, 1, ReadWriteMode>
    {
    };
    // Date tens in BCD format
    struct DT : RegisterField<ALRMAR, 28, 2, ReadWriteMode>
    {
    };
    // Date units or day in BCD format
    struct DU : RegisterField<ALRMAR, 24, 4, ReadWriteMode>
    {
    };
    // Alarm A hours mask
    struct MSK3 : RegisterField<ALRMAR, 23, 1, ReadWriteMode>
    {
    };
    // AM/PM notation
    struct PM : RegisterField<ALRMAR, 22, 1, ReadWriteMode>
    {
    };
    // Hour tens in BCD format
    struct HT : RegisterField<ALRMAR, 20, 2, ReadWriteMode>
    {
    };
    // Hour units in BCD format
    struct HU : RegisterField<ALRMAR, 16, 4, ReadWriteMode>
    {
    };
    // Alarm A minutes mask
    struct MSK2 : RegisterField<ALRMAR, 15, 1, ReadWriteMode>
    {
    };
    // Minute tens in BCD format
    struct MNT : RegisterField<ALRMAR, 12, 3, ReadWriteMode>
    {
    };
    // Minute units in BCD format
    struct MNU : RegisterField<ALRMAR, 8, 4, ReadWriteMode>
    {
    };
    // Alarm A seconds mask
    struct MSK1 : RegisterField<ALRMAR, 7, 1, ReadWriteMode>
    {
    };
    // Second tens in BCD format
    struct ST : RegisterField<ALRMAR, 4, 3, ReadWriteMode>
    {
    };
    // Second units in BCD format
    struct SU : RegisterField<ALRMAR, 0, 4, ReadWriteMode>
    {
    };
  };

  // alarm B register
  struct ALRMBR : Register<0x40002820, ReadWriteMode, 0x0>
  {
    // Alarm B date mask
    struct MSK4 : RegisterField<ALRMBR, 31, 1, ReadWriteMode>
    {
    };
    // Week day selection
    struct WDSEL : RegisterField<ALRMBR, 30, 1, ReadWriteMode>
    {
    };
    // Date tens in BCD format
    struct DT : RegisterField<ALRMBR, 28, 2, ReadWriteMode>
    {
    };
    // Date units or day in BCD format
    struct DU : RegisterField<ALRMBR, 24, 4, ReadWriteMode>
    {
    };
    // Alarm B hours mask
    struct MSK3 : RegisterField<ALRMBR, 23, 1, ReadWriteMode>
    {
    };
    // AM/PM notation
    struct PM : RegisterField<ALRMBR, 22, 1, ReadWriteMode>
    {
    };
    // Hour tens in BCD format
    struct HT : RegisterField<ALRMBR, 20, 2, ReadWriteMode>
    {
    };
    // Hour units in BCD format
    struct HU : RegisterField<ALRMBR, 16, 4, ReadWriteMode>
    {
    };
    // Alarm B minutes mask
    struct MSK2 : RegisterField<ALRMBR, 15, 1, ReadWriteMode>
    {
    };
    // Minute tens in BCD format
    struct MNT : RegisterField<ALRMBR, 12, 3, ReadWriteMode>
    {
    };
    // Minute units in BCD format
    struct MNU : RegisterField<ALRMBR, 8, 4, ReadWriteMode>
    {
    };
    // Alarm B seconds mask
    struct MSK1 : RegisterField<ALRMBR, 7, 1, ReadWriteMode>
    {
    };
    // Second tens in BCD format
    struct ST : RegisterField<ALRMBR, 4, 3, ReadWriteMode>
    {
    };
    // Second units in BCD format
    struct SU : RegisterField<ALRMBR, 0, 4, ReadWriteMode>
    {
    };
  };

  // write protection register
  struct WPR : Register<0x40002824, WriteMode, 0x0>
  {
    // Write protection key
    struct KEY : RegisterField<WPR, 0, 8, WriteMode>
    {
    };
  };

  // sub second register
  struct SSR : Register<0x40002828, ReadMode, 0x0>
  {
    // Sub second value
    struct SS : RegisterField<SSR, 0, 16, ReadMode>
    {
    };
  };

  // shift control register
  struct SHIFTR : Register<0x4000282c, WriteMode, 0x0>
  {
    // Add one second
    struct ADD1S : RegisterField<SHIFTR, 31, 1, WriteMode>
    {
    };
    // Subtract a fraction of a second
    struct SUBFS : RegisterField<SHIFTR, 0, 15, WriteMode>
    {
    };
  };

  // time stamp time register
  struct TSTR : Register<0x40002830, ReadMode, 0x0>
  {
    // AFO_ALARM output type
    struct ALARMOUTTYPE : RegisterField<TSTR, 18, 1, ReadMode>
    {
    };
    // TIMESTAMP mapping
    struct TSINSEL : RegisterField<TSTR, 17, 1, ReadMode>
    {
    };
    // TAMPER1 mapping
    struct TAMP1INSEL : RegisterField<TSTR, 16, 1, ReadMode>
    {
    };
    // Tamper interrupt enable
    struct TAMPIE : RegisterField<TSTR, 2, 1, ReadMode>
    {
    };
    // Active level for tamper 1
    struct TAMP1TRG : RegisterField<TSTR, 1, 1, ReadMode>
    {
    };
    // Tamper 1 detection enable
    struct TAMP1E : RegisterField<TSTR, 0, 1, ReadMode>
    {
    };
  };

  // time stamp date register
  struct TSDR : Register<0x40002834, ReadMode, 0x0>
  {
    // Week day units
    struct WDU : RegisterField<TSDR, 13, 3, ReadMode>
    {
    };
    // Month tens in BCD format
    struct MT : RegisterField<TSDR, 12, 1, ReadMode>
    {
    };
    // Month units in BCD format
    struct MU : RegisterField<TSDR, 8, 4, ReadMode>
    {
    };
    // Date tens in BCD format
    struct DT : RegisterField<TSDR, 4, 2, ReadMode>
    {
    };
    // Date units in BCD format
    struct DU : RegisterField<TSDR, 0, 4, ReadMode>
    {
    };
  };

  // timestamp sub second register
  struct TSSSR : Register<0x40002838, ReadMode, 0x0>
  {
    // Sub second value
    struct SS : RegisterField<TSSSR, 0, 16, ReadMode>
    {
    };
  };

  // calibration register
  struct CALR : Register<0x4000283c, ReadWriteMode, 0x0>
  {
    // Increase frequency of RTC by 488.5 ppm
    struct CALP : RegisterField<CALR, 15, 1, ReadWriteMode>
    {
    };
    // Use an 8-second calibration cycle period
    struct CALW8 : RegisterField<CALR, 14, 1, ReadWriteMode>
    {
    };
    // Use a 16-second calibration cycle period
    struct CALW16 : RegisterField<CALR, 13, 1, ReadWriteMode>
    {
    };
    // Calibration minus
    struct CALM : RegisterField<CALR, 0, 9, ReadWriteMode>
    {
    };
  };

  // tamper and alternate function configuration register
  struct TAFCR : Register<0x40002840, ReadWriteMode, 0x0>
  {
    // AFO_ALARM output type
    struct ALARMOUTTYPE : RegisterField<TAFCR, 18, 1, ReadWriteMode>
    {
    };
    // TIMESTAMP mapping
    struct TSINSEL : RegisterField<TAFCR, 17, 1, ReadWriteMode>
    {
    };
    // TAMPER1 mapping
    struct TAMP1INSEL : RegisterField<TAFCR, 16, 1, ReadWriteMode>
    {
    };
    // TAMPER pull-up disable
    struct TAMPPUDIS : RegisterField<TAFCR, 15, 1, ReadWriteMode>
    {
    };
    // Tamper precharge duration
    struct TAMPPRCH : RegisterField<TAFCR, 13, 2, ReadWriteMode>
    {
    };
    // Tamper filter count
    struct TAMPFLT : RegisterField<TAFCR, 11, 2, ReadWriteMode>
    {
    };
    // Tamper sampling frequency
    struct TAMPFREQ : RegisterField<TAFCR, 8, 3, ReadWriteMode>
    {
    };
    // Activate timestamp on tamper detection event
    struct TAMPTS : RegisterField<TAFCR, 7, 1, ReadWriteMode>
    {
    };
    // Active level for tamper 2
    struct TAMP2TRG : RegisterField<TAFCR, 4, 1, ReadWriteMode>
    {
    };
    // Tamper 2 detection enable
    struct TAMP2E : RegisterField<TAFCR, 3, 1, ReadWriteMode>
    {
    };
    // Tamper interrupt enable
    struct TAMPIE : RegisterField<TAFCR, 2, 1, ReadWriteMode>
    {
    };
    // Active level for tamper 1
    struct TAMP1TRG : RegisterField<TAFCR, 1, 1, ReadWriteMode>
    {
    };
    // Tamper 1 detection enable
    struct TAMP1E : RegisterField<TAFCR, 0, 1, ReadWriteMode>
    {
    };
  };

  // alarm A sub second register
  struct ALRMASSR : Register<0x40002844, ReadWriteMode, 0x0>
  {
    // Mask the most-significant bits starting at this bit
    struct MASKSS : RegisterField<ALRMASSR, 24, 4, ReadWriteMode>
    {
    };
    // Sub seconds value
    struct SS : RegisterField<ALRMASSR, 0, 15, ReadWriteMode>
    {
    };
  };

  // alarm B sub second register
  struct ALRMBSSR : Register<0x40002848, ReadWriteMode, 0x0>
  {
    // Mask the most-significant bits starting at this bit
    struct MASKSS : RegisterField<ALRMBSSR, 24, 4, ReadWriteMode>
    {
    };
    // Sub seconds value
    struct SS : RegisterField<ALRMBSSR, 0, 15, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP0R : Register<0x40002850, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP0R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP1R : Register<0x40002854, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP1R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP2R : Register<0x40002858, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP2R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP3R : Register<0x4000285c, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP3R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP4R : Register<0x40002860, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP4R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP5R : Register<0x40002864, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP5R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP6R : Register<0x40002868, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP6R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP7R : Register<0x4000286c, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP7R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP8R : Register<0x40002870, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP8R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP9R : Register<0x40002874, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP9R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP10R : Register<0x40002878, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP10R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP11R : Register<0x4000287c, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP11R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP12R : Register<0x40002880, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP12R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP13R : Register<0x40002884, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP13R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP14R : Register<0x40002888, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP14R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP15R : Register<0x4000288c, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP15R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP16R : Register<0x40002890, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP16R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP17R : Register<0x40002894, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP17R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP18R : Register<0x40002898, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP18R, 0, 32, ReadWriteMode>
    {
    };
  };

  // backup register
  struct BKP19R : Register<0x4000289c, ReadWriteMode, 0x0>
  {
    // BKP
    struct BKP : RegisterField<BKP19R, 0, 32, ReadWriteMode>
    {
    };
  };

// Large Registers

};


