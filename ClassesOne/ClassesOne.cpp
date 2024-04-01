
/*
- How to create a class
- How to create a header file and corresponding .cc/.cpp file
- How to create a constructor
- How to overload a constructor
- How to create a destructor
- What you need a destructor for
- How to delete an array created by new keyword
- How to reach members of a class
- How to call member functions of a class
- How to reach members of a class through a pointer
- How to call member functions of a class through a pointer
*/

#include <iostream>

#include "MyClass.h"
#include "MyStack.h"

int main(int argc, char* argv[])
{
    // Exercise 1:
    MyClass test1;
    test1.print();
    MyClass test2(1, 2);
    test2.print();
    test1.setX(20);
    test1.print();
    test1.setP(30);
    test1.print();

    // Exercise 2:
    MyStack* stack = new MyStack();
    std::cout << stack->is_empty() << " " << stack->size() << std::endl;
    stack->push(3);
    stack->push(10);
    stack->push(1);
    std::cout << stack->is_empty() << " " << stack->size() << std::endl;
    stack->print();
    std::cout << stack->sum() << std::endl;
    delete stack;
    
    return 0;
}
