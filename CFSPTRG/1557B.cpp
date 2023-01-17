#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll t; cin >> t;
	while(t--){
		ll n, k;	cin >> n >> k;
		
		ll a[n];	for(auto &l:a) cin >> l;
		ll b[n]; for(ll i=0; i<n; i++) b[i]=a[i];
		sort(b, b+n);
		
		ll ans=0;
		
		map<ll,ll> xx;
		for(ll i=0; i<n; i++) xx[a[i]]=i;
		
		for(ll i=0; i<n; i++){
			ll j= xx[b[i]];
			while(a[j+1]==b[i+1] && i+1 < n && j+1 < n){
				j++;
				i++;
			}
			ans++;
		}
		cout << ((ans <= k)? "YES" : "NO") << "\n";
		
	}

	return 0;
}