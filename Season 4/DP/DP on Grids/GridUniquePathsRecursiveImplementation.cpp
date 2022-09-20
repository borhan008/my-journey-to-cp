#include <bits/stdc++.h>
using namespace std;
int m, n;
int dp[1005][1005];

int func(int i, int j)
{
    if (i == 0 && j == 0)
        return 1;
    if (i < 0 || j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];

    int up = func(i, j - 1);
    int right = func(i - 1, j);

    return up + right;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    cin >> m >> n;
    cout << func(m - 1, n - 1);
}