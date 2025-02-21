#include <stdio.h>

#define DEBUG

int main()
{
  // type name = initialValue;
  int learning = 42;
  int number = 37;

  #ifdef DEBUG
  printf("Debug mode: variable learning = %d.\n", learning);
  printf("%s\n", __FILE__);
  #endif 

  return 0;
}
