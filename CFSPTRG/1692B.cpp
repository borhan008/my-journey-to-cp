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

void pSum(ll n, ll ar[], ll prefixSum[]){
	prefixSum[0] = ar[0];
	for(ll i=1; i<n; i++){
		prefixSum[i] = ar[i] + prefixSum[i-1];
	}
}

void solve(){
	ll n, k;
	cin >> n >> k;
	ll a[n];
	input(n, a);
	ll ps[n];
	pSum(n, a, ps);
	
	ll cnt=0;
	
	if(k > ps[n-1]){
		ps("-1");
		return;
	}
	if(k == ps[n-1]){
		ps("0");
		return;
	}
	ll ans = inf;
	fo(i, n){
		
		ll ub = upper_bound(ps, ps+n, (k + (i != 0 ? ps[i-1] : 0))) - ps;
		ans = min(ans, n - ub + i );
	}
	cout << ans << endl;
}
ll lcm(ll a, ll b){
	ll m = gcd(a,b);
	return ((a*b)/m);
}


ll gcd(ll a, ll b){
	return a==0 ? 0 : gcd(b, a%b);
}
int main(){
	ll t=1;
	cin >> t;
	while(t--){
		solve();
	}
}