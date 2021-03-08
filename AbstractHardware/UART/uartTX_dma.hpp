#pragma once

#include "os.hpp"
#include "dma.hpp"

template<typename UARTx, typename pin, typename dmaStream, auto channel, dmaPriority priority, 
         typename Observers>
struct uartTX_dma
{
  using TX_DMA = uartTX_dma;
  using DMAx = typename dmaStream::DMAx;
  static constexpr auto Stream = dmaStream::Stream;
  static constexpr auto Channel = channel;
  static constexpr auto dmaPriority = (int)priority;


  forceinline static void WriteData(uint8_t const *pData, uint8_t bytesToSend)
  {
    semaphore.Take();

    dmaStream::WaitForReady();
    if constexpr(dmaStream::isConfiguratable)
      DMAx::template SxPAR<Stream>::Write(UARTx::DR::_address);
    DMAx::template SxM0AR<Stream>::Write((uint32_t)pData);
    DMAx::template SxNDTR<Stream>::Write(bytesToSend);
    dmaCR::Write();
  }


  forceinline static void OnComplete()
  {
    semaphore.Give();
    Observers::OnComplete();
  }

  forceinline static void Handler() {}



  using dmaCR = Pack<
    typename DMAx::SxCR<Stream>::CHSEL::Channel<Channel>,
    typename DMAx::SxCR<Stream>::PL::Priority<dmaPriority>,
    typename DMAx::SxCR<Stream>::DIR::memory_to_peripheral,
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
    typename DMAx::template SxPAR<Stream>::template Address<UARTx::DR::_address>,

    typename UARTx::CR1::TE::Enable, 
    typename UARTx::CR3::DMAT::Enable,

    typename RCC::AHB1ENR::template GPIO<pin::port::periphNum>::Enable,
    typename pin::MODER::Alternate,
    typename pin::OSPEEDR::High,
    typename pin::PUPDR::Pull_up,
    typename pin::AFR::AF7
  >;

  static inline OS::Semaphore semaphore;
};