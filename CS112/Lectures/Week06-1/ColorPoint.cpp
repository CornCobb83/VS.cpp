#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include "ColorPoint.h"
#include <cmath>

using namespace std;

ColorPoint::ColorPoint() : GraphPoint() {
    colorValue = COLOR_DEFAULT;
}

ColorPoint::ColorPoint(double x, double y) : GraphPoint(x, y) {
    colorValue = COLOR_DEFAULT;
}

ColorPoint::ColorPoint(double x, double y, PointColor color) : GraphPoint(x, y) {
    colorValue = color;
}

void ColorPoint::display() const {
    cout << "ColorPoint is " << colorValue << " at "
         << "(" << xCoord << ", "
         << yCoord << ")" << endl;
}