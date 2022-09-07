#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[(int)1e5];
ll arr[(int)1e5];
void prefixSum(ll arSize)
{
    dp[0] = arr[0];
    for (int i = 1; i < arSize; i++)
        dp[i] = dp[i - 1] + arr[i];
}

int main()
{
    ll arSize;
    ll ans;
    cin >> arSize;
    for (int i = 0; i < arSize; i++)
        cin >> arr[i];
    prefixSum(arSize);
    for (int i = 1; i <= arSize; i++)
    {
        ans = max(dp[i - 1] + arr[i], arr[i]);
        cout << dp[i - 1] + arr[i] << " " << arr[i] << endl;
    }
    cout << ans << endl;
}