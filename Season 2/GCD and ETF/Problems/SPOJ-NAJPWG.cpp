#include <bits/stdc++.h>
using namespace std;

int arr[1000005];

void solve()
{
    int count = 0, ans, f;

    for (int i = 1; i <= 100004; i++)
    {
        ans = i;
        f = i;
        for (int j = 2; j * j <= f; j++)
        {
            if (f % j == 0)
                ans -= (ans / j);
            while (f % j == 0)
                f /= j;
        }
        if (f > 1)
            ans -= (ans / f);

        count += (i - ans);
        arr[i] = count;
    }
}

int main()
{

    int t;
    int x, y;
    cin >> t;
    int n = 0;
    solve();
    while (t--)
    {
        n++;
        cin >> y;
        cout << "Case " << n << ": " << arr[n] << endl;
    }
}