#include <cstdlib>
#include <string>
#include <iostream>
#include "intro.h"

using namespace std;

int main()
{
    cout << boolalpha;

    cout << intro("David", 61) << endl;

    string array[3] = {"one", "two", "three"};

    for (int i = 0; i < 3; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}