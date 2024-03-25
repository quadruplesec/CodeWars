/*
7 kyu - Isograms

An isogram is a word that has no repeating letters, consecutive or non-consecutive.
Implement a function that determines whether a string that contains only letters is an isogram.
Assume the empty string is an isogram. Ignore letter case.
*/

#include <string>
#include <cctype>
#include <algorithm>

bool is_isogram(std::string str) {
    for (size_t i = 0; i < str.size(); i++) {
        str[i] = tolower(str[i]);
    }

    for (size_t i = 0; i < str.size(); i++) {
        int counter = std::count(str.begin(), str.end(), str[i]);
        if (counter > 1) {
            return false;
        } 
    }

    return true;
}