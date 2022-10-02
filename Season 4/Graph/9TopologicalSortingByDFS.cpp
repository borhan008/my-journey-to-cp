#include <bits/stdc++.h>
using namespace std;
// It's applicable in DAG: Directed Acyclic Graph

void dfs(int i, vector<int> adj[], vector<int> &vis, stack<int> &st)
{
    vis[i] = 1;
    for (auto l : adj[i])
    {
        if (vis[l] == 0)
            dfs(l, adj, vis, st);
    }
    st.push(i);
}

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
    vector<int> vis(n, 0);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] != 1)
            dfs(i, adj, vis, st);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}