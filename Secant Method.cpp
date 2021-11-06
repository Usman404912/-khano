
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


double f(double x)
{
    return  pow(x, 2) + (3 * x) + 1;
}
int main()
{
    double x1, x2, x3, y1, y2, y3;
    int i = 1;
    cin >> x1;
    cin >> x2;

    cout << setprecision(7) << fixed;
    do
    {
        y1 = f(x1);
        y2 = f(x2);
        x3 = x2 - (x2 - x1) * y2 / (y2 - y1);
        if (f(x3) == 0)
        {
            break;
        }
        y3 = f(x3);

        cout << "Iteration-" << i << ":\t x" << i << " = " << setw(10) << x3 << " and f(x" << i << ") = " << setw(10) << f(x3) << endl;
        x1 = x2;
        y1 = y2;
        x2 = x3;
        y2 = y3;
        i++;

    } while (fabs(y3) > 0.0000001 || i <= 30);

    system("pause");
}