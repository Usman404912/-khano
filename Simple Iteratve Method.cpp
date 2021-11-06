#include<iostream>
#include <iomanip>
#include<conio.h>
#include<math.h>

using namespace std;
double g(double x)               // actual funtion for root
{
	return cos(2*x)- sin(x);       // equation
}

int main()
{
	double x, y, Root;
	cout << "enter initial guess" << endl;
	cin >> x;
	int i = 1;
	do
	{
		y = g(x);
		cout << fixed << setprecision(5
		);
		cout << setw(10) << "x " << i << "   =" << y << endl;
		Root = y - x;
		x = y;
		i++;
	} while (Root >= 0.00001 || i <= 20); // define the limit or maximum no of iterations
	system("pause");

}