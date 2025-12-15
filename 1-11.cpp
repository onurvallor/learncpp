#include <iostream>

int main() {
  int x{};

  std::cout << "Enter X value: " << "\n";
  std::cin >> x;

  std::cout << "Result (double): " << x * 2 << "\n";
  std::cout << "Result (Triple): " << x * 3 << "\n";

  return 0;
}
