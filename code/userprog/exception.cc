// exception.cc 
//	Entry point into the Nachos kernel from user programs.
//	There are two kinds of things that can cause control to
//	transfer back to here from user code:
//
//	syscall -- The user code explicitly requests to call a procedure
//	in the Nachos kernel.  Right now, the only function we support is
//	"Halt".
//
//	exceptions -- The user code does something that the CPU can't handle.
//	For instance, accessing memory that doesn't exist, arithmetic errors,
//	etc.  
//
//	Interrupts (which can also cause control to transfer from user
//	code into the Nachos kernel) are handled elsewhere.
//
// For now, this only handles the Halt() system call.
// Everything else core dumps.
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "system.h"
#include "syscall.h"
#include "synchconsole.h"
#include "processtable.h"

#include <string>
#include <vector>

#include <iostream>

#include <numeric>

using namespace std;

//----------------------------------------------------------------------
// Practica 3 - Ejercicio 1
// Leer y escribir
//----------------------------------------------------------------------

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

string *readStringFromUsr(int usrAddr) {
  int ch = -1;
  string *s = new string;
  
  while(machine->ReadMem(usrAddr++, 1 , &ch) 
        && ch != '\0') 
    (*s) += (char)ch;

  return s;
}

int writeStrToUsr(char *str, int usrAddr) {

  int i = 0;
  do {
    machine->WriteMem(usrAddr + i,1,str[i]);
  } while (str[i++] != '\0');

  return i;

}

// TODO: Mejorar esto! :-)
void  writeStrigToUsr(string *s, int usrAddr) {
  DEBUG('z', "writeStringToUsr('%s', %d')\n", s->c_str(), usrAddr); 
  writeStrToUsr((char *)s->c_str(), usrAddr);
}


void writeBuffToUsr(char *str, int usrAddr, int byteCount) {

  for (int i = 0; i < byteCount; i++) 
    machine->WriteMem(usrAddr + i,1,str[i]);

}




//--------------------------------------------------------------------
// Funciones para Syscalls
// by Diaz-Racca, el Juan Carlos Batman y Robin de Sistemas Operativos
//--------------------------------------------------------------------


void ourWrite(int addr, int size, OpenFileId id) {
  char buff[size];
  readBuffFromUsr(addr, buff, size);
  currentThread->table->Write(buff, size, id);
}

int ourRead(int addr, int size, OpenFileId id) {
  char buff[size];
  int ret = currentThread->table->Read(buff, size, id);
  writeBuffToUsr(buff, addr, size);
  return ret;
}


int ourJoin(SpaceId id) {
  Thread *thread = processTable->Get(id);
  return thread->Join();
}


//--------------------------------------------------------------------
// Funciones para el Exec
// by Diaz-Racca, el batman y robin de Sistemas Operativos
//--------------------------------------------------------------------


int calcStackOffset(vector<string*> *p) {
  int offset = p->size() * 4;
  
  for (vector<string*>::iterator it = p->begin(); it != p->end(); ++it) 
    offset += alignTo((*it)->size(), 4);

  DEBUG('z', "total offset: (%d)\n", offset);
  return offset;

}

void
copyToStack(vector<string*> *p) {

  int sp = machine->ReadRegister(StackReg);
  int start_arguments_p = sp - calcStackOffset(p);
  int array_p =  sp;

  DEBUG('z', "sp(%d) array_p(%d) start_arguments_p(%d)\n", sp, array_p, start_arguments_p);

  machine->WriteRegister(StackReg, start_arguments_p - 16);

  for (vector<string*>::reverse_iterator it = p->rbegin(); it != p->rend(); ++it) {

    writeStrigToUsr(*it, start_arguments_p);
    machine->WriteMem(array_p, 4, start_arguments_p);

    array_p -= 4;
    start_arguments_p += alignTo((*it)->size(), 4);

  }

  machine->WriteRegister(4, p->size() - 1);
  machine->WriteRegister(5, array_p + 4);

}
 
void deleteParams(vector<string*> *p) {
  
  for (vector<string*>::iterator it = p->begin(); it != p->end(); ++it) 
    delete (*it);

  delete p;

}

