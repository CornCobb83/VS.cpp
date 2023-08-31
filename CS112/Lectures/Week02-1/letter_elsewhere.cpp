#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

bool letter_elsewhere(string word_1, string word_2, int pos)
{
    if (word_1.length() <= pos)
    {
        return false;
    }

    char match_letter = word_guess.at(pos);
    bool found_yet = false;
    int word_len = word_of_day.length();
    int next_pos = 0;

    while (next_pos < word_len)
    {
        if (next_pos != pos)
        {
            if (word_of_day.at(next_pos) == match.letter)
                found_yet = true;
        }
        next_pos++;
    }
    return found_yet;
}