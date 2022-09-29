/*
 * Programming Techniques for Scientific Simulations I
 * HS 2022
 * Exercise 0.2
 */

#include <iostream> // for std::cin, std::cout

// declare type alias
using fibonacci_t = unsigned long long int;
// Note: The unsigned long long int type will cause integer overflow when
//       computing the Fibonacci sequence for n > 93.

// function declarations
fibonacci_t fibonacci_recursive(fibonacci_t n);
fibonacci_t fibonacci_loop(fibonacci_t n);

int main() {
  fibonacci_t n;
	
  std::cout << "Enter a non-negative integer n:\n";
  std::cin >> n;

  std::cout << "fibonacci_loop(n)      = " << fibonacci_loop(n)      << '\n'
            << "fibonacci_recursive(n) = " << fibonacci_recursive(n) << '\n';
}

// function definitions
fibonacci_t fibonacci_recursive(fibonacci_t n) {
  if (n==0) return 0;
  if (n==1) return 1;
  return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

fibonacci_t fibonacci_loop(fibonacci_t n) {
  if (n == 0) return 0;
  fibonacci_t previous = 0;
  fibonacci_t current  = 1;
  for (int i = 1; i < n; ++i) {
    fibonacci_t next = current + previous;
    previous = current;
    current = next;
  }
  return current;
}
