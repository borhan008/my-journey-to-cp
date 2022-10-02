#include <bits/stdc++.h>
using namespace std;

bool dfs(int i, int i_color, int node, vector<int> adj[], vector<int> &colored)
{
    colored[i] = i_color;
    for (auto l : adj[i])
    {
        if (colored[l] == i_color)
            return false;
        else if (colored[l] == -1)
        {
            dfs(l, i_color == 0 ? 1 : 0, node, adj, colored);
        }
    }
    return true;
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
        adj[y].push_back(x);
    }

    vector<int> colored(node, -1);
    bool ans;
    for (int i = 0; i < node; i++)
    {
        if (colored[i] == -1)
            if (dfs(i, 0, node, adj, colored) == false)
            {
                cout << "NOT BIPARTITE";

                return 0;
            }
    }
    cout << " BIPARTITE";
    return 0;
}