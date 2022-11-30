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
void solve(){
	ll n,m;
	cin >> n >> m;
	ll a[n];
	ll preSum[n];
	input(n, a);
	preSum[0] = a[0];
	for(ll i=1; i<n; i++){
		preSum[i] = preSum[i-1] + a[i];
	}
	//output(n, preSum);
	ll ans=0;
	while(m--){
		vi local;
		ll x, y;
		cin >> x >> y;
		if(preSum[y-1] - ( x > 1 ? preSum[x-2] : 0) > 0 ){

			ans += (preSum[y-1] - ( x > 1 ? preSum[x-2] : 0));
			
		}
		
	}
	cout << ans;

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
	//cin >> t;
	while(t--){
		solve();
	}
}