#include <bits/stdc++.h>
using namespace std;
int arr[(int)1e5 + 5];
int n;

int solve(int x)
{
    if (x == n)
        return 0;
    return arr[x] + solve(x + 1);
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << solve(0);
}