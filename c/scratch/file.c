#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *file = fopen(argv[0], "r");
  FILE *data = fopen("clone", "w");
  data = fscanf(file, "%s");
  fclose(file);
  fclose(data);

  //printf("%s\n", file);

  return 0;
}
