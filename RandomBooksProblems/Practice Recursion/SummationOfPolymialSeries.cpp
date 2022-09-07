#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
Write a recursive solution to evaluate the previous polynomial for any given x and n.
Like, when x=2 and n=5, we have 1 + x + x
2 + ................. + x
n-1 = 31
*/
ll powFunc(ll x, ll p)
{
    if (p == 1)
        return x;
    ll mul = powFunc(x, p / 2);
    if (p % 2 == 0)
        mul *= mul;
    else
        mul *= mul * x;

    return mul;
}
ll sumOfPolynomialFunction(ll x, ll t)
{
    if (t == 1)
    {
        return 1;
    }
    return powFunc(x, --t) + sumOfPolynomialFunction(x, t);
}
int main()
{
    ll x, t;
    cin >> x >> t;
    cout << sumOfPolynomialFunction(x, t);
}
