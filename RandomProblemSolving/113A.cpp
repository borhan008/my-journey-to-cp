#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> &a, pair<int, int> &b)
{
    return (a.first < b.first) || (a.first == b.first && a.second > b.second);
}
int main()
{
    int n, k, a, b;
    cin >> n >> k;
    pair<int, int> arr[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a >> b;
        arr[i] = make_pair(a, b);
    }
    sort(arr, arr + n, comp);
    k = n - k;
    int l = k;
    int r = k + 1;
    int count = 0;
    while (l >= 0 || r < n)
    {
        if ((arr[l] != arr[k] || l < 0) && (arr[r] != arr[k] || r > n))

            break;
        if (arr[l] == arr[k] && arr[k] == arr[r] && r < n && l >= 0)
            count += 2;
        else
            count++;
        l--;
        r++;
    }
    cout << count;
}