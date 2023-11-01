// CS 112 Fall 2023 Week 10-2 Lecture
// Demonstration of C++ Multiple Inheritance

#ifndef COLORVECTORPOINT_H
#define COLORVECTORPOINT_H

#include <cstdlib>
#include <string>
#include <cmath>
// #include "GraphPoint.h"
#include "ColorPoint.h"
#include "VectorPoint.h"

using namespace std;

class ColorVectorPoint : public ColorPoint, public VectorPoint {
public:

    ColorVectorPoint();
    ColorVectorPoint(double x, double y);
    ColorVectorPoint(double x, double y, PointColor color,
                     double mag, int dir);

    // NO ACCESSORS!

    // NO MUTATORS!

    // OTHER METHODS

    virtual void display() const;
    string to_string() const;

private:

};

#endif /* COLORVECTORPOINT_H */