#include<bits/stdc++.h>
using namespace std;

#define int long long int
const int mod = 998244353;


int32_t main() {
	int t=1;	//cin >> t;
	while(t--){
		int n;	cin >> n;
		int a[n+1], b[n+1];
		for(int i=1; i<=n; i++) cin >> a[i] >> b[i];
		int dp[n+2][2];
		memset(dp, 0, sizeof dp);
		dp[1][0] = 1; dp[1][1] = 1;
		for(int i=2; i<=n; i++){
			if(a[i] != a[i-1]) dp[i][0] += dp[i-1][0];
			if(a[i] != b[i-1]) dp[i][0] += dp[i-1][1];
			dp[i][0]%=mod;
			if(b[i] != a[i-1]) dp[i][1] += dp[i-1][0];
			if(b[i] != b[i-1]) dp[i][1] += dp[i-1][1];	
			dp[i][0]%=mod;		
		}
		
		cout << (dp[n][0] + dp[n][1])%mod;
	}	
}	
	