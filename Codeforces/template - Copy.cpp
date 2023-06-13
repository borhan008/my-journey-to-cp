#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll t=1; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll a[n]; 
		for(ll i=0; i<n; i++) {a[i]=i;}
		while(next_permutation(a,a+n)){
			ll ans=0;

			for(ll i=0; i<n-1; i++) ans=max(ans, a[i]^a[i+1]);
			if(ans==4){
			for(auto l:a)	cout << l << " ";
			cout << "=> " << ans << "\n";

			}
		}
		cout << "................................\n";	
	} 
	return 0;
}