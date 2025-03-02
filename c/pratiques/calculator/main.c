#include <stdio.h>

void introduction();
void newline(int n);
double calculate(char x, char y, char c);


int main(int argc, char *argv[])
{
  // Check the argc
  int arc_min = 4;
  if (argc != arc_min)
  {
    newline(2);
    printf("Usage: %s <number> <operator> <number>", argv[0]);
    newline(2);
    return 1;
  }


  // Introduction
  introduction();

  // Gather arguments

  // Calculate
  calculate(&argv[1], &argv[3], &argv[2]);
  
  return 0;
}

void introduction()
{
  float version = 0.01;
  char *author = "Julius C. Cesar";
  newline(2);
  printf("Ersatz Calculator v%.3f\n", version);
  printf("Written by %s\n", author);
}

void newline(int n)
{
  while (n > 0)
  {
    printf("\n");
    n--;
  }
}

double calculate(char x, char y, char c)
{
  double(x);
  double(y);
  switch(c)
  {
    case '+': return x + y;
      break;
    default:
      printf("Nah uh.");
      newline(2);
  }
}
