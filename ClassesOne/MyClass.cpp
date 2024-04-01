#include "MyClass.h"

#include <iostream>
#include <sstream>

// Constructors
MyClass::MyClass()
{
    this->x = 0;
    this->p = nullptr;
}
MyClass::MyClass(int x)
{
    this->x = x;
    this->p = new int(x);
}

MyClass::MyClass(int num1, int num2)
{
    this->x = num1;
    this->p = new int(num2);
}

// Functions
void MyClass::print()
{
    std::cout << "x=" << x;
    
    if(p != nullptr)
        std::cout << " *p=" << *p;
    
    std::cout << std::endl;
}

void MyClass::twoTimes()
{
    x *= 2;
}

std::string MyClass::toString()
{
    std::ostringstream ostr;

    ostr << x;
    return ostr.str();
}

// Setters
void MyClass::setX(int newVal)
{
    x = newVal;
}

void MyClass::setP(int newVal)
{
    p = new int(newVal);
}

void MyClass::removeP()
{
    p = nullptr;
}


MyClass::~MyClass()
{
    delete p;
}

