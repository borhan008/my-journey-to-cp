#include <bits/stdc++.h>
using namespace std;
// DirectedGraph, 0 base indexing graph

bool dfs(int i, vector<int> &vis, vector<int> &pathVis, vector<int> adj[])
{
    vis[i] = 1;
    pathVis[i] = 1;
    for (auto l : adj[i])
    {
        if (vis[l] == 0)
        {
            dfs(l, vis, pathVis, adj);
        }
        else if (vis[l] == 1 && pathVis[l] == 1)
        {
            return true;
        }
    }
    pathVis[i] = 0;
    return false;
}

int main()
{
    int node, edge;
    cin >> node >> edge;
    vector<int> adj[node];
    int x, y;

    for (int i = 0; i < edge; i++)
    {

        cin >> x >> y;

        adj[x].push_back(y);
    }
    vector<int> vis(node, 0);
    vector<int> pathVis(node, 0);

    for (int i = 0; i < node; i++)
    {
        if (dfs(i, vis, pathVis, adj) == true)
        {
            cout << "Cycle found";
            return 0;
        }
    }
    cout << "Not Found";
    return 0;
}