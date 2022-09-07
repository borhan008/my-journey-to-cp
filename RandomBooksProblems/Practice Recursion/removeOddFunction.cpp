#include <bits/stdc++.h>
using namespace std;
/*Write a recursive program to remove all odd integers from an array. You must not use any
extra array or print anything in the function. Just read input, call the recursive function, then
print the array in main().
*/
void removeOddInArr(int *arr, int s, int t)
{
    if (s == t)
        return;
    if ((*arr) % 2 == 1)
        arr = 0;
    removeOddInArr(++arr, s + 1, t);
}
int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
        cin >> arr[i];
    removeOddInArr(arr, 0, t);
    for (int i = 0; i < t; i++)
        cout << arr[i] << " ";
}