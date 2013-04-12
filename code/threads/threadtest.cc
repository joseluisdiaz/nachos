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
ThreadTest()
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
}

