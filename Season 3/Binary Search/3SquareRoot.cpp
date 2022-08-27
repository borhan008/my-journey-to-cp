#include <bits/stdc++.h>
using namespace std;
double eps = 1e-6;
int main()
{
    double x;
    cin >> x;
    double lo = 1, hi = x, mid;
    while (hi - lo > eps)
    {
        mid = lo + (hi - lo) / 2;
        if (mid * mid > x)
        {
            hi = mid;
        }
        else
        {
            lo = mid;
        }
    }

    cout << lo;
}