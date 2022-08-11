#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> primeFactorization(int n)
{
    unordered_map<int, int> f;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            f[i]++;
            n /= i;
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

    cout << pow(x, count / 2);
}