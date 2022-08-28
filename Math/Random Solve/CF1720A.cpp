#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long int a, b, c, d, x, y;
    cin >> t;
    while ((t--))
    {
        cin >> a >> b >> c >> d;
        x = a * d;
        y = b * c;
        if (x == y)
            cout << 0 << endl;
        else if (x == 0 || y == 0)
            cout << 1 << endl;
        else if (x % y == 0 || y % x == 0)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}