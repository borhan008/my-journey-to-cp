#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

int main()
{
    int a, b;
    cin >> a >> b;
    int gcdofab = gcd(a, b);
    cout << gcdofab;
}