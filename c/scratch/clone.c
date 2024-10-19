#include <stdio.h>

int main(int argc, char* argv[])
{
  if (--argc <= 0)
  {
    printf("Usage: %s <output>\n", argv[0]);
    return 1;
  }

  char *program_name = argv[0];
  char *fo_duplicate = argv[1];
  FILE* fi = fopen(program_name, "r");

  if (fi == NULL)
    printf("%s can't be found.\n", program_name);
  else
  {
    FILE* fo = fopen(fo_duplicate, "w");
    if (fo == NULL)
    {
      printf("%s can't do.\n", fo_duplicate);
      fclose(fi);
    }
    else
    {
      int c;
      while ((c = getc(fi)) != EOF)
      {
        putc(c, fo);
      }
    }
    printf("Done writing.\n");
  }
  return 0;
}
