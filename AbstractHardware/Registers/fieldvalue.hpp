/*
Based on CortexLib by Lamer0k https://github.com/lamer0k/CortexLib
Created by Korolyov Nikita on 28.08.2020
https://github.com/KorolyovNikita
*/

#pragma once

#include "registerfield.hpp"

template<typename Field, size_t value>
struct FieldValue
{
  using Type = FieldValue;
  using _register = typename Field::_register;

  constexpr static auto _address = Field::_register::_address;
	constexpr static auto _mask = Field::_mask;
	constexpr static auto _offset = Field::_offset;
	constexpr static auto _value = value;


  template<typename T = typename Field::_access,
  class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value || 
                                    std::is_base_of<ReadWriteMode, T>::value >>
  forceinline static void Set()
  {
    size_t newRegValue = *reinterpret_cast<volatile size_t *>(_address); 
    
    newRegValue &= ~(Field::_mask << Field::_offset); 
    newRegValue |= (_value << Field::_offset); 
    
    *reinterpret_cast<volatile size_t *>(_address) = newRegValue; 
  }

  template<typename T = typename Field::_access,
  class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value || 
                                    std::is_base_of<ReadWriteMode, T>::value >>
  forceinline static void Write()
  {
    *reinterpret_cast<volatile size_t *>(_address) = (_value << Field::_offset);
  }
  
  
  template<typename T = typename Field::_access,
  class = typename std::enable_if_t<std::is_base_of<ReadMode, T>::value || 
                                    std::is_base_of<ReadWriteMode, T>::value >>
  forceinline static bool IsSet()
  {
    return ((*reinterpret_cast<volatile size_t *>(_address)) &
              static_cast<size_t>(Field::_mask << Field::_offset)) == (_value << Field::_offset);
  }
};
