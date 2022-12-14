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
	ll n;cin >> n;
	ll arr[n];
	input(n,arr);
	sort(arr, arr+n);
	ll mn = arr[0];
	ll mx = arr[n-1];
	ll cnt = count(arr,arr+n, mn);
	ll cnt2  = count(arr, arr+n, mx);
	if(mx==mn) cout << cnt*(cnt-1) << endl;
	else cout << cnt*cnt2*2 << endl;
	 
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    
 	ll t=1; cin >> t;
 	while(t--) solve();
 	
	return 0;
}