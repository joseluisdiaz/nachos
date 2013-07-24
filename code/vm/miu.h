// MEMORY INTARFACE UNIT (miu.h)
//
// Idea y concepto by Diaz-Racca, empleados del mes de Tele-kino

#ifndef MIU_H
#define MIU_H

#include "copyright.h"
#include <stdlib.h>
#include "addrspace.h"
#include "bitmap.h"
#include <map>

class MemMapEntry {
 public:
  int virtualPage;
  AddrSpace* space;
  bool use;
  int tick;
};

class MemoryInterfaceUnit {

 public:
  MemoryInterfaceUnit();
  ~MemoryInterfaceUnit();
 
  void HandlePageFault(int virtAddr);

  MemMapEntry *coreMap;

 private:
  int GetPhysicalPage(int vpn);
  void SetTLB(TranslationEntry *src, TranslationEntry *dst);

  int lastTLB;
  int lastCoreMap;

  void SetShadowEntry(MemMapEntry *entry, int swapPage);
  void FreePhysicalPage(int physicalPage);

  void RestorePage(int physicalPage, ShadowEntry *shadowEntry);

  void FreeTLB(int physicalPage);

  int PageSelectionStrategy();

  OpenFile* swapFile;
  BitMap* swapMap;

};

#endif // MIU_H


