#include <bits/stdc++.h>
using namespace std;
long long int arr[(int)1e5 * 2 + 5];
int main()
{
    long long int t, n, sum, maxd;
    int i;
    cin >> t;
    while (t--)
    {
        sum = 0;
        cin >> n;
        for (i = 1; i <= n; i++)
            cin >> arr[i];
        maxd = arr[1];
        for (i = 1; i <= n; i++)
        {
            if ((maxd >= 0 && arr[i] >= 0) || (maxd < 0 && arr[i] < 0))
            {
                maxd = max(maxd, arr[i]);
            }
            else
            {
                sum += maxd;
                maxd = arr[i];
            }
            if (i == n)
            {
                maxd = max(maxd, arr[i]);
                sum += maxd;
            }
        }
        cout << sum << endl;
    }
}