#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  if (--argc <= 0)
  {
    printf("\nUsage: $ %s <dirname>\n\n", argv[0]);
    return 1;
  }
  // Create a directory
  char* fnm = argv[1];
  char cmd[256];
  snprintf(cmd, sizeof(cmd), "mkdir %s\n", fnm);
  system(cmd);
  /*
  if (cmd == 0)
    printf("%s directory created.\n", argv[1]);
  else
    printf("mkdir failed.\n");
  */
  return 0;
}
