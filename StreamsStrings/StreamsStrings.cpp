#include <cstring>
#include <fstream>
#include <iostream>

#include "Exercise1.h"
#include "Exercise3.h"
#include "Exercise4.h"
#include "Exercise5.h"

/*
- How to create a multidimensional array (statically)
- How to use a multidimensional array as input for a function
- How a multidimensional array is stored in memory
- The difference between a c-string and a string
- That \0 terminates a c-string
- That c-strings have a fixed length whilst strings do not
- The difference between call by value and call by reference
- How to pass arguments to a function using call by value or call by reference
- What a stream is
- What the source and target location of a stream can be
- How to create a stream
- How to open/close a stream
- How to read/write a file
- The difference between text files and binary files
- How to create a struct
- How to access elements in a struct
- How to read/write structs from/to a file
 */


int main(int argc, char* argv[])
{
    // Exercise 1:
    Exercise1::SimplifyFraction(48, 18);
    Exercise1::SimplifyFraction(7, 4);
    Exercise1::SimplifyFraction(15, 90);

    // Exercise 2:
    char names[][6] = { { 'w', 'o', 'n', 'h', 'e', 'e' }, { 'j', 'a', 'k', 'e' } };
    for(int i = 0; i < std::size(names); i++)
    {
        for(int j = 0; j < sizeof(names[i]) / sizeof(char); j++)
        {
            std::cout << names[i][j];
        }
        std::cout << std::endl;
    }

    // Exercise 3:
    char str1[] = "abba";
    char str2[] = "parterretrap";
    char str3[] = "notthisone";
    std::cout << Exercise3::isPalindrome(str1) << std::endl;
    std::cout << Exercise3::isPalindrome(str2) << std::endl;
    std::cout << Exercise3::isPalindrome(str3) << std::endl;

    // Exercise 4:
    Exercise4::printFile("test.cpp");
    Exercise4::printFile("StreamsStrings.cpp");

    // Exercise 5:
    PlayerState States[3] = {
        { "Wonhee", 10, 100.0, 99 },
        { "Sakura", 15, 99.4, 12 },
        { "Asa", 9, 80.3,3 }
    };
    Exercise5::PrintPlayerStates(States);
    std::cout << "saving states..." << std::endl;
    Exercise5::SavePlayerStates(States);
    std::cout << "loading states..." << std::endl;
    Exercise5::LoadPlayerStates();
    return 0;
}
