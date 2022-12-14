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
ll dp[505][505];
ll rec(ll n, ll l){
	if(n==0) return 1;
	if(l==0) return 0;
	if(dp[n][l] != -1) return dp[n][l];
	ll ans=0;
	
	ans += (n>=l ? rec(n-l, l-1) : 0) + rec(n ,l-1);
	
	return dp[n][l]=ans;
}


void solve(){
	ll n; cin >> n;
	cout << rec(n, n-1);

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    memset(dp, -1, sizeof(dp));
 	ll t=1; //cin >> t;
 	while(t--) solve();
 	
	return 0;
}