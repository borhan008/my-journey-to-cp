#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	
	ll n;	cin >> n;
	ll arr[n]; for(auto &l:arr)	cin >> l;
	ll ps[n];
	ps[0]=arr[0];
	for(ll i=0; i<n; i++) ps[i+1]=ps[i]+arr[i+1];
	
	ll mx=ps[0], mn=0;
	
	for(ll i=0; i<n; i++){
		mx = max(mx, ps[i]-mn);
		mn = min(mn, ps[i]);
	}
	
	cout << mx ;
	
}