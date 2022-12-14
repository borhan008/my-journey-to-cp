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


void solve(){
	
	ll n,m;
	cin >> n >> m;
	vi prev(n+5, -1);
 	for(ll i=1; i<=m; i++){
		ll y,x;
		cin >> x >> y;
		if(x>y) swap(x,y);
		prev[y] = max(prev[y], x);
	}
	ll last=1;
	ll ans=0;
	for(ll i=1; i<=n; i++){
		last = max(last, prev[i]+1);
		ans += (i-last+1);

	}
	       
	printf("%lld\n", ans);

	
	
	
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    
 	ll t=1; cin >> t;
 	while(t--) solve();
 	
	return 0;
}