#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	ll t; cin >> t;
	while(t--){
		ll n; 	cin >> n;
		
		ll arr[n]; for(auto &l : arr) cin >> l;
		sort(arr, arr+n);
		
		set<ll> s;
		
		for(auto l:arr){
			auto x = s.find(l);
			while((x != s.end() || l > n) && l > 1){
				l= l/2;
				x = s.find(l);
				if(l==1) break;
			}
			s.insert(l);	
		}
		if(s.size() == n) cout << "YES\n";
		else cout << "NO\n";
		
	}
	
	return 0;
}