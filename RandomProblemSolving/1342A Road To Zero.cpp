#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, y, a, b, t;
    cin >> t;

    while (t--)
    {
        cin >> x >> y >> a >> b;
        cout << min((x + y) * a, (min(x, y) * b + abs(x - y) * b)) << endl;
    }
}