void
execAid(void *arg) {

  vector<string*> *params  = (vector<string*> *) arg;

  OpenFile *exe = fileSystem->Open(params->at(0)->c_str());

  currentThread->space = new AddrSpace(exe);

  delete exe; 

  currentThread->space->InitRegisters();
  currentThread->space->RestoreState();

  copyToStack(params);
  deleteParams(params);

  machine->Run();

}

vector<string*> *getArgs(int argc, int argv) {
  int addr;
  vector<string*> *v = new vector<string*>;

  for (int i=0; i <= argc; i++) {
    machine->ReadMem(argv + (i*4), 4, &addr);
    v->push_back(readStringFromUsr(addr));
  }

   return v;
}

SpaceId ourExec(int argc, int argv) {
  Thread* alfred = new Thread("Executable thread", true);

  DEBUG('z', "argc='%d' argv='%d'\n", argc, argv);

  vector<string*> *h = getArgs(argc,argv);

  alfred->Fork(execAid, (void *)h);

  return processTable->Add(alfred);
}


//----------------------------------------------------------------------
// ExceptionHandler
// 	Entry point into the Nachos kernel.  Called when a user program
//	is executing, and either does a syscall, or generates an addressing
//	or arithmetic exception.
//
// 	For system calls, the following is the calling convention:
//
// 	system call code -- r2
//		arg1 -- r4
//		arg2 -- r5
//		arg3 -- r6
//		arg4 -- r7
//
//	The result of the system call, if any, must be put back into r2. 
//
// And don't forget to increment the pc before returning. (Or else you'll
// loop making the same system call forever!
//
//	"which" is the kind of exception.  The list of possible exceptions 
//	are in machine.h.
//----------------------------------------------------------------------

bool HandleSyscall(int type) {

  bool handle = true;
  char name[1024];
  int ret = 0;
  
  int args[4];
  args[0] = machine->ReadRegister(4);
  args[1] = machine->ReadRegister(5);
  args[2] = machine->ReadRegister(6);
  args[3] = machine->ReadRegister(7);

  switch (type) {
  case SC_Halt:
    DEBUG('z', "Shutdown, initiated by user program.\n");
    interrupt->Halt();
    break;
  case SC_Create:
    readStrFromUsr(args[0], name);
    DEBUG('z', "Nombre del archivo a crear: %s.\n", name);
    currentThread->table->Create(name);
    break;
  case SC_Write:
    DEBUG('z', "Escribiendo archivo.\n");
    ourWrite(args[0], args[1], args[2]);
    break;
  case SC_Read:
    DEBUG('z', "Leyendo archivo.\n");
    ret = ourRead(args[0], args[1], args[2]);
    break;
  case SC_Open:
    readStrFromUsr(args[0], name);
    DEBUG('z', "Nombre del archivo a abrir: %s.\n", name);
    ret = currentThread->table->Open(name);
    break;
  case SC_Close:
    DEBUG('z', "Cerrando archivo.\n");
    currentThread->table->Close(args[0]);
    break;
  case SC_Exec:
    ret = ourExec(args[0], args[1]);
    break;
  case SC_Join:
    ret = ourJoin((SpaceId) args[0]);
    break;
  case SC_Dump:
    currentThread->space->Dump();
    break;
  case SC_Yield:
    DEBUG('z', "Yielding currentThread.\n");
    currentThread->Yield();
    break;
  case SC_Exit:
    currentThread->Finish();
    break;
  default:
    handle = false;
  }

  if (handle){
    // Advance program counters.
    int pc = machine->ReadRegister(PCReg);
    machine->WriteRegister(PrevPCReg, pc);
    pc = machine->ReadRegister(NextPCReg);
    machine->WriteRegister(PCReg, pc);
    pc += 4;
    machine->WriteRegister(NextPCReg, pc);
    
    // return something
    machine->WriteRegister(2, ret);
  }

  return handle;

}

void
ExceptionHandler(ExceptionType which)
{
    int type = machine->ReadRegister(2);

    if ((which == SyscallException) && !HandleSyscall(type)) {
	printf("Unexpected user mode exception %d %d\n", which, type);
	ASSERT(false);
    }
}

