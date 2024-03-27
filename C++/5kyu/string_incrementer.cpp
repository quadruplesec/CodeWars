/*
5 kyu - String incrementer

Your job is to write a function which increments a string, to create a new string.
    If the string already ends with a number, the number should be incremented by 1.
    If the string does not end with a number. the number 1 should be appended to the new string.

Examples:
foo -> foo1
foobar23 -> foobar24
foo0042 -> foo0043
foo9 -> foo10
*/

#include <string>
#include <iostream>

std::string incrementString(const std::string &str) 
{    
    if (!isdigit(str[str.size()-1]) || str.empty())
    {
        std::string ret_str = str;
        ret_str += "1";
        return ret_str;
    }

    size_t i = str.size() - 1;

    while (isdigit(str[i]))
    {
        i--;
    }

    std::string num_part = str.substr(++i, str.size());
    std::string ret_str = str.substr(0, i);

    size_t num_size = num_part.size();
    int num = std::stoi(num_part);
    ++num;

    if (std::to_string(num).size() < num_size)
    {
        size_t difference = num_size - std::to_string(num).size();
        while (difference--)
            ret_str += "0";

        ret_str += std::to_string(num);
    }

    else
    {
        ret_str += std::to_string(num);
    }
    
    return ret_str;
}