
#include <iostream>

#include "Cipher.h"
#include "Field.h"
#include "Unit.h"

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

    return 0;
}
