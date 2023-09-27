#include <cstdlib>
#include <iostream>
#include <string>
#include "GraphPoint.h"
#include <cmath>

using namespace std;

int main() {
    cout << boolalpha;

    GraphPoint myPoint;
    cout  << "Zero arg myPoint: ";
    myPoint.display();

    return EXIT_SUCCESS;
}