/*
### Practice Problem 2: Dynamic String Allocation
Write a program that:
1. Prompts the user to enter the length of a string.
2. Allocates memory for the string using `malloc`.
3. Prompts the user to enter the string.
4. Prints the entered string.
5. Frees the allocated memory.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  printf("Enter the length of the string: ");
  int str_len;
  scanf("%d", &str_len);
  int str_mem;
  str_mem = (int*)malloc(str_len * sizeof(char));
}