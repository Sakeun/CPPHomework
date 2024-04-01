#include "String.h"

#include <iostream>

String::String()
{
    str = new char[1];
    str[0] = '\0';
    len = 0;
}

String::String(const char* s)
{
    len = 0;
    while(s[len] != '\0')
    {
        len++;
    }
    str = new char[len + 1];

    for(int i = 0; i <= len; i++)
    {
        str[i] = s[i];
    }
}


int String::length()
{
    return len;
}

char* String::toString()
{
    return str;
}

String& String::tolower() const
{
    String* string = new String(str);
    int i = 0;
    while(str[i] != '\0')
    {
        string->str[i] = std::tolower(str[i]);
        i++;
    }
    string->len = i;
    return *string;
}

String& String::toupper() const
{
    String* string = new String(str);
    int i = 0;
    while(str[i] != '\0')
    {
        string->str[i] = std::toupper(str[i]);
        i++;
    }
    return *string;
}

void String::replace(const int beg, const int end, const String& s)
{
    int j = 0;
    for(int i = beg; i <= end; i++)
    {
        str[i] = s[j];
        j++;
    }
}

// Copy constructor:
String::String(const String& s)
{
    len = s.len;
    str = new char[len + 1];
    for(int i = 0; i <= len; i++)
        str[i] = s.str[i];
}

// Operator overloading:
String& String::operator=(const String& s)
{
    len = s.len;
    delete[] str;
    
    str = new char[len + 1];
    for(int i = 0; i <= len; i++)
        str[i] = s.str[i];
    
    return *this;
}

char String::operator[](const int i) const
{
    return str[i];
}

String& String::operator+=(const String& s)
{
    char* newstr = new char[len + s.len + 1];
    
    for(int i = 0; i < len; i++)
        newstr[i] = str[i];
    for(int i = 0; i < s.len; i++)
        newstr[i + len] = s.str[i];
    newstr[len + s.len] = '\0';
    delete[] str;
    str = newstr;
    
    len += s.len;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const String& s)
{
    os << s.str;
    return os;
}

bool operator!=(const String& s1, const String& s2)
{
    int i = 0;
    
    if(s1.len != s2.len) return true;
    
    while(s1.str[i] != '\0')
    {
        if(s1[i] != s2[i])
            return true;
        i++;
        
    }
    return false;
}

String operator+(const String& s1, const String& s2)
{
    String news;
    news.len = s1.len + s2.len;
    news.str = new char[news.len + 1];
    for(int i = 0; i < s1.len; i++)
        news.str[i] = s1.str[i];
    for(int i = 0; i <= s2.len; i++)
        news.str[i + s1.len] = s2.str[i];

    news.str[news.len] = '\0';
    
    return news;
}

bool operator<(const String& s1, const String& s2)
{
    return strcmp(s1.str, s2.str) < 0;
}

bool operator>(const String& s1, const String& s2)
{
    return strcmp(s1.str, s2.str) > 0;
}

bool operator==(const String& s1, const String& s2)
{
    int i = 0;
    
    if(s1.len != s2.len) return false;
    
    while(s1.str[i] != '\0')
    {
        if(s1[i] != s2[i])
            return false;
        i++;
    }
    return true;
}

String::~String()
{
    delete[] str;
}
