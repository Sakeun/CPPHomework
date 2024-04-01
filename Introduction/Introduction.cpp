#include <iostream>

int sum(int x, int y)
{
    return x + y;
}

void evenOrOdd(int x)
{
    if(x % 2 == 0)
    {
        std::cout << "even";
    } else
    {
        std::cout << "odd";
    }

    std::cout << std::endl;
}

int powerOf(int base, int exponent)
{
    if(exponent == 0)
    {
        return 1;
    }
    return powerOf(base, exponent - 1) * base;
}

int getValueLocation(int arr[], int len, int val)
{
    for(int i = 0; i < len; i++)
    {
        if(arr[i] == val)
            return i;
    }
    return -1;
}

void bubbleSort(int arr[], int size)
{
    for(int i = size; i > 0; i--)
    {
        for(int j = 0; j < i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                const int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findGcd(int a, int b)
{
    while(a > 0)
    {
        int temp = b % a;
        b = a;
        a = temp;
    }
    return b;
}

int findLcm(int a, int b)
{
    int tempA = 2;
    int tempB = 2;
    while(a % tempA > 0)
    {
        tempA++;
    }
    while(b % tempB > 0)
    {
        tempB++;
    }
    int resA = 1;
    int resB = 1;
    while(resA * tempA != a)
    {
        resA++;
    }
    while(resB * tempB != b)
    {
        resB++;
    }
    return tempA * resA * tempB * resB;
}

int main(int argc, char* argv[])
{
    std::cout << sum(1, 2) << std::endl;
    evenOrOdd(2);
    evenOrOdd(3);
    std::cout << powerOf(2, 3) << std::endl;

    int arr[5] = { 1, 30, 10, 20, 8 };
    std::cout << getValueLocation(arr, sizeof(arr) / sizeof(int), 8) << std::endl;
    std::cout << getValueLocation(arr, sizeof(arr) / sizeof(int), 11) << std::endl;
    bubbleSort(arr, sizeof(arr) / sizeof(int));
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << findGcd(12, 18) << std::endl;
    std::cout << findGcd(60, 75) << std::endl;
    std::cout << findLcm(4, 15) << std::endl;
    std::cout << findLcm(4, 5) * findGcd(4, 5) << std::endl;
    return 0;
}
