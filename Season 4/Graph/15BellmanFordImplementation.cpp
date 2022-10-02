#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edges, source;
    cin >> node >> edges >> source;
    vector<pair<int, pair<int, int>>> adj;
    int x, y, wt;
    for (int i = 0; i < edges; i++)
    {
        cin >> x >> y >> wt;
        adj.push_back({x, {y, wt}});
    }
    vector<int> dis(node, INT_MAX);
    dis[source] = 0;
    for (int i = 1; i <= node - 1; i++)
    {
        for (auto l : adj)
        {
            if (dis[l.first] + l.second.second < dis[l.second.first])
                dis[l.second.first] = dis[l.first] + l.second.second;
        }
    }
    int f = 0;
    for (auto l : adj)
    {
        if (dis[l.first] + l.second.second < dis[l.second.first])
        {
            cout << "NEGATIVE CYCLE";
            f = 1;
            break;
        }
    }

    if (f == 0)
    {
        for (auto x : dis)
            cout << x << " ";
    }
}