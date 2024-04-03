
#include <iostream>

#include "Cipher.h"
#include "Field.h"
#include "Unit.h"

// Example to print bits, just in case :)
void printChar(char c, int len) {
    const char mask = 0b1;
    for (int i = len; i >= 0; i--) {
        std::cout << ((c >> i) & mask);
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    // Exercise 1:
    Field f;
    f.set_resource();
    f.print();
    f.set_resource();
    f.set_terrain(Field::Stones);
    f.print();
    
    // Exercise 2:
    Unit u;
    u.setPlayerID(24);
    std::cout << "Player ID: " << u.getPlayerID() << std::endl;

    // Exercise 3:
    Cipher cipher;
    char* story = new char[1024]("hottentottententententoonstelling");
    cipher.de_cipher(story, '%');
    cipher.de_cipher(story, new char[10]("abcdefg"), 7);

    // Printing chars:
    unsigned char* bits = new unsigned char[]
    {
        0b0011010, 0b1100110, 0b1110101
    };
    std::cout << "Printing chars example: " << std::endl;
    printChar(bits[0], 7);
    printChar(bits[1], 7);
    printChar(bits[2], 7);

    return 0;
}
