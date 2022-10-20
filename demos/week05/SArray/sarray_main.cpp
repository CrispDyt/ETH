#include "sarray.hpp"
#include <iostream>

int main() {
  std::cout << "Part 01:\n";
  {
  SArray a;
  SArray b(10);
  SArray c(b);
  SArray d = c;
  a = b;
  c = a / b + b;
  std::cout << c[0] << '\n';
  SArray const e = a + b;
  std::cout << e[0] << '\n';
  }

  std::cout << "Part 02:\n";
  {
  SArray a(2);
  a = a + a + a;
  }

}
