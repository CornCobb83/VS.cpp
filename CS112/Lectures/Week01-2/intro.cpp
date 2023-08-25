#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

string intro(string aName, int anAge)
{


    return "My name is " + aName +
            "and I am " + to_string(anAge) +
            " years old";
}