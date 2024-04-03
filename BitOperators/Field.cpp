#include "Field.h"

#include <iostream>

void Field::set_resource()
{
    game ^= resource_mask;
}

bool Field::has_resource()
{
    return (game & resource_mask) != 0;
}

bool Field::extraction_allowed()
{
    Terrain_type terrain = get_terrain();
    return ((terrain == Sand || terrain == Stones) && has_resource()) != 0;
}

void Field::set_terrain(Terrain_type t)
{
    /* 00 = Grass
     * 10 = Sand
     * 01 = Stones
     * 11 = Water
     */
    unsigned char terrain_value = 0;
    switch(t)
    {
    case Grass:
        terrain_value = 0b00 << 6;
        break;
    case Sand:
        terrain_value = 0b10 << 6;
        break;
    case Stones:
        terrain_value = 0b01 << 6;
        break;
    case Water:
        terrain_value = 0b11 << 6;
        break;
    }

    // get the complement of mask (00111111) to clear the current bits
    game &= ~terrain_mask;
    // set the current terrain
    game |= terrain_value;
}

Field::Terrain_type Field::get_terrain()
{
    if((game & terrain_mask) == 0b00 << 6)
        return Grass;
    if((game & terrain_mask) == 0b10 << 6)
        return Sand;
    if((game & terrain_mask) == 0b01 << 6)
        return Stones;
    if((game & terrain_mask) == 0b11 << 6)
        return Water;

    return Grass;
}

void Field::print()
{
    std::cout << " resource:" << has_resource();
    std::cout << " terrain:";
    Terrain_type terrain = get_terrain(); //fill in yourself
    
    switch (terrain)
    {
    case Grass: std::cout << "grass"; break;
    case Sand: std::cout << "sand"; break;
    case Stones: std::cout << "stones"; break;
    case Water: std::cout << "water"; break;
    default: std::cout << "ERROR"; break;
    }
    std::cout << std::endl;
}
