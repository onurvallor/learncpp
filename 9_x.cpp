#include <cassert>
#include <iostream>
#include <random>

int gMaxNumber{100};

int getUserInput() {
  int input{};
  std::cin >> input;

  return input;
}

void printMenu() {}

bool isUserInputCorrect(int input, int randomNumber) {

  if (input < 0 || input < 101) {
    std::cout << "Number is out of bounds \n";
    return false;
  }
  // TODO: Fix the comparison. When the number is guessed correctly, it doesn't
  // register it as correct so user can number guess correctly.

  if (input == randomNumber) {
    return true;
  } else if (input < static_cast<int>(randomNumber)) {
    std::cout << "Lo \n";
    return false;
  } else {
    std::cout << "Hi \n";
    return false;
  }

  return false;
}

int main() {

  std::cout << "Pick a number between 1 - 100: \n";

  int input{getUserInput()};

  std::mt19937 mt{std::random_device{}()};
  std::uniform_int_distribution<> dist{1, 100};

  int randomNumber = dist(mt);

  std::cout << "Random Number chosen: " << randomNumber << "\n";

  while (!isUserInputCorrect(input, randomNumber)) {
    std::cout << "Try again \n";
    std::cout << "Enter another number: \n";
    std::cin >> input;
  }
}
