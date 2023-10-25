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
        magValue = 0;
        dirValue = 0;
    }

    VectorPoint(double x, double y, double mag, double dir) {
        magValue = mag;
        dirValue = dir;
    }

    VectorPoint(double mag) {
        magValue = mag;
        dirValue = 0;
    }

    VectorPoint(int dir) {
        magValue = 0;
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