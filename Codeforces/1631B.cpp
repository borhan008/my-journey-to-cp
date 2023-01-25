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
#define inf 2e18
#define fo(i,n) for(ll i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define input(n,x) fo(i, n) cin >> x[i];
#define output(x) for(auto i : x) printf("%lld ", i)
#define sortall(x) sort(all(x))
#define YES printf("YES\n")
#define NO printf("NO\n")
#define endl "\n"


void solve(){
	ll n;	cin >> n;
	ll a[n+1]; fo(i, n) cin >> a[i+1];
	a[0]=-1;
	
	ll cnt=0;
	ll x=a[n];
	ll i=1;
	ll y=n-1;
	cnt=0;
	while(y >= 1){
		
		if(x == a[y]){
			y--;
			i++;
			continue;
		}
		if(y < 1) break;
		y-=(i);
		cnt++;
		i*=2;
		
		
		
	}
	printf("%lld\n", cnt);
	
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    
 	ll t=1; cin >> t;
 	while(t--) solve();
 	
	return 0;
}