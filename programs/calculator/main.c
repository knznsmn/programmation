#include <stdio.h>

void introduction();

int main(int argc, char *argv[])
{
  // Introduction
  introduction();
  
  return 0;
}

void introduction()
{
  float version = 0.0001;
  char *author = "Julius C. Cesar";
  printf("\n\n");
  printf("Ersatz Calculator v%f\n", version);
  printf("Written by %s\n\n\n", author);
}
