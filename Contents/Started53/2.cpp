#include <bits/stdc++.h>
using namespace std;

int main()
{
    double t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        cout << (((a + b) / 2) > c ? "YES" : "NO") << endl;
    }
    return 0;
}