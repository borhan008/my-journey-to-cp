#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    string s1, s2;
    while (t--)
    {
        cin >> n;
        cin >> s1;
        cin >> s2;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'G')
                s1[i] = 'B';

            if (s2[i] == 'G')
                s2[i] = 'B';
        }
        if (s1 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}