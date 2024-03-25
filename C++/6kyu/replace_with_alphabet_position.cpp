/*
6 kyu - Replace With Alphabet Position

Welcome.
In this kata you are required to, given a string, replace every letter with its position in the alphabet.
If anything in the text isn't a letter, ignore it and don't return it.

"a" = 1, "b" = 2, etc.
*/

#include <string>
#include <cctype>
#include <iostream>

std::string alphabet_position(const std::string &text) {
    
    std::string str;
    int letter_count = 0;
    
    for (size_t i = 0; i < text.size(); i++) {

        char c = text[i];

        if (!isalpha(c)) {
            continue;
        }

        c = tolower(c) - 'a' + 1;
        str += std::to_string(c);
        str += " ";
        letter_count++;
    }

    if (letter_count == 0) {
        return "";
    }

    str.pop_back(); //removes last space

    return str;
}