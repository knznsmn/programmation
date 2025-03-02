// Print command-line arguments in reverse order.

#include <stdio.h>

int main(int argc, char *argv[]) {
  for (int i = --argc; i > 0; i--) {
    if (i == 1) {
      printf("\%s\n", argv[i]);
    }
    else {
    printf("%s ", argv[i]);
    }
  }
}
