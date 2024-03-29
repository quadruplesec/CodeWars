/*
5 kyu - Moving Zeros To The End

Write an algorithm that takes an array and moves all of the zeros to the end, preserving the order of the other elements.
move_zeros({1, 0, 1, 2, 0, 1, 3}) // returns {1, 1, 2, 1, 3, 0, 0}
*/

#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input)
{
    typedef unsigned long size_t;// Intellisense was tripping so i had to define my own size_t*/
    std::vector<int> outVector(input);
  
    int zero_count = 0;

    for (size_t i = 0; i < outVector.size(); i++)
    {
        if (outVector[i] == 0)
        {
            outVector.erase(outVector.begin() + i);
            zero_count++;
            i--;
        }
    }
  
    for (int i = 0; i < zero_count; i++)
    {
        outVector.push_back(0);
    }

    return outVector;
}
