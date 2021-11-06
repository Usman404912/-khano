#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double func(double x)
{
	return (3*x*x) + (2*x)-1;
}
int main()
{
	double x, xl = 0, xr = 0, xc = 0;
	cout << "enter values" << endl;

	do
	{
		cin >> x;
		if (func(x) < 0)
		{
			xl = x;
			cout << " xl value :" << xl << endl;
		}
		else
		{
			xr = x;
			cout << "xr value:" << xr << endl;
		}
	} while (func(xl) > 0 || func(xr) < 0);
	cout << fixed << setprecision(7);
	cout << "f(xl)= "  << xl << " " << func(xl)<<endl;
	cout << "f(xr)= "  << xr << " " << func(xr) <<endl;
	int increment = 0;
	cout << setw(10) << "xc" << setw(10) << "f(xc)" << setw(10) << "func(xc) * func(xl)" << setw(10) << "" << setw(10) << "new xr";
	do
	{
		xc = xr - ((func(xr) * (xr - xl)) / (func(xr) - func(xl)));
		if (fabs(func(xc)) == 0)
		{
			break;
		}
		cout << endl;
		cout  << increment << setw(10) << xc << setw(10) << func(xc)<<endl;
		cout << setw(10) << func(xc) * func(xl)<<endl;
		if (func(xc) < 0)
		{
			xl = xc;
		}
		else
		{
			xr = xc;
		}
		cout << setw(10) << xl <<endl;
		cout << setw(10) << xr <<endl;
		increment++;

	} while (xr - xl >= 0.00001 && increment <= 15);
	cout << endl;
	system("pause");

}
