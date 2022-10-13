/* Programming Techniques for Scientific Simulations, HS 2021
 * Exercise 3.2
 */

#include <iostream>
#include <limits>

/*
By continually dividing a 'trial epsilon' by two, we can
estimate the true epsilon up to a factor of 2 uncertainty.
*/
template <typename T>
T machine_epsilon_divide() {
  const T one{1.0};
  T eps_cand{1.0};

  while (eps_cand + one > one) eps_cand /= 2;
  // We could use static_cast<T>(2.) here, but type generalisation helps us out.

  return eps_cand * 2;  // again type generalisation
}

/*
The bisection method gets the true value of epsilon as
defined in the lecture. Note that this is not the same
as std::numeric_limits<double>::epsilon(). The reason
for this is that we define epsilon as the smallest
number such that 1 + epsilon != 1, whereas numeric_limits
uses the definition that the smallest
number larger than 1 is 1 + epsilon. This is different
because in our definition 1 + epsilon doesn't have to
be representible as a double, it just has to be rounded
(up) to a value other than 1.
*/
template <typename T>
T machine_epsilon_bisection() {
  T lower{0.0};
  T upper{1.0};
  const T one{1.0};
  T old_eps_cand{0.0};
  T eps_cand{1.0};

  while (old_eps_cand != eps_cand) {
    old_eps_cand = eps_cand;
    eps_cand = (upper + lower) / static_cast<T>(2.0);
    if (one + eps_cand == one) {
      lower = eps_cand;
    } else {
      upper = eps_cand;
    }
  }
  return upper;
}

int main() {
  // this is clearly a case of bad copy-paste, it can easily be avoided
  // with another templated function (which we don't for simplicity)
  std::cout << "machine epsilon for float:" << std::endl
            << "numeric_limits value: " << std::numeric_limits<float>::epsilon()
            << std::endl
            << "division method:      " << machine_epsilon_divide<float>()
            << std::endl
            << "bisection method:     " << machine_epsilon_bisection<float>()
            << std::endl
            << std::endl;

  std::cout << "machine epsilon for double:" << std::endl
            << "numeric_limits value: "
            << std::numeric_limits<double>::epsilon() << std::endl
            << "division method:      " << machine_epsilon_divide<double>()
            << std::endl
            << "bisection method:     " << machine_epsilon_bisection<double>()
            << std::endl
            << std::endl;

  std::cout << "machine epsilon for long double:" << std::endl
            << "numeric_limits value: "
            << std::numeric_limits<long double>::epsilon() << std::endl
            << "division method:      " << machine_epsilon_divide<long double>()
            << std::endl
            << "bisection method:     "
            << machine_epsilon_bisection<long double>() << std::endl
            << std::endl;
  return 0;
}
