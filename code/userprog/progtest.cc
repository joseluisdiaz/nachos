// progtest.cc 
//	Test routines for demonstrating that Nachos can load
//	a user program and execute it.  
//
//	Also, routines for testing the Console hardware device.
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "system.h"
#include "console.h"
#include "addrspace.h"
#include "synch.h"

void readStrFromUsr(int usrAddr, char *outStr) {
  int i = 0;
  do {
    machine->ReadMem(usrAddr + i,1,(int *)(outStr + i));
  } while (outStr[i++] != '\0');
}

void readBuffFromUsr(int usrAddr, char *outBuff, int byteCount) {

  for (int i = 0; i < byteCount; i++) 
    machine->ReadMem(usrAddr + i,1,(int *)(outBuff + i));
}

void writeStrToUsr(char *str, int usrAddr) {
  int i = 0;
  do {
    machine->WriteMem(usrAddr + i,1,str[i]);
  } while (str[i++] != '\0');

}

void writeBuffToUsr(char *str, int usrAddr, int byteCount) {

  for (int i = 0; i < byteCount; i++) 
    machine->WriteMem(usrAddr + i,1,str[i]);
}

//----------------------------------------------------------------------
// StartProcess
// 	Run a user program.  Open the executable, load it into
//	memory, and jump to it.
//----------------------------------------------------------------------

void
StartProcess(const char *filename)
{
    OpenFile *executable = fileSystem->Open(filename);
    AddrSpace *space;

    if (executable == NULL) {
	printf("Unable to open file %s\n", filename);
	return;
    }
    space = new AddrSpace(executable);    
    currentThread->space = space;

    delete executable;			// close file

    space->InitRegisters();		// set the initial register values
    space->RestoreState();		// load page table register

    // writeStrToUsr((char*)"o\0", 272);
    // char biff[1024];
    // readStrFromUsr(272, biff);
    // printf("***%s****\n\n\n\n",biff);

    machine->Run();			// jump to the user progam
    ASSERT(false);			// machine->Run never returns;
					// the address space exits
					// by doing the syscall "exit"
}

// Data structures needed for the console test.  Threads making
// I/O requests wait on a Semaphore to delay until the I/O completes.

static Console *console;
static Semaphore *readAvail;
static Semaphore *writeDone;

//----------------------------------------------------------------------
// ConsoleInterruptHandlers
// 	Wake up the thread that requested the I/O.
//----------------------------------------------------------------------

static void ReadAvail(void* arg) { readAvail->V(); }
static void WriteDone(void* arg) { writeDone->V(); }

//----------------------------------------------------------------------
// ConsoleTest
// 	Test the console by echoing characters typed at the input onto
//	the output.  Stop when the user types a 'q'.
//----------------------------------------------------------------------

void 
ConsoleTest (const char *in, const char *out)
{
    char ch;

    console = new Console(in, out, ReadAvail, WriteDone, 0);
    readAvail = new Semaphore("read avail", 0);
    writeDone = new Semaphore("write done", 0);
    
    for (;;) {
	readAvail->P();		// wait for character to arrive
	ch = console->GetChar();
	console->PutChar(ch);	// echo it!
	writeDone->P() ;        // wait for write to finish
	if (ch == 'q') return;  // if q, quit
    }
}

