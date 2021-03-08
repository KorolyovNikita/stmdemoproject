/******************************************************************************
* Filename : pwr_registers.hpp
*
* Details  : Power control
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct PWR
{
  // power control register
  struct CR : Register<0x40007000, ReadWriteMode, 0xc000>
  {
    // Flash Interface Stop while System Run
    struct FISSR : RegisterField<CR, 21, 1, ReadWriteMode>
    {
    };
    // Flash Memory Stop while System Run
    struct FMSSR : RegisterField<CR, 20, 1, ReadWriteMode>
    {
    };
    // Under-drive enable in stop mode
    struct UDEN : RegisterField<CR, 18, 2, ReadWriteMode>
    {
    };
    // Over-drive switching enabled
    struct ODSWEN : RegisterField<CR, 17, 1, ReadWriteMode>
    {
    };
    // Over-drive enable
    struct ODEN : RegisterField<CR, 16, 1, ReadWriteMode>
    {
    };
    // Regulator voltage scaling output selection
    struct VOS : RegisterField<CR, 14, 2, ReadWriteMode>
    {
    };
    // ADCDC1
    struct ADCDC1 : RegisterField<CR, 13, 1, ReadWriteMode>
    {
    };
    // Main regulator low voltage in deepsleep mode
    struct MRLVDS : RegisterField<CR, 11, 1, ReadWriteMode>
    {
    };
    // Low-Power Regulator Low Voltage in deepsleep
    struct LPLVDS : RegisterField<CR, 10, 1, ReadWriteMode>
    {
    };
    // Flash power down in Stop mode
    struct FPDS : RegisterField<CR, 9, 1, ReadWriteMode>
    {
    };
    // Disable backup domain write protection
    struct DBP : RegisterField<CR, 8, 1, ReadWriteMode>
    {
    };
    // PVD level selection
    struct PLS : RegisterField<CR, 5, 3, ReadWriteMode>
    {
    };
    // Power voltage detector enable
    struct PVDE : RegisterField<CR, 4, 1, ReadWriteMode>
    {
    };
    // Clear standby flag
    struct CSBF : RegisterField<CR, 3, 1, ReadWriteMode>
    {
    };
    // Clear wakeup flag
    struct CWUF : RegisterField<CR, 2, 1, ReadWriteMode>
    {
    };
    // Power down deepsleep
    struct PDDS : RegisterField<CR, 1, 1, ReadWriteMode>
    {
    };
    // Low-power deep sleep
    struct LPDS : RegisterField<CR, 0, 1, ReadWriteMode>
    {
    };
  };

  // power control/status register
  struct CSR : Register<0x40007004, ReadWriteMode, 0x0>
  {
    // Under-drive ready flag
    struct UDRDY : RegisterField<CSR, 18, 2, ReadWriteMode>
    {
    };
    // Over-drive mode switching ready
    struct ODSWRDY : RegisterField<CSR, 17, 1, ReadMode>
    {
    };
    // Over-drive mode ready
    struct ODRDY : RegisterField<CSR, 16, 1, ReadMode>
    {
    };
    // Regulator voltage scaling output selection ready bit
    struct VOSRDY : RegisterField<CSR, 14, 1, ReadMode>
    {
    };
    // Backup regulator enable
    struct BRE : RegisterField<CSR, 9, 1, ReadWriteMode>
    {
    };
    // Enable WKUP pin
    struct EWUP : RegisterField<CSR, 8, 1, ReadWriteMode>
    {
    };
    // Enable WKUP2 pin
    struct EWUP2 : RegisterField<CSR, 7, 1, ReadWriteMode>
    {
    };
    // Backup regulator ready
    struct BRR : RegisterField<CSR, 3, 1, ReadMode>
    {
    };
    // PVD output
    struct PVDO : RegisterField<CSR, 2, 1, ReadMode>
    {
    };
    // Standby flag
    struct SBF : RegisterField<CSR, 1, 1, ReadMode>
    {
    };
    // Wakeup flag
    struct WUF : RegisterField<CSR, 0, 1, ReadMode>
    {
    };
  };

// Large Registers

};


