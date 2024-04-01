#include "Exercise5.h"

#include <fstream>
#include <iostream>

void Exercise5::PrintPlayerStates(PlayerState* states)
{
    for(int i = 0; i < 3; i++)
    {
        std::cout << "name: " << states[i].name << std::endl;
        std::cout << "level: " << states[i].level << std::endl;
        std::cout << "health: " << states[i].health << std::endl;
        std::cout << "exp: " << states[i].experience << std::endl;
    }
}

void Exercise5::SavePlayerStates(PlayerState states[])
{
    std::ofstream file;
    file.open("game.dat", std::ios::binary);
    if(!file.is_open())
    {
        std::cout << "Couldn't open file!" << std::endl;
        return;
    }
    file.write((char*)states, sizeof(PlayerState[3]));
    file.close();
}

void Exercise5::LoadPlayerStates()
{
    std::ifstream file;
    file.open("game.dat", std::ios::binary);
    if(!file.is_open())
    {
        std::cout << "Couldn't open file!" << std::endl;
        return;
    }
    PlayerState states[3];
    file.read((char*)&states, sizeof(states));

    PrintPlayerStates(states);
}


