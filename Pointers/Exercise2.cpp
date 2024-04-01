#include "Exercise2.h"

int* Exercise2::createSequence(int n)
{
    int* arr = new int[n];
    for(int i = 1; i <= n; i++)
    {
        arr[i - 1] = i;
    }
    return arr;
}
