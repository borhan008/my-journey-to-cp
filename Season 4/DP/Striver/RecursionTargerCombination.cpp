#include <bits/stdc++.h>
using namespace std;
int arr[(int)1e5 + 5];
int z;
vector<vector<int>> com;

void generate(int n, int sum, vector<int> &s)
{

    if (sum == 0)
    {

        com.push_back(s);

        return;
    }

    if (arr[n] > sum || n == z)
    {
        return;
    }
    s.push_back(arr[n]);
    generate(n, sum - arr[n], s);
    s.pop_back();
    generate(n + 1, sum, s);
}

int main()
{
    int n, target, x;
    vector<int> y;
    cin >> n >> target;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    z = n;
    generate(0, target, y);
    for (auto l : com)
    {
        for (auto m : l)
        {
            cout << m << " ";
        }
        cout << endl;
    }
}
