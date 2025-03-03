// Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0. 2

#include <stdio.h>

#define MAX_TEMP 300
#define MIN_TEMP 0
#define STEPS 5

int main() {

  printf("\tFahrenheit\tCelsius\n");
  for (int i = MAX_TEMP; i > MIN_TEMP; i--) {
    float celsius = (i - 32) * (9.0 / 5);
    printf("\t%4dF\t\t%.2fC\n", i, celsius);
  }
}
