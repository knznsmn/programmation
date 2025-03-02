// Accept as many arguments of numbers as
// command-line arguments and print their sum.

#include <stdio.h>

int main(int argc, char *argv[]) {

  if (argc < 3) {
    printf("\nExpects at least 2 arguments.\n");
  }
  else {
    int sum = atoi(argv[1]);
    for (int i = 2; i < argc; i++) {
      sum += atoi(argv[i]);
    }
    printf("\n\tThe sum of %d numbers is %d.\n", --argc, sum);
  }
}
