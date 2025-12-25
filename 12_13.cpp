#include <cmath>
#include <iostream>

// example of out params in LearnCPP

void getSinCos(double degrees, double &sinOut, double &cosOut) {
  constexpr double pi{3.141592653589};
  double radians = degrees * pi / 180.0;

  sinOut = std::sin(radians);
  cosOut = std::cos(radians);
}

int main() {

  double sin{0.0};
  double cos{0.0};

  double degrees{};

  std::cout << "Enter degrees: \n";

  std::cin >> degrees;

  getSinCos(degrees, sin, cos);

  std::cout << "Sin is " << sin << "\n";
  std::cout << "Cos is " << cos << "\n";

  return 0;
}
