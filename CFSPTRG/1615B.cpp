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
#define output(n, x) fo(i, n) printf("%lld ", x[i])
#define sortall(x) sort(all(x))
#define YES printf("YES\n")
#define NO printf("NO\n")
void solve(){
	ll n;
	cin >> n;
	ll a[n];
	input(n, a);
	ll x = count(a, a+n, 1);
	if(x==0) {
		cout << 0;
		return;
	}else if(x==1){
		cout << 1 ;
		return;
	}
		
	
	ll cnt=1;
	for(ll i=0; i<n-1; i++){
		if(a[i] == 1 && a[i+1] != 1){
			ll localcnt=0;
			while(a[i+1] != 1 && i < n-1){
				localcnt++;
				i++;	
			}
			if(a[i+1] == 1 && i+1 < n) {
				 cnt*=(localcnt+1);
			}
		}
	}
	cout << cnt << endl;
	
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