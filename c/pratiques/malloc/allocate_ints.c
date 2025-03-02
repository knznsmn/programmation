#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  printf("Enter the number of integers to allocate: ");
  int n;
  scanf("%d", &n);
  printf("\n");
  int *malloc_arrays;

  malloc_arrays = (int*)malloc(sizeof(int) * n);

  // Initialize allocated array
  for (int i = 0; i <= n; i++) {
    malloc_arrays[i] = i;
  }

  #ifdef DEBUG
    printf("sizeof(malloc_arrays) = %lu.\n", sizeof(malloc_arrays));
  #endif
  for (int i = 1; i <= n; i++) {
    printf("%d. malloc_arrays[%d] = %d\n", i, i, malloc_arrays[i]);
  }

  printf("\n");

  free(malloc_arrays);

  printf("%d\n", malloc_arrays[1]);
}