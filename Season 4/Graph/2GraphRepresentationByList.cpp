#include <bits/stdc++.h>
using namespace std;
/*
Space Complexity
For Directed Graph : O(m)
For undirected graoh: O(m)

*/
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    int i, j;

    for (int i = 0; i < n; i++)
    {
        cin >> i >> j;
        /* UNDIRECTED GRAPH */
        adj[i].push_back(j);
        adj[j].push_back(i);
        /*
        DIRECTED GRAPH
        adj[i].push_back(j);
        */
    }
}