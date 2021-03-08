/******************************************************************************
* Filename : fpu_registers.hpp
*
* Details  : Floting point unit
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct FPU
{
  // Floating-point context control register
  struct FPCCR : Register<0xe000ef34, ReadWriteMode, 0x0>
  {
    // ASPEN
    struct ASPEN : RegisterField<FPCCR, 31, 1, ReadWriteMode>
    {
    };
    // LSPEN
    struct LSPEN : RegisterField<FPCCR, 30, 1, ReadWriteMode>
    {
    };
    // MONRDY
    struct MONRDY : RegisterField<FPCCR, 8, 1, ReadWriteMode>
    {
    };
    // BFRDY
    struct BFRDY : RegisterField<FPCCR, 6, 1, ReadWriteMode>
    {
    };
    // MMRDY
    struct MMRDY : RegisterField<FPCCR, 5, 1, ReadWriteMode>
    {
    };
    // HFRDY
    struct HFRDY : RegisterField<FPCCR, 4, 1, ReadWriteMode>
    {
    };
    // THREAD
    struct THREAD : RegisterField<FPCCR, 3, 1, ReadWriteMode>
    {
    };
    // USER
    struct USER : RegisterField<FPCCR, 1, 1, ReadWriteMode>
    {
    };
    // LSPACT
    struct LSPACT : RegisterField<FPCCR, 0, 1, ReadWriteMode>
    {
    };
  };

  // Floating-point context address register
  struct FPCAR : Register<0xe000ef38, ReadWriteMode, 0x0>
  {
    // Location of unpopulated floating-point
    struct ADDRESS : RegisterField<FPCAR, 3, 29, ReadWriteMode>
    {
    };
  };

  // Floating-point status control register
  struct FPSCR : Register<0xe000ef3c, ReadWriteMode, 0x0>
  {
    // Negative condition code flag
    struct N : RegisterField<FPSCR, 31, 1, ReadWriteMode>
    {
    };
    // Zero condition code flag
    struct Z : RegisterField<FPSCR, 30, 1, ReadWriteMode>
    {
    };
    // Carry condition code flag
    struct C : RegisterField<FPSCR, 29, 1, ReadWriteMode>
    {
    };
    // Overflow condition code flag
    struct V : RegisterField<FPSCR, 28, 1, ReadWriteMode>
    {
    };
    // Alternative half-precision control bit
    struct AHP : RegisterField<FPSCR, 26, 1, ReadWriteMode>
    {
    };
    // Default NaN mode control bit
    struct DN : RegisterField<FPSCR, 25, 1, ReadWriteMode>
    {
    };
    // Flush-to-zero mode control bit:
    struct FZ : RegisterField<FPSCR, 24, 1, ReadWriteMode>
    {
    };
    // Rounding Mode control field
    struct RMode : RegisterField<FPSCR, 22, 2, ReadWriteMode>
    {
    };
    // Input denormal cumulative exception bit.
    struct IDC : RegisterField<FPSCR, 7, 1, ReadWriteMode>
    {
    };
    // Inexact cumulative exception bit
    struct IXC : RegisterField<FPSCR, 4, 1, ReadWriteMode>
    {
    };
    // Underflow cumulative exception bit
    struct UFC : RegisterField<FPSCR, 3, 1, ReadWriteMode>
    {
    };
    // Overflow cumulative exception bit
    struct OFC : RegisterField<FPSCR, 2, 1, ReadWriteMode>
    {
    };
    // Division by zero cumulative exception bit.
    struct DZC : RegisterField<FPSCR, 1, 1, ReadWriteMode>
    {
    };
    // Invalid operation cumulative exception bit
    struct IOC : RegisterField<FPSCR, 0, 1, ReadWriteMode>
    {
    };
  };

// Large Registers

};


