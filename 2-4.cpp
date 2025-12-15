#include <iostream>

int doubleNumber(int x) { return x * 2; }

int userInputNumber() {

  int input{};
  std::cout << "Enter a number: " << "\n";

  std::cin >> input;

  return input;
}

int main() {
  int value = userInputNumber();
  std::cout << doubleNumber(value) << "\n";

  return 0;
}
