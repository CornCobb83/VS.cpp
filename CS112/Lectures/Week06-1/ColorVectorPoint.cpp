// CS 112 Fall 2023 Week 10-2 Lecture
// Demonstration of C++ Multiple Inheritance

#include <cstdlib>
#include <string>
#include <iostream>
#include <cmath>
// #include "GraphPoint.h"
// #include "ColorPoint.h"
// #include "VectorPoint.h"
#include "ColorVectorPoint.h"

using namespace std;

// A ColorVectorPoint is a derived class from BOTH VectorPoint
// and ColorPoint.  It adds no new data members, but instead
// just uses the ones from VectorPoint, ColorPoint, and GraphPoint

// CODE for the Constructor methods

// Note that we have a choice here as to which base class
// constructor to call -- in this case, we chose VectorPoint

// NOTE: As we discovered in class, this means we will need to
// use the VectorPoint class scope for any methods that are in
// the GraphPoint class!  Using ColorPoint::getX() and
// ColorPoint::getY() did NOT work, as it gave us 0.0 every time
// even though xCoord and yCoord were not zero.  Very mysterious...

// CONSTRUCTORS

ColorVectorPoint::ColorVectorPoint(): VectorPoint() {
    this->setColor(COLOR_DEFAULT);
}

ColorVectorPoint::ColorVectorPoint(double x, double y):
                  VectorPoint(x, y) {
    this->setColor(COLOR_DEFAULT);
}

ColorVectorPoint::ColorVectorPoint(double x, double y,
                  PointColor color, double mag, int dir):
                  VectorPoint(x, y, mag, dir) {
    this->setColor(color);
}

// Copy constructor, destructor, and = operator
// (the "Big 3" methods) did NOT need to be written
// since there's no dynamic allocation within the objects

// ACCESSORS - None!

// MUTATORS - None!

// OTHER METHODS

// NOTE the need to use VectorPoint:: as the class scope for
// the getX and getY methods.  We can't use GraphPoint::
// directly because of the C++ "Diamond Problem" which makes
// it ambiguous to call getX() and getY() (the Diamond Problem
// in a nutshell: which way to go to get to the GraphPoint class?
// Via VectorPoint or via ColorPoint?  C++ makes us be explicit!)
// And we're forced to use the same way that the constructors use
// when the object is created.  Since VectorPoint was used to
// create these objects, we much use VectorPoint here as well.

void ColorVectorPoint::display() const {
    cout << "ColorVectorPoint is "
         << COLORNAMES[this->getColor()] << " at "
         << "(" << this->VectorPoint::getX() << ", "
         << this->VectorPoint::getY() << ")"
         << " with mag " << this->getMag()
         << " and dir " << this->getDir()
         << endl;
}

// Note that the to_string method ALSO uses the
// VectorPoint method here and can't use the ColorPoint method!

string ColorVectorPoint::to_string() const {
    return this->VectorPoint::to_string() + ", "
           + COLORNAMES[this->getColor()];
}