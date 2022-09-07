#include <bits/stdc++.h>
using namespace std;
void printPolynomial(int t)
{
    if (t == 1)
    {
        printf("1 + ");
        return;
    }
    printPolynomial(--t);
    printf("+ x^%d  ", t);
}
int main()
{
    int t;
    cin >> t;
    printPolynomial(t);
}