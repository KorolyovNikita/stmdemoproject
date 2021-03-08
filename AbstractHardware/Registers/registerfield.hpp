/*
Based on CortexLib by Lamer0k https://github.com/lamer0k/CortexLib
Created by Korolyov Nikita on 28.08.2020
https://github.com/KorolyovNikita
*/

#pragma once

#include <cassert>
#include <limits>
#include "register.hpp"



template<typename Reg, size_t offset, size_t size, typename AccessMode>
struct RegisterField
{
  using _access = AccessMode;
  using _register = Reg;

	static constexpr size_t _offset = offset;
	static constexpr size_t _size = size;
	static constexpr size_t _mask = (size < sizeof(size_t) * 8U) ? 
								 (static_cast<size_t>((static_cast<size_t>(1U) << size) 
								 - static_cast<size_t>(1U))) : 
								 std::numeric_limits<size_t>::max();


  template<typename T = AccessMode,
  class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value || 
                                    std::is_base_of<ReadWriteMode, T>::value >>
	forceinline static void Set(size_t value = 1U)
	{
		size_t newRegValue = *reinterpret_cast<volatile size_t*>(Reg::_address);
		newRegValue &= ~(_mask << _offset);
		newRegValue |= (value << _offset);

		*reinterpret_cast<volatile size_t*>(Reg::_address) = newRegValue;
	}


  template<typename T = AccessMode,
  class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value || 
                                    std::is_base_of<ReadWriteMode, T>::value >>
  forceinline static void Write(size_t value = 1U)
	{
		*reinterpret_cast<volatile size_t*>(Reg::_address) = (value << _offset);
	}


	template<typename T = AccessMode,
  class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value || 
                                    std::is_base_of<ReadWriteMode, T>::value >>
	forceinline static void Toggle()
	{
		size_t newRegValue = *reinterpret_cast<volatile size_t*>(Reg::_address);
		newRegValue ^= (_mask << _offset);

		*reinterpret_cast<volatile size_t*>(Reg::_address) = newRegValue;
	}


	template<typename T = AccessMode,
  class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value || 
                                    std::is_base_of<ReadWriteMode, T>::value >>
	forceinline static void Reset()
	{
		size_t newRegValue = *reinterpret_cast<volatile size_t *>(Reg::_address);
		newRegValue &= ~(_mask << _offset);

		*reinterpret_cast<volatile size_t*>(Reg::_address) = newRegValue;
	}


  template<typename T = AccessMode,
  class = typename std::enable_if_t<std::is_base_of<ReadMode, T>::value || 
                                    std::is_base_of<ReadWriteMode, T>::value >>
	forceinline static size_t Read()
	{
		return ((*reinterpret_cast<volatile size_t*>(Reg::_address)) 
						& (_mask << _offset)) >> _offset;
	}
};

