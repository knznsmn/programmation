/*
  Find the minimum number in an array
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  if (argc < 2) {
    printf("\nUsage:\n\t%s <number> <number> ...\n\n", argv[0]);
  }
  else {
    double max = atoi(argv[1]);
    printf("Initial value of max is %f.\n", max);
    for (int i = 1; i < argc; i++) {
      if (atoi(argv[i]) < max) {
        max = atoi(argv[i]);
      }
    }
    printf("The minimum number is %f.\n", max);
  }

}