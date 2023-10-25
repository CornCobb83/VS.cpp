// CS 112 Fall 2023 - Week 09 Lecture 1
// C++ Derived Classes
#ifndef COLORPOINT_H
#define COLORPOINT_H

#include <cstdlib>
#include <string>
#include <cmath>
#include "ColorVectorPoint.h"
#include "ColorVectorPoint.h"
#include "VectorPoint.h"
using namespace std;

class ColorVectorPoint : public ColorPoint, public VectorPoint {
public:

    ColorVectorPoint();
    ColorVectorPoint(double x, double y);
    ColorVectorPoint(double x, double y, PointColor color, double mag, int dir);

}

#endif