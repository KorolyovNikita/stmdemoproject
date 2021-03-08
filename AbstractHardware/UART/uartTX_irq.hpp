#pragma once

#include <stdarg.h>
#include "xprintf.hpp"
#include "rcc_registers.hpp"

#define forceinline  __attribute__((always_inline)) inline

template<typename UARTx, typename pin>
struct uartTX_irq
{
  forceinline static void WriteByte(const uint8_t Byte) 
  {
    semaphore.Take();
    Size = 0; Index = 0;

    UARTx::CR1::TXEIE::Enable::Set();
    UARTx::DR::Write(Byte);
  }

  forceinline static void WriteData(uint8_t *pData, uint8_t bytesToSend) 
  {
    semaphore.Take();
    p_Data = pData; 
    Size = bytesToSend; 
    Index = 0;

    UARTx::CR1::TXEIE::Enable::Set();
    UARTx::DR::Write(p_Data[Index]);
  }

  forceinline static void Handler()
  {
    if(UARTx::SR::TXE::Empty::IsSet()) {
      if(Index != Size)
        UARTx::DR::Write(p_Data[++Index]);
      else {
        semaphore.Give();
        UARTx::CR1::TXEIE::Disable::Set();
      }
    }
  }


  using Init = Pack<
  typename UARTx::CR1::TE::Enable,
  
  typename RCC::AHB1ENR::template GPIO<pin::port::periphNum>::Enable,
  typename pin::MODER::Alternate,
  typename pin::OSPEEDR::High,
  typename pin::PUPDR::Pull_up,
  typename pin::AFR::AF7>;

private:
  inline static uint8_t *p_Data;
  inline static uint8_t Size;
  inline static uint8_t Index;
  inline static OS::Semaphore semaphore;
};