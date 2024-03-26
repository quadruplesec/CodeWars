/*
7 kyu - Vowel Count

Return the number (count) of vowels in the given string.
We will consider a, e, i, o, u as vowels for this Kata (but not y).
The input string will only consist of lower case letters and/or spaces.
*/

#include <string>
#include <cctype>

int getCount(const std::string &inputStr) {
    
    int num_vowels = 0;
    
    for (size_t i = 0; i < inputStr.size(); i++) {
        
        switch (tolower(inputStr[i])) {

            case 'a': case 'e': case 'i': case 'o': case 'u':
            num_vowels++; break; 
            
        }

    }

    return num_vowels;
}