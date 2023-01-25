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
	ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	vi v;
	ll cnt=0;
	for(ll i=0; i<n; i++){
		if(s[i]=='1') v.pb(i+1);
	}
	if(v.size()==0){
		for(ll i=1; i<=n; i+=(k+1)){
			cnt++;
		}
		
	}else{
		for(ll i=v[v.size()-1]+k+1; i<=n; i+=(k+1) ) cnt++;
		for(ll i=1; i<=v[0]-k-1; i+=(k+1) ) cnt++;
			for(ll i=0; i<v.size()-1; i++){
				for(ll j=v[i]+k+1; j<=v[i+1]-k-1; j+=(k+1))
					cnt++;
			}
		
	}

	pl(cnt);

}

int main(){
	ll t=1;
	cin >> t;
	while(t--){
		solve();
	}
}