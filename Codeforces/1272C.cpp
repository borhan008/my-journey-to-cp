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
	ll n, k; cin >> n >> k;
	string s; cin >> s;
	char s_in[k]; fo(i, k) cin >> s_in[i];
	vi y; 
	fo(i, n){
		ll f=1;
		fo(j, k){
			if(s[i] == s_in[j]) {f=0; break;}
		}
		if(f) y.pb(i);
	}
	ll cnt=0;
	for(ll i=0; i<(ll)y.size(); i++){
		ll l = y[i];
		//cout << cnt << endl;
		if(l == 0){
			cnt = (n-1);
		}else{
			cnt += (n-(l+1)) + ((l) - ((i-1) >= 0 ? y[i-1]+1 : 0))*(n-l);
		}
	}
	cnt += y.size();
	cout <<  n*(n+1)/2 - cnt << endl;

}

int main(){
	ll t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}