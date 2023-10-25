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

MAG_DEFAULT = 0.0;
DIR_DEFAULT = 0;

class ColorVectorPoint : public ColorPoint, public VectorPoint {
public:

    // CONSTRUCTORS
    VectorPoint();
    VectorPoint(double x, double y, double mag, double dir);
    VectorPoint(double mag);
    VectorPoint(int dir);
    VectorPoint(const GraphPoint& existingPoint);

    // ACCESSORS
    double getMag() const;
    dir getDir() const;

    // NO MUTATORS
    void setMag(double mag);
    void setDir(int dir);

    // OTHER METHOD

    virtual void display() const;
    string to_string() const;

private:

    double magValue;
    int dirValue;

};

#endif