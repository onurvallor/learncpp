#include <iostream>

auto addTwoNumbers(int x, int y) -> int { return x + y; }

int main() {

  std::cout << "Enter first number: \n";

  int x{};
  std::cin >> x;

  std::cout << "Enter second number: \n";

  int y{};
  std::cin >> y;

  std::cout << "Result : " << x + y << "\n";

  return 0;
}
