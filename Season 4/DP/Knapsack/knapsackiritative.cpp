#include <bits/stdc++.h>
using namespace std;

int m, n;
int arr[(int)1e5 + 5];
int weight[1005];
int price[1005];

int main()
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        cin >> price[i];
    for (int i = 0; i < m; i++)
        cin >> weight[i];

    for (int i = 0; i < m; i++)
    {
        for (int pr = n; pr >= price[i]; pr--)
        {
            arr[pr] = max(arr[pr], weight[i] + arr[pr - price[i]]);
        }
    }
    cout << arr[n];
}