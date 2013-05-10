#include "syscall.h"


void cout(char *s) {
  int i = 0;
  do 
    Write(s + i, 1, 1);
  while(s[i++] != '\0'); 
}


int
main(int argc, char **argv)
{

  Dump();
  int i = 0;
  for (; i <= argc; i++) {
    cout(argv[i]);
    cout("\n");
  }
  
  
  Write("Hola jose 1\n", 12, 1);
  Write("Hola jose 2\n", 12, 1);
  Write("Hola jose 3\n", 12, 1);
  return 1;
}
