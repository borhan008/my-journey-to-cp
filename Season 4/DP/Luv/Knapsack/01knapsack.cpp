#include <bits/stdc++.h>
using namespace std;
int n, m;
long long wt[106];
long long pr[106];
long long dp[105][100005];
long long func(int pos, long long sum)
{

    if (sum == 0)
        return 0;

    if (pos < 0)
        return 0;

    if (dp[pos][sum] != -1)
        return dp[pos][sum];

    long long ans = func(pos - 1, sum);
    if (sum - wt[pos] >= 0)
        ans = max(ans, func(pos - 1, sum - wt[pos]) + pr[pos]);
    return dp[pos][sum] = ans;
}

int main()
{
    cin >> n >> m;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++)
        cin >> wt[i] >> pr[i];

    cout << func(n - 1, m);
}