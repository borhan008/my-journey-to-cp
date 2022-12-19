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
vector<vector<ll>> v((ll)1e6);
vector<ll> vis((ll)1e6, 0);
void dfs(ll i){
	vis[i]=1;
	for(auto l:v[i]){
		if(vis[l]==0) {
			dfs(l);
		}
		
	}
	cout << i << " ";
}

void solve(){
	ll n;
	cin >> n;
	while(n--){
		ll i,j; cin >> i >> j;
		v[i].pb(j);
		v[j].pb(i);
	}
	dfs(1);
	
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    
 	ll t=1; //cin >> t;
 	while(t--) solve();
 	
	return 0;
}