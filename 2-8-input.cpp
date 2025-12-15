#include <iostream>

int getInteger() {

  std::cout << "Enter an integer: " << "\n";

  int input{};

  std::cin >> input;

  return input;
}
