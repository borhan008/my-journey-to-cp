#include <bits/stdc++.h>
using namespace std;

string topologicalSort(int k, vector<int> adj[])
{
    vector<int> indegree(k, 0);
    for (int i = 0; i < k; i++)
    {
        for (auto l : adj[i])
        {
            indegree[l]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < k; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }
    vector<int> topo;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        topo.push_back(node);
        for (auto l : adj[node])
        {
            indegree[l]--;
            if (indegree[l] == 0)
                q.push(l);
        }
    }
    string s;
    for (auto x : topo)
    {
        s += x + 'a';
    }

    return s;
}

int main()
{
    int n, k;
    cin >> n >> k;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    vector<int> adj[k];
    for (int i = 0; i < n - 1; i++)
    {
        string s1 = s[i];
        string s2 = s[i + 1];
        int len = min(s1.length(), s2.length());
        for (int j = 0; j < n; j++)
        {
            if (s1[j] != s2[j])
            {
                adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                break;
            }
        }
    }
    cout << topologicalSort(k, adj);
}