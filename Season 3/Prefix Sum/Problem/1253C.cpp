#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, x, y;
    cin >> n >> m;
    long long int arr[n + 1] = {-5};
    long long int arrSum[n + 1] = {0};

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        arr[i] = x;
    }
    sort(arr, arr + n + 1);
    for (int i = 1; i <= n; i++)
    {
        if ((i - m) < 0)
            arrSum[i] = arr[i];
        else
            arrSum[i] = arr[i] + arrSum[i - m];
    }
    long long int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        // for (int j = i; j >= 1; j -= m)
        // {
        //     y = ceil((i - j * 1.00 + 1) / m * 1.000);
        //     sum += (arrSum[j] - ((j - m) > 0 ? arrSum[j - m] : 0)) * y;
        // }
        ans += arrSum[i];
        cout << ans << " ";
    }
}