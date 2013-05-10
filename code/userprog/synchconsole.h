//synchconsole.h
//   Lectura y escritura sincronizadas de consola
// by Diaz-Racca, la dupla estelar del canal Gourmet

#include "copyright.h"

#ifndef SYNCHCONSOLE_H
#define SYNCHCONSOLE_H

#include "synch.h"
#include "console.h"

class SynchConsole {
  public:
    SynchConsole();				
    ~SynchConsole();		

    
    void Read(char* data, int size);
    void Write(char* data, int size);
    
    void ReadAvail();
    void WriteDone();

    char GetChar();
    void PutChar(char c);

  private:
    Semaphore *semReadAvail;      
    Semaphore *semWriteDone;      
    Lock *lock;	
    Console *console;
};

#endif // SYNCHCONSOLE_H
