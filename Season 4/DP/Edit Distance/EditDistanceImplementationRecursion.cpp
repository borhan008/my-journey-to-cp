#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int dp[1000][1000];
int editDistanceCount(int i, int j)
{
    if (i > 0 && j < 0)
        return (i + 1);
    if (i < 0 && j > 0)
        return (j + 1);
    if (i < 0 && j < 0)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];
    int ans = INT_MAX;
    if (s1[i] == s2[j])
    {
        ans = min(ans, editDistanceCount(i - 1, j - 1));
    }
    else
    {
        ans = min(ans, editDistanceCount(i - 1, j) + 1);
        ans = min(ans, editDistanceCount(i, j - 1) + 1);
        ans = min(ans, editDistanceCount(i - 1, j - 1) + 1);
    }

    return dp[i][j] = ans;
}

int main()
{
    memset(dp, -1, sizeof(dp));

    cin >> s1 >> s2;
    cout << editDistanceCount(s1.length() - 1, s2.length() - 1);
}