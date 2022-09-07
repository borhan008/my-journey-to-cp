#include <bits/stdc++.h>
using namespace std;
map<string, int> x;

int main()
{
    int t;
    int n;
    string arr1[1005], arr2[1005], arr3[1005];
    int a1, a2, a3;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a1 = a2 = a3 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            x[arr1[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
            x[arr2[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr3[i];
            x[arr3[i]]++;
        }

        for (auto &y : x)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr1[i] == y.first)
                {
                    a1 += y.second == 1 ? 3 : (y.second == 2 ? 1 : 0);
                }
                if (arr2[i] == y.first)
                {
                    a2 += y.second == 1 ? 3 : (y.second == 2 ? 1 : 0);
                }
                if (arr3[i] == y.first)
                {
                    a3 += y.second == 1 ? 3 : (y.second == 2 ? 1 : 0);
                }
            }
        }
        cout << a1 << " " << a2 << " " << a3 << endl;
    }
}