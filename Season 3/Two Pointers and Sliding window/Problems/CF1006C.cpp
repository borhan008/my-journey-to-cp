#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, i, s, e, sum1 = 0, sum3 = 0, maxS = 0;
    cin >> t;
    long long int ar[t + 2] = {0};
    for (i = 1; i <= t; i++)
        cin >> ar[i];
    s = 1;
    e = t;
    while (s <= e)
    {
        if (sum1 < sum3)
        {
            sum1 += ar[s];
            s++;
        }
        else
        {
            sum3 += ar[e];
            e--;
        }
        if (sum1 == sum3)
        {
            maxS = sum1;
        }
    }
    cout << maxS;
}