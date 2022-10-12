#include <cmath>
#include <iostream>
#include "point.hpp"

// constructors
Point::Point(coord_t x, coord_t y) : x_(x),y_(y) {}

// further properties & operations
// get x coordinate
Point::coord_t Point::x() const {
  return x_;
}
// get y coordinate
Point::coord_t Point::y() const {
  return y_;
}
// distance from origin aka polar radius
Point::coord_t Point::abs() const {
  return std::sqrt(x_*x_ + y_*y_);
}
// distance of this point to another point
Point::coord_t Point::dist(const Point& p) const {
  coord_t xdiff = x_ - p.x_;
  coord_t ydiff = y_ - p.y_;
  return std::sqrt(xdiff*xdiff + ydiff*ydiff);
}
// polar angle
Point::coord_t Point::angle() const {
  return std::atan2(y_,x_);
}
// mirror a point at origin (0,0)
void Point::invert() {
  x_ = - x_;
  y_ = - y_;
}
