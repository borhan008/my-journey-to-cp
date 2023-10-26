#include<bits/stdc++.h>
using namespace std;

#define int long long int
const int mx = 20005;
vector<int> adj[mx];

void dfs(int i, vector<bool> &vis){
	vis[i]=true;
	for(auto v:adj[i]){
		if(vis[v]) continue;
		dfs(v, vis);
	}
}

int32_t main() {
	int t=1;	//cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		for(int i=1; i<=m; i++){
			int u,v;	cin >> u >> v;
			adj[u].push_back(v);
		}
		int count = 0;
		for(int i=1; i<=n; i++){
				vector<bool> vis(n+5, false);
				dfs(i, vis);
				for(auto l:vis) if(l) count++;
		}
		cout << count ;
	}	
}	
	