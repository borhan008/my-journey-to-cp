#include <bits/stdc++.h>
using namespace std;
int n, k, x;
int wt[(int)1e5 + 5];
int pr[(int)1e5 + 5];

int func(int pos, int sum, int range)
{
    if (pos < 0)
        return 0;
    if (sum == 0)

        return 0;
    if (range > k)
        return 0;
    int ans = func(pos - 1, sum, range);
    if (sum - wt[pos] >= 0)
        ans = max(ans, func(pos, sum - wt[pos], range + 1) + pr[pos]);

    return ans;
}

int main()
{
    cin >> n >> k >> x;
    for (int i = 0; i < n; i++)
        cin >> wt[i] >> pr[i];

    cout << func(n - 1, x, 0);
}
