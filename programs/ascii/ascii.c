#include <stdio.h>

void ui_menu(char *c);
void ls_ascii();

int main(int argc, char *argv[])
{
  if (--argc == 0)
  {
   ui_menu(argv[0]);
  }

  ls_ascii();

  return 0;
}

// Function Hall
void ui_menu(char *s)
{
  printf("\nUsage: %s <character>\n\n", s);
}

void ls_ascii()
{
  int max = 256;
  for (char i = 0; i <= max; i++)
  {
    printf("%c = %d\n", i, i);
  }
}
