#include <bits/stdc++.h>
using namespace std;

string s;
int dp[1005][1005];
int func(int ind, int prev)
{
    if (ind >= s.length())
        return 0;
    if (dp[ind][prev + 1] != -1)
        return dp[ind][prev + 1];
    int ans = func(ind + 1, prev);
    if ((s[ind] > s[prev]) || prev == -1)
        ans = max(ans, 1 + func(ind + 1, ind));
    return dp[ind][prev + 1] = ans;
}

int main()
{
    cin >> s;
    memset(dp, -1, sizeof(dp));
    cout << func(0, -1);
}