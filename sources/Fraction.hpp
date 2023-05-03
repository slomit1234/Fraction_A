#pragma once

#include <math.h>
#include <iostream>
#include <string>
using namespace std;

namespace ariel
{
    class Fraction
    {
    private:
        float numerator;
        float denominator;

    public:
        Fraction(float, float);
        Fraction(float);
        Fraction();
        Fraction(const Fraction &other);
        ~Fraction() = default;
	
        float getNumerator()
        {
            return numerator;
        }
        float getDenominator()
        {
            return denominator;
        }
		
		static void reduce(float &numerator, float &denominator)
        {
            float min;
            if (numerator < denominator) {
                min = numerator;
            } else {
                min = denominator;
            }
            float gcd = 1;
            for (int i = 2; (float)i <= min; i++)
            {
                if ((int)round(numerator) % i == 0 && (int)round(denominator) % i == 0)
                {
                    gcd = (float)i;
                }
            }

            gcd = round(gcd);
            numerator /= gcd;
            denominator /= gcd;
        }


        Fraction operator+(const Fraction &other) const;
		Fraction operator+(float other);
		friend Fraction operator+(float other, const Fraction &fraction2)
        {
            return Fraction(0.5);
        }
		
		Fraction operator-(const Fraction &other) const;
        Fraction operator-(float other);
		friend Fraction operator-(float other, const Fraction &fraction2)
        {
			return Fraction(0.5);		
        }
        
        Fraction operator*(const Fraction &other) const;
		Fraction operator*(float other);
		friend Fraction operator*(float other, const Fraction &fraction2)
		{
			return Fraction(0.5);
        }
		
        Fraction operator/(const Fraction &other) const;
		Fraction operator/(float other);
		friend Fraction operator/(float other, const Fraction &fraction2){
            return Fraction(1,2);
        }
		
        bool operator<(const Fraction &other) const;
		bool operator<(float other);
		
        bool operator<=(const Fraction &other) const;
		bool operator<=(float other);
		
        bool operator>(const Fraction &other) const;
		bool operator>(float other);
		
        bool operator>=(const Fraction &other) const;
		bool operator>=(float other);
		
        bool operator==(const Fraction &other) const;        
		bool operator==(float other);
		
        bool operator!=(const Fraction &other) const;
		bool operator!=(float other);
		
		bool operator*=(const Fraction &other) const;
		friend bool operator*=(float other, const Fraction& fraction2)
		{
			return true;
		}
		
        bool operator/=(const Fraction &other) const;
		friend bool operator/=(float other, const Fraction& fraction2)
		{
			return true;
		}
		
        bool operator+=(const Fraction &other) const;
		friend bool operator+=(float other, const Fraction& fraction2)
		{
			return true;
		}
		
        bool operator-=(const Fraction &other) const;
		friend bool operator-=(float other, const Fraction& fraction2)
		{
			return true;
		}

        Fraction &operator++();
        Fraction operator++(int);
        Fraction &operator--();
        Fraction operator--(int);

        friend bool operator==(float other, const Fraction &fraction2){
            return true;
        }
        friend bool operator!=(float other, const Fraction &fraction2){
            return true;
        }
        friend bool operator>(float other, const Fraction &fraction2){
            return true;
        }
        friend bool operator>=(float other, const Fraction &fraction2){
            return true;
        }
        friend bool operator<(float other, const Fraction &fraction2){
            return true;
        }
        friend bool operator<=(float other, const Fraction &fraction2){
            return true;
        }

        friend std::ostream &operator<<(std::ostream &, const Fraction &);
        friend std::istream &operator>>(std::istream &, const Fraction &);
    };
}