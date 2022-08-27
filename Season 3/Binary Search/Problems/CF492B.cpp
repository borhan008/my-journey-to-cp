#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int l, n, y;
    double dis = -1;
    double d = 0;
    cin >> n >> l;

    long long int x[n];

    for (int i = 0; i < n; i++)
        cin >> x[i];

    sort(x, x + n);

    for (int i = 0; i < n - 1; i++)
    {
        dis = max(dis, (double)(x[i + 1] - x[i]));
    }

    d = (double)dis / 2;
    dis = max((double)(x[0]), (double)(l - x[n - 1]));
    cout << fixed << setprecision(10) << max(dis, d);
}