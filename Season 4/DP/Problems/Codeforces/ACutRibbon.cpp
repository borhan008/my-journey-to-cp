#include <bits/stdc++.h>
using namespace std;
int n;
int a[3];
int dp[4005];
int func(int length)
{
    if (length < 0)
        return -1e9;
    if (length == 0)
    {
        return 0;
    }

    if (dp[length] != -1)
        return dp[length];
    int ans = 1 + func(length - a[0]);
    ans = max(ans, 1 + func(length - a[1]));
    ans = max(ans, 1 + func(length - a[2]));

    return dp[length] = ans;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    cin >> n >> a[0] >> a[1] >> a[2];
    cout << func(n);
}