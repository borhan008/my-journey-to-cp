#include <bits/stdc++.h>
using namespace std;
const unsigned long long int N = 1e7 + 10;

vector<bool> sieve(N, 1);
void primeGenerate()
{
    sieve[0] = sieve[1] = 0;
    sieve[2] = 1;
    for (int i = 4; i < N; i += 2)
        sieve[i] = 0;
    for (int i = 3; i * i < N; i += 2)
    {
        if (sieve[i] == 1)
        {
            for (int j = i * i; j < N; j += i)
                sieve[j] = 0;
        }
    }
}

int main()
{
    primeGenerate();

    long long int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        cout << (sieve[x] ? "Prime" : "Nor Prime") << endl;
    }
}