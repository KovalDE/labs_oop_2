#include "Number.h"
#include <string>
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

Number::Number() 
{
	a = 0;
}

Number::Number( double aSumma)
{
	a = aSumma;
}

Number::Number(Number& number)
{
	a = number.a;
}

Number::~Number()
{}

Number operator - (const Number& l, const Number& r)
{
	double a1 = l.a;
	double a2 = r.a;
	Number t(a1 - a2);
	return t;
}

Number operator * (const Number& l, const Number& r)
{
	double a1 = l.a;
	double a2 = r.a;
	Number t(a1 * a2);
	return t;
}

ostream& operator << (ostream& out, const Number& a)
{
	
	out << "summa = "  << a << endl;
	out << endl;
	return out;
}

istream& operator >> (istream& in, Number& a)
{
	
	cout << "summa = ? "; in >> a.a;
	cout << endl;
	return in;
};

Number& Number::operator ++ ()
{
	++a;
	return *this;
}
Number& Number::operator -- ()
{
	--a;
	return *this;
}
Number Number::operator ++ (int)
{
	Number t(*this);
	a++;
	return t;
}
Number Number::operator -- (int)
{
	Number t(*this);
	a--;
	return t;
}

Number& Number::operator =(const Number& m)
{
	this->a =m.a;
	return *this;
}

Number::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "summa = " << a << endl;
	return ss.str();
}
