// threadtest.cc 
//	Simple test case for the threads assignment.
//
//	Create several threads, and have them context switch
//	back and forth between themselves by calling Thread::Yield, 
//	to illustrate the inner workings of the thread system.
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.
//
// Parts from Copyright (c) 2007-2009 Universidad de Las Palmas de Gran Canaria
//

#include "copyright.h"
#include "system.h"
#include "synch.h"

//----------------------------------------------------------------------
// SimpleThread
// 	Loop 10 times, yielding the CPU to another ready thread 
//	each iteration.
//
//	"name" points to a string with a thread name, just for
//      debugging purposes.
//----------------------------------------------------------------------

#ifdef SEMAPHORE_TEST
Semaphore *sem;
#endif

void
SimpleThread(void* name)
{
    // Reinterpret arg "name" as a string
    char* threadName = (char*)name;

#ifdef SEMAPHORE_TEST
    sem->P();
#endif

    // If the lines dealing with interrupts are commented,
    // the code will behave incorrectly, because
    // printf execution may cause race conditions.
    for (int num = 0; num < 10; num++) {
        //IntStatus oldLevel = interrupt->SetLevel(IntOff);
	printf("*** thread %s looped %d times\n", threadName, num);
	//interrupt->SetLevel(oldLevel);
        currentThread->Yield();
    }
#ifdef SEMAPHORE_TEST
    sem->V();
#endif
    //IntStatus oldLevel = interrupt->SetLevel(IntOff);
    printf(">>> Thread %s has finished\n", threadName);
    //interrupt->SetLevel(oldLevel);
}

//----------------------------------------------------------------------
// ThreadTest
// 	Set up a ping-pong between several threads, by launching
//	ten threads which call SimpleThread, and finally calling 
//	SimpleThread ourselves.
//----------------------------------------------------------------------

void
SimpleTest()
{
#ifdef SEMAPHORE_TEST
  DEBUG('t', "Creating semaphore");
  sem = new Semaphore("ThreadTest semaphore", 3);
#endif
  DEBUG('t', "Entering SimpleTest");
  
  for ( int k=1; k<=5; k++) {
    char* threadname = new char[100];
    sprintf(threadname, "Hilo %d", k);
    Thread* newThread = new Thread (threadname);
    newThread->Fork (SimpleThread, (void*)threadname);
  }
    
  SimpleThread( (void*)"Hilo 0");

  printf("*** reach end on simple test\n");
}

Puerto *puerto;

void Productor(void *desc) {

  int *num = (int *)desc; 

  for (int i= 0; i < 10; i++) {
    int msg = i + (100 * *num);
    puerto->Send(msg);
    printf("*** productor-%d produce: %d\n", *num, msg);
  }
  
}

void Consumidor(void *name) {

  char* threadName = (char*)name;
  int msg;

  for (int num = 0; num < 10; num++) {
    puerto->Receive(&msg);
    printf("*** \"%s\" consume: %d\n", threadName, msg);
  }

}

void PortTest() {
  puerto = new Puerto("pc");

  for (int k=1; k<=3; k++) {
    char* threadname = new char[100];
    sprintf(threadname, "Consumidor %d", k);
    Thread* newThread = new Thread (threadname);
    newThread->Fork (Consumidor, (void*)threadname);
  }

  for (int k=1; k<=3; k++) {
    char* threadname = new char[100];
    int* number = new int;
    *number = k;
    sprintf(threadname, "Productor %d", k);
    Thread* newThread = new Thread (threadname);
    newThread->Fork (Productor, (void*)(number));
  }


}


void DaJoiner(void *name) {
  Thread* threadman = new Thread ("threadman", true);
  
  printf("*** waiting the other thread...!\n");
  
  currentThread->Yield();
  
  threadman->Fork(SimpleThread, (void *)"threadman");
  
  currentThread->Yield();
  
  threadman->Join();    
  
  currentThread->Yield();
  
  printf("*** ...joined!\n");
}


void ThreadJoinTest() {

  Thread* dajoiner = new Thread ("dajoiner#1");
  
  currentThread->Yield();
  dajoiner->Fork(DaJoiner, (void*)"dajoiner#1");
  currentThread->Yield();
  
  printf("*** finish!\n");


}

void
ComplicatedTest()
{
  DEBUG('t', "Entering ComplicatedTest");
  
  for ( int k=1; k<=5; k++) {
    char* threadname = new char[100];
    sprintf(threadname, "Hilo %d", k);
    Thread* newThread = new Thread (threadname);
    newThread->setPriority(k);
    newThread->Fork (SimpleThread, (void*)threadname);
  }
    
  SimpleThread( (void*)"Hilo 0");

  printf("*** reach end on complicated test\n");
}

Lock *lock;
Semaphore *sem1;
Semaphore *sem2;


void
Low(void* name)
{
  
  char* threadName = (char*)name;
  
  sem1->V();
  sem2->V();

  lock->Acquire();
  
  for (int num = 0; num < 10; num++) {
    currentThread->Yield();

    printf("*** thread %s looped %d times\n", threadName, num);

  }

  lock->Release();
  
  printf(">>> Thread %s has finished\n", threadName);
  
}

void
Med(void* name)
{
  
  char* threadName = (char*)name;

  sem2->P();

  for (int num = 0; num < 10; num++) {

    printf("*** thread %s looped %d times\n", threadName, num);
    currentThread->Yield();

  }

  printf(">>> Thread %s has finished\n", threadName);
  
}

void
High(void* name)
{
  
  char* threadName = (char*)name;
  sem1->P();  
  lock->Acquire();
  
  for (int num = 0; num < 10; num++) {
    printf("*** thread %s looped %d times\n", threadName, num);
  }
  
  lock->Release();
  
  printf(">>> Thread %s has finished\n", threadName);
    
}

void
PrioInvTest()
{
  lock = new Lock("priority");
  sem1 = new Semaphore("sem1",0);
  sem2 = new Semaphore("sem2",0);


  Thread* low = new Thread ("low");
  low->setPriority(30);

  Thread* med = new Thread ("med");
  med->setPriority(20);

  Thread* hi = new Thread ("hi");
  hi->setPriority(10);

  low->Fork (Low, (void*)"low priority");

  hi->Fork (High, (void *)"high priority");

  med->Fork (Med, (void*)"med priority");
}


void ThreadTest() {

  PrioInvTest();
  
}
