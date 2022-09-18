#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int arr[3];
    for (int i = 0; i <= 2; i++)
        cin >> arr[i];
    sort(arr, arr + 3);
    cout << arr[1];
    return 0;
}