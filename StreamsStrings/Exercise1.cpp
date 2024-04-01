#include "Exercise1.h"

#include <iostream>

int Exercise1::FindGcd(int a, int b)
{
    while(a > 0)
    {
        int temp = b % a;
        b = a;
        a = temp;
    }
    return b;
}

void Exercise1::SimplifyFraction(int numerator, int denomirator)
{
    int gcd = FindGcd(numerator, denomirator);
    std::cout << numerator / gcd << "/" << denomirator / gcd << std::endl;
}

