#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll subarrayOfK(ll n, ll k, ll arr[]){
	ll ans=0;
	ll sum=0;	
	map<ll, ll> mp;
	mp[0]=1;
	for(ll i=0; i<n; i++){
		sum += arr[i];
		ans += mp[sum-k];
		mp[sum]++;
	}
	return ans;
}


int main(){
	
	ll n, k;	cin >> n >> k;
	ll arr[n];	for(auto &l:arr) cin >> l;
	cout << subarrayOfK(n,k, arr);

}