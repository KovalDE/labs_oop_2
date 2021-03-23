#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Money
{
	long gr;
	unsigned int cop;
public:
	Money();
	Money(long, int);
	Money(const Money&);
	~Money();

	double GetGr() const { return gr; }
	double GetCop() const { return cop; }
	void SetGR(long value) { gr = value; }
	void SetCop(unsigned int value) { cop = value; }
	
	Money& operator = (const Money&);
	operator string() const;

	friend Money operator - (const Money&, const Money&);
	friend Money operator * (const Money&, double);

	friend bool operator == (const Money&, const Money&);
	friend bool operator != (const Money&, const Money&);
	friend bool operator >= (const Money&, const Money&);
	friend bool operator <= (const Money&, const Money&);
	friend bool operator > (const Money&, const Money&);
	friend bool operator < (const Money&, const Money&);

	friend ostream& operator << (ostream&, const Money&);
	friend istream& operator >> (istream&, Money&);

	Money& operator ++();
	Money& operator --();
	Money operator ++(int);
	Money operator --(int);
};