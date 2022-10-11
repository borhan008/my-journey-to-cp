#include <bits/stdc++.h>
using namespace std;
vector<int> d(105, 0);
vector<int> a(105, 0);
int main()
{
    int t, n;
    cin >> t;
    int x;
    while (t--)
    {

        cin >> n;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {

            cin >> x;
            d[i] = x;
            a[i] = (i == 0 ? d[0] : d[i] + a[i - 1]);
            if (i > 0 && a[i - 1] + d[i] 
            != a[i - 1] - d[i] && a[i - 1] - d[i] >= 0)
            {
                cnt = 1;
            }
        }
        if (cnt == 1)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }
}