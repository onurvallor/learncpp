#include <cstdint>
#include <iostream>

int main() {

  std::int8_t myInt{65};

  std::cout << myInt << "\n";

  std::cout << static_cast<int>(myInt) << "\n";

  return 0;
}
