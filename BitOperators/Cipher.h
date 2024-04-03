#pragma once

class Cipher
{
    char* story;

public:
    void de_cipher(char* story, char letter);
    void de_cipher(char* story, char* letters, int letterSize);
};
