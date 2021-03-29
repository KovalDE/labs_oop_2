#include "Vector.h"
#include <cmath>

Vector::Vector(int n = 1) 
	: size(n)
{
	m = new int[size];
	for (int i = 0; i < size; i++)
		m[i] = 0;
}

Vector::Vector(const Vector& a)
	: size(a.size)
{
	m = new int[size];
	for (int i = 0; i < size; i++)
		m[i] = a.m[i];
}

Vector::~Vector()
{
	delete[] m;
}

Vector& Vector::operator = (const Vector& a)
{
	if (&a == this) return *this; 
	size = a.size;
	delete[] m;
	m = new int[size];
	for (int i = 0; i < size; i++)
		m[i] = a.m[i];
	return *this;
}
ostream& operator << (ostream& out, const Vector& a)
{
	for (int i = 0; i < a.size; i++)
		out << "array[ " << i << " ] = " << a[i] << endl;
	out << endl;
	return out;
}
istream& operator >> (istream& in, Vector& a)
{
	for (int i = 0; i < a.size; i++)
	{
		cout << "vector[ " << i << " ] = ? "; in >> a[i];
	}
	cout << endl;
	return in;
};

Vector Mult(Vector& a, int b)
{
	for (int i = 0; i < a.GetSize(); i++)
		a[i] *=b;
	return a;
}

bool operator == (const Vector& x, const Vector& y)
{
	if (x.size != y.size)
	return false;
	for (int i = 0; i < x.size; i++)
	{
		if (x.m[i] != y.m[i])return false;
	}
	 return true;
}

bool operator != (const Vector& x, const Vector& y)
{
	return !(x == y);
}

bool operator >= (const Vector& x, const Vector& y)
{
	if (x.size != y.size)
		return false;
	for (int i = 0; i < x.size; i++)
	{
		if (!(x.m[i] >= y.m[i])) return false;
	}
	return true;
}

bool operator <= (const Vector& x, const Vector& y)
{
	if (x.size != y.size)
		return false;
	for (int i = 0; i < x.size; i++)
	{
		if (!(x.m[i] <= y.m[i])) return false;
	}
	return true;
}

bool operator > (const Vector& x, const Vector& y)
{
	if (x.size != y.size)
		return false;
	for (int i = 0; i < x.size; i++)
	{
		if (x.m[i] < y.m[i])return false;
	}
	return true;

}

bool operator < (const Vector& x, const Vector& y)
{
	if (x.size != y.size)
		return false;
	for (int i = 0; i < x.size; i++)
	{
		if (x.m[i] > y.m[i])return false;
	}
	return true;
}
int Vector::Norm(Vector& a)
{
	int max = a.m[0];
	int min = a.m[0];
	for (int i = 0; i < a.size; i++)
	{
		if (a.m[i] > max)max = a.m[i];
		if (a.m[i] < min)min = a.m[i];
		
	}
	return abs(max - min);
}