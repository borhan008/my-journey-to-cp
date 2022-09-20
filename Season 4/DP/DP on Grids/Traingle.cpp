#include <bits/stdc++.h>
using namespace std;
int m;
int arr[300][300];
int dp[300][300];
int func(int i, int j)
{
    if (i >= m || j >= m)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int ans = arr[i][j] + func(i + 1, j);
    ans = min(ans, arr[i][j] + func(i + 1, j + 1));
    return dp[i][j] = ans;
}

int main()
{
    memset(dp, -1, sizeof(dp));

    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> arr[i - 1][j - 1];
        }
    }

    cout << func(0, 0);
}