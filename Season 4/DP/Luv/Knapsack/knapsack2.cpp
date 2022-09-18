#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll m, n;
ll wt[101];
ll pr[101];
ll dp[101][100006];

ll func(ll pos, ll price)
{
    if (price == 0)
        return 0;
    if (pos < 0)
        return 1e15;

    if (dp[pos][price] != -1)
        return dp[pos][price];
    ll ans = func(pos - 1, price);
    if (price - pr[pos] >= 0)
    {
        ans = min(ans, func(pos - 1, price - pr[pos]) + wt[pos]);
    }
    // cout << pos << " " << price << " " << ans << endl;

    return dp[pos][price] = ans;
}

int main()
{
    memset(dp, -1, sizeof(dp));

    cin >> m >> n;
    for (int i = 0; i < m; i++)
        cin >> wt[i] >> pr[i];
    for (ll i = 1e5; i >= 0; i--)
    {
        if (func(m - 1, i) <= n)
        {
            cout << i;
            break;
        }
    }
}