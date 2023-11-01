// CS 112 Fall 2023 Week 10-2 Lecture
// Demonstration of C++ Multiple Inheritance

#ifndef VECTORPOINT_H
#define VECTORPOINT_H

#include <cstdlib>
#include <string>
#include <cmath>
#include "GraphPoint.h"

using namespace std;

// Data Type Definitions

// Constant definition
const double MAG_DEFAULT = 0.0;
const int    DIR_DEFAULT = 0;

class VectorPoint : public GraphPoint {
public:
    VectorPoint();
    VectorPoint(double x, double y);
    VectorPoint(double x, double y, double mag, int dir);
    VectorPoint(const VectorPoint& existingPoint);
    VectorPoint(const GraphPoint& existingPoint);

    // ACCESSORS
    // Will already inherit getX and getY

    double getMag() const;
    int getDir() const;

    // MUTATORS
    // Will already inherit setX and setY

    void setMag(double newMag);
    void setDir(int newDir);

    // OTHER METHODS

    // It's good style to put "virtual" in the method
    // header here, but it's NOT required!

    virtual void display() const;
    string to_string() const;

private:

    double magValue;
    int    dirValue;

};

#endif /* VECTORPOINT_H */