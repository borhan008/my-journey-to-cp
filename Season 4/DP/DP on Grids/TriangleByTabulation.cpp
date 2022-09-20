#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int arr[m + 5][m + 5];
    vector<int> front(m + 5), cur(m + 5);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> arr[i - 1][j - 1];
        }
    }
    for (int i = 0; i < m; i++)
        front[i] = arr[m - 1][i];

    for (int i = m - 2; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            int a = arr[i][j] + front[j];
            int b = arr[i][j] + front[j + 1];
            cur[j] = min(a, b);
        }
        front = cur;
    }
    cout << front[0];
}