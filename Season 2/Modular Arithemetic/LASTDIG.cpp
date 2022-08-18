#include <bits/stdc++.h>
using namespace std;
#define mod 10
int binaryPow(long long int x, long long int y)
{
    if (y == 0)
        return 1;
    if (y == 1)
        return x;
    int mul = binaryPow(x, y / 2);
    if (y % 2)
        return (x * mul % mod * mul % mod) % mod;
    else
        return (mul % mod * mul % mod) % mod;
}

int main()
{
    int a;
    long long int x, y;

    cin >> a;
    while (a--)
    {
        cin >> x >> y;
        cout << binaryPow(x % 10, y) << endl;
    }
}