#include <iostream>

bool isPrime(int num) { return (num == 2 || num == 3 || num == 5 || num == 7); }

void printPrime(int num) {
  if (isPrime(num)) {
    std::cout << num << " is prime number. \n";
  } else {
    std::cout << num << " is not prime number. \n";
  }
}

int main() {

  std::cout << "Enter a value (0-9): \n";

  int input{};

  std::cin >> input;

  printPrime(input);

  return 0;
}
