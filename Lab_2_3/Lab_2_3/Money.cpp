#include "Money.h"
#include <sstream>
#include <string>
#include <cmath>

Money::Money()
{
	gr = 0;
	cop = 0;
}

Money::Money(long x, int y)
{
	gr = x;
	cop = y;
}

Money::Money(const Money& x)
{
	gr = x.gr;
	cop = x.cop;
}

Money::~Money() {}

Money& Money::operator = (const Money& x)
{
	gr = x.gr;
	cop = x.cop;

	return *this;
}

ostream& operator << (ostream& out, const Money& x)
{
	out << string(x);
	return out;
}
istream& operator >> (istream& in, Money& x)
{
	cout << "grivnas  = "; in >> x.gr;
	cout << "copiikas = "; in >> x.cop;
	return in;
}

Money::operator string () const
{
	stringstream sout;
	sout << " grivnas = " << gr <<'.'<<cop<<endl;

	return sout.str();
}

Money operator - (const Money& l, const Money& r)
{
	long gr1 = l.gr;
	unsigned int cop1 = l.cop;
	long gr2 = r.gr;
	unsigned int cop2 = r.cop;
	if (gr1 > gr2)
	{
		if (cop1 < cop2)
		{
			cop1 += 100;

			gr1 -= 1;
		}
    return Money(gr1-gr2,cop1-cop2);
	}
	else
	{
		if (cop2 < cop1)
		{
			cop2 += 100;
			gr2 -= 1;
		}
		return Money(gr2 - gr1, cop2 - cop1);
	}
}

Money operator * (const Money& x , double a)
{
	long double gr1 = x.gr;
	unsigned int cop1 = x.cop;
	//gr1 = x.gr * a;
	cop1 = x.cop * a + (((x.gr * a) - gr1)* 100);
	while (cop1 >= 100)
	{
	    cop1 -= 100;
		gr1 += 1;
	}
	return Money(gr1,cop1);
}

bool operator == (const Money& x , const Money& y)
{
	if (x.gr == y.gr && x.cop == y.cop)
		return true;
	else false;
}

 bool operator != (const Money& x, const Money& y)
 {
	 if (x.gr != y.gr && x.cop != y.cop)
		 return true;
	 else false;
 }

 bool operator >= (const Money& x, const Money& y)
 {
	 if (x.gr >= y.gr && x.cop >= y.cop)
		 return true;
	 else false;
 }

 bool operator <= (const Money& x, const Money& y)
 {
	 if (x.gr <= y.gr && x.cop <= y.cop)
		 return true;
	 else false;
 }

 bool operator > (const Money& x, const Money& y)
 {
	 if (x.gr > y.gr && x.cop > y.cop)
		 return true;
	 else false;
 }

 bool operator < (const Money& x, const Money& y)
 {
	 if (x.gr < y.gr && x.cop < y.cop)
		 return true;
	 else false;
 }

 Money& Money::operator ++()
 {
	 gr++;
	 return *this;
 }
 Money& Money::operator --()
 {
	 gr--;
	 return *this;
 }
 Money Money::operator ++(int)
 {
	 Money t(*this);
	 gr++;
	 return t;
 }
 Money Money::operator --(int)
 {
	 Money t(*this);
	 gr--;
	 return t;
 }

