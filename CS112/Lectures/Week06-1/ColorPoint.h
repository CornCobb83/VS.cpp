// CS 112 Fall 2023 Week 10-2 Lecture
// Demonstration of C++ Multiple Inheritance

#ifndef COLORPOINT_H
#define COLORPOINT_H

#include <cstdlib>
#include <string>
#include <cmath>
#include "GraphPoint.h"

using namespace std;

// Data Type Definitions
enum PointColor {Black, Blue, Green, Red, Yellow};

// Constant definition
const PointColor COLOR_DEFAULT = Black;
const string COLORNAMES[5] =
    {"black", "blue", "green", "red", "yellow"};

class ColorPoint : public GraphPoint {
public:
    ColorPoint();
    ColorPoint(double x, double y);
    ColorPoint(double x, double y, PointColor color);
    ColorPoint(const ColorPoint& existingPoint);
    ColorPoint(const GraphPoint& existingPoint);

    // ACCESSORS
    // Will already inherit getX and getY

    PointColor getColor() const;

    // MUTATORS
    // Will already inherit setX and setY

    void setColor(PointColor newColor);

    // OTHER METHODS

    // It's good style to put "virtual" in the method
    // header here, but it's NOT required!

    virtual void display() const;
    string to_string() const;

private:

    PointColor colorValue;



};

#endif /* COLORPOINT_H */