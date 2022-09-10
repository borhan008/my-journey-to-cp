#include <bits/stdc++.h>
using namespace std;
int n, m, arr[(int)1e5 + 5];
int generator(int amount, int ind)
{
    if (amount == 0)
        return 1;
    if (ind < 0)
        return 0;

    if (amount < 0)
        return 0;

    return generator(amount - arr[ind], ind) + generator(amount, ind - 1);
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << generator(m, n - 1);
}