#ifndef GRAPHPOINT_H
#define GRAPHPOINT_H
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// NAMED CONSTANTS USED IN THE C++ CLASS
    const double X_DEFAULT = 0.0;
    const double Y_DEFAULT = 0.0;

class GraphPoint {
public:

// CONSTRUCTORS
    GraphPoint();
    GraphPoint(double x, double y);
    GraphPoint(double r, int theta);

// ACCESSORS
    double getX() const;
    double getY() const;
// MUTATORS
    void setX(double newX);
    void setY(double newY);
    void flipCoords();
    void resetToOrigin();
    void setCoords(double newX, double newY);

// OTHER METHODS
    void display() const;
    string to_string() const;
    double distance(const GraphPoint& p2) const;

// OPERATOR METHODS
    bool operator ==(const GraphPoint& rhs) const;
    GraphPoint operator +(const GraphPoint& rhs);

// protected is a section within the class definition
// that works like private, but an important difference
// is that data members and methods listed in the
// protected section are directly accessible by any
// derived classes that use this as a base class
//
// Since we have methods to get the data members, we'll
// opt to keep this section private. To use it as a
// protected section, comment out private and uncomment
// protected

private:
// protected:
    double xCoord;
    double yCoord;
};

#endif /* GRAPHPOINT_H */