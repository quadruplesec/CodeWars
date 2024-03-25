/*
6 kyu - Count the smiley faces!

Given an array (arr) as an argument complete the function countSmileys that should return the total number of smiling faces.

Rules for a smiling face:

    Each smiley face must contain a valid pair of eyes. Eyes can be marked as : or ;
    A smiley face can have a nose but it does not have to. Valid characters for a nose are - or ~
    Every smiling face must have a smiling mouth that should be marked with either ) or D

No additional characters are allowed except for those mentioned. 
*/

//note to self: learn how to use std::regex
#include <vector>
#include <string>

int countSmileys(std::vector<std::string> arr) {

    int smiley_counter = 0;

    for (size_t i = 0; i < arr.size(); i++) {

        if (!(arr[i][0] == ':' || arr[i][0] == ';')) {
            continue;
        }

        if (!(arr[i][1] == ')' || arr[i][1] == 'D')) {
            if (!(arr[i][1] == '-' || arr[i][1] == '~')) {
                continue;
            }
        } else {
            smiley_counter++;
            continue;
        }

        if (!(arr[i][2] == ')' || arr[i][2] == 'D')) {
            continue;
        }

        smiley_counter++;

    }
  
    return smiley_counter;
}