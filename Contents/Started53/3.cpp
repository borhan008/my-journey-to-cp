#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long int w, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> w >> x >> y >> z;
        if ((x + y) == w || (x + z) == w || (y + z) == w || (x + y + z) == w || x == w || y == w || z == w)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}