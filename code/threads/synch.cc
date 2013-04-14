// synch.cc 
//	Routines for synchronizing threads.  Three kinds of
//	synchronization routines are defined here: semaphores, locks 
//   	and condition variables (the implementation of the last two
//	are left to the reader).
//
// Any implementation of a synchronization routine needs some
// primitive atomic operation.  We assume Nachos is running on
// a uniprocessor, and thus atomicity can be provided by
// turning off interrupts.  While interrupts are disabled, no
// context switch can occur, and thus the current thread is guaranteed
// to hold the CPU throughout, until interrupts are reenabled.
//
// Because some of these routines might be called with interrupts
// already disabled (Semaphore::V for one), instead of turning
// on interrupts at the end of the atomic operation, we always simply
// re-set the interrupt state back to its original value (whether
// that be disabled or enabled).
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "synch.h"
#include "system.h"

//----------------------------------------------------------------------
// Semaphore::Semaphore
// 	Initialize a semaphore, so that it can be used for synchronization.
//
//	"debugName" is an arbitrary name, useful for debugging.
//	"initialValue" is the initial value of the semaphore.
//----------------------------------------------------------------------

Semaphore::Semaphore(const char* debugName, int initialValue)
{
    name = debugName;
    value = initialValue;
    queue = new List<Thread*>;
}

//----------------------------------------------------------------------
// Semaphore::Semaphore
// 	De-allocate semaphore, when no longer needed.  Assume no one
//	is still waiting on the semaphore!
//----------------------------------------------------------------------

Semaphore::~Semaphore()
{
    delete queue;
}

//----------------------------------------------------------------------
// Semaphore::P
// 	Wait until semaphore value > 0, then decrement.  Checking the
//	value and decrementing must be done atomically, so we
//	need to disable interrupts before checking the value.
//
//	Note that Thread::Sleep assumes that interrupts are disabled
//	when it is called.
//----------------------------------------------------------------------

void
Semaphore::P()
{
  DEBUG('s', "*** thread \"%s\" on semaphore \"%s\" does P()\n", currentThread->getName(), name);

  IntStatus oldLevel = interrupt->SetLevel(IntOff);	// disable interrupts
  
  while (value == 0) { 			        // semaphore not available
    queue->Append(currentThread);		// so go to sleep
    currentThread->Sleep();
  } 
  value--; 					// semaphore available, 
						// consume its value
    
  interrupt->SetLevel(oldLevel);		// re-enable interrupts
  
}

//----------------------------------------------------------------------
// Semaphore::V
// 	Increment semaphore value, waking up a waiter if necessary.
//	As with P(), this operation must be atomic, so we need to disable
//	interrupts.  Scheduler::ReadyToRun() assumes that threads
//	are disabled when it is called.
//----------------------------------------------------------------------

void
Semaphore::V()
{
  DEBUG('s', "*** thread \"%s\" on semaphore \"%s\" does V()\n", currentThread->getName(), name);

    Thread *thread;
    IntStatus oldLevel = interrupt->SetLevel(IntOff);

    thread = queue->Remove();
    if (thread != NULL)	   // make thread ready, consuming the V immediately
	scheduler->ReadyToRun(thread);
    value++;
    interrupt->SetLevel(oldLevel);
}

// Dummy functions -- so we can compile our later assignments 
// Note -- without a correct implementation of Condition::Wait(), 
// the test case in the network assignment won't work!
Lock::Lock(const char* debugName) {
    name = debugName;
    lock = new Semaphore(debugName, 1);
    holder = NULL;
}
Lock::~Lock() {
  delete lock;
}

void Lock::Acquire() {
  DEBUG('l', "## Hilo \"%s\" intenta capturar lock\"%s\"\n", currentThread->getName(), name);

  /*
   * si el hilo que tiene el thread actual invoca nuevamente
   * Acquire, no causa ningun efecto.
   */ 
  if (holder != NULL && isHeldByCurrentThread())
    return;

  /*
   * Si "holder" es NULL el lock nunca fue adquirido
   */
  if (holder != NULL && holderPriority > currentThread->getPriority())
    holder->setPriority(currentThread->getPriority());

  lock->P(); 
  /*
   * Una vez adquirido el semaforo guardamos  
   * referencia del hilo que tomo el lock 
   */
  holderPriority = currentThread->getPriority();  
  holder = currentThread;

}

