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


void solve(){
	ll n,k;
	vector<int> x (101,0);

	cin >> n >> k;
	ll a;
	for(int i=1; i<=n; i++){
		cin >> a;
		x[a] = x[a]+1;
	}
	ll ans = n;
	sort(all(x));
	for(int i=100; i>=1; i--){
		if(x[i]==0 || x[i]==1) continue;
		ll localAns = ans - x[i] + k;
		if(localAns >= ans) break;
		ans = min(ans, localAns);
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