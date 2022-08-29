

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[(int)1e5 + 2];
    arr[0] = INT_MAX;
    arr[(int)1e5 + 1] = INT_MAX;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int l = 1;
    int r = n;
    int mid1, mid2;
    int count = 0;
    while (count <= 100)
    {
        mid1 = l + (r - l) / 2;
        mid2 = r - (r - l) / 2;
        if (arr[mid1] < min(arr[mid1 - 1], arr[mid1 + 1]))
        {
            cout << "! " << mid1;
            break;
        }
        else if (arr[mid2] < min(arr[mid2 - 1], arr[mid2 + 1]))
        {
            cout << "! " << mid2;
            break;
        }
        else if (arr[mid1] > arr[mid2])
        {
        }
    }
}