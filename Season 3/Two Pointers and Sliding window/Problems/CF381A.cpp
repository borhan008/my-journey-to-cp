#include <bits/stdc++.h>
using namespace std;
int arr[1002];
int main()
{
    int n, sereja = 0, dima = 0, s, e;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    s = 1;
    e = n;
    int z = 1;
    while (s <= e)
    {
        if (arr[s] >= arr[e])
        {
            if (z == 1)
            {
                sereja += arr[s];
                z = 0;
            }
            else
            {
                dima += arr[s];
                z = 1;
            }
            s++;
        }
        else
        {
            if (z == 1)
            {
                sereja += arr[e];
                z = 0;
            }
            else
            {
                dima += arr[e];
                z = 1;
            }
            e--;
        }
    }
    cout << sereja << " " << dima;
}