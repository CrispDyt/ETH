/* Programming Techniques for Scientific Simulations, HS 2021
 * Exercise 3.1: application
 */

#include <simpson.hpp>
// we can include our files with <> instead of ""
// if cmake knows where they are (include_directory)

#include <cmath>
#include <iostream>
#include <fstream>

double my_sin(double value) {
  return std::sin(value);
}

int main() {

  std::cout << "Integrator maximum resolution?" << std::endl;
  size_t N;
  std::cin >> N;

  for(size_t i = 2; i <= N; ++i) {
    std::cout << i << "\t" << integrate(0, M_PI, i, my_sin) << std::endl;
  }

  return 0;
}
