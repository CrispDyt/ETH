#include <iostream>
#include <cmath>

namespace Geometry {

class Point {
  public:
    using coord_t = double;
    Point(coord_t x = 0., coord_t y = 0.) : x_(x), y_(y) {} // ctor
    Point& operator = (Point const&);
    coord_t x() const { return x_; }  // x coordinate
    coord_t y() const { return y_; }  // y coordinate
    coord_t abs() const;              // distance from origin aka polar radius
    coord_t angle() const;            // polar angle
  private: 
    coord_t x_, y_; // Cartesian coordinates
};

Point::coord_t Point::abs() const {
  return std::sqrt(x_*x_ + y_*y_);
}

Point::coord_t Point::angle() const {
  return std::atan2(y_,x_);
}

// pretty print of a Point by overloading the insertion operator
std::ostream& operator<<(std::ostream& out, Point const& p) {
  out << "( " << p.x() << ", " << p.y() << " )";
  return out;
}

// some function for geomtric stuff
void func(Point const& p) {
  std::cout << "I do nothing!\n";
}

}

int main() {

  Geometry::Point p1(1., 2.);

  std::cout << "p1 = " << p1 << '\n'; // calls Geometry::operator<<(cout, p1)!
  Geometry::func(p1);
  func(p1);

}
