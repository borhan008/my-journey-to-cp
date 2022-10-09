#include <bits/stdc++.h>
using namespace std;
int arr1[(int)1e5];
int arr2[(int)1e5];
int main()
{
    int t, n, x;
    int max1, max2;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr1[i] = x;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr2[i] = x;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] > arr2[i])
                swap(arr1[i], arr2[i]);
        }
        max1 = arr1[0];
        max2 = arr2[0];
        for (int i = 1; i < n; i++)
        {
            if (arr1[i] > max1)
                max1 = arr1[i];
            if (arr2[i] > max2)
                max2 = arr2[i];
        }
        cout << max1 * max2 << endl;
    }
}