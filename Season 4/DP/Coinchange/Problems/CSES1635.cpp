#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll md = 1000000007;
int dp[1000005];
int main()
{
    int n, a, y;
    cin >> n >> a;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        arr.push_back(y);
    }
    dp[0] = 1;
    for (int i = 1; i <= a; i++)
    {
        dp[i] = 0;
        for (auto x : arr)
        {
            if (i - x >= 0)
                dp[i] = (dp[i] + dp[i - x]) % md;
        }
    }
    cout << dp[a];
}