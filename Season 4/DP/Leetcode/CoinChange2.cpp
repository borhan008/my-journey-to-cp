#include <bits/stdc++.h>
using namespace std;
int arr[(int)1e5 + 5];
int n, m;
vector<vector<int>> x;
int y = 0, i = 0;
void func(int amount, vector<int> &a, int ind = 0)
{
    if (amount == 0)
    {
        x.push_back(a);
        return;
    }

    for (i = ind; i < n; i++)
    {
        if (arr[i] <= amount)
        {

            a.push_back(arr[i]);
            func(amount - arr[i], a, ind);
            a.pop_back();
            func(amount, a, ind + 1);
        }
    }
}

int main()
{
    cin >> n >> m;
    vector<int> a;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    func(m, a, 0);

    for (auto k : x)
    {
        for (auto j : k)
            cout << j << " ";
        cout << endl;
    }
}