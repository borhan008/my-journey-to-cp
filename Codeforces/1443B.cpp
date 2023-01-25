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
void solve(){
	ll a,b;
	string s;
	cin >> a >> b >> s;
	ll f=-1, l=-1;
	ll n = s.length();
	ll i=0;
	fo(i, n) if(s[i] == '1') {f=i;break;}
	for(i=n-1; i>=0; i--) if(s[i] == '1') {l=i;break;}
	ll ans = a;
	if(f==l and f==-1) cout << 0 << endl;
	else {
	for(i=f; i<=l; i++){
		ll c=0;
		while(s[i] == '0'){
			c++;
			i++;
		}
		ans += min(a, b*c);
	}
	pl(ans);
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