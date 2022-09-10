#include <bits/stdc++.h>
using namespace std;
long long int mod = (int)1e9 + 7;
long long int n;
long long int arr[(int)1e6 + 5];
long long int generate(long long int amount)
{
    if (arr[amount] != -1)
    {
        return arr[amount] % mod;
    }
    if (amount == 0)
        return 1;

    if (amount < 0)
        return 0;
    int ans = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (i <= amount)
            ans = ans % mod + generate(amount - i) % mod;
    }
    return arr[amount] = ans % mod;
}

main()
{
    cin >> n;
    memset(arr, -1, sizeof(arr));

    cout << generate(n);
}