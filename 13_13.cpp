#include <iostream>

template <typename T> struct Pair {
  T first;
  T second;
};

template <typename T> constexpr T max(Pair<T> p) {
  return (p.first > p.second ? p.first : p.second);
}

int main() {

  Pair<int> pInt{2, 4};
  std::cout << max(pInt) << " is larger\n";

  Pair<double> pDouble{3.4, 1.2};
  std::cout << max(pDouble) << " is larger\n";

  return 0;
}
