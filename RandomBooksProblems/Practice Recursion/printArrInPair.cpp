#include <bits/stdc++.h>
using namespace std;
/*
Write a recursive function to print an array in the following order.
[0] [n-1]
[1] [n-2]
.........
.........
[(n-1)/2] [n/2]

*/
void printArrInPair(int arr[], int s, int total)
{
    if ((total % 2 == 0 && s >= (total / 2)) || (total % 2 == 1 && s > (total / 2)))
        return;
    printf("%d %d\n", arr[s], arr[total - 1 - s]);
    printArrInPair(arr, s + 1, total);
}
int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
        cin >> arr[i];
    printArrInPair(arr, 0, t);
}