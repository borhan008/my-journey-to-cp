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
#define YES printf("YES\n")
#define NO printf("NO\n")
string s;



void solve(){
	string s;
	cin >> s;
	vector <pair<char, ll>> v;
	ll x=-1;
	for(ll i=0; i<(ll)s.length(); i++){
		if(x==-1 || s[i] != v[x].first){
			v.pb({s[i], 1}); x++;
		}
		else v[x].second++;	
	}
	ll ans = 1e18;
	for(ll i=1; i<(ll)v.size() - 1; i++){
		if(v[i-1].first != v[i+1].first)
		ans = min(ans, v[i].second+2);
	}
	cout << (ans == 1e18 ? 0 : ans) << endl;
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