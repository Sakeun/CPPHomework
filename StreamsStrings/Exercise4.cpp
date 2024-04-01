#include <fstream>

#include "Exercise4.h"

#include <iostream>

void Exercise4::printFile(const char* filename)
{
    std::ifstream f1;
    f1.open(filename, std::ios::binary);
    
    if(!f1.is_open())
    {
        std::cout << "Couldn't open file!" << std::endl;
        return;
    }
    char text[10];
    f1.read(text, sizeof(text));
    f1.close();

    for (int i = 0; i < sizeof(text) / sizeof(char); i++)
    {
        std::cout << text[i];
    }
    std::cout << std::endl;
}
