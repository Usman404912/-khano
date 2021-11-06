#include <iostream>
#include <math.h>
using namespace std;

double func(double x)
{
	double y;
	y = x * x * x - x - 4;
	return y;

}
int main()
{
	double x, xl = 0, xr = 0, xm = 0;
	do
	{
		cout << "enter value" << endl;

		cin >> x;
		if (func(x) > 0)
		{
			xr = x;
			cout << "xR value :" << xr << endl;
		}
		if (func(x) < 0)
		{
			xl = x;
			cout << "xL value:" << xl << endl;
		}
	} while (func(xl) > 0 || func(xr) < 0);
	cout << "f(xl);" << func(xl);
	cout << "f(xr);" << func(xr);
	do
	{
		xm = (xl + xr) / 2;
		cout << "mid point" << xm <<endl;
		if (func(xm) * func(xl) > 0)
		{
			xl = xm;
			cout << "xm value in xl = " << func(xm) * func(xl) << endl;
		}
		if (func(xm) * func(xl) < 0)
		{
			xr = xm;
			cout << "xm value in xr = "  << func(xm) * func(xl) << endl;
		}
		cout << "value of xl=" << xl << endl;
		cout << "value of xr=" << xr << endl;

	} while (xr - xl >= 0.0001);
	cout << "difference between xr and xl = " << xr - xl << endl;
	cout << "xr =" << xr << endl;
	cout << "xl =" << xl << endl;
	cout << "answer " << xr - xl << endl;
	system("pause");
}