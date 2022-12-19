#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
#define vi vector<ll>
#define mii map<ll,ll>
#define inf 2e18
#define fo(i,n) for(ll i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define input(n,x) fo(i, n) cin >> x[i];
#define output(x) for(auto i : x) printf("%lld ", i)
#define sortall(x) sort(all(x))
#define YES printf("YES\n")
#define NO printf("NO\n")
#define endl "\n"

ll f(ll x) {return (x*(x+1)/2);}

void solve(){
	ll k , x;
	cin >> k >> x;

	ll ans = 0;

	ll l = 1 , r = 2*k - 1;

	ll total = (k * (k + 1)) - k; 

	while(l <= r)
	{
		ll mid = (l + r)/2;

		ll req = 0;

		if(mid > k)
		{
			ll diff = mid - k;
			ll val = k - diff;
			req = total - (val * (val + 1))/2;
		}
		else
			req = (mid * (mid - 1))/2;


		if(x > req)
		{
			ans = mid;
			l = mid + 1;
		}
		else
			r = mid - 1;
	}

	cout << ans << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
 	ll t=1; cin >> t;
 	while(t--) solve();
 	
	return 0;
}