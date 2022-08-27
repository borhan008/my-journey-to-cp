#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int start = 0, end = n - 1;
    int ans = 0;
    int ans2 = 0;
    int y = k;
    while (start <= end)
    {
        if (start == (n - 1) && ans == n - 1)
        {
            ans++;
        }
        else if (s[start] == s[start + 1] && k >= 0)
        {
            ans++;
        }

        else if (s[start] != s[start + 1] && y > 0)
        {
            if (start == 0)
            {
                if ((start + 1 == n) || (s[start + 1] == s[start + 2]))
                {
                    s[start] = s[start + 1];
                }
                else
                {
                    s[start + 1] = s[start];
                }
            }
            else
            {
                s[start + 1] = s[start];
            }

            y--;
            ans++;
        }

        start++;
    }
    cout
        << ans << endl;
}