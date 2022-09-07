#include <bits/stdc++.h>
using namespace std;
// You will be given an array of integers, write a recursive solution to print it in reverse order.
void reverseArr(int arr[], int arrSize)
{
    if (arrSize == 0)
        return;
    printf("%d ", arr[arrSize - 1]);
    reverseArr(arr, arrSize - 1);
}
int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
        cin >> arr[i];
    reverseArr(arr, t);
}