/*
  Find the maximum number in an array
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  if (argc < 2) {
    printf("\nUsage:\t %s <number> <number> ...\n", argv[0]);
  }
  else {
    double max = atoi(argv[1]);
    for (int i = 1; i < argc; i++) {
      if (atoi(argv[i]) > max) {
        max = atoi(argv[i]);
      }
    }
    printf("The maximum number found is %f.\n", max);
  }
}