#pragma once

struct PlayerState
{
    char name[20];
    int level;
    double health;
    int experience;
};

class Exercise5
{
public:

    static void PrintPlayerStates(PlayerState* states);
    static void SavePlayerStates(PlayerState states[]);
    static void LoadPlayerStates();
};
