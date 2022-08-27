#include <bits/stdc++.h>
using namespace std;
long long int arr[305];
int main()
{
    int t, n, s, e;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        s = 1;
        e = n;
        while (s <= n)
        {
            if (s != n)
            {
                cout << arr[s] << " " << arr[n] << " ";
            }
            else
            {
                cout << arr[s];
            }
            s++;
            n--;
        }
        cout << endl;
    }
}