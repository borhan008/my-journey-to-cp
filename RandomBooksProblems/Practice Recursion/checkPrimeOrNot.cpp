#include <bits/stdc++.h>
using namespace std;
#define ll long long int
/*
Write a recursive program to determine whether a given integer is prime or not.
*/
bool checkPrime(ll num, ll start = 2)
{
    return (num % start == 0 && num > start || num == 1) ? false : (start >= num && num != 1 ? true : checkPrime(num, ++start));
}
int main()
{
    printf("%s", checkPrime(15) ? "true" : "false");
}