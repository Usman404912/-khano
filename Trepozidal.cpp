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
	double x ,x1;
	double Total_Area = 0;
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
		Area = w / 2 * (f(x) + f(x1));
		Total_Area = Total_Area + Area;
		x = x1;
	}
	cout << "Area of Trapozidal is " << Total_Area << endl;
	system("pause");
}