//
// Created by Sergey on 20.10.2019.
//
#pragma once

#include "cmsis_gcc.h"  // for __STREX, __LDREX, __CLREX
#include <cstdint>      //for std::uint32_t

template <typename T>
struct AtomicUtils
{  
  static bool CompareExchange(volatile T* ptr, T oldValue, T newValue)
  {
    // эксклюзивно читаем значение переменной и сравниваем со старым значением
    if(__LDREXW(ptr) == static_cast<uint32_t>(oldValue))
    {
    // пытаемся эксклюзивно записать в переменную новое значение
      return (__STREXW(static_cast<uint32_t>(newValue), static_cast<volatile uint32_t*>(ptr)) == 0) ;
    }
    __CLREX();
    return false;
  }

  static void Set(T address, T mask, T value, T offset)
  {
    T oldRegValue ;
    T newRegValue ;

    do {
      oldRegValue = *reinterpret_cast<volatile  T*>(address);
      newRegValue = oldRegValue;
      newRegValue &= ~(mask << (offset));
      newRegValue |= (value << (offset));
    } while(!AtomicUtils<T>::CompareExchange(reinterpret_cast<volatile T *>(address),
                                             oldRegValue,
                                             newRegValue));
  }
};
