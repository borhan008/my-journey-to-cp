#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &vis, vector<pair<int, int>> &vec, int row0, int col0)
{
    vis[i][j] = 1;
    vec.push_back({i - row0, j - col0});
    int delRow[] = {0, +1, 0, -1};
    int delCol[] = {+1, 0, -1, 0};
    for (int m = 0; m < 4; m++)
    {
        int row = delRow[m] + i;
        int col = delCol[m] + j;
        if (row >= 0 && row < grid.size() && col >= 0 && col < grid[0].size() && vis[row][col] != 1 && grid[row][col] == 1)
        {
            dfs(row, col, grid, vis, vec, row0, col0);
        }
    }
}

int main()
{
    int m, n, a;
    cin >> m >> n;
    vector<vector<int>> grid(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            grid[i][j] = a;
        }

    vector<vector<int>> vis(m, vector<int>(n, 0));

    set<vector<pair<int, int>>> x;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (grid[i][j] == 1 && vis[i][j] != 1)
            {
                vector<pair<int, int>> vec;
                dfs(i, j, grid, vis, vec, i, j);
                x.insert(vec);
            }

    cout << x.size();
}