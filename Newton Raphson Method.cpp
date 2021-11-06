
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


double f(double x)
{
    return  pow(x,2) + (9 * x) + 1;
}
double deriv(double x)
{
    return   2 * x + 9;
}

int main()
{
    double x, y;
    int i = 0;
    cout << "Enter Number ";
    cin >> x;
    cout << fixed << setprecision(10);
    do
    {
        i++;
        y = x - (f(x) / deriv(x));
        if (f(y) == 0)
        {
            break;
        }
        cout << "x[" << i << "]   =" << y << endl;
        x = y;
        cout << endl;
    } while (fabs(f(y)) >= 0.0000000001 || i <= 30);
    system("pause");
}
