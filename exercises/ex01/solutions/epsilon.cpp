/*
 * Programming Techniques for Scientific Simulations I
 * HS 2022
 * Exercise 1.5
 */

#include <iostream> // for std::cout
#include <iomanip>  // for std::setprecision
#include <limits>   // for std::numeric_limits

using epsilon_t = double;

epsilon_t epsilon_approximate();
epsilon_t epsilon_bisection();
epsilon_t epsilon_nextafter();
epsilon_t epsilon_limits();

int main() {
  // Note that there are different definitions of machine precision
  // see https://en.wikipedia.org/wiki/Machine_epsilon#Variant_definitions
  // in particular, the one presented in the lecture is different from the one in the C++ standard
  std::cout << std::setprecision(20)
            << "approximate: " << epsilon_approximate() << '\n'
            << "bisection:   " << epsilon_bisection()   << '\n'
            << "limits:      " << epsilon_limits()      << '\n';
}


// Calculate machine precision to a factor of 2
// see https://en.wikipedia.org/wiki/Machine_epsilon#Approximation
epsilon_t epsilon_approximate() {
  const epsilon_t one  = 1;
  const epsilon_t half = 0.5;
  epsilon_t epsilon = 1;
  while (one + half * epsilon != one) {
    epsilon *= half;
  }

  return epsilon;
}

/*
The bisection method gets the true value of epsilon as
defined in the lecture. Note that this is not the same
as std::numeric_limits<double>::epsilon(). The reason
for this is that we define epsilon as the smallest
number such that 1 + epsilon != 1, whereas numeric_limits
uses the definition that the smallest number larger than
1 is 1 + epsilon. This is different because in our definition
1 + epsilon doesn't have to be representible as a double,
it just has to be rounded (up) to a value other than 1.
*/
epsilon_t epsilon_bisection() {
  const epsilon_t one  = 1;
  const epsilon_t half = 0.5;
  epsilon_t lower = 0;
  epsilon_t upper = 1;
  epsilon_t average = 1;
  epsilon_t average_old = 0;

  while (average_old != average) {
    average_old = average;
    average = half * (upper + lower);
    if (one + average == one) {
      lower = average;
    } else {
      upper = average;
    }
  }
  return upper;
}

epsilon_t epsilon_limits() {
  return std::numeric_limits<epsilon_t>::epsilon();
}
