#include <iostream>
#include <stdexcept>
#include <stdbool.h>
#include <string>

#include "doctest.h"
using namespace std;

#include "sources/Fraction.hpp"
using namespace ariel;

TEST_CASE("test 1 - Constructor Test")
{
    Fraction a(3, 4);
	Fraction b(1.5);
	
	CHECK((Fraction(1,4))==0.25);
    CHECK((Fraction(1,2))==0.5);
	CHECK((Fraction(1,1000))==0.001);
  
}

TEST_CASE("test 2 - Add oprations Test")
{
    Fraction a(6);
    Fraction b(6, 1);
	
	CHECK(a+b == 12);
	CHECK(a+1 == 7);
	CHECK(1+a == 7);
	CHECK(a+1.5 == 7.5);
	CHECK(1.5 +a == 7.5);
    CHECK((a++) == 7);
}

TEST_CASE("test 3 - Sub oprations Test")
{
    Fraction a(2);
    Fraction b(6, 2);
	
	CHECK(a-b== 1);
	CHECK(b-a == -1);
	CHECK(1-a == -1);
	CHECK(a-1.5 == 0.5);
	CHECK(1.5 -a == -0.5);
    CHECK((a--) == 1);
	CHECK((--a) == 1);
}

TEST_CASE("test 4 - Mul oprations Test") {

	Fraction b(4, 2);
	Fraction a(1);
	Fraction c(0);

	CHECK(b*a == 2);
	CHECK(1*a == 1);
	CHECK(b*5 == 10);
}


TEST_CASE("test 5 - Division oprations Test") {

	Fraction a(8);
	Fraction b(4, 2);
	Fraction c(0);
	
	CHECK(a/b == 4);
	CHECK(b/a == 0.25);
	CHECK(1/b == 0.5);
	CHECK(b/1 == 0.5);   
	CHECK_THROWS(Fraction(0, 0));
	CHECK_THROWS(Fraction(4, 0));
    CHECK_THROWS(Fraction(-1, 0));

}

TEST_CASE("Test 6: EQUAL operations Test")
{
    Fraction a(0, 6); 
	Fraction b(1, 2);
	Fraction c(4, 2);
	Fraction d(1, 4);
	
	a += c;
	CHECK(a == Fraction(6,3));
	CHECK(a == 2);
	
	c += a;
	CHECK( c==2);
	
	a -= b;
	CHECK(a == Fraction(3,2));
	
	a -= c;
	CHECK(a == -0.5);
	
	d -= a;
	CHECK(b == 0.25);  
	
	 a *= b;
	CHECK(a == Fraction(0));
	CHECK(a == 0);
	CHECK_THROWS(b *= a);
	
	a /= b;
	CHECK(a == Fraction(0));
	CHECK(a == 0);
	CHECK_THROWS(b *= a);
}

TEST_CASE("Test 7: Compare operations Test")
{
	Fraction a(1);
    Fraction b(2, 1);
	Fraction c(2);
	Fraction d(20,2);
	Fraction e(-1);

    CHECK(a == b);
    CHECK(a != b);
    CHECK(a < b);
    CHECK(a > b);
    CHECK((a++) == (b++));
	
	CHECK(c == b);
    CHECK(c != b);
    CHECK(c < b);
    CHECK(c > b);
    CHECK((c++) == (b++));
	
	CHECK(a == d);
    CHECK(a != d);
    CHECK(a < d);
    CHECK(a > d);
    CHECK((a++) == (d++));
	
	CHECK(a == e);
    CHECK(a != e);
    CHECK(a < e);
    CHECK(a > e);
    CHECK((a++) == (e++));
	
}

