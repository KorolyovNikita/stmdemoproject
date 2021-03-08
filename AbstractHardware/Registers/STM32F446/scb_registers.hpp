/******************************************************************************
* Filename : scb_registers.hpp
*
* Details  : System control block
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct SCB
{
  // CPUID base register
  struct CPUID : Register<0xe000ed00, ReadMode, 0x410fc241>
  {
    // Implementer code
    struct Implementer : RegisterField<CPUID, 24, 8, ReadMode>
    {
    };
    // Variant number
    struct Variant : RegisterField<CPUID, 20, 4, ReadMode>
    {
    };
    // Reads as 0xF
    struct Constant : RegisterField<CPUID, 16, 4, ReadMode>
    {
    };
    // Part number of the processor
    struct PartNo : RegisterField<CPUID, 4, 12, ReadMode>
    {
    };
    // Revision number
    struct Revision : RegisterField<CPUID, 0, 4, ReadMode>
    {
    };
  };

  // Interrupt control and state register
  struct ICSR : Register<0xe000ed04, ReadWriteMode, 0x0>
  {
    // NMI set-pending bit.
    struct NMIPENDSET : RegisterField<ICSR, 31, 1, ReadWriteMode>
    {
    };
    // PendSV set-pending bit
    struct PENDSVSET : RegisterField<ICSR, 28, 1, ReadWriteMode>
    {
    };
    // PendSV clear-pending bit
    struct PENDSVCLR : RegisterField<ICSR, 27, 1, ReadWriteMode>
    {
    };
    // SysTick exception set-pending bit
    struct PENDSTSET : RegisterField<ICSR, 26, 1, ReadWriteMode>
    {
    };
    // SysTick exception clear-pending bit
    struct PENDSTCLR : RegisterField<ICSR, 25, 1, ReadWriteMode>
    {
    };
    // Interrupt pending flag
    struct ISRPENDING : RegisterField<ICSR, 22, 1, ReadWriteMode>
    {
    };
    // Pending vector
    struct VECTPENDING : RegisterField<ICSR, 12, 7, ReadWriteMode>
    {
    };
    // Return to base level
    struct RETTOBASE : RegisterField<ICSR, 11, 1, ReadWriteMode>
    {
    };
    // Active vector
    struct VECTACTIVE : RegisterField<ICSR, 0, 9, ReadWriteMode>
    {
    };
  };

  // Vector table offset register
  struct VTOR : Register<0xe000ed08, ReadWriteMode, 0x0>
  {
    // Vector table base offset field
    struct TBLOFF : RegisterField<VTOR, 9, 21, ReadWriteMode>
    {
    };
  };

  // Application interrupt and reset control register
  struct AIRCR : Register<0xe000ed0c, ReadWriteMode, 0x0>
  {
    // Register key
    struct VECTKEYSTAT : RegisterField<AIRCR, 16, 16, ReadWriteMode>
    {
      using Key0x5FA = FieldValue<VECTKEYSTAT, 1530U>;
    };
    // ENDIANESS
    struct ENDIANESS : RegisterField<AIRCR, 15, 1, ReadWriteMode>
    {
    };
    // PRIGROUP
    struct PRIGROUP : RegisterField<AIRCR, 8, 3, ReadWriteMode>
    {
      template<auto val, class = typename std::enable_if_t<(val >= 3 && val <= 7)>>
      using Group = FieldValue<PRIGROUP, val>;
    };
    // SYSRESETREQ
    struct SYSRESETREQ : RegisterField<AIRCR, 2, 1, ReadWriteMode>
    {
    };
    // VECTCLRACTIVE
    struct VECTCLRACTIVE : RegisterField<AIRCR, 1, 1, ReadWriteMode>
    {
    };
    // VECTRESET
    struct VECTRESET : RegisterField<AIRCR, 0, 1, ReadWriteMode>
    {
    };
  };

  // System control register
  struct SCR : Register<0xe000ed10, ReadWriteMode, 0x0>
  {
    // Send Event on Pending bit
    struct SEVEONPEND : RegisterField<SCR, 4, 1, ReadWriteMode>
    {
    };
    // SLEEPDEEP
    struct SLEEPDEEP : RegisterField<SCR, 2, 1, ReadWriteMode>
    {
    };
    // SLEEPONEXIT
    struct SLEEPONEXIT : RegisterField<SCR, 1, 1, ReadWriteMode>
    {
    };
  };

  // Configuration and control register
  struct CCR : Register<0xe000ed14, ReadWriteMode, 0x0>
  {
    // STKALIGN
    struct STKALIGN : RegisterField<CCR, 9, 1, ReadWriteMode>
    {
    };
    // BFHFNMIGN
    struct BFHFNMIGN : RegisterField<CCR, 8, 1, ReadWriteMode>
    {
    };
    // DIV_0_TRP
    struct DIV_0_TRP : RegisterField<CCR, 4, 1, ReadWriteMode>
    {
    };
    // UNALIGN_ TRP
    struct UNALIGN__TRP : RegisterField<CCR, 3, 1, ReadWriteMode>
    {
    };
    // USERSETMPEND
    struct USERSETMPEND : RegisterField<CCR, 1, 1, ReadWriteMode>
    {
    };
    // Configures how the processor enters Thread mode
    struct NONBASETHRDENA : RegisterField<CCR, 0, 1, ReadWriteMode>
    {
    };
  };

  // System handler priority registers
  struct SHPR1 : Register<0xe000ed18, ReadWriteMode, 0x0>
  {
    // Priority of system handler 6
    struct PRI_6 : RegisterField<SHPR1, 16, 8, ReadWriteMode>
    {
    };
    // Priority of system handler 5
    struct PRI_5 : RegisterField<SHPR1, 8, 8, ReadWriteMode>
    {
    };
    // Priority of system handler 4
    struct PRI_4 : RegisterField<SHPR1, 0, 8, ReadWriteMode>
    {
    };
  };

  // System handler priority registers
  struct SHPR2 : Register<0xe000ed1c, ReadWriteMode, 0x0>
  {
    // Priority of system handler 11
    struct PRI_11 : RegisterField<SHPR2, 24, 8, ReadWriteMode>
    {
    };
  };

  // System handler priority registers
  struct SHPR3 : Register<0xe000ed20, ReadWriteMode, 0x0>
  {
    // Priority of system handler 15
    struct PRI_15 : RegisterField<SHPR3, 24, 8, ReadWriteMode>
    {
    };
    // Priority of system handler 14
    struct PRI_14 : RegisterField<SHPR3, 16, 8, ReadWriteMode>
    {
    };
  };

  // System handler control and state register
  struct SHCRS : Register<0xe000ed24, ReadWriteMode, 0x0>
  {
    // Usage fault enable bit
    struct USGFAULTENA : RegisterField<SHCRS, 18, 1, ReadWriteMode>
    {
    };
    // Bus fault enable bit
    struct BUSFAULTENA : RegisterField<SHCRS, 17, 1, ReadWriteMode>
    {
    };
    // Memory management fault enable bit
    struct MEMFAULTENA : RegisterField<SHCRS, 16, 1, ReadWriteMode>
    {
    };
    // SVC call pending bit
    struct SVCALLPENDED : RegisterField<SHCRS, 15, 1, ReadWriteMode>
    {
    };
    // Bus fault exception pending bit
    struct BUSFAULTPENDED : RegisterField<SHCRS, 14, 1, ReadWriteMode>
    {
    };
    // Memory management fault exception pending bit
    struct MEMFAULTPENDED : RegisterField<SHCRS, 13, 1, ReadWriteMode>
    {
    };
    // Usage fault exception pending bit
    struct USGFAULTPENDED : RegisterField<SHCRS, 12, 1, ReadWriteMode>
    {
    };
    // SysTick exception active bit
    struct SYSTICKACT : RegisterField<SHCRS, 11, 1, ReadWriteMode>
    {
    };
    // PendSV exception active bit
    struct PENDSVACT : RegisterField<SHCRS, 10, 1, ReadWriteMode>
    {
    };
    // Debug monitor active bit
    struct MONITORACT : RegisterField<SHCRS, 8, 1, ReadWriteMode>
    {
    };
    // SVC call active bit
    struct SVCALLACT : RegisterField<SHCRS, 7, 1, ReadWriteMode>
    {
    };
    // Usage fault exception active bit
    struct USGFAULTACT : RegisterField<SHCRS, 3, 1, ReadWriteMode>
    {
    };
    // Bus fault exception active bit
    struct BUSFAULTACT : RegisterField<SHCRS, 1, 1, ReadWriteMode>
    {
    };
    // Memory management fault exception active bit
    struct MEMFAULTACT : RegisterField<SHCRS, 0, 1, ReadWriteMode>
    {
    };
  };

  // Configurable fault status register
  struct CFSR_UFSR_BFSR_MMFSR : Register<0xe000ed28, ReadWriteMode, 0x0>
  {
    // Divide by zero usage fault
    struct DIVBYZERO : RegisterField<CFSR_UFSR_BFSR_MMFSR, 25, 1, ReadWriteMode>
    {
    };
    // Unaligned access usage fault
    struct UNALIGNED : RegisterField<CFSR_UFSR_BFSR_MMFSR, 24, 1, ReadWriteMode>
    {
    };
    // No coprocessor usage fault.
    struct NOCP : RegisterField<CFSR_UFSR_BFSR_MMFSR, 19, 1, ReadWriteMode>
    {
    };
    // Invalid PC load usage fault
    struct INVPC : RegisterField<CFSR_UFSR_BFSR_MMFSR, 18, 1, ReadWriteMode>
    {
    };
    // Invalid state usage fault
    struct INVSTATE : RegisterField<CFSR_UFSR_BFSR_MMFSR, 17, 1, ReadWriteMode>
    {
    };
    // Undefined instruction usage fault
    struct UNDEFINSTR : RegisterField<CFSR_UFSR_BFSR_MMFSR, 16, 1, ReadWriteMode>
    {
    };
    // Bus Fault Address Register (BFAR) valid flag
    struct BFARVALID : RegisterField<CFSR_UFSR_BFSR_MMFSR, 15, 1, ReadWriteMode>
    {
    };
    // Bus fault on floating-point lazy state preservation
    struct LSPERR : RegisterField<CFSR_UFSR_BFSR_MMFSR, 13, 1, ReadWriteMode>
    {
    };
    // Bus fault on stacking for exception entry
    struct STKERR : RegisterField<CFSR_UFSR_BFSR_MMFSR, 12, 1, ReadWriteMode>
    {
    };
    // Bus fault on unstacking for a return from exception
    struct UNSTKERR : RegisterField<CFSR_UFSR_BFSR_MMFSR, 11, 1, ReadWriteMode>
    {
    };
    // Imprecise data bus error
    struct IMPRECISERR : RegisterField<CFSR_UFSR_BFSR_MMFSR, 10, 1, ReadWriteMode>
    {
    };
    // Precise data bus error
    struct PRECISERR : RegisterField<CFSR_UFSR_BFSR_MMFSR, 9, 1, ReadWriteMode>
    {
    };
    // Instruction bus error
    struct IBUSERR : RegisterField<CFSR_UFSR_BFSR_MMFSR, 8, 1, ReadWriteMode>
    {
    };
    // Memory Management Fault Address Register (MMAR) valid flag
    struct MMARVALID : RegisterField<CFSR_UFSR_BFSR_MMFSR, 7, 1, ReadWriteMode>
    {
    };
    // MLSPERR
    struct MLSPERR : RegisterField<CFSR_UFSR_BFSR_MMFSR, 5, 1, ReadWriteMode>
    {
    };
    // Memory manager fault on stacking for exception entry.
    struct MSTKERR : RegisterField<CFSR_UFSR_BFSR_MMFSR, 4, 1, ReadWriteMode>
    {
    };
    // Memory manager fault on unstacking for a return from exception
    struct MUNSTKERR : RegisterField<CFSR_UFSR_BFSR_MMFSR, 3, 1, ReadWriteMode>
    {
    };
    // Instruction access violation flag
    struct IACCVIOL : RegisterField<CFSR_UFSR_BFSR_MMFSR, 1, 1, ReadWriteMode>
    {
    };
  };

  // Hard fault status register
  struct HFSR : Register<0xe000ed2c, ReadWriteMode, 0x0>
  {
    // Reserved for Debug use
    struct DEBUG_VT : RegisterField<HFSR, 31, 1, ReadWriteMode>
    {
    };
    // Forced hard fault
    struct FORCED : RegisterField<HFSR, 30, 1, ReadWriteMode>
    {
    };
    // Vector table hard fault
    struct VECTTBL : RegisterField<HFSR, 1, 1, ReadWriteMode>
    {
    };
  };

  // Memory management fault address register
  struct MMFAR : Register<0xe000ed34, ReadWriteMode, 0x0>
  {
    // Memory management fault address
    struct _MMFAR : RegisterField<MMFAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // Bus fault address register
  struct BFAR : Register<0xe000ed38, ReadWriteMode, 0x0>
  {
    // Bus fault address
    struct _BFAR : RegisterField<BFAR, 0, 32, ReadWriteMode>
    {
    };
  };

  // Auxiliary fault status register
  struct AFSR : Register<0xe000ed3c, ReadWriteMode, 0x0>
  {
    // Implementation defined
    struct IMPDEF : RegisterField<AFSR, 0, 32, ReadWriteMode>
    {
    };
  };

// Large Registers

  // System handler priority registers
  template<auto num>
  struct SHP_PRI : RegisterField<Register<0xe000ed18 + 4 * (num / 4), ReadWriteMode, 0x0>, 8 * (num % 4), 8, ReadWriteMode>
  {
    template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
    using Priority = FieldValue<SHP_PRI, val << 4U>;
  };

};


