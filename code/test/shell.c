#include "syscall.h"

int split(int pos, char *buffer, char *args[]) {
  char *c = buffer;

  args[pos++] = c;

  while( *c != ' ' && *c != '\0' ) c++;
  
  if ( *c == ' ' ) { 
    *(c++) = '\0';
    return 1 + split(pos, c, args);
  }

  return 0;
}


int
main()
{
  SpaceId newProc;
  OpenFileId input = ConsoleInput;
  OpenFileId output = ConsoleOutput;
  char prompt[2], ch, buffer[60];
  char *argv[32]; // MAX_ARGS == 32
  int i,j;

  prompt[0] = '-';
  prompt[1] = '-';

  while( 1 )
    {
      for (j=0; j< 32; j++)
        argv[j] = 0;

      Write(prompt, 2, output);
      
      i = 0;
      
      do {
        
        Read(&buffer[i], 1, input); 
          
      } while( buffer[i++] != '\n' );
      
      buffer[--i] = '\0';
      
      if( i > 0 ) {
        int runInBackground = 0;
        
        if (buffer[0] == '&')
          runInBackground = 1;
        
        int argc = split(0, buffer + runInBackground, argv);
        
        newProc = Exec(argc, argv);

        if (runInBackground == 0)
          Join(newProc);
          
      }
    }
}

