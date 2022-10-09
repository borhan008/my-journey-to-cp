#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int r, c;
    cin >> t;
    while (t--)
    {
        cin >> r >> c;
        int even_num = (r * c) / 2;
        int odd_num = r * c - even_num;
        int req_even = r * (c / 2);
        int req_odd = r * c - req_even;
        if (even_num != req_even && odd_num != req_odd)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        int start_even = 2, start_odd = 1;
        for (int i = 1; i <= r; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 1; j <= c; j++)
                {
                    cout << start_even << " ";
                    start_even += 2;
                }
            }
            else
            {
                for (int j = 1; j <= c; j++)
                {
                    cout << start_odd << " ";
                    start_odd += 2;
                }
            }
            cout << endl;
        }
    }
}
