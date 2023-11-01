#ifndef GRAPHPOINT_H
#define GRAPHPOINT_H
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// NAMED CONSTANTS USED IN THE GRAPHPOINT CLASS
const double X_DEFAULT = 0.0;
const double Y_DEFAULT = 0.0;
class GraphPoint {
public:
// CONSTRUCTORS
// zero-argument constructor
// STYLE RULE - Always write one!
GraphPoint();
GraphPoint(double x, double y);
// HOW ABOUT A CONSTRUCTOR FOR POLAR COORDINATES!
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
virtual void display() const;
string to_string() const;
// Method to calculate distance between 2 points
double distance(const GraphPoint& p2) const;
// OPERATOR METHODS
// Equality comparision operator == allows us to do
// (point1 == point2)
bool operator ==(const GraphPoint& rhs) const;
// ADDITION OPERATOR METHOD
// Arithmetic operator + allows us to do (point1 + point2)
GraphPoint operator +(const GraphPoint& rhs);
private:
double xCoord;
double yCoord;
};
#endif /* GRAPHPOINT_H */