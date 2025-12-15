#include <iostream>
#include <typeinfo>

int main() {

  int i{5};
  // Displays the type of the variable i.
  std::cout << "type of: " << typeid(i).name() << " = " << i << "\n";

  double d{5.5};
  // Displays the type of the variable d.
  std::cout << "type of: " << typeid(d).name() << " = " << d << "\n";

  // Displays the implicit conversion from into to double value.
  std::cout << typeid(i + d).name() << " with value of " << i + d << "\n";

  return 0;
}
