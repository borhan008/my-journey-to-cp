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
#define Yes printf("Yes\n")
#define No printf("No\n")

bool isSorted(ll a[], ll n){
	ll i=0;
	for(i=0; i<n-1; i++){
		if(a[i] > a[i+1]) return false;
	}
	return true;
	
}
ll lcm(ll a, ll b){
	ll m = gcd(a,b);
	return ((a*b)/m);
}


ll gcd(ll a, ll b){
	return a==0 ? 0 : gcd(b, a%b);
}
void solve(){
	ll n;
	cin >> n;
	ll a[n], b[n];
	ll i;
	fo(i, n) cin >> a[i];
	ll zero=0, one = 0;
	fo(i, n) {
		cin >> b[i];
		zero = (b[i] == 0 ? zero+1 : zero);
		one = (b[i] == 1 ? one+1 : one);
	}
	if(isSorted(a, n)){
		Yes;
	}else{
		if(zero > 0 && one > 0) Yes;
		else No;
	}
}




int main(){
	ll t=1;
	cin >> t;
	while(t--){
		solve();
	}
}