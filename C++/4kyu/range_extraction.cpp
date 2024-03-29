/*
4 kyu - Range Extraction

A format for expressing an ordered list of integers is to use a comma separated list of either

    individual integers
    or a range of integers denoted by the starting integer separated from the end integer in the range by a dash, '-'. The range includes all integers in the interval including both endpoints. It is not considered a range unless it spans at least 3 numbers. For example "12,13,15-17"

Complete the solution so that it takes a list of integers in increasing order and returns a correctly formatted string in the range format.

Example:

range_extraction({-10, -9, -8, -6, -3, -2, -1, 0, 1, 3, 4, 5, 7, 8, 9, 10, 11, 14, 15, 17, 18, 19, 20});
-> returns "-10--8,-6,-3-1,3-5,7-11,14,15,17-20"
*/

// ! Jank below. Should rewrite this sometime.

#include <string>
#include <vector>

std::string range_extraction(std::vector<int> args)
{
    if (args.size() == 0)
    {
        return "";
    }

    std::string ranges;
    int range_start;
    int range_end;

    for (size_t i = 0; i < args.size() - 1; i++)
    {
    
        if (args[i] == args[i+1] - 1)
        {
            range_start = args[i];
            int range_size = 1;
            std::string temp_str;
            temp_str += std::to_string(args[i]) + ",";
            while (args[i] == args[i+1] - 1)
            {
                i++;
                temp_str += std::to_string(args[i]) + ",";
                range_size++;
            }

            if (range_size < 3)         //case for ranges with only 2 elements
            {
                ranges += temp_str;
                continue;
            }

            range_end = args[i];
            ranges += std::to_string(range_start) + "-" + std::to_string(range_end);
            ranges += ",";
            continue;
        }

        ranges += std::to_string(args[i]) + ",";
    }

    if (args[args.size() - 1] != args[args.size() - 2] + 1)
    {
        ranges += std::to_string(args[args.size() - 1]) + ",";
    }

    ranges.pop_back(); //remove extra comma at the end 
    return ranges;
}
