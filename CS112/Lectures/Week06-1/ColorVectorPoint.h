// CS 112 Fall 2023 - Week 09 Lecture 1
// C++ Derived Classes
#ifndef COLORPOINT_H
#define COLORPOINT_H

#include <cstdlib>
#include <string>
#include <cmath>
#include "ColorPoint.h"
#include "VectorPoint.h"
using namespace std;

class ColorVectorPoint : public ColorPoint, public VectorPoint {
public:

    // CONSTRUCTORS
    ColorVectorPoint();
    ColorVectorPoint(double x, double y);
    ColorVectorPoint(double x, double y, PointColor color, double mag, int dir);

    // NO ACCESSORS

    // NO MUTATORS

    // OTHER METHOD

    virtual void display() const;
    string to_string() const;

private:

};

#endif