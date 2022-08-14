#include <bits/stdc++.h>
using namespace std;

int phi(int a)
{
    int res = a;

    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0)
            res -= (res / i);
        while (a % i == 0)
            a /= i;
    }
    if (a > 1)
        res -= (res / a);

    return res;
}
int main()
{
    int a;
    cin >> a;
    cout << phi(a);
}