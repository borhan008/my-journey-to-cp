#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> arr;
vector<vector<int>> s;
void generate(int i)
{
    if (i == n)
    {
        s.push_back(arr);
        return;
    }
    for (int ind = i; ind < n; ind++)
    {
        if (ind != i && arr[ind] == arr[i])
            continue;
        swap(arr[ind], arr[i]);
        generate(i + 1);
        swap(arr[ind], arr[i]);
    }
}
int main()

{
    int a;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    generate(0);
    for (auto l : s)
    {
        for (auto m : l)
        {
            cout << m << " ";
        }
        cout << endl;
    }
}