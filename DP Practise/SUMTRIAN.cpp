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
	ll n; cin >> n;
	ll arr[n+2][n+2];
	ll dp[n+2][n+2];
	for(ll i=0; i<n; i++){
		for(ll j=0; j<=i; j++){
			cin >> arr[i][j];
		}
	}
	//dp[0][0]=arr[0][0];

	for(ll i=1; i<n; i++){
		for(ll j=0; j<=i; j++){
			ll x = (j==i) ? 0 : arr[i-1][j];
			ll y= (j==0) ? 0 : arr[i-1][j-1];
			arr[i][j] += max(x,y);
		}
	}	
	ll ans=0;
	for(ll i=0; i<n; i++){
		ans = max(ans, arr[n-1][i]);
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