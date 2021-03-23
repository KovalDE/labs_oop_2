#include "Complex.h"
#include <sstream>

Complex::Complex()
{
	re = 0;
	im = 0;
}
Complex::Complex(double r = 0, double i = 0)
{
	re = r;
	im = i;
}
Complex::Complex(const Complex& r)
{
	re = r.re;
	im = r.im;
}

Complex::~Complex()
{ }

void Complex::SetRe(double r)
{
	re = r;
}
void Complex::SetIm(double i)
{
	im = i;
}
double Complex::GetRe() const
{
	return re;
}
double Complex::GetIm() const
{
	return im;
}
Complex& Complex::operator = (const Complex& r)
{
	re = r.re;
	im = r.im;
	return *this;
}
Complex::operator string () const
{
	stringstream ss;
	ss << " Re = " << re << endl;
	ss << " Im = " << im << endl;
	return ss.str();
}
Complex operator + (const Complex& x, const Complex& y)
{
	return Complex(x.re + y.re, x.im + y.im);
}
Complex operator - (const Complex& x, const Complex& y)
{
	return Complex(x.re - y.re, x.im - y.im);
}
Complex operator * (const Complex& x, const Complex& y)
{
	return Complex(x.re * y.re - x.im * y.im,
		x.re * y.im + x.im * y.re);
}
Complex operator / (const Complex& x, const Complex& y)
{
	double r1 = x.re;
	double i1 = x.im;
	double r2 = y.re;
	double i2 = y.im;
	return Complex((r1 * r2 - i1 * i2) / (r2 * r2 + i2 * i2),
		(-r1 * i2 + i1 * r2) / (r2 * r2 + i2 * i2));
}

ostream & operator << (ostream & out, const Complex & r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Complex& r)
{
	cout << " Re = "; in >> r.re;
	cout << " Im = "; in >> r.im;
	cout << endl;
	return in;
}
Complex& Complex::operator ++()
{
	re++;
	im++;
	return *this;
}
Complex& Complex::operator --()
{
	re--;
	im--;
	return *this;
}
Complex Complex::operator ++(int)
{
	Complex t(*this);
	im++;
	re++;
	return t;
}
Complex Complex::operator --(int)
{
	Complex t(*this);
	im--;
	re--;
	return t;
}

Complex& Complex::operator +=(const Complex& r)
{
	re += r.re;
	im += r.im;
	return *this;
}

Complex& Complex::operator -=(const Complex& r)
{
	re -= r.re;
	im -= r.im;
	return *this;
}

Complex& Complex::operator *=(const Complex& r)
{
	re = re*r.re - im*r.im;
	im = re* r.im +im * r.re;
	return *this;
}

Complex& Complex::operator /=(const Complex& r)
{
	re = (re * r.re - im * r.im) / (r.re * r.re + r.im * r.im);
	im = (-re*r.im+im*r.re)/ (r.re * r.re + r.im * r.im);
	return *this;
}