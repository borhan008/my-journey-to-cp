#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll t; cin >> t;
	while(t--){
		ll n;	cin >> n;
		
		ll arr[n];	for(auto &l:arr) cin >> l;
		
		vector<vector<ll>> tree(n+2);
		vector<ll> init(2005);
		
		
		for(ll i=0; i<n; i++){
			tree[0].push_back(arr[i]);
			init[arr[i]]++;
		}
		for(ll i=1; i<=n; i++){
			
			for(ll j=0; j<n; j++){
				tree[i].push_back(init[tree[i-1][j]]);
			}
			
			for(ll i=0; i<=n+1; i++) init[i]=0;
			
			for(ll j=0; j<n; j++){
				init[tree[i][j]]++;
			}			
		}
		
		
		ll q;	cin >>q;
		while(q--){
			ll xi, ki;	cin >> xi >> ki;
			if(ki >= n) cout << tree[n][xi-1] << endl;
			else cout << tree[ki][xi-1] << "\n";
		}
	}

	return 0;
}