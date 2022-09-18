#include <bits/stdc++.h>
using namespace std;
int n;
int arr[(int)1e5];
int dp[(int)1e5];

int rodCutting(int len)
{
    if (len == 0)
        return 0;
    if (dp[len] != -1)
        return dp[len];
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (len - i >= 0)
        {
            ans = max(ans, rodCutting(len - i) + arr[i - 1]);
        }
    }
    return dp[len] = ans;
}

int main()
{
    cin >> n;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << rodCutting(n);
}
