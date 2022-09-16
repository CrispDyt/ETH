#include <iostream>

int main() {

  std::cout << "Enter a number: ";
  unsigned int n;  
  std::cin >> n;

  std::cout << "for loop\n";
  for (int i=1;i<=n;++i)
    std::cout << i << "\n";

  std::cout << "while loop\n";
  int i=0; 
  while (i<n)  
    std::cout << ++i << "\n";

  std::cout << "do loop\n";
  i=1;
  do
    std::cout << i++ << "\n";
  while (i<=n);

  std::cout << "endless loop\n";
    
  i=1;
  while (true) {
    if(i>n) break;
    std::cout << i++ << "\n";
  }

  return 0;

}
