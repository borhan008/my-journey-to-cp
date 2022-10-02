#include <bits/stdc++.h>
using namespace std;

void topoSort(int i, stack<int> &s, vector<pair<int, int>> adj[], vector<int> &vis)
{
    vis[i] = 1;

    for (auto l : adj[i])
    {
        if (vis[l.first] != 1)
            topoSort(i, s, adj, vis);
    }
    s.push(i);
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> adj[n];
    int x, y, z;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y >> z;
        adj[x].push_back({y, z});
    }
    stack<int> s;
    vector<int> vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (vis[i] != 1)
            topoSort(i, s, adj, vis);
    }

    vector<int> dis(n, INT_MAX);
    dis[0] = 0;
    while (!s.empty())
    {
        int node = s.top();
        s.pop();

        for (auto l : adj[node])
        {
            int i = l.first;
            int j = l.second;
            dis[i] = min(dis[i], j + dis[node]);
        }
    }
}