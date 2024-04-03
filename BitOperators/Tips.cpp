#include "Tips.h"

#include <iostream>

void PrintChar(char c) {
    const char mask = 0b1;
    for (int i = 2; i >= 0; i--) {
        std::cout << ((c >> i) & mask);
    }
    std::cout << std::endl;
}

/*
bit1 = 0b10;
bit2 = 0b01;
bit3 = 0b11;
bit4 = 0b00;
*/
void Tips::operator_and()
{
    std::cout << "operator &:" << std::endl;
    // Operator = &.
    // Good to clear a bit when using 0 as mask.
    // 1 & 0 = 0. 0 & 0 = 0.
    PrintChar(bit1);
    // reset bits to 0
    char result = bit1 & bit4;
    PrintChar(result);

    // Can also check for (multiple) bits:
    std::cout << "0b01 & ob10: " << (bit2 & bit1) << std::endl; // 0 because 0 & 1 = 0 and 1 & 0 = 0. 0 + 0 = 0
    std::cout << "0b01 & 1: " << (bit2 & 1) << std::endl;
}

void Tips::operator_not()
{
    // operator ~. invert bits
    std::cout << "operator ~:" << std::endl;
    std::cout << "10" << std::endl;
    PrintChar(bit1);
    std::cout << "inverted" << std::endl;
    PrintChar(~bit1);
}

void Tips::operator_xor()
{
    std::cout << "operator ^:" << std::endl;
    // Operator ^. Turns a 0 and 1 into 1, 0 and 0 into 0, 1 and 1 into 0.
    PrintChar(bit1);
    PrintChar(bit2);
    std::cout << "010 XOR 001 = ";
    PrintChar(bit1 ^ bit2);
}