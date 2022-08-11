#include <bits/stdc++.h>
using namespace std;

long long int biExp(long long int x, long long int y, long long int m)
{
    long long int mul = 1;
    while (y > 0)
    {
        if (y & 1)
            mul = ((mul % m) * (x % m)) % m;
        x = ((x % m) * (x % m)) % m;
        y >>= 1;
    }
    return mul;
}

int main()
{
    long long int x, y, m;
    cin >> x >> y >> m;
    cout << biExp(x, y, m);
}