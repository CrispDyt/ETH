/* Programming Techniques for Scientific Simulations, HS 2022
 * Static arrays
 */

#include <iostream>

#define max_items 10

int main() {

  double array[max_items];
  int n;

  std::cout << "How many values do you want to provide?" << std::endl;
  while(true) {
    std::cin >> n;
    if(n > max_items)
      std::cout << "Maximally allowed value is " << max_items << ". Please retry!" << std::endl;
    else
      break;
  }
  std::cout << "Please enter " << n << " values." << std::endl;

  double sum(0);
  for(int i = 0; i < n; ++i) {
    std::cin >> array[i];
    sum += array[i];
  }

  for(int i = n-1; i >= 0; --i)
    std::cout << array[i]/sum << std::endl;

  return 0;

}
