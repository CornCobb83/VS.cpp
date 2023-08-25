#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int array[10];

    for (int i = 0; i < 10; i++)
    {
        array[i] = pow(2, i+1);
        cout << array [i] << endl;
    }

    return 0;
}