// CS 112 Fall 2023 Week 10-2 Lecture
// Demonstration of C++ Multiple Inheritance

#include <cstdlib>
#include <string>
#include <iostream>
#include <cmath>
#include "GraphPoint.h"
#include "VectorPoint.h"

using namespace std;

// Constructors

VectorPoint::VectorPoint(): GraphPoint() {
    magValue = MAG_DEFAULT;
    dirValue = DIR_DEFAULT;
}

VectorPoint::VectorPoint(double x, double y): GraphPoint(x, y) {
    magValue = MAG_DEFAULT;
    dirValue = DIR_DEFAULT;
}

VectorPoint::VectorPoint(double x, double y, double mag, int dir):
             GraphPoint(x, y) {
    magValue = mag;
    dirValue = dir;
}

VectorPoint::VectorPoint(const VectorPoint& existingPoint):
            GraphPoint(existingPoint) {
    magValue = existingPoint.getMag();
    dirValue = existingPoint.getDir();
}

VectorPoint::VectorPoint(const GraphPoint& existingPoint):
            GraphPoint(existingPoint) {
    magValue = MAG_DEFAULT;
    dirValue = DIR_DEFAULT;
}

// ACCESSORS

double VectorPoint::getMag() const {
    return magValue;
}

int VectorPoint::getDir() const {
    return dirValue;
}

// MUTATORS

void VectorPoint::setMag(double newMag) {
    magValue = newMag;
}

void VectorPoint::setDir(int newDir) {
    dirValue = newDir;
}

// OTHER METHODS

void VectorPoint::display() const {
    cout << "VectorPoint "
         << "(" << this->getX() << ", "
         << this->getY() << ")"
         << ", mag = " << this->getMag()
         << ", dir = " << this->getDir() << endl;
}

string VectorPoint::to_string() const {
    return this->GraphPoint::to_string()
           + ", " + std::to_string(magValue)
           + ", " + std::to_string(dirValue);
}