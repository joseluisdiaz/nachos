// addrspace.cc 
//	Routines to manage address spaces (executing user programs).
//
//	In order to run a user program, you must:
//
//	1. link with the -N -T 0 option 
//	2. run coff2noff to convert the object file to Nachos format
//		(Nachos object code format is essentially just a simpler
//		version of the UNIX executable object code format)
//	3. load the NOFF file into the Nachos file system
//		(if you haven't implemented the file system yet, you
//		don't need to do this last step)
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "system.h"
#include "addrspace.h"

//----------------------------------------------------------------------
// SwapHeader
// 	Do little endian to big endian conversion on the bytes in the 
//	object file header, in case the file was generated on a little
//	endian machine, and we're now running on a big endian machine.
//----------------------------------------------------------------------

static void 
SwapHeader (NoffHeader *noffH)
{
	noffH->noffMagic = WordToHost(noffH->noffMagic);
	noffH->code.size = WordToHost(noffH->code.size);
	noffH->code.virtualAddr = WordToHost(noffH->code.virtualAddr);
	noffH->code.inFileAddr = WordToHost(noffH->code.inFileAddr);
	noffH->initData.size = WordToHost(noffH->initData.size);
	noffH->initData.virtualAddr = WordToHost(noffH->initData.virtualAddr);
	noffH->initData.inFileAddr = WordToHost(noffH->initData.inFileAddr);
	noffH->uninitData.size = WordToHost(noffH->uninitData.size);
	noffH->uninitData.virtualAddr = WordToHost(noffH->uninitData.virtualAddr);
	noffH->uninitData.inFileAddr = WordToHost(noffH->uninitData.inFileAddr);
}

//----------------------------------------------------------------------
// AddrSpace::AddrSpace
// 	Create an address space to run a user program.
//	Load the program from a file "executable", and set everything
//	up so that we can start executing user instructions.
//
//	Assumes that the object code file is in NOFF format.
//
//	First, set up the translation from program memory to physical 
//	memory.  For now, this is really simple (1:1), since we are
//	only uniprogramming, and we have a single unsegmented page table
//
//	"executable" is the file containing the object code to load into memory
//----------------------------------------------------------------------

AddrSpace::AddrSpace(OpenFile *exe)
{
    unsigned int i, size;

    this->executable = exe;

    executable->ReadAt((char *)&noffH, sizeof(noffH), 0);
    if ((noffH.noffMagic != NOFFMAGIC) && 
		(WordToHost(noffH.noffMagic) == NOFFMAGIC))
    	SwapHeader(&noffH);
    ASSERT(noffH.noffMagic == NOFFMAGIC);

    // how big is address space?
    size = noffH.code.size + noffH.initData.size + noffH.uninitData.size 
			+ UserStackSize;	// we need to increase the size
						// to leave room for the stack
    numPages = divRoundUp(size, PageSize);
    size = numPages * PageSize;

    //    ASSERT(numPages <= NumPhysPages);	// check we're not trying
						// to run anything too big --
						// at least until we have
					
    // virtual memory
    DEBUG('a', "Initializing address space, num pages %d, size %d\n", numPages, size);

    pageTable = new TranslationEntry[numPages];
    shadowTable = new ShadowEntry[numPages];
    // first, set up the translation     

    stats->usedPages += numPages;

    for (i = 0; i < numPages; i++) {
	pageTable[i].virtualPage = i;
	pageTable[i].valid = false;	
        pageTable[i].use = true;
	pageTable[i].dirty = false;
	pageTable[i].readOnly = false;  // if the code segment was entirely on 
					// a separate page, we could set its 
					// pages to be read-only
        DEBUG('a', "pagetable[%d].physicalPage = %d\n", i, pageTable[i].physicalPage);
 
    }

}

//---------------------------------------------------------------------
//AddrSpace::LOD
//      "Porque podemos" - Diaz-Racca hoy
//---------------------------------------------------------------------

