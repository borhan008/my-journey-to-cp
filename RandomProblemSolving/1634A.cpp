#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[s.length() - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    string s;
    int l, k;
    cin >> t;
    while (t--)
    {
        cin >> l >> k >> s;
        if (k == 0)
        {
            cout << 1 << endl;
        }

        else if (isPalindrome(s))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}