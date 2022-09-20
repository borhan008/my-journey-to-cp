#include <bits/stdc++.h>
using namespace std;
int arr[1005][1005];
int dp[1005][1005];
int m, n;

int func(int i, int j)
{
    if (arr[i][j] != 0)
        return 0;
    if (i == 0 && j == 0)
        return 1;
    if (i < 0 || j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];

    int up = func(i - 1, j);
    int right = func(j, i - 1);

    return dp[i][j] = up + right;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    cin >> m >> n;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    cout << func(m - 1, n - 1);
}