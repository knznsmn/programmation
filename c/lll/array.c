#include <stdio.h>

#define MAX_IDS 42

int main() {

  int ids[MAX_IDS] = {0};

  int i = 0;
  for (i = 0; i <= MAX_IDS; i++) {
    printf("ids[%d] = %d\n", ids[i], ids[i]);
  }

}
