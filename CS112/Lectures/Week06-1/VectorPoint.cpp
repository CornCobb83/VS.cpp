// CS 112 Fall 2023 - Week 09 Lecture 1
// C++ Derived Classes
#include <cstdlib>
#include <string>
#include <iostream>
#include <cmath>
// #include "GraphPoint.h"
#include "VectorPoint.h"

// CONSTRUCTORS
    VectorPoint() {
        magValue = MAG_DEFAULT;
        dirValue = DIR_DEFAULT;
    }

    VectorPoint(double x, double y, double mag, double dir) : GraphPoint(x, y) {
        magValue = mag;
        dirValue = dir;
    }

    VectorPoint(double mag) {
        magValue = mag;
        dirValue = DIR_DEFAULT;
    }

    VectorPoint(int dir) {
        magValue = MAG_DEFAULT;
        dirValue = dir;
    }

    // ACCESSORS
    double getMag() const {
        return magValue;
    }

    dir getDir() const {
        return dirValue;
    }

    // NO MUTATORS
    void setMag(double mag) {
        magValue = mag;
    }

    void setDir(int dir) {
        dirValue = dir;
    }

    // OTHER METHOD

    virtual void display() const {
        cout << "VectorPoint (" << this->getX() << ", "
        << this->getY() << ") with mag " << getMag()
        << "and dir " << getDir() << endl;
    }

    string to_string() const {
        return GraphPoint::to_string() + ", " + std::to_string(getMag()) + ", " + std::to_string(getDir());
    }

using namespace std;