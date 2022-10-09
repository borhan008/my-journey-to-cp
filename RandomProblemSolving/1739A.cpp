#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int flag = 0;
        int ansi, ansj;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if ((i - 1 <= 1) && (i + 1 >= n) && (j - 1 <= 1) && (j + 1 >= m))
                {

                    flag = -1;
                    ansi = i;
                    ansj = j;
                    break;
                }
            }
            if (flag == -1)
                break;
        }

        if (flag == -1)
            cout << ansi << " " << ansj << endl;
        else
            cout << n << " " << m << endl;
    }
}