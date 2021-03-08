#include "application.hpp"
#include "systemInit.hpp"

#include "swo.h"
#include "xprintf.hpp"

xprintf Debug{SWO_PrintChar};


using namespace OS;

struct Test: Thread<128>, xprintf
{
  Test() : xprintf{uart2::WriteByte} {}

  virtual void Execute() override
  {
    puts("Hello world\n");

    while(true) {
      ledPin::Toggle();
      SleepUntil(500ms);
    }
  }
} Led;


int main()
{
  systemInit();


  Scheduler::CreateTask(Led, "Led", 1);
  Scheduler::Start();

  while(true) {}
}
