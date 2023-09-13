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

    delete intPtr;

    int *schrodingerPtr;

    cout << "Shall I dynamically allocate an int? ";
    char yn;
    cin >> yn;
    if (yn == 'y') {
        schrodingerPtr = new int;
        cout << "What value do you like? ";
        cin >> *schrodingerPtr;
    }
    else {
        cout << "int not allocated" << endl;
        schrodingerPtr = NULL;
    }

    if (schrodingerPtr == NULL) {
        cout << "I didn't allocate an interger!\n";
    }
    else {
        cout << "Your integer value is " << *schrodingerPtr << endl;
    }

    return EXIT_SUCCESS;
}