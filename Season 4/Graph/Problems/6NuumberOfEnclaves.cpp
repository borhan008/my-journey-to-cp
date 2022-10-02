#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int oneCount = 0;
    vector<vector<int>> g(m, vector<int>(n, 0));
    int x;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            g[i][j] = x;
            if (x == 1)
                oneCount++;
        }
    }
    int vis[m][n] = {0};
    queue<pair<int, int>> q;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
            {
                if (g[i][j] == 1)
                {
                    q.push({i, j});
                    vis[i][j] = 1;
                }
            }
        }
    }
    int cnt = 0;
    int delrow[] = {0, +1, 0, -1};
    int delCol[] = {+1, 0, -1, 0};
    while (!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        cnt++;
        for (int i = 0; i < 4; i++)
        {
            if (row + delrow[i] >= 0 && row + delrow[i] < m && col + delCol[i] >= 0 && col + delCol[i] < n && g[row + delrow[i]][col + delCol[i]] == 1 && vis[row + delrow[i]][col + delCol[i]] != 1)
            {
                q.push({row + delrow[i], col + delCol[i]});
                vis[row + delrow[i]][col + delCol[i]] = 1;
            }
        }
    }

    cout << abs(oneCount - cnt);
}