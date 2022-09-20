#include <bits/stdc++.h>
using namespace std;
int m;
int arr[105][105];
int dp[105][105];

int func(int i, int j)
{
    if (i < 0 || j < 0 || j >= m || i >= m)
        return 1e9;
    if (i == 0)
        return arr[i][j];
    if (dp[i][j] != -1)
        return dp[i][j];
    int ans = arr[i][j] + func(i - 1, j);

    ans = min(ans, arr[i][j] + func(i + 1, j + 1));

    ans = min(arr[i][j] + func(i - 1, j + 1), ans);

    return dp[i][j] = ans;
}

int main()
{
    cin >> m;
    memset(dp, -1, sizeof(dp));
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i - 1][j - 1];
        }
    }
    int ans = 1e7;
    for (int i = 0; i < m; i++)
    {
        ans = min(ans, func(m - 1, i));
    }
    cout << ans;
}