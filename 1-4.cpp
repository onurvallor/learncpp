#include <iostream>


int main(){
  
  [[maybe_unused]] double pi {3.14159};

  int width {15};

  std::cout << width << std::endl;

  int x { 0 };
  std::cout << x << std::endl;

  int y {};
  std::cin >> y;



  return 0;
}
