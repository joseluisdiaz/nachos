// fdtable.cc
//      Tabla de descriptores para los threads
// by Diaz-Racca, la delantera del mundial '86

#include "fdtable.h"
#include "processtable.h"

extern FileSystem *fileSystem;
extern SynchConsole *synchConsole;
extern ProcessTable *processTable;


FdTable::FdTable() {
  nextId = 0;
  Add(NULL);
  Add(NULL);
}

FdTable::~FdTable() {
}


OpenFileId FdTable::Add(OpenFile *file) {
  FileDescriptor descriptor;

  descriptor.file = file;
  descriptor.id = nextId;

  table[nextId] = descriptor; 

  return nextId++;
}


OpenFileId FdTable::Open(char *name) {
  OpenFile *file = fileSystem->Open(name);
  
  if (file == 0) 
    return -1;
  
  return Add(file);
}

void FdTable::Create(char *name) {
  fileSystem->Create(name,0);
}

void FdTable::Close(OpenFileId id) {
  
  delete table[id].file; 
  
  table.erase(id);
}

int FdTable::Read(char *buffer, int size, OpenFileId id) {
  if ( id == 0 ) {
      synchConsole->Read(buffer, size);
      return size;
  }

  return table[id].file->Read(buffer,size);
}

void FdTable::Write(char *buffer, int size, OpenFileId id) {
  if ( id == 1 ) {
      synchConsole->Write(buffer, size);
      return;
  }

  table[id].file->Write(buffer,size);
}
