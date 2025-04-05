#include <stdio.h>

#define BUFFER_SIZE 256

int main(int argc, char *argv[]) {
  
  if (argc < 3) {
    printf("\nUsage:\n");
    printf("\n\t%s <string> <string>\n", argv[0]);
  }
  else {
    char strung[BUFFER_SIZE];
    int i = 0;
    int j = 0;
    while (argv[1][i] != '\0' && i < BUFFER_SIZE) {
      strung[i] = argv[1][i];
      i++;
    }
    while (argv[2][j] != '\0' && i < BUFFER_SIZE) {
      strung[i] = argv[2][j];
      i++;
      j++;
    }
    strung[i] = '\0';

    printf("%d\n", i);
    printf("%s\n", strung);
    printf("%c\n", strung[i]);
    
    j = 0;
    for (i = 0; strung[i] != '\0'; i++) {
      printf("%c\n", strung[i]);
      j++;
    }
    printf("There are %d letters.\n", j);
    printf("The last char is %d.\n", strung[--j]);
  }
}
