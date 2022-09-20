#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int dp[100][100];

    for (int i = 1; i < n; i++)
        dp[i][i] == 0;

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = i + 1; j < n; j++)
        {
            int mini = 1e9;

            for (int k = i; k < j; k++)
            {
                int x = arr[i - 1] * arr[k] * arr[j] + dp[i][k] + dp[k + 1][j];
                mini = min(x, mini);
            }
            dp[i][j] = mini;
        }
    }
    cout << dp[1][n - 1];
}