// Create a program that prompts a user to enter
// a number from 1 to 100.
#include <iostream>

int main() {
  #ifndef JUDGE
    freopen("../../_/input.txt", "r", stdin);
    freopen("../../_/output.txt", "w", stdout);
  #endif

  std::cout << "Enter your favorite number: ";
  int number;
  std::cin >> number;
  std::cout << "\nWow! That's my favorite nummber!";
  std::cout << "\nReally, " << number
    << " is my favorite number too!\n"
    << std::endl;
}
