#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define pii pair<ll, ll>
#define vi vector<ll>
#define mii map<ll, ll>
#define inf 1e18
#define fo(i, n) for (i = 0; i < n; i++)
#define sl(x) scanf("%lld", &x)
#define si(x) scanf("%d", &x)
#define ss(x) scanf("%s", x)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(x) printf("%s\n", x)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

void solve()
{
	ll n, k, x;

	cin >> n >> k;
	vi a(3 * n, 0);

	vi m(k, 0);
	ll mx = 0;
	for (ll i = 1; i <= n; i++)
	{
		cin >> x;
		a[x] = x;
		if (a[x] > mx)
			mx = a[x];
	}

	ll i = k, j = 1;
	ll score1 = 0;
	while(i){
		if(a[j] == 0){
			mx = j > mx ? j : mx;
			score1 +=  (mx - j);
			i--;

		}
		j++;
	}
	i=k;
	j=2*n;
	ll score2 = 0;
	while(i){
		if(a[j] == 0){
			a[j] = j;
			mx = j > mx ? j : mx;
			score2 += (mx-j);
			
			break;
		}
		j--;
	}
	i=i-1;
	j=1;
	while(i){
		if(a[j] == 0){
			mx = j > mx ? j : mx;
			score2 +=  (mx - j);
			i--;

		}
		j++;
	}
	

		
		cout << max(score1,score2) << endl;
}

ll lcm(ll a, ll b)
{
	ll m = gcd(a, b);
	return ((a * b) / m);
}

ll gcd(ll a, ll b)
{
	return a == 0 ? 0 : gcd(b, a % b);
}
int main()
{
	ll t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
}