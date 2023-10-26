#include<bits/stdc++.h>
using namespace std;

#define int long long int
const int mod = 1e9 + 7;


int32_t main() {
	int t=1;	//cin >> t;
	while(t--){
		int n,x;	cin >> n >> x;
		int a[n+1]; int b[n+1];
		for(int i=1; i<=n; i++){
			cin >> a[i] >> b[i];
		}
		int dp[x+1];
		memset(dp, false, sizeof dp);
		dp[0] = true;
		int temp_dp[x+1];
		for(int i=0; i<=x; i++) temp_dp[i] = dp[i];
		
		for(int j=1; j<=n; j++){
			for(int k=1; k<=b[j]; k++){
					for(int i=0; i<=x; i++){
						if(dp[i] == 1){
							if(i+a[j] > x) continue;
							temp_dp[i+a[j]] = true;
						}
					}
					for(int i=0; i<=x; i++) dp[i] = temp_dp[i];
			}
		}

		
		if(dp[x]) cout << "Yes";
		else			cout << "No";
	}	
}	
	