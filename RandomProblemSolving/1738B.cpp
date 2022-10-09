#include <bits/stdc++.h>
using namespace std;
long long int arr[100005];
long long int arr2[100005];
int main()
{
    int t;
    int x, y;
    cin >> t;
    long long int z;
    while (t--)
    {
        cin >> x >> y;
        for (int i = x - y + 1; i <= x; i++)
        {
            cin >> z;
            arr[i] = z;
        }

        if (x == 1 || y == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        for (int i = x; i >= x - y + 2; i--)
        {
            arr2[i] = arr[i] - arr[i - 1];
        }

        int cnt = 0;

        for (int i = x - y + 2; i <= x; i++)
        {
            if (i + 1 <= x && arr2[i] > arr2[i + 1])
            {
                cnt = -1;
                break;
            }
        }
        if (cnt == -1)
        {
            cout << "NO" << endl;
            continue;
        }

        for (int i = x - y + 1; i > 1; i--)
        {
            arr2[i] = arr2[i + 1];
            arr[i - 1] = arr[i] - arr2[i];
        }
        arr2[1] = arr[1];
        for (int i = 2; i <= x; i++)
        {
            if (arr2[i - 1] > arr2[i])
            {

                cnt = -1;
                break;
            }
        }
        if (cnt == -1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}