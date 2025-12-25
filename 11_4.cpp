#include <iostream>

void printInt(int x) { std::cout << "X is " << x << "\n"; }

// template function to catch all the other type arguments.
template <typename T> void printInt(T x) = delete;

int main() {

  printInt(3);

  // Delted function, forbidded.
  printInt('a');
  printInt(5.0);

  return 0;
}
