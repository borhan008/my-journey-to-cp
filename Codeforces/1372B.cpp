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

bool checkPrime(ll n){
	for(ll i=2; i<=sqrt(n); i++){
		if(n%i == 0) return false;
	}
	return true;
}

void solve(){
	ll n;
	cin >> n;

			ll a=0;
			ll ans=inf;
			for(ll i=2; i<=(ll)100000; i++){
				if(n==i) break;
				if(n%i==0) {
					cout << n/i << " " << n - n/i << endl;
					return; 
				}
				
			}
			cout << 1 << " " << n-1<< endl;
		
	
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    
 	ll t=1; cin >> t;
 	while(t--) solve();
 	
	return 0;
}