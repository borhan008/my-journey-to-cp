#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    long long int x;
    cin >> n;
    vector<long long int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
    }

    sort(arr.begin(), arr.end());
    cin >> q;
    while (q--)
    {
        cin >> x;
        auto l = upper_bound(arr.begin(), arr.end(), x);
        if (l != arr.end())
        {
            cout << l - arr.begin() << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
}