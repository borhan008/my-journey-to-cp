#include <bits/stdc++.h>
using namespace std;

/*

    Used in Monotonic Function
    Monotonic Function typs:
            1) increasint (1,2,4,5,6,8,9,10,...)
            2) decreasing (50,23,10,9,8,...)

    mid =low + (high-low)/2 {avoiding the integer overflow}
*/

int main()
{
    int n, f, y;
    cin >> n >> f;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    int hi = n - 1, lo = 0, mid;
    while (hi - lo >= 0)
    {
        mid = lo + (hi - lo) / 2;

        if (x[mid] == f)
        {
            break;
        }
        else if (x[mid] > f)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    if (x[mid] == f)
        cout << mid << " " << x[mid];
    else
        cout << "NOT FOUND ";
}