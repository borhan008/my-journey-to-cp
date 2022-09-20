#include <bits/stdc++.h>
using namespace std;
int m, n;
int dp[1005][1005];
int main()
{
    cin >> m >> n;
    dp[0][0] = 1;
    int up = 0, right = 0;
    vector<int> prev(n, 0);
    for (int i = 0; i < m; i++)
    {
        vector<int> cur(n, 0);

        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
                cur[j] = 1;
            else
            {
                up = 0, right = 0;
                if (j > 0)
                    up = cur[j - 1];
                if (i > 0)
                    right = prev[j];
                cur[j] = up + right;
            }
        }
        prev = cur;
    }
    cout << prev[n - 1];
}