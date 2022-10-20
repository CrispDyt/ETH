#include <iostream>

class A {
  public:
    A() { std::cout << "A::ctor\n"; }
    ~A() { std::cout << "A::dtor\n"; }
    A(A const& a) { std::cout << "A::copy ctor\n"; }
    A& operator=(A const& rhs) {
      std::cout << "A::copy assignment\n";
      return *this;
    }
};

A operator+(A a1, A const& a2) {
  std::cout << "A::operator+\n";
  return a1;
}

class B {
  public:
    B() { std::cout << "B::ctor\n"; }
    ~B() { std::cout << "B::dtor\n"; }
    B(B const& b) {
      std::cout << "B::copy ctor\n";
    }
    B& operator=(B const& rhs) {
      std::cout << "B::copy assignment\n";
      return *this;
    }
    B(B&& b) {
      std::cout << "B::move ctor\n";
    }
    B& operator=(B&& rhs) {
      std::cout << "B::move assignment\n";
      return *this;
    }
};

B operator+(B b1, B const& b2) {
  std::cout << "B::operator+\n";
  return b1;
}

int main() {
  // no move ctor/assigment
  A a;
  std::cout << "=== a = (a + a) + a ===\n";
  a = (a + a) + a;
  // with move ctor/assigment
  B b;
  std::cout << "=== b = (b + b) + b ===\n";
  b = (b + b) + b;
}
