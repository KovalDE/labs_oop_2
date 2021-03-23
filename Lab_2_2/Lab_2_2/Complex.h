#pragma once
#include <iostream>
#include <string>

using namespace std;

class Complex
{
	double re, im;
public:
	Complex();
	Complex(double, double);
	Complex(const Complex&);
	~Complex(); 

	void SetRe(double);
	void SetIm(double);
	double GetRe() const;
	double GetIm() const;
	Complex& operator = (const Complex&);
	operator string() const;

	friend Complex operator + (const Complex&, const Complex&);
	friend Complex operator - (const Complex&, const Complex&);
	friend Complex operator * (const Complex&, const Complex&);
	friend Complex operator / (const Complex&, const Complex&);
    Complex& operator += (const Complex&);
    Complex& operator -= (const Complex&);
	Complex& operator *= (const Complex&);
	Complex& operator /= (const Complex&);

	friend ostream& operator << (ostream&, const Complex&);
	friend istream& operator >> (istream&, Complex&);

	Complex& operator ++();
	Complex& operator --();
	Complex operator ++(int);
	Complex operator --(int);
};