void Lock::Release() {
  ASSERT(isHeldByCurrentThread());
  DEBUG('l', "## Hilo \"%s\" libera  lock\"%s\"\n", currentThread->getName(), name);
  
  currentThread->setPriority(holderPriority);
  holder = NULL;

  lock->V();    
}

bool Lock::isHeldByCurrentThread() {
    return holder == currentThread;
};


Condition::Condition(const char* debugName, Lock* conditionLock) {
  name = debugName;
  lock = conditionLock;
  sleeping = 0;
  innerLock = new Semaphore("innerLock", 1);
  sleepers = new Semaphore("sleepers", 0);
  handshake = new Semaphore("handshake", 0);
}

Condition::~Condition() {  
  delete innerLock;
  delete sleepers;
  delete handshake;
}

void Condition::Wait() { 
  DEBUG('c', "#### #### Hilo \"%s\" entrando wait sleepers(%d) en %s\n", currentThread->getName(), sleeping, name);

  ASSERT(lock->isHeldByCurrentThread());

  innerLock->P();
  sleeping++;
  innerLock->V();

  DEBUG('c', "#### #### Hilo \"%s\" preRelease sleepers(%d) en %s\n", currentThread->getName(), sleeping, name);
  
  lock->Release();

  DEBUG('c', "#### #### Hilo \"%s\" postRelease sleepers(%d) en %s\n", currentThread->getName(), sleeping, name);

  sleepers->P();
  handshake->V();

  DEBUG('c', "#### #### Hilo \"%s\" preAcquire sleepers(%d) en %s\n", currentThread->getName(), sleeping, name);
  lock->Acquire();
  DEBUG('c', "#### #### Hilo \"%s\" postAcquire sleepers(%d) en %s\n", currentThread->getName(), sleeping, name);

}

void Condition::Signal() {

  DEBUG('c', "#### #### Hilo \"%s\" Entrando - Signal sleepers(%d) en %s\n", currentThread->getName(), sleeping, name);
  innerLock->P();


  if (sleeping > 0 ) {

    sleeping--;
    sleepers->V();
    handshake->P();
  }
  
  innerLock->V();
  DEBUG('c', "#### #### Hilo \"%s\" Saliendo - Signal sleepers(%d) en %s\n", currentThread->getName(), sleeping, name);
}

void Condition::Broadcast() {
  innerLock->P();

  for (int n = 0; n < sleeping; n++) 
    sleepers->V();  
  
  while (sleeping > 0) {
    sleeping--;
    handshake->P();
  }

  innerLock->V();
}


Puerto::Puerto(const char* debugName) {
  name = debugName;
  portLock = new Lock("portLock");
  freeport = new Condition("condition::freeport", portLock );
  msg_sent = new Condition("condition::msg_sent", portLock );
  msg_recv = new Condition("condition::msg_recv", portLock );
  isFree = true;
}

Puerto::~Puerto() {
  delete portLock;
  delete freeport;
  delete msg_sent;
  delete msg_recv;
}

void Puerto::Send(int mensaje) {
  DEBUG('p', "#### Hilo \"%s\" entra enviar \"%d\" por el puerto \"%s\"\n", currentThread->getName(), mensaje, name);

  portLock->Acquire();
  
  while (!isFree) freeport->Wait();

  isFree = false;
  msg = mensaje;
  DEBUG('p', "#### Hilo \"%s\" envio \"%d\" por el puerto \"%s\"\n", currentThread->getName(), mensaje, name);

  msg_sent->Signal();

  msg_recv->Wait();

  portLock->Release();

  DEBUG('p', "#### Hilo \"%s\" sale enviar \"%d\" por el puerto \"%s\"\n", currentThread->getName(), mensaje, name);
}

void Puerto::Receive(int *mensaje) {
  DEBUG('p', "#### Hilo \"%s\" entra recibir por el puerto \"%s\"\n", currentThread->getName(),  name);

  portLock->Acquire();

  while (isFree) 
    msg_sent->Wait();

  *mensaje = msg;

  DEBUG('p', "#### Hilo \"%s\" recibio \"%d\" por el puerto \"%s\"\n", currentThread->getName(), *mensaje, name);

  msg_recv->Signal();
  isFree = true;
  freeport->Signal();
  
  portLock->Release();
  DEBUG('p', "#### Hilo \"%s\" sale recibir \"%d\" por el puerto \"%s\"\n", currentThread->getName(), mensaje, name);
}
