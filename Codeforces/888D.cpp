#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll nck(ll n, ll k){
	ll ans = 1;
	
	for(ll i=n-k+1; i<=n; i++) ans*=i;
	for(ll i=2; i<=k; i++) ans/=i;
	
	return ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n, k;	cin >> n >> k;
	
	ll ans = 0;
	
	if(k>=2) ans += nck(n,2);
	if(k>=3) ans += 2*nck(n,3);
	if(k>=4) ans += 8*nck(n,4) + nck(n,4);
	
	cout << 1 + ans << endl;

	return 0;
}