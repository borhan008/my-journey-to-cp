#include <bits/stdc++.h>
using namespace std;
int n, x;
int price[1000 + 5];
int page[1000 + 5];
int dp[1002][100002];

int solve(int pos, int pr)
{

    if (pos < 0)
        return 0;
    if (pr == 0)
        return 0;
    if (dp[pos][pr] != -1)
        return dp[pos][pr];
    int ans = solve(pos - 1, pr);
    if (pr - price[pos] >= 0)
        ans = max(ans, solve(pos - 1, pr - price[pos]) + page[pos]);
    return dp[pos][pr] = ans;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        scanf("%d", &price[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &page[i]);

    cout << solve(n - 1, x);
}