#include <bits/stdc++.h>
using namespace std;
int m, n;
int arr[105][105];
int dp[105][105];

int func(int i, int j)
{

    if (i == 0 && j == 0)
        return arr[i][j];
    if (i < 0 || j < 0)
        return 1e9;

    if (dp[i][j] != -1)
        return dp[i][j];
    int sum = arr[i][j] + func(i - 1, j);
    int sum2 =  func(i, j - 1) + arr[i][j];
    return dp[i][j] = min(sum,sum2);
}

int main()
{
    cin >> m >> n;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    cout << func(m - 1, n - 1);
}