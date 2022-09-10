#include <bits/stdc++.h>
using namespace std;
int n, m, arr[100 + 5];
int dp[(int)1e6 + 5];
long long int func(int amount)
{
    long long int ans = INT_MAX;
    if (dp[amount])
        return dp[amount];

    if (amount == 0)
        return 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= amount)
            ans = min(ans, func(amount - arr[i]) + 1LL);
    }

    return dp[amount] = ans;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << (func(m) == INT_MAX ? -1 : func(m));
}