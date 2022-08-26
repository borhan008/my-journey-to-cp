#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        int counts = 0, counts2 = 0;
        int minC = 1e6;
        if (s.length() < 3 || s.length() == count(s.begin(), s.end(), '0') || s.length() == count(s.begin(), s.end(), '1'))
            cout << 0 << endl;
        else
        {

            for (int i = 0; i < s.length(); i++)
            {
                int counts = count(s.begin(), s.end() - s.length() + i, '0') + count(s.begin() + i + 1, s.end(), '1');
                int counts2 = count(s.begin(), s.end() - s.length() + i, '1') + count(s.begin() + i + 1, s.end(), '0');
                minC = min(counts2, min(minC, counts));
            }
            cout << minC << endl;
        }
    }
}