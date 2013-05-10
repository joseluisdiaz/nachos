// processtable.h
//      Tabla de procesos para nachos (Header+Codigo)
// by Diaz-Racca, la delantera del mundial '86

#ifndef PROCTABLE_H
#define PROCTABLE_H

#include "syscall.h"
#include <map>

class ProcessTable {
 public:
  
  ProcessTable(){
    lastId = 0;
  };
  ~ProcessTable(){ };

  SpaceId Add(Thread *thread) {
    table[++lastId] = thread;
    return lastId;
  }
  
  Thread *Get(SpaceId id) {
    return table[id];
  }

 private:
  int lastId; 
  std::map<SpaceId, Thread*> table;
};

#endif //PROCTABLE_H
