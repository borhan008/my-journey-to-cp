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
	ll n,q;
	cin >> n >> q;
	ll ar[n];
	ll arr2[n][2];
	ll i;
	fo(i, n) cin >> ar[i];
	fo(i, n){
		arr2[i][1] = max(i > 0 ? arr2[i-1][1] : 0, i > 0 ? (arr2[i-1][0] + ar[i]) : 0+ar[i]);
		arr2[i][0] = max(i > 0 ? arr2[i-1][0] : 0, i > 0 ? (arr2[i-1][1] - ar[i]) : 0-ar[i]);
		
	}
	
	cout << max(arr2[n-1][1], arr2[n-1][0]) << endl;
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