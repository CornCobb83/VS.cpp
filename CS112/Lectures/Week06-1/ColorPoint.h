// CS 112 Fall 2023 - Week 09 Lecture 1
// C++ Derived Classes
#ifndef COLORPOINT_H
#define COLORPOINT_H

#include <cstdlib>
#include <string>
#include <cmath>
#include "GraphPoint.h"
using namespace std;

// Data Type Definitions
enum PointColor {Black, Blue, Green, Red, Yellow};

// Constant Definitions
const PointColor COLOR_DEFAULT = Black;
const string COLORNAMES[5] = {"black", "blue", "green", "red", "yellow"};

class ColorPoint : public GraphPoint {

    public:

    ColorPoint();
    ColorPoint(double x, double y);
    ColorPoint(double x, double y, PointColor color);
    ColorPoint(const GraphPoint& existingPoint);

    // ACCESSORS
    // Will already inherit getX and getY
    PointColor getColor() const;

    // MUTATORS
    // Will already inherit setX and setY
    void setColor(PointColor newColor);

    // OTHER METHODS
    void display() const;
    string to_string() const;

    private:

    PointColor colorValue;

};

#endif /* COLORPOINT_H */