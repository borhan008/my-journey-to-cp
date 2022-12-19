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


ll dfs(ll a, vector<vector<ll>> &adj, 
 vector<ll> &vis){
	vis[a]=1;
	ll ans=a;
	for(auto l : adj[a]){
		if(vis[l]==1){
			return l;
		}else{
			ans = dfs(l, adj, vis);
		}
	}
	return ans;
}

void solve(){
	ll n;
	cin >> n;
	vi a;
	vector<vector<ll>> adj((ll)1e5);
	for(ll i=1; i<=n; i++){
		ll x; cin >> x;
		//a.pb(x);
		adj[i].pb(x);
	}
	for(ll i=1; i<=n; i++){
		vector<ll> vis(n+1, 0);
		cout << dfs(i, adj, vis) << " ";
	}
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    
 	ll t=1; //cin >> t;
 	while(t--) solve();
 	
	return 0;
}