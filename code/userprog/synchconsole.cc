#include "copyright.h"
#include "synchconsole.h"

static void SynchConsoleReadAvail(void* arg) { 
  ((SynchConsole*) arg)->ReadAvail();
}

static void SynchConsoleWriteDone(void* arg) {
  ((SynchConsole*) arg)->WriteDone();
}

SynchConsole::SynchConsole()
{
    semReadAvail = new Semaphore("Read Avail Sem", 0);
    semWriteDone = new Semaphore("Write Done Sem", 0);
    lock = new Lock("Synch Console Lock");

    console = new Console(NULL, NULL, SynchConsoleReadAvail, SynchConsoleWriteDone, this);
}

SynchConsole::~SynchConsole() 
{
    delete lock;
    delete semReadAvail;
    delete semWriteDone;
    delete console;
}

void 
SynchConsole::ReadAvail() 
{
  semReadAvail->V();
}

char 
SynchConsole::GetChar()
{
  lock->Acquire();			// only one disk I/O at a time

  semReadAvail->P();			// wait for interrupt
  char ch = console->GetChar();

  lock->Release();
  return ch;
}

void
SynchConsole::Read(char* data, int size)
{
  for (int i = 0; i < size; i++)  
    data[i] = GetChar();
}

void SynchConsole::WriteDone() {
  semWriteDone->V();
}

void
SynchConsole::PutChar(char c)
{
  lock->Acquire();

  console->PutChar(c);
  semWriteDone->P();			// wait for interrupt

  lock->Release();
}

void
SynchConsole::Write(char* data, int size)
{
  for(int i = 0; i < size; i++) 
    PutChar(data[i]);

}
