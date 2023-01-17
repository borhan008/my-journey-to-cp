#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n,k;	cin >> n >> k;
	ll a[n]; for(ll i=0; i<n; i++)a[i]=0;
	
	ll x, y;
	while(k--){
		cin >> x >> y;
		a[x-1]++;
		a[y]--;
		
	}
	for(ll i=0; i<n; i++) {
		a[i+1] += a[i];
	}
	
	sort(a, a+n);
	
	cout << a[n/2];
	
	return 0;
}