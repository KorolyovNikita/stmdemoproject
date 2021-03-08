#pragma once

#include "rtosdefs.hpp"

namespace OS
{
  struct CriticalSection
  {
    forceinline CriticalSection()
    {
      taskENTER_CRITICAL();
    } 
    
    forceinline ~CriticalSection()
    {
      taskEXIT_CRITICAL();
    } 
  };
};
