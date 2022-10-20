#include <iostream>
#include <vector>
#include "average.hpp"

int main() {

  std::vector<double> vd; // vd = {1., 2., 3., 4.}; // needs C++11
  vd.push_back(1.); vd.push_back(2.); vd.push_back(3.); vd.push_back(4.);
  std::cout << "average(vd)  = " << average(vd) << std::endl;

  std::vector<int>vi; // vi = {1, 2, 3, 4}; // needs C++11
  vi.push_back(1); vi.push_back(2); vi.push_back(3); vi.push_back(4);
  std::cout << "average(vi)  = " << average(vi) << std::endl;

  std::vector<unsigned int> vui; // vui = {1, 2, 3, 4}; // needs C++11
  vui.push_back(1); vui.push_back(2); vui.push_back(3); vui.push_back(4);
  std::cout << "average(vui) = " << average(vui) << std::endl;

  std::vector<bool> vb; // vb = {0, 1, 1, 1}; // needs C++11
  vb.push_back(0); vb.push_back(1); vb.push_back(1); vb.push_back(1);
  std::cout << "average(vb)  = " << average(vb) << std::endl;

}
