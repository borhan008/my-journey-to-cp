#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> primeFactorization(int t)
{
    unordered_map<int, int> f;
    for (int i = 2; i * i <= t; i++)
    {
        while (t % i == 0)
        {
            f[i]++;
            t /= i;
        }
    }
    if (t > 1)
        f[t]++;

    return f;
}

int main()
{
    int x;
    cin >> x;
    int count = 1;
    unordered_map<int, int> y = primeFactorization(x);
    for (auto l : y)
        count *= (pow(l.first, l.second + 1) - 1) / (l.first - 1);

    cout << count;
}