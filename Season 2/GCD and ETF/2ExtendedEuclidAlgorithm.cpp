#include <bits/stdc++.h>
using namespace std;
pair<int, int> extendedGCD(int a, int b)
{
    if (b == 0)
    {
        return {1, 1};
    }
    auto [x2, y2] = extendedGCD(b, a % b);
    int x = y2;
    int y = x2 - (a / b) * y2;

    return {x, y};
}
int main()
{
    int a, b;
    cin >> a >> b;
    /*
        Extended Euclidean GCD
        xA + yB = gcd(a,b);
    */
    auto [x, y] = extendedGCD(a, b);
    cout << x << " " << y;
}