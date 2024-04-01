
#include <iostream>

#include "Exercise2.h"
#include "Exercise3.h"

/*
- That a pointer is a memory address
- How to get the address of a variable
- How to let a pointer point at an existing variable
- How to use a pointer to create a new variable
- How to change the value of a variable through a pointer
- How to move a pointer
- How to free allocated memory
- That it is important to keep track of all memory
- That is important to free all allocated memory
- What memory is freed by the compiler and what memory needs to be freed yourself
- How to use pointers to create dynamic arrays
- How to create pointers to pointers (to pointers to pointers etc.)
- How to use pointers to pointers to create dynamic multi dimensional arrays
*/

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
