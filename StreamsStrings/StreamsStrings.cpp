#include <cstring>
#include <fstream>
#include <iostream>

#include "Exercise1.h"
#include "Exercise3.h"
#include "Exercise4.h"
#include "Exercise5.h"

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