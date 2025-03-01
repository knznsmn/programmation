#include <stdio.h>

int main() {

  printf("Enter a temperature: ");
  
  int temperature = 0;
  scanf("%d", &temperature);
  
  printf("The temperature is %d.\n", temperature);
  if (temperature <= 0) {
    printf("Wow, that's freezing!\n");
  }
  else if (temperature == 4) {
    printf("That's interesting!\n");
  }
  else if (temperature < 24) {
    printf("It's like Philippines!\n");
  }
  else if (temperature >= 24) {
    printf("It's so hot like yu mama!\n");
  }

  return 0;
}
