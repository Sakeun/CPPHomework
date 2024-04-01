
#include <iostream>

#include "Exercise2.h"
#include "Exercise3.h"

int main(int argc, char* argv[])
{
    // Exercise 1:
    int a = 2, b = 3;
    int* p = new int(2);
    int* q = new int(3);
    int* r;
    std::cout << "p=" << *p << " q=" << *q << std::endl;
    r = new int(*p);
    p = new int(*q);
    q = r;
    std::cout << "p=" << *p << " q=" << *q << std::endl;
    delete p;
    delete r;

    // Exercise 2:
    int arrLen = 5;
    int* arr = Exercise2::createSequence(arrLen);
    for(int i = 0; i < arrLen; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete arr;
    
    // Exercise 3:
    int** triangle;
    int size = 10;
    triangle = Exercise3::CreatePascalsTriangle(size);
    Exercise3::PrintPascalsTriangle(triangle, size);
    Exercise3::CleanPascalsTriangle(triangle, size);
    return 0;
}
