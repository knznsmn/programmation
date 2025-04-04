
#include <stdio.h>

#define BUFF_SIZE 256

int main() {
  int ch;
  int words = 0;
  int lines = 0;

  FILE *f = fopen("mots", "r");
  if (f == NULL) {
    printf("Error opening file.\n");
    return 1;
  }
    while ((ch = fgetc(f)) != EOF) {
      if (ch == ' ') {
        words++;
      }
      else if (ch == '\n') {
        lines++;
      }
    }


  fclose(f);
  printf("There are %d words and %d lines found.\n", words, lines);
}