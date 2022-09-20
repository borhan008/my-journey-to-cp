#include <bits/stdc++.h>
using namespace std;
int n;
int arr[1005];
int dp[1000][1000];
int func(int i, int j)
{
    if (i == j)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int ans = 1e9;
    for (int k = i; k < j; k++)
    {
        int x = arr[i - 1] * arr[k] * arr[j] + func(i, k) + func(k + 1, k);
        ans = min(x, ans);
    }
    return dp[i][j] = ans;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << func(1, n - 1);
}
