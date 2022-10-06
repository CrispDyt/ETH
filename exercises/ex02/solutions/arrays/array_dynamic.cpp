/* Programming Techniques for Scientific Simulations, HS 2022
 * Dynamic arrays
 */

#include <iostream>

int main() {

  int n;

  std::cout << "How many values do you want to provide?" << std::endl;
  std::cin >> n;
  std::cout << "Please enter " << n << " values." << std::endl;

  double *array = new double[n];

  double sum(0);
  for(int i = 0; i < n; ++i) {
    std::cin >> array[i];
    sum += array[i];
  }

  for(int i = n-1; i >= 0; --i)
    std::cout << array[i]/sum << std::endl;

  delete[] array;
  return 0;

}
