#include <bits/stdc++.h>
using namespace std;
int arr[(int)1e5 + 5];
int dp[(int)1e5 + 5];
int func(int n, int k)
{
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int cost = INT_MAX;
    for (int j = 1; j <= k; j++)
    {
        if (n - j >= 0)
            cost = min(cost, func(n - j, k) + abs(arr[n] - arr[n - j]));
    }

    /*
        Frog 1
     cost = min(cost, func(n - 1) + abs(arr[n] - arr[n - 1]));
     if (n > 1)
         cost = min(cost, func(n - 2) + abs(arr[n] - arr[n - 2]));*/
    return dp[n] = cost;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << func(n - 1, k);
}