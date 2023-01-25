#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	ll t;	cin >> t;
	while(t--){
		ll n;		cin >> n;
		ll a[n];	for(auto &l:a)	cin >> l;
		ll dp[n];	
		
		for(ll i=n-1; i>=0; i--){
			dp[i]=a[i];
			ll j=a[i]+i;
			
			if(j < n)	dp[i]+=dp[j];
			
		}	
		
		ll mx=0;
		for(auto l:dp) mx = max(mx, l);
		
		cout << mx << "\n";		
		
	}
	
	return 0;
	
}