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
    cout("####");
    cout(argv[i]);
    cout("####\n");
  }

  return 1;
}
