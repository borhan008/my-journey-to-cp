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
	ll n, x;
	cin >> n;
	vi aa;
	map<int, vector<int>> bb;
	for(ll i=0; i<n; i++){
		cin >> x;
		bb[x].push_back(i);
	}
	ll ans = min(bb[1].size(), min(bb[2].size(), bb[3].size()));
	ll a=0, b=0, c=0;
	cout << ans << endl;
	for(ll i=0; i<ans; i++){
		
		cout << bb[1][a]+1 << " " << bb[2][b]+1 << " " << bb[3][c]+1 << endl;
		a++;
		b++;
		c++;
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
	//cin >> t;
	while(t--){
		solve();
	}
}