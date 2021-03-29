#include <iostream>
#include <string>
#include "Real.h"

using namespace std;

int main()
{
	Real s(5);
	int n;
	cout << "N: "; cin >> n;
	cout << "SQRT : ";
	cout<<s.Sqrt(n);
	cout << endl;
	cout << "Pi in power of number : ";
	cout<<Real::PiPower(n);
	cout << endl;
	cout << endl;
	Number l, r;
	cin >> l;
	cin >> r;
	cout << endl;
	Number res;
	res =l - r;
	cout << "Result of multiplier   = " << res.getDouble() << endl;
	res = l*r;
	cout << "Result of substraction = " << res.getDouble();
	return 0;
}