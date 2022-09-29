/*
 * Programming Techniques for Scientific Simulations I
 * HS 2022
 * Exercise 0.1
 */

#include <iostream> // for std::cin, std::cout
#include <numeric>  // for std::gcd

// declare type alias
using gcd_t = unsigned int;

// function declarations
gcd_t gcd_recursive(gcd_t a, gcd_t b);
gcd_t gcd_loop(gcd_t a, gcd_t b);

int main() {
  gcd_t a = 0;
  gcd_t b = 0;

  std::cout << "Enter two non-negative integers a and b:\n";
  std::cin >> a >> b;

  std::cout << "gcd_recursive(a, b) = " << gcd_recursive(a, b) << '\n'
            << "gcd_loop(a, b)      = " << gcd_loop(a, b)      << '\n';
// check that std::gcd is available (C++17)
// see https://en.cppreference.com/w/cpp/feature_test
#if defined(__cpp_lib_gcd_lcm) && __cpp_lib_gcd_lcm >= 201606L
  std::cout << "std::gcd(a, b)      = " << std::gcd(a, b)      << '\n';
#endif

}

// function definitions
gcd_t gcd_recursive(gcd_t a, gcd_t b) {
  if (a == 0 || b == 0) {
    return a + b;
  } else if (a > b) {
    return gcd_recursive(b, a % b);
  } else {
    return gcd_recursive(a, b % a);
  }
}

gcd_t gcd_loop(gcd_t a, gcd_t b) {
  while (a > 0 && b > 0) {
    if (a > b) {
      a = a % b;
    } else {
      b = b % a;
    }
  }
  return a + b;
}
