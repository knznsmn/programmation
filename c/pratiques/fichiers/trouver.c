#include <stdio.h>
#define BUFF_SiZE 64
int main(int argc, char *argv[]) {

  int ch;
  int word[64];
  int length;
  FILE *f  = fopen("mots", "r");
  #ifdef DEBUG
  if (f == NULL) {
    printf("File failed to open.\n");
  }
  else {
    printf("File successfully opened.\n");
  }
  #endif 

  FILE *fw = fopen("palindromes.md", "a+");
  #ifdef DEBUG
  if (fw == NULL) {
    printf("File creation failed.\n");
  }
  else {
    printf("File opened successfully.\n");
    printf("Ready to append input\n");
  }
  #endif
  
  int i = 0;
  while ((ch = fgetc(f)) != EOF) {
    word[i] += ch;
    i++;
    if (ch == '\n') {
      length = i;
      i = 0;
      printf("%d\n", length);
      for (int i = 0; i < length; i++) {
        fprintf(fw, "%d", word[i]);
      }
      fprintf(fw, "\n");
    }
  }
    
  fclose(f);
  fclose(fw);
  return 0;
}
