/*
4 kyu - Adding Big Numbers

We need to sum big numbers and we require your help.

Write a function that returns the sum of two numbers. The input numbers are strings and the function must return a string.

Example:
add("123", "321"); -> "444"
add("11", "99");   -> "110"
*/

#include <string>
#include <algorithm>

std::string add(const std::string& a, const std::string& b)
{
    std::string new_a = a;
    std::string new_b = b;
    std::reverse(new_a.begin(), new_a.end());
    std::reverse(new_b.begin(), new_b.end());

    int max = std::max(a.size(), b.size());
    int carry = 0;

    std::string sum_str;

    for (int i = 0; i < max; i++)
    {
        int a_num, b_num, sum = 0;

        if (i >= (int) new_a.size())
        {
            a_num = 0;
        }
        else
        {
            a_num = new_a[i] - '0'; 
        }

        if (i >= (int) new_b.size())
        {
            b_num = 0;
        }
        else
        {
            b_num = new_b[i] - '0'; 
        }

        sum = (a_num + b_num + carry) % 10;
        carry = (a_num + b_num + carry) / 10;
        sum_str += sum + '0';
    }

    if (carry > 0)  
    {
        sum_str += carry + '0';
    }

    std::reverse(sum_str.begin(), sum_str.end());

    return sum_str;
}