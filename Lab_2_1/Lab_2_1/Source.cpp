#include <iostream>
#include "Pay.h"
using namespace std;
int main() {
	Pay a(4500, 9);

	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	cout << a-- << endl;
	cout << a << endl;
	cout << --a << endl;
	cout << a << endl;
	Pay b(3400, 10);
	Pay g;
	g = b;
	cout << g<<endl;
	Pay x;
	cout << "Input: " << endl;
	cin >> x;
	double s = 0;
	int k;
	cout << "Input k: ";
	cin >> k;
	s = x.summa(k);
	cout << "Result: " << s<< endl;

	cin.get();
	return 0;
}