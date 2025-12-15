#include <iostream>
#include <typeinfo>

int main() {

  int i{5};
  std::cout << "type of: " << typeid(i).name() << " = " << i << "\n";

  double d{5.5};
  std::cout << "type of: " << typeid(d).name() << " = " << d << "\n";

  std::cout << typeid(i + d).name() << " with value of " << i + d << "\n";

  return 0;
}
