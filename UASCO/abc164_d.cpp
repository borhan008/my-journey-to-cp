#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s;	cin >> s;
	ll suf[(ll)s.length()];
	
	ll sum = 0;
	ll power_of_ten = 1;
	for(ll i=(ll)s.length()-1; i>=0; i--){
		suf[i]=(sum+(s[i]-'0')*power_of_ten)%2019;
		sum = suf[i];
		power_of_ten = power_of_ten*10%2019;
	}
	
	
	map<ll, ll> mp;
	mp[0]=1;
	ll ans=0;
	
	for(ll i=0; i<(ll)s.length(); i++){
		ans += mp[suf[i]];
		mp[suf[i]]++;
	}
	
	cout << ans;
	
	

	return 0;
}