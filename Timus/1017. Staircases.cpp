#include<bits/stdc++.h> 
using namespace std;

#define int long long

int dp[505][505];
int func(int n, int last, int x){
	if(n==0) return 1;
	if(n < 0) return 0;
	if(dp[n][last] != -1 ) return  dp[n][last];
	int ans = 0;
	for(int i=1; i<=n; i++){
		if(i > last){
			ans += func(n-i, i, x+1);
		}
	}
	return dp[n][last]=ans;
}

int32_t main(){
	int t=1;	//cin >> t;
	memset(dp, -1, sizeof dp);
	while(t--){
		int n;	cin >> n;
		cout << func(n, 0, 0) - 1 ;
	}
}