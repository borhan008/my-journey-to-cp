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
#define fo(i,n) for(i=0; i<n; i++)
#define sl(x) scanf("%lld",&x)
#define si(x) scanf("%d",&x)
#define ss(x) scanf("%s", x)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(x) printf("%s\n", x)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define YES printf("YES\n");
#define NO printf("NO\n");

const ll prime = (ll)1e9+7;
void solve(){
	ll n, i, x;
	cin >> n;
	vi v;
	fo(i, n){
		sl(x);
		v.pb(x);
	}
	ll cnt=0;
	for(i=1; i<n; i+=2){
		cnt++;
		ll temp = v[i];
		v[i] = prime;
		v[i-1] = min(temp,v[i-1]);
	}
	pl(cnt);
	for(i=1; i<n; i+=2){
		cout << i-1+1 << " " << i+1 << " "<< 
		v[i-1] << " " << v[i]<< " " << endl;
	}
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