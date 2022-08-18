#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x;
    vector<int> arr;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        arr.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr.push_back(x);
        }
        cin >> s;
        x = 101;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                x = min(x, arr[i]);
            }
        }
        cout << x << endl;
    }
}