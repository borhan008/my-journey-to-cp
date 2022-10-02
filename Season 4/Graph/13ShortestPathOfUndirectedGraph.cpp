#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n];
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
    }

    queue<pair<int, int>> q;
    vector<int> vis(n, 0);
    q.push({0, 0});
    vis[0] = 1;
    vector<int> dis(n, 0);
    while (!q.empty())
    {
        int node = q.front().first;
        int d = q.front().second;
        q.pop();
        for (auto l : adj[node])
        {
            if (vis[l] != 1)
            {
                vis[l] = 1;
                q.push({l, d + 1});
                dis[l] = d + 1;
            }
        }
    }

    for (auto x : dis)
    {
        cout << x << " ";
    }
}