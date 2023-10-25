// CS 112 Fall 2023 - Week 09 Lecture 1
// C++ Derived Classes
#include <cstdlib>
#include <string>
#include <iostream>
#include <cmath>
// #include "GraphPoint.h"
#include "VectorPoint.h"

// CONSTRUCTORS
    VectorPoint::VectorPoint() {
        magValue = MAG_DEFAULT;
        dirValue = DIR_DEFAULT;
    }

    VectorPoint::VectorPoint(double x, double y, double mag, double dir) : GraphPoint(x, y) {
        magValue = mag;
        dirValue = dir;
    }

    VectorPoint::VectorPoint(double mag) {
        magValue = mag;
        dirValue = DIR_DEFAULT;
    }

    VectorPoint::VectorPoint(int dir) {
        magValue = MAG_DEFAULT;
        dirValue = dir;
    }

    VectorPoint::VectorPoint(const GraphPoint& existingPoint) : GraphPoint(existingPoint) {
        magValue = MAG_DEFAULT;
        dirValue = DIR_DEFAULT;
    }

    // ACCESSORS
    double VectorPoint::getMag() const {
        return magValue;
    }

    dir VectorPoint::getDir() const {
        return dirValue;
    }

    // NO MUTATORS
    void VectorPoint::setMag(double mag) {
        magValue = mag;
    }

    void VectorPoint::setDir(int dir) {
        dirValue = dir;
    }

    // OTHER METHOD

    virtual void VectorPoint::display() const {
        cout << "VectorPoint (" << this->getX() << ", "
        << this->getY() << ") with mag " << getMag()
        << "and dir " << getDir() << endl;
    }

    string VectorPoint::to_string() const {
        return GraphPoint::to_string() + ", " + std::to_string(getMag()) + ", " + std::to_string(getDir());
    }

using namespace std;