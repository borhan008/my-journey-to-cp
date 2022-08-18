#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve(long long int x, long long int y)
{
    long long int gcdxy = gcd(x, y);
    y /= gcdxy;
    long long int ans = y;
    for (long long int i = 2; i * i <= y; i++)
    {
        if (y % i == 0)
            ans -= (ans / i);
        while (y % i == 0)
            y /= i;
    }
    if (y > 1)
        ans -= (ans / y);

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    long long int x, y;
    while (t--)
    {
        cin >> x >> y;
        solve(x, y);
    }
}