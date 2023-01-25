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
	ll n;
	cin >> n;
	ll arr[n];
	ll i;
	fo(i, n) cin >> arr[i];
	
	
	ll ans0=0;
	fo(i, (n-1)) ans0 += abs(arr[i]-arr[i+1]);
	ll mx = max(abs(arr[0]-arr[1]), abs(arr[n-1]-arr[n-2]));
	for(i=1; i<n-1; i++){
		mx=max(mx, abs(arr[i]-arr[i-1])+abs(arr[i]-arr[i+1]) - abs(arr[i+1]-arr[i-1]));
	}
	cout << ans0-mx << endl;
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