#pragma once
#include <string>

class MyClass
{

private:
    int x;
    int* p;
    
public:
    MyClass();
    MyClass(int);
    MyClass(int, int);
    void print();
    void twoTimes();
    std::string toString();

    void setX(int);
    void setP(int);
    void removeP();
    ~MyClass();
};
