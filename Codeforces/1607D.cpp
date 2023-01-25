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
#define output(x) fo(auto i : x) printf("%lld ", i)
#define sortall(x) sort(all(x))
#define YES printf("YES\n")
#define NO printf("NO\n")
void solve(){
	ll n;
	cin >> n;
	ll a[n];
	string s;
	input(n, a);
	ll y=1;
	cin >> s;
	set<ll> x;
	vi blue;
	vi red;
	fo(i, n){
		if(s[i]=='B') blue.pb(a[i]);
		else red.pb(a[i]);
	}
	sort(all(blue)); sort(all(red));
	for(auto l:blue){
		if(l >= y){
			x.insert(y);
			y++;
		}
	}
	for(auto l:red){
		if(l <=y) {
			x.insert(y);
			y++;
		}
	}
	((ll)x.size()==n?YES:NO);
}

int main(){
	ll t=1;
	cin >> t;
	while(t--){
		solve();
	}
}