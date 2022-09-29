/*
 * Programming Techniques for Scientific Simulations I
 * HS 2022
 * Exercise 1.6
 */

#include <cmath>    // for std::sin
#include <iomanip>  // for std::setprecision
#include <iostream> // for std::cin, std::cout

double integrate(const double a, const double b, const unsigned int nbins);

double f(double x) {
  return std::sin(x);
}

int main() {
  const double a = 0.;
  const double b = M_PI;
  unsigned int nbins = 0;

  std::cout << "Enter positive integer nbins:\n";
  std::cin  >> nbins;

  std::cout << std::setprecision(20)
            << "integral of sin(x) from x = 0 to x = pi" << '\n'
            << "approximate: " << integrate(a, b, nbins) << '\n'
            << "exact:       " << 2.0                    << '\n';
}

double integrate(const double a, const double b, const unsigned int nbins) {
  double const dxhalf = (b - a) / (2 * nbins);
  double I = f(a);
  for (int i = 1; i < 2 * nbins; ++i) {
    I += 2. * (1.0 + i%2) * f(a + dxhalf * i);
  }
  I += f(b);

  return I*dxhalf/3.;
}
