/*
5 kyu - Product of consecutive Fib numbers

The Fibonacci numbers are the numbers in the following integer sequence (Fn):
    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, ...
such as
    F(n) = F(n-1) + F(n-2) with F(0) = 0 and F(1) = 1.
Given a number, say prod (for product), we search two Fibonacci numbers F(n) and F(n+1) verifying
    F(n) * F(n+1) = prod.
Your function productFib takes an integer (prod) and returns an array:
[F(n), F(n+1), true] or {F(n), F(n+1), 1} or (F(n), F(n+1), True)
depending on the language if F(n) * F(n+1) = prod.
If you don't find two consecutive F(n) verifying F(n) * F(n+1) = prod you will return
[F(n), F(n+1), false] or {F(n), F(n+1), 0} or (F(n), F(n+1), False)
*/

#include <vector>
typedef unsigned long long ull;

class ProdFib
{
    public:
        static std::vector<ull> productFib(ull prod)
        {
            bool wasFound = 0;
            for (ull i = 0; i < prod; i++)
            {
                if (fibNum(i) * fibNum(i+1) == prod) {   
                    wasFound = 1;
                    return {fibNum(i), fibNum(i+1), wasFound};
                }

                if (fibNum(i) * fibNum(i+1) > prod) {
                    return {fibNum(i), fibNum(i+1), wasFound};
                }
            }

            return {};
        }
    
    private:
        static ull fibNum(ull n)
        {
            ull i = 2, fibMinus2 = 0, fibMinus1 = 1, currentFib = fibMinus1 + fibMinus2;
            while (i < n) 
            {
                fibMinus2 = fibMinus1;
                fibMinus1 = currentFib;
                currentFib = fibMinus1 + fibMinus2;
                i++;
            }

            return currentFib;
        }

};