bool AddrSpace::isInSegment(int vpn, Segment seg)
{
  int addr = vpn * PageSize;

  DEBUG('a', "inSegment: addr:%d, s.va:(%d), s.size:(%d)\n",
        addr, seg.virtualAddr, seg.size);
        
  if (addr >= seg.virtualAddr && 
      addr <= seg.virtualAddr + seg.size)
    return true;

  return false;
}

int AddrSpace::getInFileAddr(int vpn, Segment seg)
{
  return seg.inFileAddr + (vpn * PageSize);
}

void AddrSpace::LOD(int vpn, int physicalPage)
{
  int offset = physicalPage * PageSize;
  int inFileAddr = -1;

  bzero(machine->mainMemory + offset, PageSize);
  
  if (noffH.code.size > 0 && isInSegment(vpn,noffH.code)) {
    inFileAddr = getInFileAddr(vpn, noffH.code);
    DEBUG('a', "### CodeSegment starting at %d\n", inFileAddr);
  }
  
  if (noffH.initData.size > 0 && isInSegment(vpn,noffH.initData)) {
    inFileAddr = getInFileAddr(vpn, noffH.initData);
    DEBUG('a', "### DataSegment starting at %d\n", inFileAddr);
  }

  if (inFileAddr != -1) {
    executable->ReadAt(machine->mainMemory + offset,
                       PageSize, inFileAddr);
  }

}

//----------------------------------------------------------------------
//Métodos para las shadows entry
//by Diaz-Racca, antes del carlitos de pollo de Menggano
//----------------------------------------------------------------------


//----------------------------------------------------------------------
// AddrSpace::~AddrSpace
// 	Dealloate an address space.  Nothing for now!
//----------------------------------------------------------------------
AddrSpace::~AddrSpace()
{
   delete pageTable;
}

//----------------------------------------------------------------------
// AddrSpace::InitRegisters
// 	Set the initial values for the user-level register set.
//
// 	We write these directly into the "machine" registers, so
//	that we can immediately jump to user code.  Note that these
//	will be saved/restored into the currentThread->userRegisters
//	when this thread is context switched out.
//----------------------------------------------------------------------

void
AddrSpace::InitRegisters()
{
    int i;

    for (i = 0; i < NumTotalRegs; i++)
	machine->WriteRegister(i, 0);

    // Initial program counter -- must be location of "Start"
    machine->WriteRegister(PCReg, 0);

    // Need to also tell MIPS where next instruction is, because
    // of branch delay possibility
    machine->WriteRegister(NextPCReg, 4);

   // Set the stack register to the end of the address space, where we
   // allocated the stack; but subtract off a bit, to make sure we don't
   // accidentally reference off the end!
    machine->WriteRegister(StackReg, numPages * PageSize - 16);
    DEBUG('a', "Initializing stack register to %d\n", numPages * PageSize - 16);
    
}

//----------------------------------------------------------------------
// AddrSpace::SaveState
// 	On a context switch, save any machine state, specific
//	to this address space, that needs saving.
//
//	For now, nothing!
//----------------------------------------------------------------------

void AddrSpace::SaveState() 
{}

TranslationEntry *AddrSpace::GetEntry(int vpn) {
  return &pageTable[vpn];
}

ShadowEntry *AddrSpace::GetShadowEntry(int vpn) {
  return &shadowTable[vpn];
}


void AddrSpace::Dump()
{
  int size = numPages * PageSize;
  int ch;
  for (int i=0; i <= size; i++) {

    if (i % 4 == 0) {
      machine->ReadMem(i, 4, &ch);

      DEBUG('z', "\n%d (%14d):", i, ch);
    }

    machine->ReadMem(i, 1, &ch);

    DEBUG('z'," %c ", (char)ch );


  }

}

//----------------------------------------------------------------------
// AddrSpace::RestoreState
// 	On a context switch, restore the machine state so that
//	this address space can run.
//
//      For now, tell the machine where to find the page table.
//----------------------------------------------------------------------

void AddrSpace::RestoreState() 
{
  #ifndef USE_TLB
  machine->pageTable = pageTable;
  machine->pageTableSize = numPages;
  #endif

}
