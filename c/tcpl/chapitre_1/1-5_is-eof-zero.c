// Verify that the expression
// getchar() != EOF is 0 or 1

#include <stdio.h>

int main() {

  int c;

  c = getchar();
  if (c == EOF) putchar('0');
  else putchar('1');

  putchar('\n');

}
