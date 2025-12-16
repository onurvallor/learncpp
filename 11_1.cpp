#include <iostream>

// function overloads
int add(int x, int y) { return x + y; }
double add(double x, double y) { return x + y; }

// Using template to be able to create a generic function for printing info (eg.
// add with int, add with double).
template <typename Func, typename X, typename Y>
void printInfo(Func func, X x, Y y) {
  std::cout << "Result : " << func(x, y) << "\n";
}

int main() {

  // calling function and passing fuction reference with the expected data.
  printInfo(static_cast<int (*)(int, int)>(add), 2, 3);
  printInfo(static_cast<double (*)(double, double)>(add), 2.5, 3.0);

  return 0;
}
