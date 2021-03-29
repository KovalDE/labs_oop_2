#pragma once
#include <iostream>

using namespace std;

class Vector
{
	int size;
	int* m;
public:
	int GetSize() const { return size; }
	Vector(int n);
	Vector(const Vector& a);
	~Vector();
	Vector& operator = (const Vector& a);
	int& operator [] (const int i)
	{
		return m[i];
	}
	const int& operator [] (const int i) const
	{
		return m[i];
	}
	friend ostream& operator << (ostream& out, const Vector& a);
	friend istream& operator >> (istream& in, Vector& a);

	friend Vector Mult(Vector& a,int b);
	int Norm(Vector& a);

	friend bool operator == (const Vector&, const Vector&);
	friend bool operator != (const Vector&, const Vector&);
	friend bool operator >= (const Vector&, const Vector&);
	friend bool operator <= (const Vector&, const Vector&);
	friend bool operator > (const Vector&, const Vector&);
	friend bool operator < (const Vector&, const Vector&);
};


