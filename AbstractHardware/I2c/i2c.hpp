#pragma once

#include <math.h>
#include "i2c_registers.hpp"
#include "rcc_registers.hpp"


// #include "swo.h"
// #include "xprintf.h"
// xdev_out(SWO_PrintChar);

#define forceinline  __attribute__((always_inline)) inline

enum class i2cMode
{
  Standart,
  Fast
};

enum class i2cDirection
{
  Write,
  Read
};


template<typename I2C, i2cMode mode, typename pinSCL, typename pinSDA>
struct i2c_master
{
  using I2Cx = I2C;

  static void Start(uint8_t addr, i2cDirection direction)
  {
    Pack<
      typename I2Cx::CR1::PE::Enable,
      typename I2Cx::CR1::START::Enable
    >::Set();

    while(!I2Cx::SR1::SB::Get());
    I2Cx::SR1::Get();

    I2Cx::DR::Write((addr << 1U) | (int)direction);

    while(!I2Cx::SR1::ADDR::Get());
    I2Cx::SR1::Get();
    I2Cx::SR2::Get();
  }

  static void Stop()
  {
    I2Cx::CR1::STOP::Enable::Set();
    // while(!I2Cx::SR1::STOPF::Get());
    I2Cx::SR1::Get();
    I2Cx::SR2::Get();

  }

  forceinline static void WriteByte(const uint8_t Byte)
  {
    I2Cx::DR::Write(Byte);
    while(!I2Cx::SR1::BTF::Get());
  }

  static void WriteData(const uint8_t* pData, uint16_t bytesToSend)
  {
    while(bytesToSend--) {
      WriteByte(*(pData++));
    }
  }


  using Init = Pack<
    /*SCL*/
    typename pinSCL::BusEnable,
    typename pinSCL::MODER::Alternate,
    typename pinSCL::OSPEEDR::High,
    typename pinSCL::OTYPER::Open_drain,
    typename pinSCL::PUPDR::Pull_up,
    typename pinSCL::AFR::AF4,
    
    /*SDA*/
    typename pinSCL::BusEnable,
    typename pinSDA::MODER::Alternate,
    typename pinSDA::OSPEEDR::High,
    typename pinSDA::OTYPER::Open_drain,
    typename pinSDA::PUPDR::Pull_up,
    typename pinSDA::AFR::AF4
  >;

  constexpr static auto test()
  {
    return Init();
  }

  template<typename RCC_config>
  forceinline static void UpdateClock()
  {
    using APB1 = typename RCC_config::APB1;
    static constexpr uint32_t TPCLK1 = round(1000.0 / APB1::MHz); //ns

    static constexpr uint32_t TRISE = (mode == i2cMode::Standart) ? 
                                      (1000 / TPCLK1 + 1) :
                                      (300 / TPCLK1 + 1);

    static constexpr uint32_t Duty = (mode == i2cMode::Standart) ? 0 :
                                     (APB1::KHz / 1200) * 1200     // (2+1) * 400
                                  <= (APB1::KHz / 10000) * 10000;  // (16+9) * 400

    static constexpr uint32_t CCR = (mode == i2cMode::Standart) 
                                     ? (10000 / (2 * TPCLK1)) :
                                Duty ? (2500 / (25 * TPCLK1))
                                     : (2500 /  (3 * TPCLK1));
    Pack<
      typename I2Cx::CCR::F_S::template Value<(int)mode>,
      typename I2Cx::CCR::DUTY::template Value<Duty>,
      typename I2Cx::CCR::_CCR::template Value<CCR>
    >::Write();

    I2Cx::TRISE::Write(TRISE);
    I2Cx::CR2::FREQ::Set(APB1::MHz);
  }
};
