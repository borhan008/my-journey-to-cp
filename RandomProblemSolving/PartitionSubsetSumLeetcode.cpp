#include <bits/stdc++.h>
using namespace std;
int dp[20005][20005];

bool func(int sum1, int sum2, int n, vector<int> x, int i)
{
    if (sum1 == sum2 && sum1 != 0 && sum2 != 0 && i == n)
        return true;
    if (dp[sum1][sum2] != -1)
        return dp[sum1][sum2];
    if (i >= n)
        return false;
    bool ans1 = func(sum1 + x[i], sum2, n, x, i + 1);
    bool ans2 = func(sum1, sum2 + x[i], n, x, i + 1);
    return dp[sum1][sum2] = ans1 || ans2;
}

int main()
{
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    vector<int> x;
    int y;

    for (int i = 0; i < n; i++)
    {
        cin >> y;
        x.push_back(y);
    }
    cout << func(0, 0, n, x, 0);
}