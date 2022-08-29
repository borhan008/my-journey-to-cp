#include <bits/stdc++.h>
using namespace std;

int ternarySearch(int l, int r, int arr[], int f)
{

    if (r >= l)
    {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
        if (arr[mid1] == f)
            return mid1;
        else if (arr[mid2] == f)
            return mid2;
        else if (f < arr[mid1])
            return ternarySearch(l, mid1 - 1, arr, f);
        else if (f > arr[mid2])
            return ternarySearch(mid2 + 1, r, arr, f);
        else
            return ternarySearch(mid1 + 1, mid2 - 1, arr, f);
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    cout << ternarySearch(0, 11, arr, 13);
}