#include <bits/stdc++.h>
using namespace std;
int arr[(int)1e5 + 2];
int main()
{
    int t, i, s, e, alice = 0, bob = 0, aliceTime = 0, bobsTime = 0;
    cin >> t;
    for (i = 1; i <= t; i++)
        cin >> arr[i];

    if (t == 1)
    {
        cout << 1 << " " << 0;
        return 0;
    }
    s = 2;
    e = t - 1;
    alice = 1;
    bob = 1;
    aliceTime = arr[1];
    bobsTime = arr[t];

    while (s <= e)
    {
        if (aliceTime < bobsTime)
        {
            alice++;
            aliceTime += arr[s];
            s++;
        }
        else if (aliceTime > bobsTime)
        {
            bob++;
            bobsTime += arr[e];
            e--;
        }
        else
        {
            alice++;
            aliceTime += arr[s];
            s++;
        }
    }
    cout << alice << " " << bob;
}
