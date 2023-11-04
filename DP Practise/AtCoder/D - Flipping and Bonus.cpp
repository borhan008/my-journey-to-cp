#include<bits/stdc++.h>
using namespace std;

#define int long long int
const int mod = 1e9+7;
const int mx = 6000;
int dp[mx][mx];
int X[mx],n,m;
map<int, int> Y;
int func(int i, int count){
	if(i==n+1) return 0;
	if(dp[i][count] != -1) return dp[i][count];
	
	int ans = X[i] + Y[count+1] + func(i+1, count+1);
	ans = max(ans, func(i+1, 0));
	
	return dp[i][count] = ans;
}

int32_t main(){
	cin >> n >> m;
	memset(dp, -1, sizeof dp);
	for(int i=1; i<=n; i++) cin >> X[i];
	while(m--){
		int x, y;	cin >> x >> y;
		Y[x] = y;
	}
	
	cout << func(1, 0);
}