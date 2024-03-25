/*
5 kyu - RGB To Hex Conversion

The rgb function is incomplete. Complete it so that passing in RGB decimal values will result in a hexadecimal
representation being returned. Valid decimal values for RGB are 0 - 255. Any values that fall out of that range
must be rounded to the closest valid value.

Note: Your answer should always be 6 characters long, the shorthand with 3 will not work here.
*/

#include <string>

std::string int_to_hexstr(int i) {
    
    if (i < 0) {
        return "00";
    }
    if (i > 255) {
        return "FF";
    }

    std::string str;
    
    int a = i & 0xF0;
    a = a >> 4;
    
    if (a < 0xA) {
        str += '0' + a;
    }
    else {
        str += 'A' + a - 10; 
    }
    
    a = i & 0xF;
    if (a < 0xA) {
        str += '0' + a;
    }
    else {
        str += 'A' + a - 10; 
    }

    return str;
}

std::string rgb_to_hex(int r, int g, int b) {
    return int_to_hexstr(r) + int_to_hexstr(g) + int_to_hexstr(b);
}