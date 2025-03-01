// Accept two numbers as command-line arguments and
// print their sum.

#include <stdio.h>

int main(int argc, char *argv[]) {

  if (argc < 3) {
    printf("\nExpects 2 arguments.\n");
  }
  else {
    printf("\n\t%s + %s = %d.\n", argv[1], argv[2], atoi(argv[1]) + atoi(argv[2]));
  }
}
