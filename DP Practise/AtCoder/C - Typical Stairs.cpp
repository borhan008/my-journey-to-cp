#include<bits/stdc++.h>
using namespace std;

#define int long long int
const int mod = 1e9+7;

int32_t main(){
	int n, m;	cin >> n >> m;
	set<int> st;
	while(m--){
		int x; 	cin >> x;
		st.insert(x);
	}
	int dp[n+2];
	memset(dp, 0, sizeof dp);
	dp[0] = 1;
	if(st.find(1) == st.end()) dp[1] = 1;
	for(int i=2; i<=n; i++){
		if(st.find(i) != st.end()) continue;
		dp[i] = (dp[i-1] + dp[i-2])%mod;
	}
	
	cout << dp[n];
}