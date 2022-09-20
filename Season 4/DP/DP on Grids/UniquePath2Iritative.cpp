#include <bits/stdc++.h>
using namespace std;

int main()
{

    int m, n;
    long long int mod = 2 * 1000000000;
    cin >> m >> n;

    int arr[m + 5][n + 5];
    int dp[m + 5][n + 5];
    dp[0][0] = 1;
    int left, right;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == 0 && j == 0 && arr[i][j] == 0)
                dp[i][j] = 1;
            else
            {

                left = right = 0;
                if (arr[i][j] == 0)
                {
                    if (i > 0)
                        left = dp[i - 1][j] % mod;
                    if (j > 0)
                        right = dp[i][j - 1] % mod;
                    dp[i][j] = (left + right) % mod;
                }

                else
                    dp[i][j] = 0;
            }
        }
    }
    cout << dp[m - 1][n - 1];
}