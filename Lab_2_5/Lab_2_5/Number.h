#pragma once
#include <string>
#include <sstream>

using namespace std;

class Number
{
	double a;
public:
	double getDouble() const { return a; };
	void setDouble(double a) { this->a = a; };

	Number(); 
	Number(double); 
	Number(Number&);
	~Number();

	Number& operator = (const Number& m);
	operator string () const;

	friend ostream& operator << (ostream& out, const Number& a);
	friend istream& operator >> (istream& in, Number& a);

	friend Number operator - (const Number&, const Number&);
	friend Number operator * (const Number&, const Number&);

	Number& operator ++ ();
	Number& operator -- ();
	Number operator ++ (int);
	Number operator -- (int);

};
