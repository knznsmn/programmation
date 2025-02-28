// Print each command-line argument on a new line.

#include <stdio.h>

int main(int argc, char *argv[]) {

  printf("argc:\t%d.\n", argc);
  int i = 0;
  for (int i = 0; i < argc; i++) {
    printf("argv[%d]:\t%s\n", i, argv[i]);
  }
}
