#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int main()
{
    string s;
    cin >> s;
    vector<int> cur(s.length() + 1, 0);
    vector<int> next(s.length() + 1, 0);
    for (int ind = s.length() - 1; ind >= 0; ind--)
    {
        for (int prevInd = ind - 1; prevInd >= -1; prevInd--)
        {
            int ans = next[prevInd + 1];
            if ((s[ind] > s[prevInd]) || prevInd == -1)
                ans = max(ans, 1 + next[ind + 1]);
            cur[prevInd + 1] = ans;
        }
        next = cur;
    }

    cout << cur[-1 + 1];
}