#include <bits/stdc++.h>
using namespace std;
// 0 base graph indexing
/*

Space complexity : 0(3N) ~ N
Time complexity: 0(N) + 0(2E)

*/
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n];
    int i, j;

    for (int i = 0; i < e; i++)
    {
        cin >> i >> j;
        adj[i].push_back(j);
        adj[j].push_back(i);
    }

    int vis[n] = {0};
    vis[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for (auto l : adj[node])
        {
            if (vis[l] != 1)
            {
                vis[l] = 1;
                q.push(l);
            }
        }
    }

    for (auto i : bfs)
        cout << i << " ";
}