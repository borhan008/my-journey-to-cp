#include <bits/stdc++.h>
using namespace std;

void sieve(vector<int> &prime, int high)
{
    vector<int> checkPrime(sqrt(high) + 1, 1);
    checkPrime[0] = checkPrime[1] = 0;
    checkPrime[2] = 1;
    for (int i = 4; i <= sqrt(high); i += 2)
    {
        checkPrime[i] = 0;
    }
    for (int j = 3; j <= sqrt(high); j += 2)
    {
        if (checkPrime[j] == 1)
        {
            for (int k = j * j; k <= sqrt(high); k += j)
            {
                checkPrime[k] = 0;
            }
        }
    }

    prime.push_back(2);
    for (int i = 3; i <= sqrt(high); i++)
    {
        if (checkPrime[i] == 1)
            prime.push_back(i);
    }
}

void segmentedSieve(int low, int high)
{
    vector<int> primeInRange(high - low + 1, 1);
    vector<int> primes;
    sieve(primes, high);
    if (low == 1)
        primeInRange[0] = 0;
    for (auto l : primes)
    {
        int lower = low / l;
        if (lower <= 1)
            lower = l * l;
        else if (low % l == 0)
            lower = low;
        else
            lower = lower * l + l;

        for (int j = lower; j <= high; j += l)
        {
            primeInRange[j - low] = 0;
        }
    }

    for (int i = 0; i <= high - low + 1; i++)
    {
        if (primeInRange[i] == 1)
            cout << low + i << " ";
    }
}

int main()
{
    int x, u;
    cin >> x >> u;
    segmentedSieve(x, u);
}