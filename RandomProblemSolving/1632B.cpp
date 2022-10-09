#include <bits/stdc++.h>
using namespace std;
int arr[(int)1e6];
int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            arr[i] = x;
        }
        int ans = 0;

        int i = n;
        while (i > 1)
        {
            if (arr[i - 1] == arr[n])
            {
                i--;
            }
            else
            {
                ans++;
                i = i - (n - i + 1);
            }
        }
        cout << ans << endl;
    }
}