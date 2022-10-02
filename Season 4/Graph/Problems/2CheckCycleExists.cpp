#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, int par, vector<int> adj[], int vis[])
{
    vis[node] = 1;
    bool cycleExists = false;
    for (int i : adj[node])
    {
        if (i == par && vis[i] == 1)
            continue;
        if (vis[i] == 1)
            return true;
        cycleExists |= dfs(i, node, adj, vis);
    }
    return cycleExists;
}

int main()
{
    int n, e;
    cin >> n >> e;
    int vis[n];
    vector<int> adj[n];
    int i, j;
    for (int i = 0; i < n; i++)
    {
        cin >> i >> j;
        adj[i].push_back(j);
        adj[j].push_back(i);
    }
    bool ans = false;
    for (int i = 0; i < n; i++)
    {
        if (vis[i])
            continue;
        if (dfs(i, 0, adj, vis))
        {
            ans = true;
            break;
        }
    }
    cout << ans;
}