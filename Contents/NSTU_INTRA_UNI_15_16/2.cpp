#include <bits/stdc++.h>
using namespace std;
string s;

int main()
{
    int n;
    cin >> n;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') && (s[i + 1] != 'a' && s[i + 1] != 'e' && s[i + 1] != 'i' && s[i + 1] != 'o' && s[i + 1] != 'u'))
        {
            count++;
        }
    }
    cout << count;
    return 0;
}