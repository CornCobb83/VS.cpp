#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;

    // Prompt the user to enter their full name
    cout << "Enter your full name: ";
    getline(cin, fullName);

    // Initialize strings to store the last name and initials
    string lastName = "";
    string initials = "";

    // Find the last space in the full name (assumes last name comes after the last space)
    size_t lastSpacePos = fullName.find_last_of(' ');

    if (lastSpacePos != string::npos) {
        // Extract the last name
        lastName = fullName.substr(lastSpacePos + 1);

        // Extract and concatenate the first and middle initials
        for (size_t i = 0; i < lastSpacePos; i++) {
            if (i == 0 || fullName[i - 1] == ' ') {
                initials += fullName[i];
            }
        }
    } else {
        // If there's no space, consider the entire name as the last name
        lastName = fullName;
    }

    // Output the last name followed by the initials
    cout << "Last Name: " << lastName << endl;
    cout << "Initials: " << initials << endl;

    return 0;
}





