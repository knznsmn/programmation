// Exercise 1-3. Modify the temperature conversion program to print a heading
// above the table. 

#include <stdio.h>

#define MAX_TEMP 300
#define MIN_TEMP 0
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
    float celsius = (i - 32) * (5.0 / 9);
    printf("\t%4dF\t\t%4.2fC\n", i, celsius);
    i += STEPS;
  }
}