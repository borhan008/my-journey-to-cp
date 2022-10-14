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
void solve(){
	ll n, x;
	cin >> n;
	vector<ll> a[n+5];

	for(ll i=1; i<=n; i++){
		sl(x);
		a[x].push_back(i);
	}
	ll cnt=0;
	for(ll i=1; i<=n; i++){
		if(a[i].size() <= 1) cout << a[i].size() << " ";
		else{
			cnt = 1;
			for(ll j=1; j<a[i].size(); j++){
				ll g = a[i][j] - a[i][j-1];
				g--;
				if(g%2 == 0) cnt++;
			}
			cout << cnt << " ";
		}
	}
	cout << endl;
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