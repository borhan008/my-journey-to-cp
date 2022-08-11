#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> primeFactorization(int n)
{
    unordered_map<int, int> f;
    for (int j = 2; j * j <= n; j++)
    {
        int i = 0;
        while (n % j == 0)
        {
            f[j]++;
            n /= j;
        }
    }
    if (n > 1)
        f[n]++;

    return f;
}

int main()
{
    int x;
    cin >> x;
    int count = 1;
    unordered_map<int, int> y = primeFactorization(x);
    for (auto l : y)
        count *= (l.second + 1);

    cout << count;
}