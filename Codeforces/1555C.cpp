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
	ll m;
	cin >> m;
	ll a[2][m];
	fo(i, 2){
		fo(j, m) scanf("%lld", &a[i][j]);
	}
	ll psum1[m];
	psum1[0]=a[0][0];
	fo(i,m-1) psum1[i+1] = psum1[i]+a[0][i+1];
	ll psum2[m];
	psum2[0]=a[1][0];
	fo(i,m-1) psum2[i+1] = psum2[i]+a[1][i+1];
	psum2[m-1]=psum2[m-2];

	ll ans = psum1[m-1]-psum1[0];
	fo(i, m){
		ll a =psum1[m-1]-psum1[i+1];
		ll b = psum2[i];
		ans = min(ans, max(a,b));
	}	
	 	
	
	pl(ans);
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