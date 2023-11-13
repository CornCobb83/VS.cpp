#include <iostream>
#include <stdexcept>

using namespace std;

// Function to clear the input buffer
void clearInputBuffer() {
    cin.clear();
    while (cin.get() != '\n') {
        continue;
    }
}

int main() {
    int userNum;
    int divNum;

    cin.exceptions(ios::failbit);  // Allow cin to throw exceptions

    try {
        if (!(cin >> userNum)) {
            clearInputBuffer();
            throw invalid_argument("basic_ios::clear: iostream error");
        }

        if (!(cin >> divNum)) {
            clearInputBuffer();
            throw invalid_argument("basic_ios::clear: iostream error");
        }
        else if (divNum == 0) {
            throw runtime_error("Runtime Exception: Divide by zero!");
        }
        else {
            cout << userNum / divNum << endl;
        }
    }
    catch (const invalid_argument& e) {
        cout << "Input Exception: " << e.what() << endl;
    }
    catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}
