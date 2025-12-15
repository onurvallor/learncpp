#include <iostream>
#include <string>
#include <string_view>

void isNameOnur(std::string_view name) {

  if (name == "Onur") {
    std::cout << "Welcome Onur! \n";
  } else {
    std::cout << "Welcome stranger!" << "\n";
  }
}

int main() {

  std::cout << "Enter your name: " << "\n";

  std::string name{};
  std::cin >> name;

  isNameOnur(name);

  return 0;
}
