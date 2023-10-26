#include<bits/stdc++.h> 
using namespace std;

int32_t main(){
	int t=1;	cin >> t;
	int cs = 1;		
	while(t--){
		int n;	cin >> n;
		
		int x[n+1][4];
		for(int i=1; i<=n; i++){
			for(int j=1; j<=3; j++)
				cin >> x[i][j];
		}
		int dp[n+1][4] = {0};
		
		for(int i=1; i<=n; i++){
			for(int j=1; j<=3; j++){
				int xx=1,y=2;
				if(j==1) xx=2, y=3;
				if(j==2) xx=1, y=3;
				dp[i][j] = x[i][j] + min(dp[i-1][xx], dp[i-1][y]);
			}
		}	
		cout << "Case " << cs++ << ": " <<  min({dp[n][1], dp[n][2], dp[n][3]}) << "\n";
	}
}