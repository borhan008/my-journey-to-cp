#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int dp[1005][1005];
int lcs(int i, int j)
{
    if (i < 0 || j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int ans = lcs(i - 1, j);
    ans = max(ans, lcs(i, j - 1));
    ans = max(ans, lcs(i - 1, j - 1) + (s1[i] == s2[j]));

    return dp[i][j] = ans;
}

int main()
{
    cin >> s1 >> s2;
    dp[0][0] = 0;
    for (int i = 1; i <= s1.length(); i++)
        for (int j = 1; j <= s2.length(); j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

    cout << dp[s1.length()][s2.length()];
}