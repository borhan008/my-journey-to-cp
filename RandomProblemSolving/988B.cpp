#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j].length() < a[i].length())
                swap(a[i], a[j]);
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i].find(a[i - 1]) == string::npos)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}