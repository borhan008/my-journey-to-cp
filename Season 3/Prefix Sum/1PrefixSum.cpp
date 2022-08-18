#include <bits/stdc++.h>
using namespace std;

vector<int> findPrefixSum(vector<int> a)
{
    vector<int> x(a.size() + 1, 0);
    for (int i = 1; i < a.size() + 1; i++)
    {
        x[i] = x[i - 1] + a[i - 1];
    }

    return x;
}

int main()
{
    vector<int> x, y;
    int n, queries, m;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> queries;
        x.push_back(queries);
    }

    y = findPrefixSum(x);
    cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        cin >> m;
        cout << y[m] << endl;
    }
}