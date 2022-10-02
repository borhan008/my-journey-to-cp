#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], int vis[])
{
    vis[node] = 1;
    for (auto x : adj[node])
        if (vis[x] != 1)
            dfs(x, adj, vis);
}

int main()
{
    int n, e;
    cin >> n >> e;
    int i, j;
    vector<int> adj[n];
    int vis[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> i >> j;
        adj[i].push_back(j);
        adj[j].push_back(i);
    }

    int provinces = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
            provinces++,
                dfs(i, adj, vis);
    }
    cout << provinces;
}