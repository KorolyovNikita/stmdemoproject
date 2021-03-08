/******************************************************************************
* Filename : nvic_registers.hpp
*
* Details  : Nested Vectored Interrupt Controller
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct NVIC
{
  // Interrupt Set-Enable Register
  struct ISER0 : Register<0xe000e100, ReadWriteMode, 0x0>
  {
    // SETENA
    struct SETENA : RegisterField<ISER0, 0, 32, ReadWriteMode>
    {
    };
  };

  // Interrupt Set-Enable Register
  struct ISER1 : Register<0xe000e104, ReadWriteMode, 0x0>
  {
    // SETENA
    struct SETENA : RegisterField<ISER1, 0, 32, ReadWriteMode>
    {
    };
  };

  // Interrupt Set-Enable Register
  struct ISER2 : Register<0xe000e108, ReadWriteMode, 0x0>
  {
    // SETENA
    struct SETENA : RegisterField<ISER2, 0, 32, ReadWriteMode>
    {
    };
  };

  // Interrupt Clear-Enable Register
  struct ICER0 : Register<0xe000e180, ReadWriteMode, 0x0>
  {
    // CLRENA
    struct CLRENA : RegisterField<ICER0, 0, 32, ReadWriteMode>
    {
    };
  };

  // Interrupt Clear-Enable Register
  struct ICER1 : Register<0xe000e184, ReadWriteMode, 0x0>
  {
    // CLRENA
    struct CLRENA : RegisterField<ICER1, 0, 32, ReadWriteMode>
    {
    };
  };

  // Interrupt Clear-Enable Register
  struct ICER2 : Register<0xe000e188, ReadWriteMode, 0x0>
  {
    // CLRENA
    struct CLRENA : RegisterField<ICER2, 0, 32, ReadWriteMode>
    {
    };
  };

  // Interrupt Set-Pending Register
  struct ISPR0 : Register<0xe000e200, ReadWriteMode, 0x0>
  {
    // SETPEND
    struct SETPEND : RegisterField<ISPR0, 0, 32, ReadWriteMode>
    {
    };
  };

  // Interrupt Set-Pending Register
  struct ISPR1 : Register<0xe000e204, ReadWriteMode, 0x0>
  {
    // SETPEND
    struct SETPEND : RegisterField<ISPR1, 0, 32, ReadWriteMode>
    {
    };
  };

  // Interrupt Set-Pending Register
  struct ISPR2 : Register<0xe000e208, ReadWriteMode, 0x0>
  {
    // SETPEND
    struct SETPEND : RegisterField<ISPR2, 0, 32, ReadWriteMode>
    {
    };
  };

  // Interrupt Clear-Pending Register
  struct ICPR0 : Register<0xe000e280, ReadWriteMode, 0x0>
  {
    // CLRPEND
    struct CLRPEND : RegisterField<ICPR0, 0, 32, ReadWriteMode>
    {
    };
  };

  // Interrupt Clear-Pending Register
  struct ICPR1 : Register<0xe000e284, ReadWriteMode, 0x0>
  {
    // CLRPEND
    struct CLRPEND : RegisterField<ICPR1, 0, 32, ReadWriteMode>
    {
    };
  };

  // Interrupt Clear-Pending Register
  struct ICPR2 : Register<0xe000e288, ReadWriteMode, 0x0>
  {
    // CLRPEND
    struct CLRPEND : RegisterField<ICPR2, 0, 32, ReadWriteMode>
    {
    };
  };

  // Interrupt Active Bit Register
  struct IABR0 : Register<0xe000e300, ReadMode, 0x0>
  {
    // ACTIVE
    struct ACTIVE : RegisterField<IABR0, 0, 32, ReadMode>
    {
    };
  };

  // Interrupt Active Bit Register
  struct IABR1 : Register<0xe000e304, ReadMode, 0x0>
  {
    // ACTIVE
    struct ACTIVE : RegisterField<IABR1, 0, 32, ReadMode>
    {
    };
  };

  // Interrupt Active Bit Register
  struct IABR2 : Register<0xe000e308, ReadMode, 0x0>
  {
    // ACTIVE
    struct ACTIVE : RegisterField<IABR2, 0, 32, ReadMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR0 : Register<0xe000e400, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR0, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR0, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR0, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR0, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR1 : Register<0xe000e404, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR1, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR1, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR1, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR1, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR2 : Register<0xe000e408, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR2, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR2, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR2, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR2, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR3 : Register<0xe000e40c, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR3, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR3, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR3, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR3, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR4 : Register<0xe000e410, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR4, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR4, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR4, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR4, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR5 : Register<0xe000e414, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR5, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR5, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR5, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR5, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR6 : Register<0xe000e418, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR6, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR6, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR6, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR6, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR7 : Register<0xe000e41c, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR7, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR7, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR7, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR7, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR8 : Register<0xe000e420, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR8, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR8, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR8, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR8, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR9 : Register<0xe000e424, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR9, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR9, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR9, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR9, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR10 : Register<0xe000e428, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR10, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR10, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR10, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR10, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR11 : Register<0xe000e42c, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR11, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR11, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR11, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR11, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR12 : Register<0xe000e430, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR12, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR12, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR12, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR12, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR13 : Register<0xe000e434, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR13, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR13, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR13, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR13, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR14 : Register<0xe000e438, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR14, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR14, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR14, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR14, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR15 : Register<0xe000e43c, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR15, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR15, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR15, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR15, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR16 : Register<0xe000e440, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR16, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR16, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR16, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR16, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR17 : Register<0xe000e444, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR17, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR17, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR17, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR17, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR18 : Register<0xe000e448, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR18, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR18, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR18, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR18, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR19 : Register<0xe000e44c, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR19, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR19, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR19, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR19, 0, 8, ReadWriteMode>
    {
    };
  };

  // Interrupt Priority Register
  struct IPR20 : Register<0xe000e450, ReadWriteMode, 0x0>
  {
    // IPR_N3
    struct IPR_N3 : RegisterField<IPR20, 24, 8, ReadWriteMode>
    {
    };
    // IPR_N2
    struct IPR_N2 : RegisterField<IPR20, 16, 8, ReadWriteMode>
    {
    };
    // IPR_N1
    struct IPR_N1 : RegisterField<IPR20, 8, 8, ReadWriteMode>
    {
    };
    // IPR_N0
    struct IPR_N0 : RegisterField<IPR20, 0, 8, ReadWriteMode>
    {
    };
  };

// Large Registers

  // Interrupt Set-Enable Register
  template<auto num>
  struct ISER_SETENA : RegisterField<Register<0xe000e100 + 4 * (num / 32), ReadWriteMode, 0x0>, 1 * (num % 32), 1, ReadWriteMode>
  {
    using Enable = FieldValue<ISER_SETENA, 1U>;
  };

  // Interrupt Clear-Enable Register
  template<auto num>
  struct ICER_CLRENA : RegisterField<Register<0xe000e180 + 4 * (num / 32), ReadWriteMode, 0x0>, 1 * (num % 32), 1, ReadWriteMode>
  {
    using Clear = FieldValue<ICER_CLRENA, 1U>;
  };

  // Interrupt Priority Register
  template<auto num>
  struct IPR : RegisterField<Register<0xe000e400 + 4 * (num / 4), ReadWriteMode, 0x0>, 8 * (num % 4), 8, ReadWriteMode>
  {
    template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 15)>>
    using Priority = FieldValue<IPR, val << 4U>;
  };

};


