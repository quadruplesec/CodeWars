/*
6 kyu - Duplicate Encoder

The goal of this exercise is to convert a string to a new string where each character in the new string
is "(" if that character appears only once in the original string, or ")" if that character appears more than once
in the original string. Ignore capitalization when determining if a character is a duplicate.
*/

#include <algorithm>
#include <string>
#include <cctype>

std::string duplicate_encoder(const std::string& word) {
    if (word.empty()) {return "";}

    std::string output_string;
    std::string lower;

    for (size_t i = 0; i < word.size(); i++) {
        lower += tolower(word[i]);
    }

    for (size_t i = 0; i < lower.size(); i++) {
        int counter = std::count(lower.begin(), lower.end(), lower[i]);
        if (counter > 1) {
            output_string += ')';
        } else {
            output_string += '(';
        }
    }
    return output_string;
}