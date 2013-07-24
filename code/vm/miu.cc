// MEMORY INTARFACE UNIT (miu.cc)
//
// Idea y concepto by Diaz-Racca, empleados del mes de Tele-kino

#include "miu.h"
#include "machine.h"
#include "system.h"

MemoryInterfaceUnit::MemoryInterfaceUnit() {
  coreMap = new MemMapEntry[NumPhysPages];

  fileSystem->Create("SWAP.asid",0);
  swapFile = fileSystem->Open("SWAP.asid");
  swapMap = new BitMap(NumSwapPages);
}

MemoryInterfaceUnit::~MemoryInterfaceUnit() {
  delete coreMap;
  delete swapFile;
}

void MemoryInterfaceUnit::SetShadowEntry(MemMapEntry *entry, int swapPage) {
  ShadowEntry *shadowEntry = entry->space->GetShadowEntry(entry->virtualPage);
  
  shadowEntry->swapPage = swapPage;
  shadowEntry->virtualPage = entry->virtualPage;
  shadowEntry->swapped = true;
  
  DEBUG('v', "shadowEntry: swapPage(%d), virtualPage(%d)\n", 
        swapPage, entry->virtualPage);
}

void MemoryInterfaceUnit::FreeTLB(int physicalPage) {
  for (int i = 0; i < TLBSize; i++) {
    if (machine->tlb[i].physicalPage == physicalPage) {
      machine->tlb[i].valid = false;
      return;
    } 
  }
}

int MemoryInterfaceUnit::PageSelectionStrategy() {
  int page = 0;
  int minTick = coreMap[0].tick; 

  for (int i = 1; i < NumPhysPages; i++) {
    if (coreMap[i].tick < minTick) {
      page = i;
      minTick = coreMap[page].tick;
    }
  }

  return page;
}

void MemoryInterfaceUnit::FreePhysicalPage(int physicalPage) {

  int swapPage = swapMap->Find();
  ASSERT(swapPage >= 0);

  DEBUG('v', "physicalPage %d -> swapPage %d\n", physicalPage, swapPage);
 
  swapFile->WriteAt(machine->mainMemory + (physicalPage * PageSize),
                    PageSize, swapPage * PageSize);

  SetShadowEntry(&coreMap[physicalPage], swapPage);
  FreeTLB(physicalPage);
}

int MemoryInterfaceUnit::GetPhysicalPage(int vpn) {
  int page = -1;
  
  for (int i = 0; i < NumPhysPages; i++) {
    if (!coreMap[i].use) {
      DEBUG('v', "physicalPage: %d not in use\n", i);
      page = i;
      break;
    }
  }

  if ( page == -1 ) {
    page = PageSelectionStrategy();//lastCoreMap++ % NumPhysPages;
    FreePhysicalPage(page);
  }

  coreMap[page].use = true;
  coreMap[page].space = currentThread->space;
  coreMap[page].virtualPage = vpn;
  coreMap[page].tick = stats->totalTicks;

  return page;
}

void MemoryInterfaceUnit::RestorePage(int physicalPage, ShadowEntry *shadowEntry) {

  DEBUG('v', "Restoring swapPage: %d -> physicalPage: %d \n", shadowEntry->swapPage, physicalPage);

  swapFile->ReadAt(machine->mainMemory + (physicalPage * PageSize),
                    PageSize, shadowEntry->swapPage * PageSize);

  shadowEntry->swapped = false;

  swapMap->Clear(shadowEntry->swapPage);
}

void MemoryInterfaceUnit::SetTLB(TranslationEntry *src, TranslationEntry *dst) {
  dst->virtualPage = src->virtualPage;
  dst->physicalPage = src->physicalPage;
  dst->valid = src->valid;
  dst->readOnly = src->readOnly;
  dst->use = src->use;
  dst->dirty = src->dirty;
}

void MemoryInterfaceUnit::HandlePageFault(int virtAddr){
  int vpn = (unsigned) virtAddr / PageSize;
  //
  TranslationEntry *entry = currentThread->space->GetEntry(vpn);
  ShadowEntry *shadowEntry = currentThread->space->GetShadowEntry(vpn);

  if (shadowEntry->swapped) {
    int physicalPage = GetPhysicalPage(vpn);
    RestorePage(physicalPage, shadowEntry);
    entry->physicalPage = physicalPage;
  }
 
  //
  if (!entry->valid) {
    int physicalPage = GetPhysicalPage(vpn);

    ASSERT(physicalPage != -1);

    DEBUG('a', "TranslationEntry for vpn %d was not valid\n", vpn);

    currentThread->space->LOD(vpn, physicalPage);

    entry->valid = true;
    entry->physicalPage = physicalPage;

  }

  int page = lastTLB++ % TLBSize;
 
  SetTLB(entry, &machine->tlb[page]);

  DEBUG('a', "Leyendo: vp:%d, ph:%d, valid:%d\n", 
        machine->tlb[page].virtualPage,
        machine->tlb[page].physicalPage,
        machine->tlb[page].valid);

}
