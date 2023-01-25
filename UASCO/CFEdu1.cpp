#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
	ll n, m;	cin >> n >> m;
	ll a[n];	for(auto &l:a)	cin >> l;
	ll b[m];	for(auto &l:b)	cin >> l;
	
	vector<ll> ans;
	ll cnt=0;
	for(int i=0; i<m; i++){
		while(cnt < n && a[cnt] < b[i])
			cnt++;
		ans.push_back(cnt);		
	}
	
	for(auto l:ans)	cout << l << " ";
	
}