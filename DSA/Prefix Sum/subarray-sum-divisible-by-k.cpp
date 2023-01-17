#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll subarraysDivByK(ll nums[], ll n, ll k) {
	ll sum=0, ans=0;
	
	map<ll, ll> x;
	x[0]=1;
	
	for(ll i=0; i<n; i++){
		sum += nums[i];
		ans += x[(sum%k + k)%k];
		x[(sum%k +k)%k]++;
	}
	
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n,k;	cin >> n >> k;
	ll a[n]; for(auto &l:a)	cin >> l;
	
	cout << subarraysDivByK(a,n,k) << "\n";
	

	return 0;
}