#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = (int)1e6 + 5;
const int mod = (int)1e9 + 7;

vector<ll> F, invF, Minv;

void modInverse(int M)
{
    Minv.resize(N + 1);
    Minv[0] = Minv[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        Minv[i] = ((M - (M / i)) * Minv[M % i]) % M;
    }
}

void preFact(int M)
{
    F.resize(N + 1);
    invF.reserve(N + 1);
    F[0] = F[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        F[i] = (i * F[i - 1]) % M;
    }
    modInverse(mod);
    invF[0] = invF[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        invF[i] = (Minv[i] * invF[i - 1]) % mod;
    }
}

int nCr(int n, int r)
{
    if (r > n || r < 0 || n < 0)
        return 0;
    return (((F[n] * invF[r]) % mod) * invF[n - r]) % mod;
}

int main()
{
    preFact(mod);
}