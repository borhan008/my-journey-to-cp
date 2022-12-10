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
	cin>>n;
	mii a,b;
	ll x;
	fo(i, n){
		cin >> x;
		a[x]++;
	}
	vi c;
	for(auto l:a){
		
		if(l.F <=n){
			for(ll i=0; i<l.S-1; i++) c.pb(l.F);
			b[l.F]=1;
		}else {
			for(ll i=0; i<l.S; i++) c.pb(l.F);
		}
	}
	ll m=1;
	ll ans=0;
	
	for(auto l:c){
		for(ll i=m; i<=n; i++){
			if(b[i]==1) m++;
			else break;
		}
		ll z = (l-1)/2;
		if(m <= z) {
			ans++;
			m++;
		}else{
			ps("-1");
			return;
		}
	}
	cout << ans << endl;

	
	

}

int main(){
	ll t=1;
	cin >> t;
	while(t--){
		solve();
	}
}