#pragma once

#include "task.hpp"
#include "mutex.hpp"
#include "queue.hpp"
#include "timer.hpp"
#include "semaphore.hpp"
#include "event.hpp"
#include "criticalsection.hpp"


namespace OS {

  struct Scheduler
  {
    template<typename T>
    forceinline static void CreateTask(T &thread, const char* name, std::size_t priority)
    {
      thread.handle = xTaskCreateStatic(static_cast<TaskFunction_t>(Run<thread.stackSize>), 
                                        name, 
                                        thread.stackSize, 
                                        &thread, 
                                        priority, 
                                        thread.stack.data(),
                                        &thread.context);
    }

    forceinline static void Start()
    {
      vTaskStartScheduler();
    }
    
    forceinline static void Stop()
    {
      vTaskEndScheduler();
    }

  private:
    template<auto stackSize>
    forceinline static void Run(void *pContext)
    {
      static_cast<Thread<stackSize>*>(pContext)->Run();
    }

    Scheduler() = delete;
  };

};