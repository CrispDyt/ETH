/* Programming Techniques for Scientific Simulations, HS 2022
 * Exercise 4.2
 */

#include <cmath>
#include <iostream>

#include "simpson.hpp"

// Function object for f(x) = exp(-lambda*x)
struct decay {
  using argument_t = double;
  using result_t = double;

  decay(const result_t lambda_value=1.0) : lambda_(lambda_value) {}

  // Function call operator
  inline result_t operator()(const argument_t x) const { return std::exp(-lambda_*x); }

private:
  const result_t lambda_;
};

const double lambda=2.;

double decay_func(const double x) { return std::exp(-lambda*x); }


int main() {
  const unsigned bins=128;
  const double a(0);
  const double b(1);

  std::cout.precision(15);

  // Call using function object
  decay func(lambda);
  std::cout << "int_a^b exp(-lambda*x) dx  = " << simpson(a, b, bins, func)
            << "  (function object version)" << std::endl;

  // Call using function pointer
  std::cout << "int_a^b exp(-lambda*x) dx  = " << simpson(a, b, bins, decay_func)
            << "  (function pointer version)" << std::endl;

  // Analytic result for check
  std::cout << "           analytic result = " << (func(a)-func(b))/lambda << std::endl;

  return 0;
}
