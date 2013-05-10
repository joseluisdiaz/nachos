#include "syscall.h"

int
main()
{
  char* args[2];
  args[0] = "../test/test2";
  args[1] = "juancarlo";
  args[2] = "batman";

  Write("hola\n", 5 ,1);

  SpaceId id = Exec(2, args);

  int status = Join(id);
  int a = '0' + status;

  Write(&a, 1, 1);

  Write("\n",1,1);

  Write("Hola pablo 1\n", 13, 1);
  Write("Hola pablo 2\n", 13, 1);
  Write("Hola pablo 3\n", 13, 1);

  Halt();
  /* not reached */
}
