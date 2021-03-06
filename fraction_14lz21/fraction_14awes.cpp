// fraction_14lz21.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "fraction_14awes.h"
using namespace std;

Fraction::Fraction()
{
	numer = 0;
	denom = 1;
}

Fraction::Fraction(int n)
{
	numer = n;
	denom = 1;
}

Fraction::Fraction(int n, int d)
{
	if (d == 0)
	{
		throw FractionException("Denominator cannot be 0");
	}

	normalize(n, d);
}

void Fraction::normalize(int n, int d)
{
	//normalizes fraction by reducing it to the simplest form and moving the negative sign to the numerator
	int negative;
	if (n != 0)
	{
		if (static_cast<double>(n) / static_cast<double>(d) < 0) // checks if n/d is negative
		{
			negative = 1;
			n = abs(n);
			d = abs(d);
		}
		else
		{
			negative = 0;
			n = abs(n);
			d = abs(d);
		}
		int divisor = GCD(n, d);//finds greatest common denominator
		numer = n / divisor; //reduces n to simplest form
		denom = d / divisor; //reduces d to simplest form

		if (negative == 1)
		{
			numer = -numer;
		}
	}
	else // if n = 0 the fraction is converted to 0/1
	{
		numer = 0;
		denom = 1;
	}
}

int Fraction::numerator() const
{
	return numer;
}

int Fraction::denominator() const
{
	return denom;
}

Fraction operator-(const Fraction& F)
{
	Fraction NewF(-F.numerator(), F.denominator());
	return NewF;
}
Fraction& Fraction::operator++()
{
	this->numer = this->numer + this->denom;
	return *this;
}

Fraction Fraction::operator++(int NOTHING)
{
	Fraction Copy(this->numer, this->denom);
	this->numer = this->numer + this->denom;
	return Copy;
}

Fraction& Fraction::operator+=(const Fraction& F)
{
	this->numer = this->numer * F.denom + F.numer *this->denom;
	this->denom = this->denom *F.denom;
	normalize(this->numer, this->denom);
	return *this;
}

Fraction operator+(const Fraction& F1, const Fraction& F2)
{
	int n = F1.numerator()*F2.denominator() + F2.numerator()*F1.denominator();
	int d = F1.denominator()*F2.denominator();
	return Fraction(n, d);
}
Fraction operator-(const Fraction& F1, const Fraction& F2)
{
	int n = F1.numerator()*F2.denominator() - F2.numerator()*F1.denominator();
	int d = F1.denominator()*F2.denominator();
	return Fraction(n, d);
}
Fraction operator*(const Fraction& F1, const Fraction& F2)
{
	return Fraction(F1.numerator()*F2.numerator(), F1.denominator()*F2.denominator());
}
Fraction operator/(const Fraction& F1, const Fraction& F2)
{
	return Fraction(F1.numerator()*F2.denominator(), F1.denominator()*F2.numerator());
}
bool operator==(const Fraction& F1, const Fraction& F2)
{
	return (F1.numerator() == F2.numerator() && F1.denominator() == F2.denominator());
}
bool operator!=(const Fraction& F1, const Fraction& F2)
{
	return !(F1.numerator() == F2.numerator() && F1.denominator() == F2.denominator());
}
bool operator>(const Fraction& F1, const Fraction& F2)
{
	Fraction temp = F1 - F2;
	if (temp.numerator() > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator>=(const Fraction& F1, const Fraction& F2)
{
	Fraction temp = F1 - F2;
	if (temp.numerator() >= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator<(const Fraction& F1, const Fraction& F2)
{
	Fraction temp = F1 - F2;
	if (temp.numerator() < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator<=(const Fraction& F1, const Fraction& F2)
{
	Fraction temp = F1 - F2;
	if (temp.numerator() <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
FractionException::FractionException(const string& s)
{
	ER = s;
}


string FractionException::what()
{
	return ER;
}


ostream& operator<<(ostream& os, const Fraction	&F)
{
	os << F.numerator() << '/' << F.denominator();
	return os;
}
istream& operator>>(istream& in, Fraction	&F)
{
	int numer, denom;
	char buffer;
	//reads the first number
	in >> numer;
	//if not at the end of line read '/' into a buffer then read the denominator
	if (in.peek() != '\n')
	{
		in >> buffer;
		in >> denom;
		// constructs fraction for 'n/d' inputs
		F = Fraction(numer, denom);
	}
	else
	{
		// constructs fractions for 'n' inputs
		F = Fraction(numer);
	}
	return in;
}

int GCD(const int& n, const int& d)
{
	if (d <= n && n%d == 0)
	{
		return d;
	}
	else if (n < d)
	{
		return GCD(d, n);
	}
	else
	{
		return GCD(d, n%d);
	}
}


