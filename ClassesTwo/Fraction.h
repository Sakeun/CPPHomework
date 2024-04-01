#pragma once
#include <string>

class Fraction
{
private:
    int numerator;
    int denumerator;

public:
    Fraction();
    Fraction(const int, const int);

    std::string toString();
    Fraction& operator=(const Fraction&);
    friend Fraction& operator*(const Fraction&, const Fraction&);
    friend Fraction& operator+(const Fraction&, const Fraction&);
    friend Fraction& operator-(const Fraction&, const Fraction&);
    friend Fraction& operator/(const Fraction&, const Fraction&);
    Fraction& operator+=(const Fraction&);
    Fraction& operator*=(const Fraction&);
    Fraction& operator/=(const Fraction&);
    Fraction& operator-=(const Fraction&);
};

Fraction& operator*(const Fraction&, const Fraction&);
std::ostream& operator<<(std::ostream&, Fraction&);
Fraction& operator+(const Fraction&, const Fraction&);
Fraction& operator-(const Fraction&, const Fraction&);
Fraction& operator/(const Fraction&, const Fraction&);