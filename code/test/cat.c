#include "syscall.h"

#define BUFFER_SIZE 42

void copy(int in, int out) {
  char buffer[BUFFER_SIZE];
  int read_bytes = 0;

  while( (read_bytes = Read(buffer, BUFFER_SIZE, in)) > 0 )
    Write(buffer, read_bytes, out);
}

int main(int argc, char **argv) {
  if (argc < 1) 
    return -1;

  int in = Open(argv[1]);

  if (in == -1) 
    return -1;

  copy(in,1);

  Close(in);

  return 0;
}
