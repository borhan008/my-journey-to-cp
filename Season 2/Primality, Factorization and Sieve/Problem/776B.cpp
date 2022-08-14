#include <bits/stdc++.h>
using namespace std;
set<int> primes;

void sieve()
{
    vector<int> x(1e5 + 100, 1);
    x[0] = x[1] = 0;
    for (int i = 2; i * i <= 1e5; i++)
    {
        if (x[i] == 1)
        {
            for (int j = i * i; j <= 1e5; j = j + i)
            {
                x[j] = 0;
            }
        }
    }
    for (int i = 2; i <= 1e5; i++)
    {
        if (x[i] == 1)
            primes.insert(i);
    }
}

int main()
{
    int t;
    cin >> t;
    sieve();
    cout << ((t == 1 || t == 2) ? 1 : 2) << endl;

    for (int i = 2; i <= t + 1; i++)
    {
        if (primes.count(i) == 1)
            cout << "1 ";
        else
            cout << "2 ";
    }
}