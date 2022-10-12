#include <cmath>
#include <iostream>
#include <functional>

int main() {

  // function object
  class MyFunc {
    public:
      MyFunc(double lambda) : lambda_(lambda) {}
      double operator() (double x) {
        return std::exp(-lambda_*x);
      }
    private:
      double const lambda_;
  };
  MyFunc f(3.5); // the decay constant lambda is 3.5!
  std::cout << "f (log(2)/lambda) = " << f (std::log(2.)/3.5) << '\n';

  // lambda
  auto fl = [] (double x) { return std::exp(-3.5*x); };
  // C++11 auto is very convenient :-)
  // double (*fl)(double) = [] (double x) { return std::exp(-3.5*x); };
  std::cout << "fl(log(2)/lambda) = " << fl(std::log(2.)/3.5) << '\n';

}
