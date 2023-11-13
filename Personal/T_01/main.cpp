#include <string>
#include <iostream>

using namespace std;

int main() {
    string inputName;
    int age;

    cin.exceptions(ios::failbit);

    while (true) {
        cin >> inputName;
        if (inputName == "-1") {
            break;
        }

        try {
            if (!(cin >> age)) {
                throw inputName;
            } else {
                    cout << inputName << " " << (age + 1) << endl;
                }
            }
         catch (string name) {
            cout << name << " 0" << endl;
            cin.clear();
        }
    }

    return 0;
}