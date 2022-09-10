#include <bits/stdc++.h>
using namespace std;
int arr[(int)1e5 + 5];
int n, m;
int dp[(int)20];
int generate(int amount)
{
    if (amount == 0)
        return 0;
    if (dp[amount])
    {
        return dp[amount];
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        printf("%d %d \n", i, amount);
        if (amount - arr[i] >= 0)
            ans = min(ans + 0LL, generate(amount - arr[i]) + 1LL);
    }
    printf("%d : ans : %d \n", ans, amount);

    return dp[amount] = ans;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << (generate(m) == INT_MAX ? -1 : generate(m));
    // for (auto x : dp)
    //  cout << x << endl;
}