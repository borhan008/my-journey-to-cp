#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int hc, hm, dc, dm, k, w, a, x, y;
    while (t--)
    {
        cin >> hc >> dc;
        cin >> hm >> dm;
        cin >> k >> w >> a;
        int flag = -1;
        for (int i = 0; i <= k; i++)
        {
            long long int __hc = hc + (i * a);
            long long int __dc = dc + ((k - i) * w);

            x = (hm + __dc - 1) / __dc;
            y = (__hc + dm - 1) / dm;
            if (x <= y)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}