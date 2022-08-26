#include <bits/stdc++.h>
using namespace std;
long long int arr[(int)1e7];
long long int arr2[(int)1e7];
int main()
{
    int t, n;

    long long int a1 = 0, a2 = 0, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a1 = a2 = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            arr[i] = x;
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> x;

            arr2[i] = x;
        }
        for (int j = 1; j <= n; j++)
        {
            while (arr[j] != arr2[j])
            {
                if (arr[j] < arr2[j])
                {
                    a1++;
                    arr[j] = arr[j] + 1;
                }
                else if (arr2[j] < arr[j])
                {
                    a2++;
                    arr2[j] = arr2[j] + 1;
                }
            }
        }
        cout << ((a1 == a2) ? a1 : -1) << endl;
    }
}