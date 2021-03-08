/******************************************************************************
* Filename : dbg_registers.hpp
*
* Details  : Debug support
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct DBG
{
  // IDCODE
  struct DBGMCU_IDCODE : Register<0xe0042000, ReadMode, 0x10006411>
  {
    // REV_ID
    struct REV_ID : RegisterField<DBGMCU_IDCODE, 16, 16, ReadMode>
    {
    };
    // DEV_ID
    struct DEV_ID : RegisterField<DBGMCU_IDCODE, 0, 12, ReadMode>
    {
    };
  };

  // Control Register
  struct DBGMCU_CR : Register<0xe0042004, ReadWriteMode, 0x0>
  {
    // TRACE_MODE
    struct TRACE_MODE : RegisterField<DBGMCU_CR, 6, 2, ReadWriteMode>
    {
    };
    // TRACE_IOEN
    struct TRACE_IOEN : RegisterField<DBGMCU_CR, 5, 1, ReadWriteMode>
    {
    };
    // DBG_STANDBY
    struct DBG_STANDBY : RegisterField<DBGMCU_CR, 2, 1, ReadWriteMode>
    {
    };
    // DBG_STOP
    struct DBG_STOP : RegisterField<DBGMCU_CR, 1, 1, ReadWriteMode>
    {
    };
    // DBG_SLEEP
    struct DBG_SLEEP : RegisterField<DBGMCU_CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // Debug MCU APB1 Freeze registe
  struct DBGMCU_APB1_FZ : Register<0xe0042008, ReadWriteMode, 0x0>
  {
    // DBG_CAN2_STOP
    struct DBG_CAN2_STOP : RegisterField<DBGMCU_APB1_FZ, 26, 1, ReadWriteMode>
    {
    };
    // DBG_CAN1_STOP
    struct DBG_CAN1_STOP : RegisterField<DBGMCU_APB1_FZ, 25, 1, ReadWriteMode>
    {
    };
    // SMBUS timeout mode stopped when Core is halted
    struct DBG_I2CFMP_SMBUS_TIMEOUT : RegisterField<DBGMCU_APB1_FZ, 24, 1, ReadWriteMode>
    {
    };
    // DBG_J2C3SMBUS_TIMEOUT
    struct DBG_J2C3SMBUS_TIMEOUT : RegisterField<DBGMCU_APB1_FZ, 23, 1, ReadWriteMode>
    {
    };
    // DBG_J2C2_SMBUS_TIMEOUT
    struct DBG_J2C2_SMBUS_TIMEOUT : RegisterField<DBGMCU_APB1_FZ, 22, 1, ReadWriteMode>
    {
    };
    // DBG_J2C1_SMBUS_TIMEOUT
    struct DBG_J2C1_SMBUS_TIMEOUT : RegisterField<DBGMCU_APB1_FZ, 21, 1, ReadWriteMode>
    {
    };
    // DBG_IWDEG_STOP
    struct DBG_IWDEG_STOP : RegisterField<DBGMCU_APB1_FZ, 12, 1, ReadWriteMode>
    {
    };
    // DBG_WWDG_STOP
    struct DBG_WWDG_STOP : RegisterField<DBGMCU_APB1_FZ, 11, 1, ReadWriteMode>
    {
    };
    // RTC stopped when Core is halted
    struct DBG_RTC_STOP : RegisterField<DBGMCU_APB1_FZ, 10, 1, ReadWriteMode>
    {
    };
    // DBG_TIM14_STOP
    struct DBG_TIM14_STOP : RegisterField<DBGMCU_APB1_FZ, 8, 1, ReadWriteMode>
    {
    };
    // DBG_TIM13_STOP
    struct DBG_TIM13_STOP : RegisterField<DBGMCU_APB1_FZ, 7, 1, ReadWriteMode>
    {
    };
    // DBG_TIM12_STOP
    struct DBG_TIM12_STOP : RegisterField<DBGMCU_APB1_FZ, 6, 1, ReadWriteMode>
    {
    };
    // DBG_TIM7_STOP
    struct DBG_TIM7_STOP : RegisterField<DBGMCU_APB1_FZ, 5, 1, ReadWriteMode>
    {
    };
    // DBG_TIM6_STOP
    struct DBG_TIM6_STOP : RegisterField<DBGMCU_APB1_FZ, 4, 1, ReadWriteMode>
    {
    };
    // DBG_TIM5_STOP
    struct DBG_TIM5_STOP : RegisterField<DBGMCU_APB1_FZ, 3, 1, ReadWriteMode>
    {
    };
    // DBG_TIM4_STOP
    struct DBG_TIM4_STOP : RegisterField<DBGMCU_APB1_FZ, 2, 1, ReadWriteMode>
    {
    };
    // DBG_TIM3 _STOP
    struct DBG_TIM3_STOP : RegisterField<DBGMCU_APB1_FZ, 1, 1, ReadWriteMode>
    {
    };
    // DBG_TIM2_STOP
    struct DBG_TIM2_STOP : RegisterField<DBGMCU_APB1_FZ, 0, 1, ReadWriteMode>
    {
    };
  };

  // Debug MCU APB2 Freeze registe
  struct DBGMCU_APB2_FZ : Register<0xe004200c, ReadWriteMode, 0x0>
  {
    // TIM11 counter stopped when core is halted
    struct DBG_TIM11_STOP : RegisterField<DBGMCU_APB2_FZ, 18, 1, ReadWriteMode>
    {
    };
    // TIM10 counter stopped when core is halted
    struct DBG_TIM10_STOP : RegisterField<DBGMCU_APB2_FZ, 17, 1, ReadWriteMode>
    {
    };
    // TIM9 counter stopped when core is halted
    struct DBG_TIM9_STOP : RegisterField<DBGMCU_APB2_FZ, 16, 1, ReadWriteMode>
    {
    };
    // TIM8 counter stopped when core is halted
    struct DBG_TIM8_STOP : RegisterField<DBGMCU_APB2_FZ, 1, 1, ReadWriteMode>
    {
    };
    // TIM1 counter stopped when core is halted
    struct DBG_TIM1_STOP : RegisterField<DBGMCU_APB2_FZ, 0, 1, ReadWriteMode>
    {
    };
  };

// Large Registers

};


