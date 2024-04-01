#include <cstring>

#include "Exercise3.h"

bool Exercise3::isPalindrome(char* cstr)
{
    int len = strlen(cstr);
    for(int i = 0; i < len; i++)
    {
        if(len - 1 - i <= i)
            return true;
        if(cstr[i] != cstr[len - 1 - i])
            return false;
    }
    return false;
}
