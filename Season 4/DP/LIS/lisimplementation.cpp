#include <bits/stdc++.h>
using namespace std;
int n;
int arr[(int)1e5 + 5];

int lis(int m)
{

    int ans = 1;

    for (int i = 0; i < m; i++)
    {
        if (arr[m] > arr[i])
            ans = max(ans, lis(i) + 1);
    }

    return ans;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, lis(i));
    }
    cout << ans << endl;
}