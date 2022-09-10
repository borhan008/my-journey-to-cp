#include <bits/stdc++.h>
using namespace std;
int n;
int arr[(int)1e6];
vector<vector<int>> x;
void generate(int i, vector<int> &s)
{
    x.push_back(s);

    for (int ind = i; i < n; i++)
    {
        if (ind != i && arr[i] == arr[i - 1])
            continue;
        s.push_back(arr[i]);
        generate(i + 1, s);
        s.pop_back();
    }
}

int main()
{
    cin >> n;
    vector<int> s;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    generate(0, s);
    for (auto l : x)
    {
        for (auto m : l)
            cout << m << " ";
        cout << endl;
    }
}