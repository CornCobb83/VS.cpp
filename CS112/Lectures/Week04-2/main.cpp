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
    intPtr = NULL;

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

    delete schrodingerPtr;

    // CODE WE PROBABLY SHOULD NEVER WRITE

    double *dblPtr = new double;
    *dblPtr = 17.457;

    cout << "dblPtr is " << dblPtr << endl
         << "*dblPtr is " << *dblPtr << endl
         << "&*dblPtr is " << &*dblPtr << endl
         << "&dblPtr is " << &dblPtr << endl
         << "*&dblPtr is " << *&dblPtr << endl;

// How about arrays? CAn I allocate an entore array
// dynamically> YES!!!!

    int arraySize;
    cout << "How big an array do you want? ";
    cin >> arraySize;

    char *charPtr = new char[arraySize];
    char temp = 'A';
    for (int i = 0; i < arraySize; i++) {
        charPtr[i] = temp;
        cout << charPtr[i];
        temp++;
    }

    delete [] charPtr;
    
    cout << endl;

    return EXIT_SUCCESS;
}