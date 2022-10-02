#include <bits/stdc++.h>
using namespace std;

void dijsktra(int s, vector<int> &dis, priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> &pq, vector<pair<int, int>> adj[])
{
    dis[s] = 0;
    pq.push({0, s});

    while (!pq.empty())
    {
        int curDis = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        if (dis[node] > curDis)
            continue;
        for (auto l : adj[node])
        {

            if ((l.second + curDis) < dis[l.first])
            {

                pq.push({l.second + curDis, l.first});
                dis[l.first] = l.second + curDis;
            }
        }
    }
}

int main()
{
    int n, e, s;
    cin >> n >> e >> s;
    vector<pair<int, int>> adj[n];
    int x, y, wt;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y >> wt;
        adj[x].push_back({y, wt});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dis(n, INT_MAX);

    dijsktra(s, dis, pq, adj);
    for (auto l : dis)
    {
        cout << l << " ";
    }
}