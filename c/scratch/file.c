#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *file = fopen(argv[1], "r");
  FILE *data = fopen(argv[2], "w");

  int c;
  while ((c = getc(file)) != EOF)
  {
    putc(c, data);
  }
  fclose(file);
  fclose(data);

  //printf("%s\n", file);

  return 0;
}
