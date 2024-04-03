#include "Cipher.h"

#include <iostream>

void Cipher::de_cipher(char* story, char letter)
{
    this->story = story;
    for(int i = 0; i < 1024; i++)
    {
        if(story[i] == '\0')
            break;
        
        this->story[i] = story[i] ^ letter;
        std::cout << story[i];
    }
    std::cout << std::endl;
}

void Cipher::de_cipher(char* story, char* letters, int letterSize)
{
    this->story = story;
    for(int i = 0; i < 1024; i++)
    {
        if(story[i] == '\0')
            break;

        for(int j = 0; j < letterSize; j++)
        {
            this->story[i] = story[i] ^ letters[j];
            std::cout << story[i];
            i++;
        }
    }
    std::cout << std::endl;
}
