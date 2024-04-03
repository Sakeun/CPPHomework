#pragma once

class Field
{
private:
    unsigned char game = 0b10010100;

    const unsigned char unit_mask = 1 << 0;
    const unsigned char treasure_mask = 1 << 1;
    const unsigned char extraction_mask = 1 << 2;
    const unsigned char road_mask = 1 << 3;
    const unsigned char resource_mask = 1 << 4;
    const unsigned char village_mask = 1 << 5;
    const unsigned char terrain_mask = 0b11 << 6;
    
public:
    enum Terrain_type
    {
        Grass,
        Sand,
        Stones,
        Water
    };

    bool has_road();
    void make_road();
    bool clear_road();
    bool mine_allowed();
    void set_resource();
    bool has_resource();
    void set_terrain(Terrain_type t);
    Terrain_type get_terrain();
    bool extraction_allowed();
    void print();
};
