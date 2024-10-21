#include <stdio.h>

void ui_menu(char *c);
void ls_ascii(char *c);

int main(int argc, char *argv[])
{
  if (argc > 2)
  {
   ui_menu(argv[0]);
  }

  ls_ascii(argv[1]);

  return 0;
}

// Function Hall
void ui_menu(char *s)
{
  printf("\nUsage: %s <character>\n\n", s);
}

void ls_ascii(char *c)
{
  if (c == NULL)
  {
    int ci = 0;
    int cn = 0;
    int lc = 97;
    int uc = 65;
    int no = 48;
    while (cn < 26)
    {
      if (cn > 9)
        printf("\t     ");
      else
        printf("\t%3d = %c", no, no);
      printf("\t\t%3d = %c", uc, uc);
      printf("\t\t%3d = %c\n", lc, lc);
      cn++; lc++; uc++; no++; ci++;
    }
  }
}
