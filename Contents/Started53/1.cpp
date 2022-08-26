#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        cout << (x <= 300 ? 300 * 10 : x * 10) << endl;
    }
    return 0;
}