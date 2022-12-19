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
	ll n;
	cin >> n;
	vi x;
	ll mm = 0, a=0;
	
	for(ll i=2; i*i<=n; i++){
		ll local=0;
		ll x=n;
		while(x%i == 0){
			local++;
			x/=i;
		}
		if(local>mm) {
			mm=local;
			a=i;
		}
	}
	
	if(a==0 || mm==1) cout << 1 << endl << n << endl;
	else{
		cout << mm << endl;
		for(ll i=1; i<mm; i++) cout << a << " ";
		cout << (ll)a*(n/(ll)pow(a,mm)) << " ";		
		cout << endl;
	}
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    
 	ll t=1; cin >> t;
 	while(t--) solve();
 	
	return 0;
}