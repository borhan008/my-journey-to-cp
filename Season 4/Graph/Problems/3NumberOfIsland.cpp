#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<char>> &grid, vector<vector<int>> &vis)
{
    vis[i][j] = 1;
    for (int deltaRow = -1; deltaRow <= 1; deltaRow++)
    {
        for (int deltaCol = -1; deltaCol <= 1; deltaCol++)
        {
            int nborRow = i + deltaRow;
            int nborCol = j + deltaCol;
            if (nborRow >= 0 && nborRow < grid.size() && nborCol >= 0 && nborCol < grid[0].size() && grid[nborRow][nborCol] == '1' && vis[nborRow][nborCol] == 0)
            {
                // cout << nborRow << " " << (nborCol >= 0) << " " << vis[nborRow][nborCol] << endl;
                dfs(nborRow, nborCol, grid, vis);
            }
        }
    }
}

int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<char>> grid(row, vector<char>(col, '0'));
    char x;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cin >> x;
            grid[i][j] = x;
        }
    }
    vector<vector<int>> vis(row, vector<int>(col, 0));
    int cnt = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (vis[i][j] == 0 && grid[i][j] == '1')
            {
                //  cout << i << " " << j << " " << vis[i][j] << endl;

                cnt++;
                dfs(i, j, grid, vis);
            }
        }
    }

    cout << cnt;
}