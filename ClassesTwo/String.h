#pragma once
#include <ostream>

class String
{
private:
    char* str;
    int len;
    
public:
    String();
    String(const char *s);
    
    // Copy Constructor:
    String(const String&);

    // Overloaders:
    String& operator=(const String& s);
    String& operator+=(const String& s);
    char operator[] (const int) const;
    void replace(const int beg, const int end, const String&);
    bool search(const String) const;
    String& toupper() const;
    String& tolower() const;
    friend bool operator==(const String&, const String&);
    friend bool operator!=(const String&, const String&);
    friend bool operator<(const String&, const String&);
    friend bool operator>(const String&, const String&);
    friend String operator+(const String&, const String&);
    friend std::ostream& operator<<(std::ostream&, const String&);
    
    ~String();
    char* toString();
    int length();
};

bool operator==(const String&, const String&);
bool operator!=(const String&, const String&);
bool operator<(const String&, const String&);
bool operator>(const String&, const String&);
String operator+(const String&, const String&);
std::ostream& operator<<(std::ostream&, const String&);
