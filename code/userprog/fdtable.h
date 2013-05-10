// fdtable.h
//      Tabla de descriptores para los threads (Header)
// by Diaz-Racca, la delantera del mundial '86

#ifndef FDTABLE_H
#define FDTABLE_H

#include "openfile.h"
#include "syscall.h"
#include "filesys.h"
#include "synchconsole.h"

#include <map>

struct FileDescriptor {
  OpenFile *file;
  OpenFileId id;
};


class FdTable {
 public:
  
  FdTable();
  
  ~FdTable();

  int Read(char *buffer, int size, OpenFileId id);
  
  void Write(char *buffer, int size, OpenFileId id);

  void Create(char *name);

  OpenFileId Open(char *name);

  void Close(OpenFileId id);

 private:
  SynchConsole* console;
  std::map<OpenFileId, FileDescriptor> table;
  OpenFileId nextId;
  OpenFileId Add(OpenFile *file); 
};

#endif //FDTABLE_H
