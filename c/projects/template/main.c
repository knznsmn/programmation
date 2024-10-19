#include <stdio.h>
#include <stdlib.h>

void mkdir(char* f);

int main(int argc, char* argv[])
{
  if (--argc <= 0)
  {
    printf("\nUsage: %s <dirname>\n\n", argv[0]);
    return 1; 
  }
  char* dirname = argv[1];
  mkdir(dirname);
  return 0;
}
// Function Hall
void mkdir(char* f)
{
  char d[256];
  snprintf(d, sizeof(d), "mkdir %s\n", f);
  system(d);
}
