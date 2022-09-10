#include <bits/stdc++.h>
using namespace std;
int n, arr[(int)1e5 + 5], m;
int dp[(int)100 + 5];
/*
Shawon ruet
*/
int func(int amount)
{
    for (int i = 0; i < n; i++)

    {
        for (int j = arr[i]; j <= amount; j++)
        {

            dp[j] = dp[j] + dp[j - arr[i]];
        }
    }
    return dp[m];
}

int main()
{
    cin >> n >> m;
    dp[0] = 1;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << func(m);
    cout << endl;
}