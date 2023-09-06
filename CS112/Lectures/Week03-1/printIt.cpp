#include <cstdlib>
#include <iostream>
#include <string>
#include "printIt.h"

using namespace std;

void printIt(int anInt)
{
    cout << anInt << endl;
    return;
}

void printIt(string aString)
{
    cout << aString << endl;
    return;
}

void printIt(bool aBool)
{
    cout << aBool << endl;
    return;
}

void printIt(double aDouble)
{
    cout << aDouble << endl;
    return;
}