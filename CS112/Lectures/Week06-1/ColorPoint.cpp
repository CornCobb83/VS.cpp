// CS 112 Fall 2023 - Week 09 Lecture 1
// C++ Derived Classes
#include <cstdlib>
#include <string>
#include <iostream>
#include <cmath>
// #include "GraphPoint.h"
#include "ColorPoint.h"

using namespace std;
// Constructors
ColorPoint::ColorPoint(): GraphPoint() {
colorValue = COLOR_DEFAULT;
}
ColorPoint::ColorPoint(double x, double y): GraphPoint(x, y) {
colorValue = COLOR_DEFAULT;
}
ColorPoint::ColorPoint(double x, double y, PointColor color):
GraphPoint(x, y) {
colorValue = color;
}
// ACCESSORS
// MUTATORS
// OTHER METHODS
void ColorPoint::display() const {
cout << "ColorPoint is " << COLORNAMES[colorValue] << " at "
<< "(" << this->getX() << ", "
<< this->getY() << ")" << endl;
}