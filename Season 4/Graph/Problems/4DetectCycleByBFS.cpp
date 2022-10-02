#include <bits/stdc++.h>
using namespace std;
// 1 base indexing
bool checkCycle(int src, vector<int> adj[], int vis[])
{
    vis[src] = 1;
    queue<pair<int, int>> q;
    q.push({src, -1});
    while (!q.empty())
    {
        int node = q.front().first;
        int prevNode = q.front().second;
        q.pop();
        for (auto l : adj[node])
        {
            if (vis[l] == 1 && prevNode != l)
            {

                return true;
            }
            if (vis[l] != 1)
            {
                vis[l] = 1;

                q.push({l, node});
            }
        }
    }
    return false;
}
int main()
{
    int r, e;
    cin >> r >> e;
    vector<int> adj[r + 1];
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int vis[r + 1] = {0};
    for (int i = 1; i <= r; i++)
    {

        cout << endl;
        if (vis[i] != 1)
        {
            if (checkCycle(i, adj, vis))
            {
                cout << "Cycle Found";
                return 0;
            }
        }
    }

    cout << "NO CYCLE FOUND" << endl;
}