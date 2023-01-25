#include<bits/stdc++.h>
using namespace std;

#define ll 	long long
#define mod int(1e9+7)

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n;		cin >> n;
	ll grid[n+5][n+5];
	char x;
	
	for(ll i=1; i<=n; i++){
		for(ll j=1; j<=n; j++){
			cin >> x;
			
			if(x == '.')	grid[i][j]=0;
			else 			grid[i][j]=1;
		}
	}
	
	ll dp[n+5][n+5];
	memset(dp, 0, sizeof(dp));
	dp[1][1]=1;
	
	for(ll i=1; i<=n; i++){
		for(ll j=1; j<=n; j++){
			if(grid[i][j] == 1){
				dp[i][j]=0;
				continue;
			}
			if(j != n && grid[i][j+1] == 0)	dp[i][j+1] = (dp[i][j]+dp[i][j+1])%mod;
			if(i != n && grid[i+1][j] == 0) dp[i+1][j] = (dp[i][j]+dp[i+1][j])%mod;	
		}
	}
	
	

	cout << dp[n][n];
	return 0;
}