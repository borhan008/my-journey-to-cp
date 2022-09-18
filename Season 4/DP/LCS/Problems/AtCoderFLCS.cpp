#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int dp[3000 + 10][3000 + 10];

int func(int i, int j)
{
    if (i < 0 || j < 0)
        return 0;
    if (dp[i + 1][j + 1] != -1)
        return dp[i + 1][j + 1];

    int ans = func(i, j - 1);
    ans = max(ans, func(i - 1, j));
    ans = max(ans, func(i - 1, j - 1) + (s1[i] == s2[j]));
    return dp[i + 1][j + 1] = ans;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    cin >> s1 >> s2;
    int length = func(s1.length() - 1, s2.length() - 1);
    string ans = "";
    for (int i = 0; i < length; i++)
    {
        ans += "$";
    }
    int i = s1.length();
    int j = s2.length();
    int index = length - 1;
    while (i != 0 && j != 0)
    {

        if (s1[i - 1] == s2[j - 1])
        {
            ans[index] = s1[i - 1];
            index--;
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }

    cout << ans;
}