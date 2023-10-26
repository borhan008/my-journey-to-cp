#include<bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main() {
	int t=1;	//cin >> t;
	while(t--){
		int n,m;	cin >> n >> m;
		int arr[n+2][n+2];
		for(int i=1; i<=n; i++){
			string s;	cin >> s;
			for(int j=0; j<m; j++){
				if(s[j] == '.') arr[i][j+1]=0;
				else arr[i][j+1] = 1;
			}
		}
		int dp[n+2][n+2];
		int ans = 0;
		memset(dp, 0, sizeof dp);
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				if(arr[i][j]){
					dp[i][j] = -99999999;
				} else{
					if(i==1){
						dp[i][j] = 1 +  dp[i][j-1];
					} else if(j==1){
							dp[i][j] = 1 +  dp[i-1][j];
					}
					else dp[i][j] = 1 + max(dp[i-1][j], dp[i][j-1]);
					ans = max(ans, dp[i][j]);
				}
			}
		}
		cout << ans;
	}	
}	
	