#include <iostream>
#include "Complex.h"
using namespace std;
int main() {
	Complex a(1, 1);
	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	Complex x;
	cout << "Input complex number ->" << endl;
	cin >> x;
	Complex y; 
	cin >> y;
	cout << "x+y = " << x + y << endl;
	cout << "x-y = " << x - y << endl;
	cout << "x*y = " << x * y << endl;
	cout << "x/y = " << x / y << endl;
	Complex b(1, 1);
	x += b;
	cout << "x+=b(1,1)" <<endl<< x<<endl;
	x -= b;
	cout << "x-=b(1,1)" << endl<<x<<endl;
	x *= b;
	cout << "x*=b(1,1)" << endl<<x << endl;
	x /= b;
	cout << "x/=b(1,1)" <<endl<< x << endl;

	cin.get();
	return 0;
}