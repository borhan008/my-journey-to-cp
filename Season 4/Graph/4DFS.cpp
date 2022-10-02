#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], int vis[], vector<int> &ans)
{
    vis[node] = 1;
    ans.push_back(node);
    for (auto newNode : adj[node])
    {
        if (vis[newNode] != 1)
            dfs(newNode, adj, vis, ans);
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n];
    int vis[n] = {0};
    vector<int> ans;
    int i, j;
    for (int i = 0; i < n; i++)
    {
        cin >> i >> j;
        adj[i].push_back(j);
        adj[j].push_back(i);
    }

    cout << endl;
    dfs(0, adj, vis, ans);
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
}