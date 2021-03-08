#pragma once

#include "dma.hpp"
#define forceinline  __attribute__((always_inline)) inline

template<typename UARTx, typename pin, typename dmaStream, auto channel, dmaPriority priority, 
         typename Observers>
struct uartRX_dma
{
  using RX_DMA = uartRX_dma;
  using DMAx = typename dmaStream::DMAx;
  static constexpr auto Stream = dmaStream::Stream;
  static constexpr auto Channel = channel;

  forceinline static void ReadData(uint8_t *pData, uint8_t bufferSize) 
  {
    while(Status != Ready);
    Status = Read;

    dmaStream::WaitForReady();
    if constexpr(dmaStream::isConfiguratable)
      DMAx::template SxPAR<Stream>::Write(UARTx::DR::_address);
    DMAx::template SxM0AR<Stream>::Write((uint32_t)pData);
    DMAx::template SxNDTR<Stream>::Write(bufferSize);

    dmaCR::Write();
    UARTx::SR::Get();
    UARTx::DR::Get();
  }


  forceinline static void OnComplete()
  {
    Status = Ready;
    Observers::OnComplete();

  }

  forceinline static void Handler() {
    if(UARTx::SR::IDLE::Get())
    {
      dmaStream::Reset();
    }
  }


  using dmaCR = Pack <
    typename DMAx::SxCR<Stream>::CHSEL::Channel<Channel>,
    typename DMAx::SxCR<Stream>::PL::Priority<(int)priority>,
    typename DMAx::SxCR<Stream>::DIR::peripheral_to_memory,
    typename DMAx::SxCR<Stream>::PFCTRL::DMA,
    typename DMAx::SxCR<Stream>::MINC::Incremented,
    typename DMAx::SxCR<Stream>::PINC::Fixed,
    typename DMAx::SxCR<Stream>::MSIZE::Byte,
    typename DMAx::SxCR<Stream>::PSIZE::Byte,
    typename DMAx::SxCR<Stream>::TCIE::Enable,
    typename DMAx::SxCR<Stream>::EN::Enable
  >;

  using Init = Pack <
    typename dmaStream::Init,
    typename DMAx::SxPAR<Stream>::Address<UARTx::DR::_address>,

    typename UARTx::CR1::RE::Enable, 
    typename UARTx::CR1::IDLEIE::Enable,
    typename UARTx::CR3::DMAR::Enable,

    typename RCC::AHB1ENR::GPIO<pin::port::periphNum>::Enable,
    typename pin::MODER::Alternate,
    typename pin::OSPEEDR::High,
    typename pin::PUPDR::Pull_up,
    typename pin::AFR::AF7
  >;
    


  
  enum : uint8_t
  {
    Ready, 
    Read
  } inline static Status = Ready;

};