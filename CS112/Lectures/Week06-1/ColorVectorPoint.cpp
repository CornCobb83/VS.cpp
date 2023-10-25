// CS 112 Fall 2023 - Week 09 Lecture 1
// C++ Derived Classes
#include <cstdlib>
#include <string>
#include <iostream>
#include <cmath>
// #include "GraphPoint.h"
#include "ColorVectorPoint.h"

// CONSTRUCTORS
ColorVectorPoint::ColorVectorPoint() : VectorPoint() {
    this->setColor(COLOR_DEFAULT);
}

ColorVectorPoint::ColorVectorPoint(double x, double y) : ColorPoint(x, y) {
    this->setMag(MAG_DEFAULT);
    this->setDir(DIR_DEFAULT);
}

ColorVectorPoint::ColorVectorPoint(double x, double y, PointColor color, double mag, double dir) : VectorPoint(x, y, mag, dir) {
    this->setColor(color);
}

//OTHER METHODS
void ColorVectorPoint::display() const {
    cout << "ColorVectorPoint is " << COLORNAMES[this->getColor()] << " at "
    << "(" << this->getX() << ", "
    << this->getY() << ") with mag " << this.getMag()
    << "and dir " << this.getDir() << endl;
}

string ColorVectorPoint::to_string() const {
    return COLORNAMES[colorValue] + " " + GraphPoint::to_string();
}

using namespace std;