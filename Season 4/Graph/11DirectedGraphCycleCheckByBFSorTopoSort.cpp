#include <bits/stdc++.h>
using namespace std;
// Concept : Topo sorting is not possible in cyclic graph.
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n];
    vector<int> ans;
    vector<int> indegree(n, 0);
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        indegree[y]++;
    }
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for (auto l : adj[node])
        {
            indegree[l]--;
            if (indegree[l] == 0)
                q.push(l);
        }
    }
    if (ans.size() == n)
        cout << "YES";
    else
        cout << "NO";
}