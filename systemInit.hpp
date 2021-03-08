#include "application.hpp"
#include "rcc.hpp"
#include "gpio_registers.hpp"
#include "nvic.hpp"

void systemInit();



struct hse180hz
{
  using HCLK = freq<180>;
  using APB1 = freq<HCLK::MHz / 4>;
  using APB2 = freq<HCLK::MHz / 2>;

  using PLLCFGR = Pack< RCC::PLLCFGR::PLLSRC::HSE,
                        RCC::PLLCFGR::PLLM::DIV<4>,
                        RCC::PLLCFGR::PLLN::MULT<180>,
                        RCC::PLLCFGR::PLLP::DIV_2>;
  
  using CFGR = Pack<RCC::CFGR::HPRE::noDIV,
                    RCC::CFGR::PPRE1::DIV_4,
                    RCC::CFGR::PPRE2::DIV_2>;

  using Flash = Pack< FLASH::ACR::PRFTEN::Enable,
                      FLASH::ACR::LATENCY::Value<5>>;
};


void systemInit()
{
  Pack< 
    RCC::APB2ENR::SYSCFGEN::Enable,

    /*UART2*/
    RCC::APB1ENR::USART2EN::Enable,
    uart2::Init,
    
    /*Led*/
    RCC::AHB1ENR::GPIOAEN::Enable,
    GPIOA::MODER::MODER5::Output,

    /*Button*/
    Buttons::Init
  >::Write();

  rcc<uart2>::Set<hse180hz>();


  nvicPriorityGrouping::group16_sub0::Set();
  Pack<SCB::SHP_PRI<static_cast<std::size_t>(IRQn::PendSV) + 12>::template Priority<15>,
       SCB::SHP_PRI<static_cast<std::size_t>(IRQn::SysTick) + 12>::template Priority<15>
      >::Write();

  nvicConfig<nvic<IRQn::EXTI15_10,  15>,
             nvic<IRQn::EXTI9_5,  15>,
             nvic<IRQn::USART2, 10>,
             nvic<IRQn::DMA1_Stream6, 10>,
             nvic<IRQn::DMA1_Stream5, 10>
             >::Set();
}


