#include <bits/stdc++.h>
using namespace std;
#define MAX 500
int arr[500][500];
int Sum[500 + 1][500 + 1];
int main()
{
    int n, m;
    cin >> n >> m;
    int a;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            arr[i][j] = a;
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            Sum[i][j] = arr[i - 1][j - 1] + Sum[i - 1][j] + Sum[i][j - 1] - Sum[i - 1][j - 1];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }
}