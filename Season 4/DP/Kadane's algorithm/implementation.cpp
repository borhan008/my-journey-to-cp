#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[(int)1e6];
int n;

ll solve()
{
    ll localmax = 0;
    ll globalMax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        localmax += arr[i];
        globalMax = max(localmax, globalMax);
        localmax = max(localmax, 0LL);
    }

    return globalMax;
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << solve();
}