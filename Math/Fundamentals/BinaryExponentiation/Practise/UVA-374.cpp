#include <bits/stdc++.h>
using namespace std;
long long int binE(long long int x, long long int y, long long int n)
{
    long long int res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = (res % n) * (x % n);
        x = (x % n) * (x % n);
        y >>= 1;
    }

    return res % n;
}
int main()
{
    long long int x, y, n;

    cin >> x >> y >> n;
    cout << binE(x, y, n) << endl;
}