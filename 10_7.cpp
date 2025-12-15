#include <iostream>

using PrintError = int;

PrintError printData(int x) {
  std::cout << "Value of x = " << x << "\n";
  return x;
}

int main() {
  // some random value to populate the paramater of printData.
  PrintError dataValue = printData(20);
  return 0;
}
