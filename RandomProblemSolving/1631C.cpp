#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n == 4 && k == 3)
        {
            cout << -1 << endl;
            continue;
        }
        if (k == n - 1)
        {
            cout << n - 1 << " " << n - 2 << endl;
            cout << 1 << " " << 3 << endl;
            int i = 2, j = n - 3;
            while (i < j)
            {
                if (i == 3)
                    cout << j << " " << 0;
                else
                    cout << i << " " << j;
                i++;
                j--;
            }
        }
        else
        {
            int i = 0;
            int j = n - 1;
            while (i < j)

            {
                if (i == 0)
                    cout << k << " " << j << endl;
                else if (i == k)
                    cout << j << " " << 0 << endl;
                else if (j == k)
                    cout << i << " " << 0 << endl;
                else
                    cout << i << " " << j << endl;
                i++;
                j--;
            }
        }
    }
}