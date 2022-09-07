#include <bits/stdc++.h>
using namespace std;
int n;
int arr[(int)1e5 + 5];
vector<vector<int>> subsets;
void subset(vector<int> &s, int x)
{
    if (x == n)
    {
        subsets.push_back(s);
        return;
    }

    subset(s, x + 1);
    s.push_back(arr[x]);
    subset(s, x + 1);
    s.pop_back();
}
int main()
{
    cin >> n;
    vector<int> s;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    subset(s, 0);
    for (auto l : subsets)
    {
        for (auto x : l)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}