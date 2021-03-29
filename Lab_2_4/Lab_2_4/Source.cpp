#include <iostream>
#include "Vector.h"

using namespace std;
int main()
{
	//Vector a; 
	Vector b(3); 
	cin >> b; 
	cout << b[2] << endl; 
	
	cout << "b:" << endl << b; 
	Vector c = b; 
	cout << "c:" << endl << c << endl;
	int k = 0;
	cout << "Input number = ";
	cin >> k;
	cout << Mult(c, k)<<endl;
	cout << "Normal = " << c.Norm(c);
	cout << endl << "Equals:"<<endl;
	Vector l(3), r(3);
	cin >> l;
	cin >> r;
	cout << endl;
	if ((l == r) == 1) cout << "vector1 == vector2" << endl;
	if ((l != r) == 1) cout << "vector1 != vector2" << endl;
	if ((l >= r) == 1) cout << "vector1 >= vector2" << endl;
	if ((l <= r) == 1) cout << "vector1 <= vector2" << endl;
	if ((l > r) == 1)  cout << "vector1 >  vector2" << endl;
	if ((l < r) == 1)  cout << "vector1 <  vector2" << endl;
	return 0;
}