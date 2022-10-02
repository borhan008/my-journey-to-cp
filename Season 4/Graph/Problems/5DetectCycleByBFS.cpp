#include <bits/stdc++.h>
using namespace std;
// 0 base indexing

bool detectCycleByDFS(int src, int parent, vector<int> adj[], int vis[])
{
    vis[src] = 1;
    bool ans = false;
    for (auto l : adj[src])
    {
        if (vis[l] != 1)
            ans |= detectCycleByDFS(l, src, adj, vis);
        else if (l != parent && parent != -1)
            return true;
    }
    return ans;
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n];
    int x, y;
    int vis[n] = {0};
    for (int i = 0; i < e; i++)
    {

        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        if (vis[n] != 1)
        {
            if (detectCycleByDFS(i, -1, adj, vis))
            {
                cout << "FOUND";
                return 0;
            }
        }
    }
    cout << "NOT FOUND";
}