// 9. Write a C++ program that reads coefficients of quadratic equations and finds its roots

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, d, x1, x2;
    cout << "Enter the coefficients of the quadratic equation: ";
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (d < 0)
    {
        cout << "The equation has no real roots.";
    }
    else if (d == 0)
    {
        x1 = -b / (2 * a);
        cout << "The equation has one root: " << x1;
    }
    else
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "The equation has two roots: " << x1 << " and " << x2;
    }
    return 0;
}