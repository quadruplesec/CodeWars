/*
6 kyu - Find the odd int

Given an array of integers, find the one that appears an odd number of times.
There will always be only one integer that appears an odd number of times.
*/

#include <vector>
#include <algorithm>

int findOdd(const std::vector<int>& numbers){
    for (size_t i = 0; i < numbers.size(); i++) {
        if (std::count(numbers.begin(), numbers.end(), numbers[i]) % 2 != 0) {
            return numbers[i];
        }
    }
}