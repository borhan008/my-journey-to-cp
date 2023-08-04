#include <bits/stdc++.h>
using namespace std;

bool checkBiPartial(int i, int n, vector<int> adj[], vector<int> &colored)
{

    queue<int> q;
    q.push(i);
    colored[i] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto l : adj[node])
        {
            if (colored[l] == colored[node])
            {
                return false;
            }

            if (colored[l] == -1)
            {
                colored[l] = (colored[node] == 0 ? 1 : 0);
                q.push(l);
            }
        }
    }
    return true;
}

int main()
{

    int node, edge;
    cin >> node >> edge;
    vector<int> adj[node+5];
    int x, y;
    for (int i = 0; i < edge; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> colored(node+5, -1);

    for (int i = 1; i <= node; i++)
    {
        if (colored[i] == -1)
        {
            if (checkBiPartial(i, node, adj, colored) == false)
            {
                cout << "NO BIPARTITE";
                return 0;
            }
        }
    }
    cout << " BIPARTITE";

    return 0;
}