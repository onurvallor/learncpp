#include <iostream>


int main(){

  int x{};
  int y{};
  int z{};

  std::cout << "Enter three number: ";

  std::cin >> x >> y >> z;

  std::cout << "You entered " << x << ", " << y << ", and " << z << "." << std::endl;

  return 0;
}
