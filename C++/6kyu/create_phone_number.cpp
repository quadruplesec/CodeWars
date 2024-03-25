/* 
6 kyu - Create Phone Number

Write a function that accepts an array of 10 integers (between 0 and 9),
that returns a string of those numbers in the form of a phone number.
*/

//Note: this problem is quite trivial in C++20 due to std::format. However, I'm using C++11
//in university so I'll stick to the standard.

//Note to self: use snprintf next time.
#include <string>

std::string createPhoneNumber(const int arr [10]){
    std::string phone_num = "(";
    for (size_t i = 0; i < 3; i++) {
        phone_num += '0' + arr[i];
    }
    phone_num += ") ";
    for (size_t i = 3; i < 6; i++) {
        phone_num += '0' + arr[i];
    }
    phone_num += "-";
    for (size_t i = 6; i < 10; i++) {
        phone_num += '0' + arr[i];
    }

    return phone_num;
}