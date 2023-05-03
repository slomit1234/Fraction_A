#include "Fraction.hpp"
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

namespace ariel
{
    // Constructors
    Fraction::Fraction(float numerator, float denominator)
    {
    }
    Fraction::Fraction(float numerator)
    {
    }
    Fraction::Fraction()
    {
    }
    Fraction::Fraction(const Fraction &other)
    {
    }

    Fraction Fraction::operator+(const Fraction &other) const
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator-(const Fraction &other) const
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator*(const Fraction &other) const
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator/(const Fraction &other) const
    {
        return Fraction(1, 1);
    }
	
	bool Fraction::operator+=(const Fraction &other) const
    {
        return false;
    }
    bool Fraction::operator-=(const Fraction &other) const
    {
        return false;
    }
    bool Fraction::operator*=(const Fraction &other) const
    {
        return false;
    }
    bool Fraction::operator/=(const Fraction &other) const
    {
        return false;
    }
	

    bool Fraction::operator<(const Fraction &other) const
    {
        return false;
    }
    bool Fraction::operator<=(const Fraction &other) const
    {
        return false;
    }
    bool Fraction::operator>(const Fraction &other) const
    {
        return false;
    }
    bool Fraction::operator>=(const Fraction &other) const
    {
        return false;
    }
    bool Fraction::operator==(const Fraction &other) const
    {
        return false;
    }
    bool Fraction::operator!=(const Fraction &other) const
    {
        return false;
    }
	

    Fraction Fraction::operator+(float other)
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator-(float other)
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator*(float other)
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator/(float other)
    {
        return Fraction(1, 1);
    }
    bool Fraction::operator<(float other)
    {
        return false;
    }
    bool Fraction::operator<=(float other)
    {
        return false;
    }
    bool Fraction::operator>(float other)
    {
        return false;
    }
    bool Fraction::operator>=(float other)
    {
        return false;
    }
    bool Fraction::operator==(float other)
    {
        return false;
    }
    bool Fraction::operator!=(float other)
    {
        return false;
    }

    Fraction &Fraction::operator++()
    {
        return *this;
    }

    Fraction Fraction::operator++(int)
    {
        return Fraction(1, 1);
    }

    Fraction &Fraction::operator--()
    {
        return *this;
    }

    Fraction Fraction::operator--(int)
    {
        return Fraction(1, 1);
    }

    std::ostream &operator<<(std::ostream &stream, const Fraction &fraction)
    {
        return stream;
    }

    std::istream &operator>>(std::istream &stream, const Fraction &fraction)
    {
        return stream;
    }
}