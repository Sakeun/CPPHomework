#pragma once

class Tips
{
private:
    unsigned char bit1 = 0b10;
    unsigned char bit2 = 0b01;
    unsigned char bit3 = 0b11;
    unsigned char bit4 = 0b00;
    
public:
    void operator_not();
    void operator_and();
    void operator_xor();
    
};
