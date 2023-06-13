#include<bits/stdc++.h>
using namespace std;

#define ll long long



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    
 	ll t=1; cin >> t;
 	while(t--){
 		ll x,n,m;
 		cin >> x >> n >> m;
 		for(ll i=0; i<n; i++){
 			if(x <= 20) break;
 			x/=2;
 			x+=10;
 		}
 		x-=(10*m);
 		if(x <= 0)	cout << "YES\n";
 		else 		cout << "NO\n";
 	}
 	
	return 0;
}