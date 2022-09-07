#include <bits/stdc++.h>
using namespace std;
string s;
int arr[(int)1e6];
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            arr[i] = (s[i] == 1 && s[i] == 'L') ? '0' : (s[i] == 'L' ? i : (n - i - 1));
        }
        for (int i = 0; i < n; i++)
        {
            if (i < n / 2)
            {
            }
        }
        cout << endl;
    }
}