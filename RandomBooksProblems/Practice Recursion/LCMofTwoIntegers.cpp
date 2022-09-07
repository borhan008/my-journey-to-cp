#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*Write a recursive solution to compute lcm of two integers. You must not use the formula lcm(a,b)
= (a x b) / gcd(a,b); find lcm from scratch...*/

ll findLCM(ll n1, ll n2, ll x = 1, ll y = 1, ll lcm = 1)
{
    return (n1 * x == n2 * y) ? (n1 == n2 ? n1 : lcm) : (n1 * x < n2 * y ? findLCM(n1, n2, x + 1, y, (n1 * (x + 1) == n2 * y ? n2 * y : lcm)) : findLCM(n1, n2, x, (y + 1), (n1 * x == n2 * (y + 1) ? n2 * (y + 1) : lcm)));
}

int main()
{
    ll x;
    printf("%lld", findLCM(1, 5));
}