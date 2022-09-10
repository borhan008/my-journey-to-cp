#include <bits/stdc++.h>
using namespace std;
int arr[(int)1e6 + 5];
int n;
vector<int> subsetSum;

void generate(int i, int sum)
{
    if (i >= n)
    {
        subsetSum.push_back(sum);
        return;
    }
    generate(i + 1, sum);
    generate(i + 1, sum + arr[i]);
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    generate(0, 0);
    sort(subsetSum.begin(), subsetSum.end());
    for (auto l : subsetSum)
        cout << l << " ";
}