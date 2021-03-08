/******************************************************************************
* Filename : exti_registers.hpp
*
* Details  : External interrupt/event controller
*            This header file is auto-generated for STM32F446 device.
******************************************************************************/
#pragma once

#include "fieldvalue.hpp"
struct EXTI
{
  // Interrupt mask register (EXTI_IMR)
  struct IMR : Register<0x40013c00, ReadWriteMode, 0x0>
  {
    // Interrupt Mask on line 22
    struct MR22 : RegisterField<IMR, 22, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR22, 0U>;
      using Enable = FieldValue<MR22, 1U>;
    };
    // Interrupt Mask on line 21
    struct MR21 : RegisterField<IMR, 21, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR21, 0U>;
      using Enable = FieldValue<MR21, 1U>;
    };
    // Interrupt Mask on line 20
    struct MR20 : RegisterField<IMR, 20, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR20, 0U>;
      using Enable = FieldValue<MR20, 1U>;
    };
    // Interrupt Mask on line 19
    struct MR19 : RegisterField<IMR, 19, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR19, 0U>;
      using Enable = FieldValue<MR19, 1U>;
    };
    // Interrupt Mask on line 18
    struct MR18 : RegisterField<IMR, 18, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR18, 0U>;
      using Enable = FieldValue<MR18, 1U>;
    };
    // Interrupt Mask on line 17
    struct MR17 : RegisterField<IMR, 17, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR17, 0U>;
      using Enable = FieldValue<MR17, 1U>;
    };
    // Interrupt Mask on line 16
    struct MR16 : RegisterField<IMR, 16, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR16, 0U>;
      using Enable = FieldValue<MR16, 1U>;
    };
    // Interrupt Mask on line 15
    struct MR15 : RegisterField<IMR, 15, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR15, 0U>;
      using Enable = FieldValue<MR15, 1U>;
    };
    // Interrupt Mask on line 14
    struct MR14 : RegisterField<IMR, 14, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR14, 0U>;
      using Enable = FieldValue<MR14, 1U>;
    };
    // Interrupt Mask on line 13
    struct MR13 : RegisterField<IMR, 13, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR13, 0U>;
      using Enable = FieldValue<MR13, 1U>;
    };
    // Interrupt Mask on line 12
    struct MR12 : RegisterField<IMR, 12, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR12, 0U>;
      using Enable = FieldValue<MR12, 1U>;
    };
    // Interrupt Mask on line 11
    struct MR11 : RegisterField<IMR, 11, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR11, 0U>;
      using Enable = FieldValue<MR11, 1U>;
    };
    // Interrupt Mask on line 10
    struct MR10 : RegisterField<IMR, 10, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR10, 0U>;
      using Enable = FieldValue<MR10, 1U>;
    };
    // Interrupt Mask on line 9
    struct MR9 : RegisterField<IMR, 9, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR9, 0U>;
      using Enable = FieldValue<MR9, 1U>;
    };
    // Interrupt Mask on line 8
    struct MR8 : RegisterField<IMR, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR8, 0U>;
      using Enable = FieldValue<MR8, 1U>;
    };
    // Interrupt Mask on line 7
    struct MR7 : RegisterField<IMR, 7, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR7, 0U>;
      using Enable = FieldValue<MR7, 1U>;
    };
    // Interrupt Mask on line 6
    struct MR6 : RegisterField<IMR, 6, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR6, 0U>;
      using Enable = FieldValue<MR6, 1U>;
    };
    // Interrupt Mask on line 5
    struct MR5 : RegisterField<IMR, 5, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR5, 0U>;
      using Enable = FieldValue<MR5, 1U>;
    };
    // Interrupt Mask on line 4
    struct MR4 : RegisterField<IMR, 4, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR4, 0U>;
      using Enable = FieldValue<MR4, 1U>;
    };
    // Interrupt Mask on line 3
    struct MR3 : RegisterField<IMR, 3, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR3, 0U>;
      using Enable = FieldValue<MR3, 1U>;
    };
    // Interrupt Mask on line 2
    struct MR2 : RegisterField<IMR, 2, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR2, 0U>;
      using Enable = FieldValue<MR2, 1U>;
    };
    // Interrupt Mask on line 1
    struct MR1 : RegisterField<IMR, 1, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR1, 0U>;
      using Enable = FieldValue<MR1, 1U>;
    };
    // Interrupt Mask on line 0
    struct MR0 : RegisterField<IMR, 0, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR0, 0U>;
      using Enable = FieldValue<MR0, 1U>;
    };
    // Interrupt Mask on line 0
    template<auto num>
    struct MRx : RegisterField<IMR, 0 + 1 * num, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MRx, 0U>;
      using Enable = FieldValue<MRx, 1U>;
    };
  };

  // Event mask register (EXTI_EMR)
  struct EMR : Register<0x40013c04, ReadWriteMode, 0x0>
  {
    // Event Mask on line 22
    struct MR22 : RegisterField<EMR, 22, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR22, 0U>;
      using Enable = FieldValue<MR22, 1U>;
    };
    // Event Mask on line 21
    struct MR21 : RegisterField<EMR, 21, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR21, 0U>;
      using Enable = FieldValue<MR21, 1U>;
    };
    // Event Mask on line 20
    struct MR20 : RegisterField<EMR, 20, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR20, 0U>;
      using Enable = FieldValue<MR20, 1U>;
    };
    // Event Mask on line 19
    struct MR19 : RegisterField<EMR, 19, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR19, 0U>;
      using Enable = FieldValue<MR19, 1U>;
    };
    // Event Mask on line 18
    struct MR18 : RegisterField<EMR, 18, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR18, 0U>;
      using Enable = FieldValue<MR18, 1U>;
    };
    // Event Mask on line 17
    struct MR17 : RegisterField<EMR, 17, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR17, 0U>;
      using Enable = FieldValue<MR17, 1U>;
    };
    // Event Mask on line 16
    struct MR16 : RegisterField<EMR, 16, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR16, 0U>;
      using Enable = FieldValue<MR16, 1U>;
    };
    // Event Mask on line 15
    struct MR15 : RegisterField<EMR, 15, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR15, 0U>;
      using Enable = FieldValue<MR15, 1U>;
    };
    // Event Mask on line 14
    struct MR14 : RegisterField<EMR, 14, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR14, 0U>;
      using Enable = FieldValue<MR14, 1U>;
    };
    // Event Mask on line 13
    struct MR13 : RegisterField<EMR, 13, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR13, 0U>;
      using Enable = FieldValue<MR13, 1U>;
    };
    // Event Mask on line 12
    struct MR12 : RegisterField<EMR, 12, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR12, 0U>;
      using Enable = FieldValue<MR12, 1U>;
    };
    // Event Mask on line 11
    struct MR11 : RegisterField<EMR, 11, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR11, 0U>;
      using Enable = FieldValue<MR11, 1U>;
    };
    // Event Mask on line 10
    struct MR10 : RegisterField<EMR, 10, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR10, 0U>;
      using Enable = FieldValue<MR10, 1U>;
    };
    // Event Mask on line 9
    struct MR9 : RegisterField<EMR, 9, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR9, 0U>;
      using Enable = FieldValue<MR9, 1U>;
    };
    // Event Mask on line 8
    struct MR8 : RegisterField<EMR, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR8, 0U>;
      using Enable = FieldValue<MR8, 1U>;
    };
    // Event Mask on line 7
    struct MR7 : RegisterField<EMR, 7, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR7, 0U>;
      using Enable = FieldValue<MR7, 1U>;
    };
    // Event Mask on line 6
    struct MR6 : RegisterField<EMR, 6, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR6, 0U>;
      using Enable = FieldValue<MR6, 1U>;
    };
    // Event Mask on line 5
    struct MR5 : RegisterField<EMR, 5, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR5, 0U>;
      using Enable = FieldValue<MR5, 1U>;
    };
    // Event Mask on line 4
    struct MR4 : RegisterField<EMR, 4, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR4, 0U>;
      using Enable = FieldValue<MR4, 1U>;
    };
    // Event Mask on line 3
    struct MR3 : RegisterField<EMR, 3, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR3, 0U>;
      using Enable = FieldValue<MR3, 1U>;
    };
    // Event Mask on line 2
    struct MR2 : RegisterField<EMR, 2, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR2, 0U>;
      using Enable = FieldValue<MR2, 1U>;
    };
    // Event Mask on line 1
    struct MR1 : RegisterField<EMR, 1, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR1, 0U>;
      using Enable = FieldValue<MR1, 1U>;
    };
    // Event Mask on line 0
    struct MR0 : RegisterField<EMR, 0, 1, ReadWriteMode>
    {
      using Disable = FieldValue<MR0, 0U>;
      using Enable = FieldValue<MR0, 1U>;
    };
  };

  // Rising Trigger selection register (EXTI_RTSR)
  struct RTSR : Register<0x40013c08, ReadWriteMode, 0x0>
  {
    // Rising trigger event configuration of line 22
    struct TR22 : RegisterField<RTSR, 22, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR22, 0U>;
      using Enable = FieldValue<TR22, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR22, val>;
    };
    // Rising trigger event configuration of line 21
    struct TR21 : RegisterField<RTSR, 21, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR21, 0U>;
      using Enable = FieldValue<TR21, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR21, val>;
    };
    // Rising trigger event configuration of line 20
    struct TR20 : RegisterField<RTSR, 20, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR20, 0U>;
      using Enable = FieldValue<TR20, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR20, val>;
    };
    // Rising trigger event configuration of line 19
    struct TR19 : RegisterField<RTSR, 19, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR19, 0U>;
      using Enable = FieldValue<TR19, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR19, val>;
    };
    // Rising trigger event configuration of line 18
    struct TR18 : RegisterField<RTSR, 18, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR18, 0U>;
      using Enable = FieldValue<TR18, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR18, val>;
    };
    // Rising trigger event configuration of line 17
    struct TR17 : RegisterField<RTSR, 17, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR17, 0U>;
      using Enable = FieldValue<TR17, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR17, val>;
    };
    // Rising trigger event configuration of line 16
    struct TR16 : RegisterField<RTSR, 16, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR16, 0U>;
      using Enable = FieldValue<TR16, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR16, val>;
    };
    // Rising trigger event configuration of line 15
    struct TR15 : RegisterField<RTSR, 15, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR15, 0U>;
      using Enable = FieldValue<TR15, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR15, val>;
    };
    // Rising trigger event configuration of line 14
    struct TR14 : RegisterField<RTSR, 14, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR14, 0U>;
      using Enable = FieldValue<TR14, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR14, val>;
    };
    // Rising trigger event configuration of line 13
    struct TR13 : RegisterField<RTSR, 13, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR13, 0U>;
      using Enable = FieldValue<TR13, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR13, val>;
    };
    // Rising trigger event configuration of line 12
    struct TR12 : RegisterField<RTSR, 12, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR12, 0U>;
      using Enable = FieldValue<TR12, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR12, val>;
    };
    // Rising trigger event configuration of line 11
    struct TR11 : RegisterField<RTSR, 11, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR11, 0U>;
      using Enable = FieldValue<TR11, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR11, val>;
    };
    // Rising trigger event configuration of line 10
    struct TR10 : RegisterField<RTSR, 10, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR10, 0U>;
      using Enable = FieldValue<TR10, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR10, val>;
    };
    // Rising trigger event configuration of line 9
    struct TR9 : RegisterField<RTSR, 9, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR9, 0U>;
      using Enable = FieldValue<TR9, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR9, val>;
    };
    // Rising trigger event configuration of line 8
    struct TR8 : RegisterField<RTSR, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR8, 0U>;
      using Enable = FieldValue<TR8, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR8, val>;
    };
    // Rising trigger event configuration of line 7
    struct TR7 : RegisterField<RTSR, 7, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR7, 0U>;
      using Enable = FieldValue<TR7, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR7, val>;
    };
    // Rising trigger event configuration of line 6
    struct TR6 : RegisterField<RTSR, 6, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR6, 0U>;
      using Enable = FieldValue<TR6, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR6, val>;
    };
    // Rising trigger event configuration of line 5
    struct TR5 : RegisterField<RTSR, 5, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR5, 0U>;
      using Enable = FieldValue<TR5, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR5, val>;
    };
    // Rising trigger event configuration of line 4
    struct TR4 : RegisterField<RTSR, 4, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR4, 0U>;
      using Enable = FieldValue<TR4, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR4, val>;
    };
    // Rising trigger event configuration of line 3
    struct TR3 : RegisterField<RTSR, 3, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR3, 0U>;
      using Enable = FieldValue<TR3, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR3, val>;
    };
    // Rising trigger event configuration of line 2
    struct TR2 : RegisterField<RTSR, 2, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR2, 0U>;
      using Enable = FieldValue<TR2, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR2, val>;
    };
    // Rising trigger event configuration of line 1
    struct TR1 : RegisterField<RTSR, 1, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR1, 0U>;
      using Enable = FieldValue<TR1, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR1, val>;
    };
    // Rising trigger event configuration of line 0
    struct TR0 : RegisterField<RTSR, 0, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR0, 0U>;
      using Enable = FieldValue<TR0, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR0, val>;
    };
    // Rising trigger event configuration of line 0
    template<auto num>
    struct TRx : RegisterField<RTSR, 0 + 1 * num, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TRx, 0U>;
      using Enable = FieldValue<TRx, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TRx, val>;
    };
  };

  // Falling Trigger selection register (EXTI_FTSR)
  struct FTSR : Register<0x40013c0c, ReadWriteMode, 0x0>
  {
    // Falling trigger event configuration of line 22
    struct TR22 : RegisterField<FTSR, 22, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR22, 0U>;
      using Enable = FieldValue<TR22, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR22, val>;
    };
    // Falling trigger event configuration of line 21
    struct TR21 : RegisterField<FTSR, 21, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR21, 0U>;
      using Enable = FieldValue<TR21, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR21, val>;
    };
    // Falling trigger event configuration of line 20
    struct TR20 : RegisterField<FTSR, 20, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR20, 0U>;
      using Enable = FieldValue<TR20, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR20, val>;
    };
    // Falling trigger event configuration of line 19
    struct TR19 : RegisterField<FTSR, 19, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR19, 0U>;
      using Enable = FieldValue<TR19, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR19, val>;
    };
    // Falling trigger event configuration of line 18
    struct TR18 : RegisterField<FTSR, 18, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR18, 0U>;
      using Enable = FieldValue<TR18, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR18, val>;
    };
    // Falling trigger event configuration of line 17
    struct TR17 : RegisterField<FTSR, 17, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR17, 0U>;
      using Enable = FieldValue<TR17, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR17, val>;
    };
    // Falling trigger event configuration of line 16
    struct TR16 : RegisterField<FTSR, 16, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR16, 0U>;
      using Enable = FieldValue<TR16, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR16, val>;
    };
    // Falling trigger event configuration of line 15
    struct TR15 : RegisterField<FTSR, 15, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR15, 0U>;
      using Enable = FieldValue<TR15, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR15, val>;
    };
    // Falling trigger event configuration of line 14
    struct TR14 : RegisterField<FTSR, 14, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR14, 0U>;
      using Enable = FieldValue<TR14, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR14, val>;
    };
    // Falling trigger event configuration of line 13
    struct TR13 : RegisterField<FTSR, 13, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR13, 0U>;
      using Enable = FieldValue<TR13, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR13, val>;
    };
    // Falling trigger event configuration of line 12
    struct TR12 : RegisterField<FTSR, 12, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR12, 0U>;
      using Enable = FieldValue<TR12, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR12, val>;
    };
    // Falling trigger event configuration of line 11
    struct TR11 : RegisterField<FTSR, 11, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR11, 0U>;
      using Enable = FieldValue<TR11, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR11, val>;
    };
    // Falling trigger event configuration of line 10
    struct TR10 : RegisterField<FTSR, 10, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR10, 0U>;
      using Enable = FieldValue<TR10, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR10, val>;
    };
    // Falling trigger event configuration of line 9
    struct TR9 : RegisterField<FTSR, 9, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR9, 0U>;
      using Enable = FieldValue<TR9, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR9, val>;
    };
    // Falling trigger event configuration of line 8
    struct TR8 : RegisterField<FTSR, 8, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR8, 0U>;
      using Enable = FieldValue<TR8, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR8, val>;
    };
    // Falling trigger event configuration of line 7
    struct TR7 : RegisterField<FTSR, 7, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR7, 0U>;
      using Enable = FieldValue<TR7, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR7, val>;
    };
    // Falling trigger event configuration of line 6
    struct TR6 : RegisterField<FTSR, 6, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR6, 0U>;
      using Enable = FieldValue<TR6, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR6, val>;
    };
    // Falling trigger event configuration of line 5
    struct TR5 : RegisterField<FTSR, 5, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR5, 0U>;
      using Enable = FieldValue<TR5, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR5, val>;
    };
    // Falling trigger event configuration of line 4
    struct TR4 : RegisterField<FTSR, 4, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR4, 0U>;
      using Enable = FieldValue<TR4, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR4, val>;
    };
    // Falling trigger event configuration of line 3
    struct TR3 : RegisterField<FTSR, 3, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR3, 0U>;
      using Enable = FieldValue<TR3, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR3, val>;
    };
    // Falling trigger event configuration of line 2
    struct TR2 : RegisterField<FTSR, 2, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR2, 0U>;
      using Enable = FieldValue<TR2, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR2, val>;
    };
    // Falling trigger event configuration of line 1
    struct TR1 : RegisterField<FTSR, 1, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR1, 0U>;
      using Enable = FieldValue<TR1, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR1, val>;
    };
    // Falling trigger event configuration of line 0
    struct TR0 : RegisterField<FTSR, 0, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TR0, 0U>;
      using Enable = FieldValue<TR0, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TR0, val>;
    };
    // Falling trigger event configuration of line 0
    template<auto num>
    struct TRx : RegisterField<FTSR, 0 + 1 * num, 1, ReadWriteMode>
    {
      using Disable = FieldValue<TRx, 0U>;
      using Enable = FieldValue<TRx, 1U>;
      template<auto val, class = typename std::enable_if_t<(val >= 0 && val <= 1)>>
      using Value = FieldValue<TRx, val>;
    };
  };

  // Software interrupt event register (EXTI_SWIER)
  struct SWIER : Register<0x40013c10, ReadWriteMode, 0x0>
  {
    // Software Interrupt on line 22
    struct SWIER22 : RegisterField<SWIER, 22, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 21
    struct SWIER21 : RegisterField<SWIER, 21, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 20
    struct SWIER20 : RegisterField<SWIER, 20, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 19
    struct SWIER19 : RegisterField<SWIER, 19, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 18
    struct SWIER18 : RegisterField<SWIER, 18, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 17
    struct SWIER17 : RegisterField<SWIER, 17, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 16
    struct SWIER16 : RegisterField<SWIER, 16, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 15
    struct SWIER15 : RegisterField<SWIER, 15, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 14
    struct SWIER14 : RegisterField<SWIER, 14, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 13
    struct SWIER13 : RegisterField<SWIER, 13, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 12
    struct SWIER12 : RegisterField<SWIER, 12, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 11
    struct SWIER11 : RegisterField<SWIER, 11, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 10
    struct SWIER10 : RegisterField<SWIER, 10, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 9
    struct SWIER9 : RegisterField<SWIER, 9, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 8
    struct SWIER8 : RegisterField<SWIER, 8, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 7
    struct SWIER7 : RegisterField<SWIER, 7, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 6
    struct SWIER6 : RegisterField<SWIER, 6, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 5
    struct SWIER5 : RegisterField<SWIER, 5, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 4
    struct SWIER4 : RegisterField<SWIER, 4, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 3
    struct SWIER3 : RegisterField<SWIER, 3, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 2
    struct SWIER2 : RegisterField<SWIER, 2, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 1
    struct SWIER1 : RegisterField<SWIER, 1, 1, ReadWriteMode>
    {
    };
    // Software Interrupt on line 0
    struct SWIER0 : RegisterField<SWIER, 0, 1, ReadWriteMode>
    {
    };
  };

  // Pending register (EXTI_PR)
  struct PR : Register<0x40013c14, ReadWriteMode, 0x0>
  {
    // Pending bit 22
    struct PR22 : RegisterField<PR, 22, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR22, 1U>;
    };
    // Pending bit 21
    struct PR21 : RegisterField<PR, 21, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR21, 1U>;
    };
    // Pending bit 20
    struct PR20 : RegisterField<PR, 20, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR20, 1U>;
    };
    // Pending bit 19
    struct PR19 : RegisterField<PR, 19, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR19, 1U>;
    };
    // Pending bit 18
    struct PR18 : RegisterField<PR, 18, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR18, 1U>;
    };
    // Pending bit 17
    struct PR17 : RegisterField<PR, 17, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR17, 1U>;
    };
    // Pending bit 16
    struct PR16 : RegisterField<PR, 16, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR16, 1U>;
    };
    // Pending bit 15
    struct PR15 : RegisterField<PR, 15, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR15, 1U>;
    };
    // Pending bit 14
    struct PR14 : RegisterField<PR, 14, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR14, 1U>;
    };
    // Pending bit 13
    struct PR13 : RegisterField<PR, 13, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR13, 1U>;
    };
    // Pending bit 12
    struct PR12 : RegisterField<PR, 12, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR12, 1U>;
    };
    // Pending bit 11
    struct PR11 : RegisterField<PR, 11, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR11, 1U>;
    };
    // Pending bit 10
    struct PR10 : RegisterField<PR, 10, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR10, 1U>;
    };
    // Pending bit 9
    struct PR9 : RegisterField<PR, 9, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR9, 1U>;
    };
    // Pending bit 8
    struct PR8 : RegisterField<PR, 8, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR8, 1U>;
    };
    // Pending bit 7
    struct PR7 : RegisterField<PR, 7, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR7, 1U>;
    };
    // Pending bit 6
    struct PR6 : RegisterField<PR, 6, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR6, 1U>;
    };
    // Pending bit 5
    struct PR5 : RegisterField<PR, 5, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR5, 1U>;
    };
    // Pending bit 4
    struct PR4 : RegisterField<PR, 4, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR4, 1U>;
    };
    // Pending bit 3
    struct PR3 : RegisterField<PR, 3, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR3, 1U>;
    };
    // Pending bit 2
    struct PR2 : RegisterField<PR, 2, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR2, 1U>;
    };
    // Pending bit 1
    struct PR1 : RegisterField<PR, 1, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR1, 1U>;
    };
    // Pending bit 0
    struct PR0 : RegisterField<PR, 0, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PR0, 1U>;
    };
    // Pending bit 0
    template<auto num>
    struct PRx : RegisterField<PR, 0 + 1 * num, 1, ReadWriteMode>
    {
      using Clear = FieldValue<PRx, 1U>;
    };
  };

// Large Registers

};


