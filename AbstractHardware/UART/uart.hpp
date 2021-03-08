#pragma once

#include <math.h>

#include "uart_registers.hpp"
#include "usart_registers.hpp"

#include "uartTX_irq.hpp"
#include "uartTX_dma.hpp"
#include "uartRX_irq.hpp"
#include "uartRX_dma.hpp"

#define forceinline  __attribute__((always_inline)) inline

template<typename UARTx, auto BaudRate, typename ...Interface>
struct uart : Interface...
{
  template<typename RCC_config>
  forceinline static void UpdateClock()
  {
    static constexpr uint32_t APBx_clock = (UARTx::periphNum == 1 || UARTx::periphNum == 6) ?
                                           RCC_config::APB2::Hz : RCC_config::APB1::Hz;

    static constexpr uint32_t Mantissa = APBx_clock / (16 * BaudRate);
    static constexpr uint32_t Fraction = round(((double)APBx_clock / (16 * BaudRate) - Mantissa) * 16);

    Pack<
      typename UARTx::BRR::DIV_Mantissa::template Value<Mantissa + Fraction / 16>,
      typename UARTx::BRR::DIV_Fraction::template Value<Fraction % 16>
    >::Write();
  }



  forceinline static void Handler()
  {
    (Interface::Handler(), ...);
  }

  using Init = Pack<
    typename UARTx::CR1::UE::Enable,
    typename Interface::Init...
  >;

};





// template<typename ...Observers>
// struct UartTransmitCompleteObservers
// {
//   forceinline static void OnComplete()
//   {
//     (Observers::OnTransmitComplete(), ...);
//   }
// };

template<auto& ...Observers>
struct UartTransmitCompleteObservers
{
  forceinline static void OnComplete()
  {
    (Observers.OnTransmitComplete(), ...);
  }
};

template<typename ...Observers>
struct UartReceiveCompleteObservers
{
  forceinline static void OnComplete()
  {
    (Observers::OnReceiveComplete(), ...);
  }
};

