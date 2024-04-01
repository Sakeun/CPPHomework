
/*
- How to follow the rule of three (Destructor, Copy constructor, overloaded assign operator)
- How to overload operators like: = + * / - << += -= *= /=
- How to create a friend function
- When to use a friend function
- When to use const in function declarations
*/

#include <iostream>

#include "String.h"

int main(int argc, char* argv[])
{
    // Exercise 1:
    String s2("My string");
    String s1 = s2;
    String s3 = String(s1);
    
    std::cout << s1.toString() << std::endl;
    std::cout << "len=" << s1.length() << std::endl;
    std::cout << s2.toString() << std::endl;
    std::cout << "len=" << s2.length() << std::endl;
    std::cout << s3.toString() << std::endl;
    std::cout << "len=" << s3.length() << std::endl;
    String s4(" Addition");
    s1 += s4;
    std::cout << s1.toString() << std::endl;
    std::cout << (s1 == s2) << std::endl;
    std::cout << (s1 != s2) << std::endl;
    std::cout << (s1 > s2) << std::endl;
    std::cout << (s1 < s2) << std::endl;
    std::cout << s1.toupper().toString() << std::endl;
    s2 = s1 + " More";
    std::cout << s2.tolower().toString() << std::endl;
    
    return 0;
}
