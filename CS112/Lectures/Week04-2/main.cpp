#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << boolalpha;

    int *intPtr;

    intPtr = new int;

    *intPtr = 75;
    cout << *intPtr << endl;

    int *schrodingerPtr;

    cout << "Shall I dynamically allocate an int? ";
    char yn;
    cin >> yn;
    if (yn == 'y') {
        schrodingerPtr = new int;
        *schrodingerPtr = 3000;
    }
    else {
        cout << "int not allocated" << endl;
        schrodingerPtr = NULL;
    }

    if (schrodingerPtr == NULL) {
        cout << "I didn't allocate an interger!\n";
    }
    else {
        cout << "Your integer value is " << *schrodingerPtr;
    }

    return EXIT_SUCCESS;
}