#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m + 5][n + 5];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    int dp[m + 5][n + 5];
    int u, l;
    vector<int> prev(n + 2, 0);
    vector<int> cur(n + 2, 0);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == 0 && j == 0)
                cur[j] = arr[i][j];
            else
            {
                u = l = arr[i][j];
                if (i > 0)
                    u += prev[j];
                else
                    u += 1e9;
                if (j > 0)
                    l += cur[j - 1];
                else
                    l += 1e9;
                cur[j] = min(u, l);
            }
            prev = cur;
        }
    }

    cout << prev[n - 1];
}