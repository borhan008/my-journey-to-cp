#include <bits/stdc++.h>
using namespace std;
long long int arr[101];
int n;
int x = 0;

void func(long long int i, int length, long long int a)
{
    if (length == 5)
    {
        if (a % 5 == 0)
            x++;
        return;
    }
    if (i < 0)
    {
        if (length == 5)
        {
            if (a % 5 == 0)
                x++;
        }
        return;
    }
    func(i - 1, length + 1, a + arr[i]);
    func(i - 1, length, a);
}

int main()
{
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    func(n - 1, 0, 0);
    cout << x;
    return 0;
}