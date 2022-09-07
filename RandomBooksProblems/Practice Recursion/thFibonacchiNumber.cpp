#include <bits/stdc++.h>
using namespace std;
/*
Write a recursive program to compute n
th
fibonacci number. 1st and 2nd
fibonacci numbers are 1,*/
long long int fibonacci(long long int x) { return ((x == 0 || x == 1) ? x : fibonacci(x - 1) + fibonacci(x - 2)); }
int main()
{
    long long int x;
    printf("%d", fibonacci(6));
}