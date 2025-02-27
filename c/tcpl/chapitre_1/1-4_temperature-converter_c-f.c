// Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.

#include <stdio.h>

#define MAX_TEMP 300
#define STEPS 5

int main() {

  #ifdef DEBUG
  
    printf("Debugging mode enabled.\n\n");
  #endif 
     
  printf("Prints a table of temperature in Fahrenheit\n");

  // Celsius = (Fahrenheit - 32) * 5/9
  // Fahrenheit = Celsius * (9/5) + 32
  float celsius;
  int i = 0;
  printf("\n\tFahrenheit\tCelsius\n");
  while (i < MAX_TEMP) {
    float fahrenheit = i * (9.0 / 5) + 32;
    printf("\t%4dC\t\t%4.2fF\n", i, fahrenheit);
    i += STEPS;
  }
}