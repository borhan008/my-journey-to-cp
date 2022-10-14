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
vi a(1e6, 0);
void solve(){
	ll n,x;
	cin >> n;
	for(ll i=1; i<=n; i++){
		cin >> x;
		a[i] =x;
	}
	ll flag = 0;
	ll last=0;
	for(ll i=(n/2); i>=1; i--){
		if(-a[i]-last+a[n-i+1]== 0) continue;
		if(a[i]+last < a[n-i+1]){
			last += (-a[i]-last+a[n-i+1]);
		}else{
			flag = -1;
			break;
		}
	}
	if(flag>= 0) cout << last << endl;
	else cout << -1 << endl;
	
	
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