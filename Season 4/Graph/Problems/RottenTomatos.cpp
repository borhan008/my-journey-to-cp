#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<int>> arr(row, vector<int>(col, 0));
    int x;
    int freshTomato = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> x;
            arr[i][j] = x;
            if (x == 1)
                freshTomato++;
        }
    }
    queue<pair<pair<int, int>, int>> q;
    int vis[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 2)
            {
                q.push({{i, j}, 0});
                vis[i][j] == 2;
            }
            else
            {
                vis[i][j] = 0;
            }
        }
    }
    int tm = 0;
    int cnt = 0;
    while (!q.empty())
    {
        int i = q.front().first.first;
        int j = q.front().first.second;
        int t = q.front().second;
        tm = max(t, tm);
        q.pop();
        for (int k = -1; k <= 1; k++)
        {
            for (int l = -1; l <= 1; l++)
            {
                int newI = i + k;
                int newJ = j + l;
                if (k != l && (-k) != l && (-l) != k && newI >= 0 && newI < row && newJ >= 0 && newJ < col && arr[newI][newJ] == 1 && vis[newI][newJ] == 0)
                {
                    q.push({{newI, newJ}, t + 1});
                    vis[newI][newJ] = 2;
                    cnt++;
                }
            }
        }
    }

    if (freshTomato == cnt)
        cout << tm;
    else
        cout << -1 << " " << tm;
}