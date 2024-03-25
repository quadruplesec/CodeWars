/*
6 kyu - Bit Counting

Write a function that takes an integer as input, and returns the number of bits that are equal
to one in the binary representation of that number. You can guarantee that input is non-negative.

Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case
*/

unsigned int countBits(unsigned long long n) {

    unsigned count = 0;
    while (n > 0) {
        if (n & 1 == 1) {
            count++;
        } 
        n = n >> 1;
    }

    return count;
}