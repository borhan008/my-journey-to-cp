#include <bits/stdc++.h>
using namespace std;
int arr[(int)1e6][4];
int dp[(int)1e6][4];
int d;

int solve(int n, int flag)
{
    if (n - 1 == d)
        return 0;
    if (dp[n][flag] != -1)
        return dp[n][flag];
    int mx = 0;
    if (flag == 0)
    {
        mx = max(mx, arr[n][1] + solve(n + 1, 1));
        mx = max(mx, arr[n][2] + solve(n + 1, 2));
        mx = max(mx, arr[n][3] + solve(n + 1, 3));
    }
    else if (flag == 1)
    {
        mx = max(mx, arr[n][2] + solve(n + 1, 2));
        mx = max(mx, arr[n][3] + solve(n + 1, 3));
    }
    else if (flag == 2)
    {
        mx = max(mx, arr[n][1] + solve(n + 1, 1));
        mx = max(mx, arr[n][3] + solve(n + 1, 3));
    }
    else
    {
        mx = max(mx, arr[n][1] + solve(n + 1, 1));
        mx = max(mx, arr[n][2] + solve(n + 1, 2));
    }
    return dp[n][flag] = mx;
}

int main()
{

    memset(dp, -1, sizeof(dp));
    cin >> d;
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j < 4; j++)
            cin >> arr[i][j];
    }
    cout << solve(0, 0);
}