#include <bits/stdc++.h>
using namespace std;
/*
SPACE COMPLEXITY: N * M
*/
int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m + 1][n + 1]; // 1 base indexing
    memset(arr, 0, sizeof(arr));
    int i, j;

    for (int i = 1; i <= n; i++)
    {
        cin >> i >> j;
        /*UNDIRECTED GRAPH*/
        arr[i][j] = 1;
        arr[j][i] = 1;
        /*
        DIRECTED GRAPH:
        arr[i][j]= 1;
        */
    }
}