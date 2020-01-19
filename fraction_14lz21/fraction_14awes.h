#pragma once

#ifdef FRACTION14AWES_EXPORTS
#define FRACTION14AWES_API __declspec(dllexport)
#else
#define FRACTION14AWES_API __declspec(dllimport)
#endif

#include <string>

using namespace std;

extern "C" FRACTION14AWES_API class Fraction
{
public:
	// creates a fraction 0/1
	FRACTION14AWES_API Fraction();
	// creates a fraction n/1
	FRACTION14AWES_API Fraction(int n);
	// creates a normalized fraction n/d
	FRACTION14AWES_API Fraction(int n, int d);

	// normalizes the fraction that calls it. n and d are the fractions numerator and demoninator respectively.
	FRACTION14AWES_API void normalize(int n, int d);
	// increments a fraction by one and return its value
	FRACTION14AWES_API Fraction& operator++();
	// increments a fraction by one and return its unincremented value
	FRACTION14AWES_API Fraction operator++(int NOTHING);
	// adds a new value to a fraction and updates it
	FRACTION14AWES_API Fraction& operator+=(const Fraction& F);
	// accessor for denominator
	FRACTION14AWES_API int denominator() const;
	// accesor for numerator
	FRACTION14AWES_API int numerator() const;
	// bool to keep track of the sign of a fraction

private:
	// denominator
	int denom;
	// numerator
	int numer;
};


// An exception class for illegal fraction declarations. ie denominator = 0;
extern "C" FRACTION14AWES_API class FractionException
{
public:
	FRACTION14AWES_API FractionException(const string& s);
	FRACTION14AWES_API string what(); // returns ER
private:
	string ER; //set ER to s
};


// Overloads the negate operator
FRACTION14AWES_API Fraction operator-(const Fraction& F);
// Overloads the - operator for fractions
FRACTION14AWES_API Fraction operator-(const Fraction& F1, const Fraction& F2);
// Overloads the + operator for fractions
FRACTION14AWES_API Fraction operator+(const Fraction& F1, const Fraction& F2);
// Overloads the * operator for fractions
FRACTION14AWES_API Fraction operator*(const Fraction& F1, const Fraction& F2);
// Overloads the / operator for fractions
FRACTION14AWES_API Fraction operator/(const Fraction& F1, const Fraction& F2);

//Overloads comparator operators for fractions. If the condition is true returns true if false returns false.
FRACTION14AWES_API bool operator ==(const Fraction& F1, const Fraction& F2);
FRACTION14AWES_API bool operator <(const Fraction& F1, const Fraction& F2);
FRACTION14AWES_API bool operator <=(const Fraction& F1, const Fraction& F2);
FRACTION14AWES_API bool operator !=(const Fraction& F1, const Fraction& F2);
FRACTION14AWES_API bool operator >=(const Fraction& F1, const Fraction& F2);
FRACTION14AWES_API bool operator >(const Fraction& F1, const Fraction& F2);

//Overloads the ostream operator << for fractions
FRACTION14AWES_API ostream& operator<<(ostream& os, const Fraction	& F);
//Overloads the istream operator >> for fractions
FRACTION14AWES_API istream& operator>>(istream& in, Fraction& F);

//public method that returns the greatest common devisor of two integers.
FRACTION14AWES_API int GCD(const int& n, const int& d);