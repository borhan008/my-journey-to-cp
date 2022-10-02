#include <bits/stdc++.h>
using namespace std;

int parent[1000];
int Size[1000];

void make(int i)
{
    parent[i] = i;
    Size[i] = i;
}

int find(int a)
{
    if (parent[a] == a)
        return a;
    return parent[a] = find(parent[a]);
}

void Uniod(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (Size[a] < Size[b])
            swap(a, b);
        parent[b] = a;
        Size[a] += Size[b];
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<pair<int, pair<int, int>>> edges;
    int x, y, wt;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> wt;
        edges.push_back({wt, {x, y}});
    }
    for (int i = 1; i <= n; i++)
        make(i);
    sort(edges.begin(), edges.end());
    int total_cost = 0;
    for (auto &edge : edges)
    {
        wt = edge.first;
        x = edge.second.first;
        y = edge.second.second;
        if (find(x) == find(y))
            continue;
        Uniod(x, y);
        total_cost += wt;
    }
    cout << total_cost;
}