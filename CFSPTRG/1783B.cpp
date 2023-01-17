#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll t;	cin >> t;
	while(t--){
		ll n;	cin >> n;
		ll x=1, y=n*n;
		vector<ll> v(n*n+5);
		for(ll i=0; i<n*n; i++){
			if(i&1) v[i]=x++;
			else v[i]=y--;
		}
		ll l=0;
		
		for(ll i=1; i<=n; i++){
			if(i&1){
				for(ll j=l; j<l+n; j++){
					cout << v[j] << " ";
				}
				cout << "\n";
				l += n;
			}else{
				for(ll j=n+l-1; j>=(l); j--)
					cout << v[j] << " ";
				cout << "\n";
				l += (n);
			}
		}
		
	}
	
	return 0;
}