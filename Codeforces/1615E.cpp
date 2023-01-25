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
#define inf 1e18
#define fo(i,n) for(ll i=0; i<n; i++)
#define sl(x) scanf("%lld",&x)
#define si(x) scanf("%d",&x)
#define ss(x) scanf("%s", x)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(x) printf("%s\n", x)
#define all(x) x.begin(), x.end()
#define input(n,x) fo(i, n) sl(x[i])
#define output(n, x) fo(i, n) printf("%lld ", x[i])
#define sortall(x) sort(all(x))
#define YES printf("YES\n")
#define NO printf("NO\n")

vector<ll> bit_count(19,0);
vector<vector<ll>> bits_all(200001);


void solve(){
	ll l, r;
	cin >> l >> r;
	ll ans = -1;
	for(ll i=0; i<19; i++){
		ans = max(ans, (bits_all[r][i] - bits_all[l-1][i]));
	}
	pl(r-l-ans+1);
}

int main(){
	ll t=1;
	
	for(ll i=0; i<19; i++) bits_all[0].pb(0);
	for(ll i=1; i<200001; i++){
		ll temp=i;
		ll pos=0;
		while(temp){
			if(temp&1)
				bit_count[pos]++;
			temp >>= 1;
			pos++;		
		}
		for(ll j=0; j<19; j++) bits_all[i].pb(bit_count[j]);
	}
	
	cin >> t;
	while(t--){
		solve();
	}
}