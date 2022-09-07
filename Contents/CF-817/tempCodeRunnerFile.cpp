#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, l, f;
    cin >> t;
    string s;
    int tt, mm, ii, uu, rr, z;

    while (t--)
    {
        cin >> l;
        cin >> s;
        tt = mm = ii = uu = rr = z = 0;
        if (l == 5)
        {

            for (int i = 0; i < l; i++)
            {
                if (s[i] == 'T')
                    tt++;
                else if (s[i] == 'u')
                    uu++;
                else if (s[i] == 'm')
                    mm++;
                else if (s[i] == 'r')
                    rr++;
                else if (s[i] == 'i')
                    ii++;
                else
                {
                    z = 1;
                    break;
                }
            }
            if (z == 0 && tt == 0 && ii == 0 && mm == 0 && rr == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
            cout << "NO" << endl;
    }
}