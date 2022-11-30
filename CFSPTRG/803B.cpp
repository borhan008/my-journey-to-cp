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
	ll n;
	cin >> n;
	ll ar[n];
	vector<ll> x;
	ll ar2[n];
	ll zero =0;
	
	fo(i, n) ar2[i] = inf;
	fo(i, n){
		cin >> ar[i];
		if(ar[i] == 0) {
			x.pb(i);
			ar[i] = 0;
			zero++;
		}
	}
	ll k=x[0];
	ll f=0;
	for(ll i=0; i<n; i++){
		
		if(ar[i] == 0){
			k=0;
			ar2[i]=0;
			f=1;
		}
		else ar2[i] = min(ar2[i], k);
		if(f==0) k--;
		else k++;
	}
	k=n-x[x.size() - 1];
	f=0;
	for(ll i=n-1; i>=0; i--){
		if(ar[i] == 0){
			k=0;
			ar2[i]=0;
			f=1;
		}
		else ar2[i] = min(ar2[i], k);
		if(f==0) k--;
		else k++;
	}	
	output(n, ar2);
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