#include <bits/stdc++.h>
using namespace std;

double f(double b, double c, double x)
{
    return (x * x + b * x + c) / sin(x);
}

void solve(double b, double c)
{
    double l = 0.1;
    double r = M_PI_2;
    double mid1;
    double mid2;
    while (r - l > 1e-6)
    {
        mid1 = (2 * l + r) / 3;
        mid2 = (2 * r + l) / 3;

        //  cout << mid1 << " " << mid2 << endl;
        if (f(b, c, mid1) > f(b, c, mid2))
        {
            l = mid1;
        }
        else if (f(b, c, mid2) > f(b, c, mid1))
            r = mid2;

        else
        {
            l = mid1;
            r = mid2;
        }
    }
    cout << fixed << setprecision(10) << f(b, c, l) << endl;
}

int main()
{
    double t, b, c;
    cin >> t;
    while (t--)
    {
        cin >> b >> c;
        solve(b, c);
    }
}