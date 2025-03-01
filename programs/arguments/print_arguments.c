// Print each command-line argument on a new line.

#include <stdio.h>

int main(int argc, char *argv[]) {

  printf("\nNo. of argument:\t%d\n\n", argc);

  char *argument;
  argc > 1 ? argument = "arguments" : "argument";
  printf("List of %s\n\n", argument);
  int i = 0;
  for (int i = 0; i < argc; i++) {
    printf("\targv[%d]:\t%s\n", i, argv[i]);
  }
}
