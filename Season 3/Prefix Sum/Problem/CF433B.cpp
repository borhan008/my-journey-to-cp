#include <bits/stdc++.h>
using namespace std;
long long int arr[(int)10e5 + 2];
long long int arrSum[(int)10e5 + 2];
long long int arrDesc[(int)10e5 + 2];
int main()
{
    int n, m, l, r, type, i;
    cin >> n;
    long long int x;
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        arr[i] = x;
    }
    for (i = 1; i <= n; i++)
    {
        arrSum[i] = arrSum[i - 1] + arr[i];
    }

    sort(arr, arr + n + 1);
    for (i = 1; i <= n; i++)
    {
        arrDesc[i] = arrDesc[i - 1] + arr[i];
    }
    cin >> m;
    while (m--)
    {
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << arrSum[r] - arrSum[l - 1] << endl;
        }
        else
        {
            cout << arrDesc[r] - arrDesc[l - 1] << endl;
        }
    }
}