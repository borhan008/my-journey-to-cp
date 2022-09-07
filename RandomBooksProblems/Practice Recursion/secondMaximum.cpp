#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*    Write a recursive solution to find the second maximum number from a given set of integers.
 */
ll findSecondMax(ll ar[], ll arSize, ll index = 1, ll max = INT_MIN, ll secondMax = INT_MIN)
{
    return (index > arSize ? secondMax : (ar[index - 1] > max ? findSecondMax(ar, arSize, ++index, ar[index - 1], max) : (ar[index - 1] > secondMax ? findSecondMax(ar, arSize, ++index, max, ar[index - 1]) : findSecondMax(ar, arSize, ++index, max, secondMax))));
}
int main()
{
    ll a[] = {8, 7, 3, 12, 5, 25, 2};
    printf("%lld", findSecondMax(a, 7));
}