/*
### Practice Problem 1: Allocate and Initialize an Array
Write a program that:
1. Prompts the user to enter the number of elements.
2. Allocates memory for an array of integers using `malloc`.
3. Initializes the array with values from 1 to n.
4. Prints the array elements.
5. Frees the allocated memory.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  printf("Enter the number of elements: ");
  int n;
  scanf("%d", &n);

  int *arrays;
  arrays = (int*)malloc(n * sizeof(int));

  for (int i = 1; i <= n; i++) {
    arrays[i] = i;
  }

  for (int i = 1; i <= n; i++) {
    printf("%d. arrays[%d] = %d.\n", i, arrays[i], i);
  }

  free(arrays);
}