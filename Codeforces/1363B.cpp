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
#define sortall(x) sort(all(x))
#define YES printf("YES\n")
#define NO printf("NO\n")
void solve(){
	string s;
	cin >> s;
	ll n =s.length();
	ll ans = 1e6;
	for(ll i =0; i<n; i++){
 ll counts = count(s.begin(), s.end() - s.length() + i, '0') + count(s.begin() + i + 1, s.end(), '1');
ll counts2 = count(s.begin(), s.end() - s.length() + i, '1') + count(s.begin() + i + 1, s.end(), '0');
		 ans =min(counts, min(counts2, ans));
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