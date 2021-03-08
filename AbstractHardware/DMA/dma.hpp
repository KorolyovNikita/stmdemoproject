#pragma once

#define forceinline  __attribute__((always_inline)) inline

#include "dma_registers.hpp"
#include "rcc_registers.hpp"


template<typename DMA, auto stream, typename ...Channels>
struct dmaStream
{
  using DMAx = DMA;
  static constexpr auto Stream = stream;
  static constexpr bool isConfiguratable = (sizeof ...(Channels) > 1);


  using Init = typename RCC::AHB1ENR::template DMA<DMAx::periphNum - 1>::Enable;


  forceinline static void Handler()
  {
    Handler<Channels...>();
  }


  template<typename H, typename ...T>
  forceinline static void Handler()
  {
    switch (H::Handler())
    {
    case TransmitComplete:
      Status = Ready;
      break;
    default:
      if constexpr (sizeof ...(T))
        Handler<T...>();
    }
  }


  forceinline static void WaitForReady()
  {
    while(Status != Ready);
    Status = OnTransmit;
  }

  forceinline static void Reset()
  {
    DMAx::template SxCR<Stream>::EN::Disable::Set();
    Status = Ready;
  }


  enum : uint8_t {
    None, 
    Ready, 
    OnTransmit, 
    HalfTransmit,
    TransmitComplete,
    Error
  } inline static Status = Ready;
};


template<typename dmaStream, auto Channel, typename Controller>
struct dmaChannel
{
  using DMAx = typename dmaStream::DMAx;
  static constexpr auto Stream = dmaStream::Stream;

  forceinline static auto Handler() 
  {
    if(dmaStream::isConfiguratable && 
      DMAx::template SxCR<Stream>::CHSEL::Read() != Channel)
    {
      return dmaStream::None;
    }

    if(DMAx::template ISR_TCIF<Stream>::Read()) {
      DMAx::template IFCR_CTCIF<Stream>::Write();
      Controller::OnComplete();
    }
    return dmaStream::TransmitComplete;
  }
};




enum {
  Stream0,
  Stream1,
  Stream2,
  Stream3,
  Stream4,
  Stream5,
  Stream6,
  Stream7,
};

enum {
  Channel0,
  Channel1,
  Channel2,
  Channel3,
  Channel4,
  Channel5,
  Channel6,
  Channel7,
};

enum class dmaPriority
{
  Low, Medium, High, Very_high
};