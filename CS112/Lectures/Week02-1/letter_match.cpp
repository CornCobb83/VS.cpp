#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

bool letter_match(string word_1, string word_2, int pos)
{
    if (word_1.length() <= pos)
    {
        cout << "pos for word_1 out of bounds" << endl;
        return false;
    }
    if (word_2.length() <= pos)
    {
        cout << "pos for word_2 out of bounds" << endl;
        return false;
    }
    return (word_1.at(pos) == word_2.at(pos)) == true;
}