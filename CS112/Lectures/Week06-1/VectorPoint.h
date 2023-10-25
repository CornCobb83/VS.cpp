// CS 112 Fall 2023 - Week 09 Lecture 1
// C++ Derived Classes
#ifndef COLORPOINT_H
#define COLORPOINT_H

#include <cstdlib>
#include <string>
#include <cmath>
#include "ColorVectorPoint.h"
#include "VectorPoint.h"
using namespace std;

class ColorVectorPoint : public ColorPoint, public VectorPoint {
public:

    // CONSTRUCTORS
    VectorPoint();
    VectorPoint(x, y, mag, dir);
    VectorPoint();
    VectorPoint();

    // NO ACCESSORS

    // NO MUTATORS

    // OTHER METHOD

    virtual void display() const;
    string to_string() const;

private:

    double magValue;
    int dirValue;

};

#endif