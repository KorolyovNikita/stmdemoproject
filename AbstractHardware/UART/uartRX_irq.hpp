#pragma once

#define forceinline  __attribute__((always_inline)) inline

template<typename UARTx, auto bufferSize, typename Observers>
struct uartRX_irq
{
  forceinline static void ReadData(uint8_t bytesToRead) 
  {
    while(Status != Ready);
    Status = Read; 
    Size = bytesToRead; Index = 0;

    UARTx::CR1::RXNEIE::Enable::Set();
  }

  forceinline static void Handler()
  {
    if(UARTx::SR::RXNE::notEmpty::IsSet()) {
      if(Index != Size) {
        Buffer[Index++] = UARTx::DR::Get();
      }
      else {
        UARTx::CR1::RXNEIE::Disable::Set();
        Status = ReadComplete;
        Observers::OnReadComplete();
        Status = Ready;
      }
    }
  }

  using Enable = typename UARTx::CR1::TE::Enable;
  using Disable = typename UARTx::CR1::TE::Disable;
  forceinline static void EnableTX() { Enable::Set(); }
  forceinline static void DisableTX() { Disable::Set(); }

private:
  inline static uint8_t Buffer[bufferSize];
  inline static uint8_t Size;
  inline static uint8_t Index;
  enum : uint8_t
  {
    Ready, 
    Read, 
    ReadComplete
  } inline static Status = Ready;
};