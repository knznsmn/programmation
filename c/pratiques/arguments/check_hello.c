// Check if the word "hello" is in the arguments.

#include <stdio.h>
char *th(int i) {
  char *ordinal;
    if (i == 1) ordinal = "st";
    else if (i == 2) ordinal = "nd";
    else if (i == 3) ordinal = "rd";
    else ordinal = "th";
  return ordinal;
}
int compare(char *c, char *e) {
  #ifdef DEBUG
    printf("compare() called and initiated.\n");
    printf("sizeof(char) = %lu\n", sizeof(char));
  #endif
  int sizeof_c = sizeof(c);
  int sizeof_e = sizeof(e);
  if (sizeof_c != sizeof_e) {
    #ifdef DEBUG
      printf("compare()'s inputs' sizes are !equal.\n");
    #endif
    return 0;
  }
  else {
    for (int i = 0; i < (sizeof_c / 2) + 1; i++) {
      #ifdef DEBUG
        printf("c[i] = %c.\n", c[i]);
        printf("e[i] = %c.\n", e[i]);
      #endif
      if (c[i] != e[i]) {
        #ifdef DEBUG
          printf("Mismatched letters.\n");
        #endif
        return 0;
      }
    }
    #ifdef DEBUG
      printf("%s and %s are equal.\n", c, e);
    #endif
    return 1;
  }
}

int main(int argc, char *argv[]) {
  char *hello = "hello";
  #ifdef DEBUG
    printf("Value of hello =\t%s\n", hello);
    printf("Size of hello =\t%lu\n", sizeof(hello));

    if (hello == "hello") {
      printf("%s & \"hello\" are equal.\n", hello);
  }
  else {
      printf("%s & \"hello\" are not equal.\n", hello);
  }
  #endif

  // Checks if argv == to hello
  for (int i = 1; i < argc; i++) {
    if (compare(hello, argv[i]) == 1) {
      printf("Found %s at %d%s argc.\n", hello, i, th(i));
    }
  }
}
