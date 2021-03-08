/*
Based on CortexLib by Lamer0k https://github.com/lamer0k/CortexLib
Created by Korolyov Nikita on 3.11.2020
https://github.com/KorolyovNikita
*/

#pragma once

#include <cstdint>
#include <type_traits>
#include "atomicutils.hpp"
#include "gpio_registers.hpp"
#include "rcc_registers.hpp"


struct PinConfigurable {};
struct PinReadable {};
struct PinWriteable {};
struct PinReadableConfigurable : PinReadable, PinConfigurable {};
struct PinWriteableConfigurable : PinWriteable, PinConfigurable {};
struct PinAlmighty : PinReadableConfigurable, PinWriteableConfigurable {};

template<typename Port, uint32_t PinNum, typename Interface = PinAlmighty,
				 class = typename std::enable_if_t<PinNum <= 15U>>
struct Pin
{
	using port = Port;
	static constexpr uint32_t pinNum = PinNum;

	using BusEnable = typename RCC::AHB1ENR::GPIO<port::periphNum>::Enable;
	using MODER     = typename Port::MODER::MODERx<pinNum>;
	using OSPEEDR   = typename Port::OSPEEDR::OSPEEDRx<pinNum>;
	using OTYPER    = typename Port::OTYPER::OTx<pinNum>;
	using PUPDR     = typename Port::PUPDR::PUPDRx<pinNum>;
	using AFR       = typename Port::AFR_AF<pinNum>;

	template<typename T = Interface, 
		class = typename std::enable_if_t<std::is_base_of<PinWriteable, T>::value>>
	forceinline static void Set()
	{
		Port::BSRR::Write(1U << pinNum);
	}

	template<typename T = Interface, 
		class = typename std::enable_if_t<std::is_base_of<PinWriteable, T>::value>>
	forceinline static void Reset()
	{
		Port::BSRR::Write(1U << (pinNum + 16));
	}

	template<typename T = Interface, 
		class = typename std::enable_if_t<std::is_base_of<PinWriteable, T>::value>>
	forceinline static void Toggle()
	{
		Port::ODR::Toggle(1U << pinNum);
	}

	template<typename T = Interface, 
		class = typename std::enable_if_t<std::is_base_of<PinReadable, T>::value ||
																			std::is_base_of<PinWriteable, T>::value>>
forceinline static bool Read()
	{
		return (Port::IDR::Read() & (1U << pinNum)) != 0;
	}




	template<typename T = Interface, 
		class = typename std::enable_if_t<std::is_same<PinConfigurable, T>::value>>
	forceinline static void SetAnalog()
	{
		using RegType = typename Port::MODER::_type;

    AtomicUtils<RegType>::Set(Port::MODER::_address,
            									Port::MODER::MODER0::Analog::_mask,
            									Port::MODER::MODER0::Analog::_value,
            									static_cast<RegType>(pinNum * uint8_t{2U})
            									);
	}

	template<typename T = Interface, 
		class = typename std::enable_if_t<std::is_base_of<PinConfigurable, T>::value>>
	forceinline static void SetInput()
	{
		using RegType = typename Port::MODER::_type;

		AtomicUtils<RegType>::Set(Port::MODER::_address,
															Port::MODER::MODER0::Input::_mask,
															Port::MODER::MODER0::Input::_value,
															static_cast<RegType>(pinNum * uint8_t{2U})
															);
	}

	template<typename T = Interface, 
		class = typename std::enable_if_t<std::is_base_of<PinConfigurable, T>::value>>
	forceinline static void SetOutput()
	{
		using RegType = typename Port::MODER::_type;

		AtomicUtils<RegType>::Set(Port::MODER::_address,
															Port::MODER::MODER0::Output::_mask,
															Port::MODER::MODER0::Output::_value,
															static_cast<RegType>(pinNum * uint8_t{2U})
															);
	}

	template<typename T = Interface, 
		class = typename std::enable_if_t<std::is_base_of<PinConfigurable, T>::value>>
	forceinline static void SetAlternate()
	{
		using RegType = typename Port::MODER::_type;

		AtomicUtils<RegType>::Set(Port::MODER::_address,
															Port::MODER::MODER0::Alternate::_mask,
															Port::MODER::MODER0::Alternate::_value,
															static_cast<RegType>(pinNum * uint8_t{2U})
															);
	}
};
