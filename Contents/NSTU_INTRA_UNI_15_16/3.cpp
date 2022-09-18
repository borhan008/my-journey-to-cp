#include <bits/stdc++.h>
using namespace std;
long long int a, b;
double c, d;

int main()
{
    cin >> a >> b;

    c = pow(3, a) * pow(3, b);
    d = pow(a + b, 3);
    if (c > d)
        cout
            << "YES";
    else
        cout << "NO";
    return 0;
}