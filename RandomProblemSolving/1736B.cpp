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
	vector<ll> a ((int)1e5+5,0);
	vector<ll> b ((int)1e5+5,0);
	
	




void solve(){
	ll n;
	cin >> n;
	ll x;
	for(ll i=0; i<n; i++){
		cin >> x;
		a[i] = x;
		if(i==0) b[i] = a[i];
		else if(i==n-1){
			b[i] = lcm(a[i], a[i-1]);
			 b[i+1]=a[i];
		}
		else b[i] = lcm(a[i], a[i-1]);
	}	
	int flag=0;
	for(ll i=1; i<=n; i++){
		if(gcd(b[i], b[i-1]) != a[i-1]){
			flag = 1;
			break;
		} 
	}
	ps(flag == 0 ? "YES" : "NO");
	
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