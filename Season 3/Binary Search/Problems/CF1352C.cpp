#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int notDivisible, thNumber, lo, hi, mid;
    cin >> n;

    while (n--)
    {
        cin >> notDivisible >> thNumber;
        lo = 1;
        hi = notDivisible * (int)1e9;
        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            // cout << mid << endl;
            if ((mid - mid / notDivisible) == thNumber)
            {
                cout << (mid % notDivisible == 0 ? (mid - 1) : mid) << endl;
                break;
            }
            else if (mid - mid / notDivisible > thNumber)
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
    }
}