#include<iostream>
#include<string.h>
#include<conio.h>
#include<math.h>
using namespace std;
double f(double x)
{
	return  (x + 1 / x);
}
int main()
{
	double a, b, n, w, i;
	double Area = 0;
	double x = 2.5;
	double x1 = 2.6944;
	double x2 = 2.900;
	double x3 = 3.1136;
	double x4 = 3.333;
	cout << "f(x) = " << x << endl;
	cout << " f(x1) =" << x1 << endl;
	cout << " f(x2) =" << x2 << endl;
	cout << "f(x3)=" << x3 << endl;
	cout << "f(x4)=" << x4 << endl;
	cout << "Enter value of a" << endl;
	cin >> a;
	cout << "Enter value of b" << endl;
	cin >> b;
	cout << "Enter value of n" << endl;
	cin >> n;
	w = (b - a) / n;
	x = a;
	for (i = 1; i <= n; i++)
	{
		x1 = x + w;
		x2 = x1 + w;
		x3 = x2 + w;
		x4 = x3 + w;
		Area = 3*w / 8 * ((2.5) + (3 * ((2.6944) + (3.1136)) + 3 * (2.900) + (3.333)));
		x = x1;
	}
	cout << "Area of Simpson 3/8 is " << Area << endl;
	system("pause");
}