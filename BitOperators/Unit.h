#pragma once
#include <cstdint>

class Unit
{
private:
    uint8_t playerID;
public:
    uint8_t getPlayerID();
    void setPlayerID(uint8_t ID);
};
