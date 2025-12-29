#include <iostream>
#include <ostream>

struct Employee {
  int id{};
  int age{};
  double wage{};
};

std::ostream &operator<<(std::ostream &out, const Employee &e) {
  return out << e.id << " " << e.age << " " << e.wage << "\n";
}

int main() {

  Employee joe{.id{2}, .age{20}, .wage{4500.0f}};

  joe.age = 100;

  std::cout << joe;

  return 0;
}
