#include <iostream>

#define min(x,y) (x < y ? x : y)

int main() {
  int x = 1;
  int y = 0;
  std::cout << "x = " << x << ", " << "y = " << y << '\n';
  std::cout << "min(x++,y++) = " << min(x++,y++) << '\n';
  std::cout << "x = " << x << ", " << "y = " << y << '\n';
  return 0;
}
