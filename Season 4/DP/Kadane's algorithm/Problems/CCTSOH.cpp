
#include <bits/stdc++.h>
using namespace std;
vector<long long int> v;
long long int v2[(int)1e5 + 5];
int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long int maxLocal = 0;
    long long int globalMax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxLocal = max(arr[i], arr[i] + maxLocal);
        globalMax = max(globalMax, maxLocal);
        v.push_back(globalMax);
    }
    maxLocal = 0;
    globalMax = INT_MIN;

    for (int i = n - 1; i >= 0; i--)
    {

        maxLocal = max(maxLocal + arr[i], arr[i]);
        globalMax = max(maxLocal, globalMax);
        v2[i] = globalMax;
    }
    maxLocal = INT_MIN;

    for (int i = 0; i < n - 1; i++)
    {
        maxLocal = max(v[i] + v2[i + 1], maxLocal);
    }
    cout << maxLocal;
}
