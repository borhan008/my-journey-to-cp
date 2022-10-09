#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> x >> y >> s;
        string ans;
        map<char, int> z;
        for (int i = 0; i < s.length(); i++)
        {
            z[s[i]]++;
        }
        for (int i = 1; i <= y; i++)
        {
            int cnt = x / y;
            int m = 1;
            int f = 0;
            char a;
            for (a = 'a'; a <= 'z'; a++)
            {
                if (m > cnt)
                {
                    f = 1;
                    break;
                }
                if (z[a] == 0)
                {
                    ans += a;
                    break;
                }
                z[a]--;
                m++;
            }
            if (f == 1)
                ans += a;
        }
        cout << ans << endl;
    }
}