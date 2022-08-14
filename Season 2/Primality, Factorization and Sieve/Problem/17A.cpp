#include <bits/stdc++.h>
using namespace std;

set<int> primes;

void sieve()
{
    vector<int> checkPrimes(1001, 1);
    checkPrimes[0] = checkPrimes[1] = 0;
    checkPrimes[2] = 1;
    for (int i = 4; i <= 1000; i += 2)
        checkPrimes[i] = 0;
    for (int i = 3; i <= 1000; i += 2)
    {
        if (checkPrimes[i] == 1)
        {

            for (int j = i * i; j <= 1000; j += i)
            {
                checkPrimes[j] = 0;
            }
        }
    }

    for (int i = 2; i <= 1000; i++)
    {
        if (checkPrimes[i] == 1)
            primes.insert(i);
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    sieve();
    int x = 0;
    set<int>::iterator l, lt;
    for (l = primes.begin(); *l <= n; l++)
    {
        lt = l;
        advance(lt, 1);
        if (primes.count((*l + *lt + 1)) == 1 && (*l + *lt + 1) <= n)
            cnt++;

        if (lt == primes.end())
            break;
    }
    if (cnt >= k)
        cout << "YES";
    else
        cout << "NO";
}