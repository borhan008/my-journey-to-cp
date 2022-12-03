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
#define fo1(i,n) for(ll i=1; i<=n; i++)
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
	ll n, m;
	cin >> n >> m;
	vi x;
	fo1(i, n){
		fo1(j, m){
			ll a=abs(1-i)+abs(1-j);
			ll b=abs(1-i)+abs(m-j);
			ll c=abs(n-i)+abs(m-j);
			ll d=abs(n-i)+abs(j-1);
			ll ans=max(a, max(b, max(c,d)));
			x.push_back(ans);
		}
	}
	sort(x.begin(), x.end());
	for(auto l:x) cout << l << " ";
	cout << endl;

}

int main(){
	ll t=1;
	cin >> t;
	while(t--){
		solve();
	}
}