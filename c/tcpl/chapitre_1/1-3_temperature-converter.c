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
  float fahrenheit = 0;
  printf("Please enter the temperature in fahrenheit: ");
  scanf("%f", &fahrenheit);
  float celsius = (fahrenheit - 32) * (5.0 / 9);

  #ifdef DEBUG
    printf("\"celsius\" is: %f\n", celsius);
    printf("\"fahrenheit\" is: %f\n", fahrenheit);
  #endif 

  printf("%fF is %f Celsius.\n", fahrenheit, celsius);

}
