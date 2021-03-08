/*
Based on CortexLib by Lamer0k https://github.com/lamer0k/CortexLib
Created by Korolyov Nikita on 28.08.2020
https://github.com/KorolyovNikita
*/

#pragma once

#include <cstddef>
#include <cstdint>
#include <type_traits>

#include "accessmode.hpp"
#include "pack.hpp"

#define forceinline  __attribute__((always_inline)) inline


template<std::uintptr_t address, typename AccessMode, size_t resetvalue>
struct Register
{
  static constexpr auto _address = address;
  static constexpr auto _resetValue = resetvalue;
  
  template<typename T = AccessMode,
  class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value || 
                                    std::is_base_of<ReadWriteMode, T>::value >>
  forceinline static void Write(size_t value)
  {
    *reinterpret_cast<volatile size_t *>(_address) = value;
  }

  template<typename T = AccessMode,
  class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value || 
                                    std::is_base_of<ReadWriteMode, T>::value >>
  forceinline static void Reset()
  {
    *reinterpret_cast<volatile size_t *>(_address) = 0;
  }

  template<typename T = AccessMode,
  class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value || 
                                    std::is_base_of<ReadWriteMode, T>::value >>
  forceinline static void Set(size_t value)
  {
    size_t oldRegValue = *reinterpret_cast<volatile size_t *>(_address);
    *reinterpret_cast<volatile size_t *>(_address) = oldRegValue | value;
  }

  template<typename T = AccessMode,
  class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value || 
                                    std::is_base_of<ReadWriteMode, T>::value >>
  forceinline static void Toggle(size_t value)
  {
    *reinterpret_cast<size_t *>(_address) ^= value;
  }

  template<typename T = AccessMode,
  class = typename std::enable_if_t<std::is_base_of<ReadMode, T>::value || 
                                    std::is_base_of<ReadWriteMode, T>::value >>
  forceinline static size_t Read()
  {
    return *reinterpret_cast<volatile size_t *>(_address);
  }
};