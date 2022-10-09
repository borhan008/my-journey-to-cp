#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        int zero = count(s.begin(), s.end(), '0');
        int one = count(s.begin(), s.end(), '1');
        if (s.length() < 3)
        {
            cout << 0 << endl;
            continue;
        }
        if (zero != one)
        {
            cout << min(zero, one) << endl;
            continue;
        }
        cout << min(one, zero) - 1 << endl;
    }
}