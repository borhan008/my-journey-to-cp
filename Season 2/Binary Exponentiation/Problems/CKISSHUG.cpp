/*
Solution : right but TLE
*/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long int biPow(long long int a)
{
    if (a == 0)
        return 1;
    if (a == 1)
        return 2;
    long long int mul = 1;
    mul = biPow(a / 2);
    if (a & 1)
        return (2 * (mul % mod) * (mul % mod)) % mod;
    else
        return ((mul % mod) * (mul % mod)) % mod;
}

long long int baad(long long int a)
{
    long long int x = 1;
    long long int ans = 4;
    while (x <= a - 2)
    {
        ans = (ans % mod + biPow(ceil((a - x) % 2 == 0 ? ((a - x) / 2) : ((a - x) / 2 + 1))) % mod) % mod;
        x++;
    }

    return ans;
}

int main()
{
    int t;
    long long int ans, i;
    cin >> t;
    while (t--)
    {
        cin >> i;
        if (i == 1)
            ans = 2;
        else if (i == 2)
            ans = 4;
        else
        {
            ans = baad(i);
        }
        cout << ans << endl;
    }
}