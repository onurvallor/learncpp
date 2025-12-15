#include <iostream>

int calculator(int x, int y, char op) {

  int result{0};

  // x op y = result

  switch (op) {
  case '+':
    return x + y;
  case '-':
    return x - y;
  default:
    std::cout << "Enter a valid operation \n";
    return result;
  }
}

int main() {

  std::cout << "Enter the first value: \n";
  int x{};
  std::cin >> x;

  std::cout << "Enter the second value: \n";
  int y{};
  std::cin >> y;

  std::cout << "Enter the operation (+, -, *, /, %): \n";
  char op{};
  std::cin >> op;

  int result = calculator(x, y, op);

  std::cout << x << op << y << " = " << result << "\n";

  return 0;
}
