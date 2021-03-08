#include <cstdint>
#include "application.hpp"

extern "C" void __cxa_pure_virtual();
extern "C" void __cxa_pure_virtual() {}

extern "C" void vPortSVCHandler(void);
extern "C" void xPortPendSVHandler(void);
extern "C" void xPortSysTickHandler(void);

extern "C" void Reset_Handler(void) ;

static void DefaultHandler() { for(;;) {} }
static void HardFault() { for(;;) {} }


extern uint32_t _estack;
using tIntFunct = void(*)();
using tIntVectItem = union {tIntFunct __fun; void * __ptr;};

__attribute__ ((used,section(".isr_vector")))
const tIntVectItem __vector_table[] =
{
  { .__ptr = &_estack },
  Reset_Handler,                    // Reset
  DefaultHandler,                   // NMI
  HardFault,                   // HardFault
  DefaultHandler,                   // MemManage
  DefaultHandler,                   // BusFault
  DefaultHandler,                   // UsageFault
  nullptr,                          // Reserved
  nullptr,                          // Reserved
  nullptr,                          // Reserved
  nullptr,                          // Reserved
  vPortSVCHandler,                  // SVC
  DefaultHandler,                   // DebugMon
  nullptr,                          // Reserved
  xPortPendSVHandler,               // PendSV
  xPortSysTickHandler,              // SysTickTimer

  DefaultHandler,                   // Window WatchDog                                                      
  DefaultHandler,                   // PVD through EXTI Line detection                         
  DefaultHandler,                   // Tamper and TimeStamps through the EXTI line             
  DefaultHandler,                   // RTC Wakeup through the EXTI line                       
  DefaultHandler,                   // FLASH                                                                  
  DefaultHandler,                   // RCC                                                                      
  DefaultHandler,                   // EXTI Line0                                           
  DefaultHandler,                   // EXTI Line1                                             
  DefaultHandler,                   // EXTI Line2                                             
  DefaultHandler,                   // EXTI Line3                                             
  DefaultHandler,                   // EXTI Line4                                             
  DefaultHandler,                   // DMA1 Stream 0                                  
  DefaultHandler,                   // DMA1 Stream 1                                   
  DefaultHandler,                   // DMA1 Stream 2                                   
  DefaultHandler,                   // DMA1 Stream 3                                   
  DefaultHandler,                   // DMA1 Stream 4                                   
  dma1_s5::Handler,                 // DMA1 Stream 5                                   
  dma1_s6::Handler,                 // DMA1 Stream 6                                   
  DefaultHandler,                   // ADC1, ADC2 and ADC3s                            
  DefaultHandler,                   // CAN1 TX                                               
  DefaultHandler,                   // CAN1 RX0                                               
  DefaultHandler,                   // CAN1 RX1                                               
  DefaultHandler,                   // CAN1 SCE                                               
  extInterrupt5_9::IrqHandler,         // External Line[9:5]s                                    
  DefaultHandler,                   // TIM1 Break and TIM9                   
  DefaultHandler,                   // TIM1 Update and TIM10                 
  DefaultHandler,                   // TIM1 Trigger and Commutation and TIM11 
  DefaultHandler,                   // TIM1 Capture Compare                                   
  DefaultHandler,                   // TIM2                                            
  DefaultHandler,                   // TIM3                                            
  DefaultHandler,                   // TIM4                                            
  DefaultHandler,                   // I2C1 Event                                             
  DefaultHandler,                   // I2C1 Error                                             
  DefaultHandler,                   // I2C2 Event                                             
  DefaultHandler,                   // I2C2 Error                                               
  DefaultHandler,                   // SPI1                                            
  DefaultHandler,                   // SPI2                                            
  DefaultHandler,                   // USART2                                          
  uart2::Handler,                   // USART1                                          
  DefaultHandler,                   // USART3                                          
  extInterrupt10_15::IrqHandler,       // External Line[15:10]s                                  
  DefaultHandler,                   // RTC Alarm (A and B) through EXTI Line                  
  DefaultHandler,                   // USB OTG FS Wakeup through EXTI line                        
  DefaultHandler,                   // TIM8 Break and TIM12                  
  DefaultHandler,                   // TIM8 Update and TIM13                 
  DefaultHandler,                   // TIM8 Trigger and Commutation and TIM14 
  DefaultHandler,                   // TIM8 Capture Compare                                   
  DefaultHandler,                   // DMA1 Stream7                                           
  DefaultHandler,                   // FMC                                             
  DefaultHandler,                   // SDIO                                            
  DefaultHandler,                   // TIM5                                            
  DefaultHandler,                   // SPI3                                            
  DefaultHandler,                   // UART4                                           
  DefaultHandler,                   // UART5                                           
  DefaultHandler,                   // TIM6 and DAC1&2 underrun errors                    
  DefaultHandler,                   // TIM7                         
  DefaultHandler,                   // DMA2 Stream 0                                   
  DefaultHandler,                   // DMA2 Stream 1                                   
  DefaultHandler,                   // DMA2 Stream 2                                   
  DefaultHandler,                   // DMA2 Stream 3                                   
  DefaultHandler,                   // DMA2 Stream 4                                   
  nullptr,                          // Reserved                                        
  nullptr,                          // Reserved                                          
  DefaultHandler,                   // CAN2 TX                                                
  DefaultHandler,                   // CAN2 RX0                                               
  DefaultHandler,                   // CAN2 RX1                                               
  DefaultHandler,                   // CAN2 SCE                                               
  DefaultHandler,                   // USB OTG FS                                      
  DefaultHandler,                   // DMA2 Stream 5                                   
  DefaultHandler,                   // DMA2 Stream 6                                   
  DefaultHandler,                   // DMA2 Stream 7                                   
  DefaultHandler,                   // USART6                                           
  DefaultHandler,                   // I2C3 event                                             
  DefaultHandler,                   // I2C3 error                                             
  DefaultHandler,                   // USB OTG HS End Point 1 Out                      
  DefaultHandler,                   // USB OTG HS End Point 1 In                       
  DefaultHandler,                   // USB OTG HS Wakeup through EXTI                          
  DefaultHandler,                   // USB OTG HS                                      
  DefaultHandler,                   // DCMI                                            
  nullptr,                          // Reserved                                        
  nullptr,                          // Reserved                     
  DefaultHandler,                   // FPU                          
  nullptr,                          // Reserved                     
  nullptr,                          // Reserved                     
  DefaultHandler,                   // SPI4                         
  nullptr,                          // Reserved                     
  nullptr,                          // Reserved                     
  DefaultHandler,                   // SAI1                         
  nullptr,                          // Reserved                     
  nullptr,                          // Reserved                     
  nullptr,                          // Reserved                     
  DefaultHandler,                   // SAI2                         
  DefaultHandler,                   // QuadSPI                      
  DefaultHandler,                   // CEC                          
  DefaultHandler,                   // SPDIF RX                     
  DefaultHandler,                   // FMPI2C 1 Event               
  DefaultHandler,                   // FMPI2C 1 Error               
};

