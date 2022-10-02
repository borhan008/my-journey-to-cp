#include <bits/stdc++.h>
using namespace std;

void floodFill(int i, int j, vector<vector<int>> &arr, int initVal, int newColor)
{
    arr[i][j] = newColor;
    for (int x = -1; x <= 1; x++)
    {
        for (int y = -1; y <= 1; y++)
        {
            int newI = i + x;
            int newJ = j + y;

            if (x != y && (-x) != y && (-y) != x && newI >= 0 && newI < arr.size() && newJ >= 0 && newJ < arr[0].size() && arr[newI][newJ] == initVal)
            {

                floodFill(newI, newJ, arr, initVal, newColor);
            }
        }
    }
}

int main()
{
    int row, col, newColor, sc, sr, x;
    cin >> row >> col >> sc >> sr >> newColor;
    vector<vector<int>> arr(row, vector<int>(col, 0));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> x;
            arr[i][j] = x;
        }
    }
    floodFill(sc - 1, sr - 1, arr, arr[sc - 1][sr - 1], newColor);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}