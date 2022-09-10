#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = (int)1e9 + 7;
int dp[(int)1e6 + 5];
int main()
{
    int n, x, y;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    dp[0] = 1;
    for (auto z : arr)
    {
        for (int i = z; i <= x; i++)
        {
            dp[i] = (dp[i] + dp[i - z]) % mod;
        }
    }

    cout << dp[x];
}