#ifndef COLORPOINT_H
#define COLORPOINT_H

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

const COLOR_DEFAULT = Black;
const string COLOR_NAMES[5] = {"Black", "Blue", "Green", "Red", "Yellow"};

class ColorPoint : public GraphPoint {
public:
    ColorPoint();
    ColorPoint(double x, double y);
    ColorPoint(double x, double y, PointColor color);

    PointColor getColor();

    void setColor(PointColor newColor);

    void display() const;
    // string to_string() const;

private:

    PointColor colorValue;
}

#endif