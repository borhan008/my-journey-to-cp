#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Implement binary search recursively, i.e. given an array of sorted integers, find a query integer
from it.
Input format: first n, the number of elements. Then n integers. Then, q, number of query, then q
integers. Output format: for each of the q integers, print its index (within 0 to n-1) in the array or
print 'not found', whichever is appropriate
*/
ll binarSearch(ll ar[], ll arSize, ll searchKey, ll start = 0, ll end = -1000)
{
    if (end == -1000)
        end = arSize;
    return (end < start                          ? -1
            : ar[(end + start) / 2] == searchKey ? (end + start) / 2
                                                 : (searchKey > ar[(start + end) / 2] ? binarSearch(ar, arSize, searchKey, (start + end) / 2 + 1, end) : binarSearch(ar, arSize, searchKey, start, (start + end) / 2 - 1)));
}
int main()
{
    ll n, q, i;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> q;
    while (q--)
    {
        cin >> i;
        if (binarSearch(arr, n, i) == -1)
            cout << "not found" << endl;
        else
            cout << binarSearch(arr, n, i) << endl;
    }
}