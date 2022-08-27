#include <bits/stdc++.h>
using namespace std;
long long int arr[(int)1e5 + 5] = {0};

int main()
{
    long long int t, n;
    cin >> n >> t;
    int i;
    for (i = 1; i <= n; i++)
        cin >> arr[i];

    int s = 1, end = n;
    long long int ans = 0;
    int bookTime = 0;
    int j = 1;
    for (int i = 1; i <= n; i++)
    {
        bookTime += arr[i];
        if (bookTime <= t)
        {
            ans++;
        }
        else
        {
            bookTime -= arr[j];
            j++;
        }
    }
    cout << ans;
}