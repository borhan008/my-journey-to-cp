#include<bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main() {
	int t=1;	//cin >> t;
	while(t--){
		int n;	cin >> n;
		int a[n];
		for(int i=0; i<n; i++) cin >> a[i];
		int m;	cin >> m;
		int b[m];
		for(int i=0; i<m; i++) cin >> b[i];
	
	
		int k;	cin >> k;
		bool dp[k+2];
		memset(dp, false, sizeof dp);
		dp[0]=true;
		for(int j=1; j<=k;  j++){
			for(int i=0; i<n; i++){
			if(binary_search(b, b+m, j)){
				continue;
			} else if(j < a[i]){
					dp[j] = dp[j];
				else{
					dp[j] = dp[j] | dp[j-a[i]];
				}
			}
		}
		if(dp[k]){
			cout << "Yes";
		} else cout << "No";
	}	
}	
	