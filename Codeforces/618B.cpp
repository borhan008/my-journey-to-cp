#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n, x;	cin >> n;
	vector<ll> a[n];

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++)	{
			cin >> x;
			a[i-1].push_back(x);
		}
	}

	vector<ll> ans(n, 0);
	bool lastFound = false;

	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
			ans[i]=max(ans[i], a[j][i]);
		}

		if(ans[i] == n-1 && !lastFound){
			ans[i]++;
			lastFound=true;
		}
		
	}


	for(auto l : ans)	cout << l << " ";

	return 0;
}
