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
vi precal;
void solve(){
	ll a,b;
	cin >> a >> b;
	
		ll x=precal[a-1];

		x^=b;
		if(x==0) cout << a << endl;
		else if(x==a) cout << a+2 << endl;
		//else if(b<a && b!=0) cout << a << endl;
		else cout << a+1 << endl;
	
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
	precal.pb(0);
	for(ll i=1; i<=4*(ll)10e5;i++){
		precal.pb(precal[i-1]^i);
	}
	cin >> t;
	while(t--){
	solve();
	}
}