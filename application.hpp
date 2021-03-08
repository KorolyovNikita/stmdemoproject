#pragma once

#include <cstring>

#include "os.hpp"
#include "exti.hpp"
#include "pin.hpp"
#include "uart.hpp"
#include "buttons.hpp"


// Exti
template <typename pin>
struct exampleLed
{
  forceinline static void Toggle() {
    pin::Toggle();
  }
  forceinline static void Handler() {
    Toggle();
  }
};



using ledPin = Pin<GPIOA, 5>;



template<class ...B>
struct buttonsHolder
{
  using Init = Pack<typename B::Init...>;
};

enum buttonsID : size_t
{
  USER_BUTTON, UP_BUTTON, DOWN_BUTTON
};

struct buttonLogger
{
  static void onEvent(size_t id, button::EventEnum event, size_t arg)
  {
    Debug.printf("ID: %d\tEvent:%d\tArg:%d\n\n\r", id, event, arg);
  }
};

namespace buttons 
{
  using namespace button;

  using userButton = Button<USER_BUTTON, Pin<GPIOC, 13>, FrontType::Inverted,
                            SetInput<ProgramDebounce, OS::tick_t<10>>,
                            buttonLogger,
                            SetMode<Mode::Press>
                            // SetMode<Mode::LongPress>
                            // SetMode<Mode::ClickCalculate>
                            >;
};

using Buttons = buttonsHolder<buttons::userButton>;

using extInterrupt5_9 = extInterrupt<>;
using extInterrupt10_15 = extInterrupt<buttons::userButton>;




struct uart2_dmaTX; 
struct uart2_dmaRX; 

struct dma1_s6 : dmaStream<DMA1, Stream6, dmaChannel<dma1_s6, 4, uart2_dmaTX>> {};
struct dma1_s5 : dmaStream<DMA1, Stream5, dmaChannel<dma1_s5, 4, uart2_dmaRX>> {};

struct uart2_dmaTX : uartTX_dma<USART2, Pin<GPIOA, 2>, dma1_s6, Channel4, dmaPriority::High, 
                     UartTransmitCompleteObservers<>> {};
struct uart2_dmaRX : uartRX_dma<USART2, Pin<GPIOA, 3>, dma1_s5, Channel4, dmaPriority::High, 
                     UartReceiveCompleteObservers<>> {};


struct uart2 : uart<USART2, 115200, uartTX_irq<USART2, Pin<GPIOA, 2>>> {};







