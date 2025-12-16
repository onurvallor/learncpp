#include <iostream>

int add(int x, int y) { return x + y; }

double add(double x, double y) { return x + y; }

template <typename Func, typename X, typename Y>
void printInfo(Func func, X x, Y y) {
  std::cout << "Result : " << func(x, y) << "\n";
}

int main() {

  printInfo(static_cast<int (*)(int, int)>(add), 2, 3);
  printInfo(static_cast<double (*)(double, double)>(add), 2.5, 3.0);

  return 0;
}
