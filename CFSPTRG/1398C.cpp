#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll t;	cin >> t;
	while(t--){
		ll n;	cin >> n;
		string s;	cin >> s;
		
		ll a[n]; 
		for(int i=0; i<n; i++) a[i]=s[i]-'0';
		
		map<ll,ll> mp;
		mp[0]=1;
		
		ll ans=0;
		ll sum=0;
		
		for(ll i=0; i<n; i++){
			sum += a[i];
			ans += mp[i+1-sum];
			mp[i+1-sum]++;
		}
		cout << ans << "\n";
		
	}
}