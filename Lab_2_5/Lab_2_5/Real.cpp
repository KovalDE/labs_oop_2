#include "Real.h"
#include <iostream>

using namespace std;

Real Real::Sqrt(int n)
{
	Real t(pow(number.getDouble(), 1. / n));
	//t.number.setDouble(pow(number.getDouble(), 1. / n));
	return t;
}

Real Real::PiPower(int n)
{
	Real t;
	double pi = atan(1) * 4;
	t.number.setDouble(pow(pi, n));
	return t;
}

Real::Real(const int a)
	: number(a)
{}
Real::Real(const Real &s)
{
	number = s.number;
}
Real& Real::operator =(const Real& s)
{
	number = s.number;
	return *this;
}

Real::operator string () const
{
	return string(number);
}

ostream& operator <<(ostream& out, const Real&	s)
{
	out << string(s);
	return out;
}

istream& operator >>(istream& in, Real&	s)
{

	cout << endl;
	cout << "number = ? "; in >>s.number;
	return in;
}

Real& Real::operator ++ () {
	++number;
	return	*this;
}
Real& Real::operator -- () {
	--number;
	return *this;
}
Real Real::operator ++(int)
{
	Real s(*this);
	number++;
	return s;
}
Real Real::operator --(int)
{
	Real s(*this);
	number--;
	return s;
}
Real::~Real(void)
{}
