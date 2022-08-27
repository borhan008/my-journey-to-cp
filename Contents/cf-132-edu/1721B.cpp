#include <bits/stdc++.h>
using namespace std;
/* couldn't solve this in contest time */
int main()
{
    int t, a, b, c, e;
    cin >> t;
    int n, m, x, y, d;
    while (t--)
    {
        cin >> n >> m >> x >> y >> d;
        a = b = 1;
        c = e = 1;
        for (int i = 1; i <= m; i++)
        {
            if (((abs(1 - x) + abs(i - y)) <= d))
            {
                a = 0;
            }
            if (((abs(n - x) + abs(i - y)) <= d))
            {
                b = 0;
            }
            if (a == 0 && b == 0)
            {
                cout << -1 << endl;

                break;
            }
        }
        if (a == 1 || b == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                if (((abs(i - x) + abs(1 - y)) <= d))
                {
                    c = 0;
                }
                if (((abs(i - x) + abs(m - y)) <= d))
                {
                    e = 0;
                }
                if (c == 0 && d == 0)
                    break;
            }
            if ((c == 0 && e == 0) || (a == 0 && c == 0) || (b == 0 && e == 0))
            {
                cout << -1 << endl;
            }
            else
            {
                cout << n + m - 2 << endl;
            }
        }
    }
}