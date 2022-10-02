#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9 + 10;
int main()
{
    int n, e;
    cin >> n >> e;
    int adj[n][n];
    int x, y, wt;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            adj[i][j] = i == j ? 0 : INF;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y >> wt;
        adj[x][y] = wt;
    }

    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (adj[i][j] != INF || (adj[i][k] != INF && adj[k][j] != INF))
                    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adj[i][j] == INF)
            {
                cout << "I ";
            }
            else
            {
                cout << adj[i][j] << " ";
            }
        }
        cout << endl;
    }
}