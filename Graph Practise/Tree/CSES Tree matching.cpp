#include<bits/stdc++.h>
using namespace std;
 
#define int long long
const int mx = 1e6;
  
int dp[mx][2]; 
vector<int> adj[mx];
 
int dfs(int u, int par, int take){
	if(dp[u][take] != -1) return dp[u][take];
	 
	if(take){
		int ans = 0;
		for(auto v:adj[u]){
			if(v==par) continue;
			ans += dfs(v, u, 1);
		}
		int lc = 0;
		for(auto v:adj[u]){
			if(v==par) continue;
			lc = max(lc, ans -  dp[v][1] + 1 + dfs(v,u,0));
		}
		return dp[u][1] = lc;
	}else{
		int ans = 0;
		for(auto v:adj[u]){
			if(v==par) continue;
			ans += dfs(v, u, 1);
		}
		return dp[u][0] = ans;
	}
}   
            
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	int t=1;	//cin >> t;
	
	while(t--){
		int n;	cin >> n;	n--;
		for(int i=0; i<=n+1; i++){
			dp[i][0] = -1; dp[i][1] = -1;
		}
		while(n--){
			int u, v;	cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		cout << max(dfs(1,-1,0), dfs(1,-1,1));
	}
}	
