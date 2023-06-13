#include<bits/stdc++.h>
using namespace std;


#define ll long long

int main(){
	ll t;	cin >> t;
	
	while(t--){
		ll n,k;						cin >> n >> k;
		ll a[n*k]; for(auto &l:a)	cin >> l;
		
		ll ans=0;

		for(ll i=k*(n%2 == 0 ? (n/2) - 1 : ((n+1)/2) - 1 ); i<n*k; i+=(n%2 == 0 ? (n+1-(n/2)) : (n+1-(n+1)/2))){
			ans += a[i];
		}
		cout << ans << "\n";
	}
	
	return 0;
}