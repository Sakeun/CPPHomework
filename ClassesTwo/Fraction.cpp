#include "Fraction.h"

#include <sstream>

Fraction::Fraction()
{
    numerator = 0;
    denumerator = 1;
}

Fraction::Fraction(const int num, const int denum)
{
    numerator = num;
    denumerator = denum;
}

std::string Fraction::toString()
{
    std::ostringstream stream;
    stream << numerator << "/" << denumerator;

    return stream.str();
}

Fraction& operator*(const Fraction f1, const Fraction f2)
{
    Fraction* f = new Fraction();
    f->numerator = f1.numerator * f2.numerator;
    f->denumerator = f2.denumerator * f1.denumerator;
    return *f;
}

std::ostream& operator<<(std::ostream& os, Fraction& f)
{
    os << f.toString();

    return os;
}

