#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define maxn (int)1e6+10

vector<vector<int>> adj(maxn);
vector<bool> visited(maxn, false);
vector<int> parent(maxn, -1);
int cycle_start, cycle_end;

bool dfs(int u, int par){
	visited[u]=true;
	
	for(auto v : adj[u]){
		if(v==par) continue;
		if(visited[v]){
			cycle_start = v;
			cycle_end = u;
			return true;
		}
		
		parent[v]=u;
		
		if(dfs(v, parent[v]))
			return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cycle_start = -1; cycle_end=-1;
	
	int n, m; cin >> n >> m;
	for(int i=0; i<m; i++){
		int k,l; cin >> k >> l;
		adj[k].push_back(l);
		adj[l].push_back(k);
	}
	
	
	for(int v=0; v<n; v++){
		if(!visited[v] && dfs(v, parent[v]))
			break;
	}
	
	if(cycle_start == -1){
		cout << "IMPOSSIBLE" << endl;
	}else{
		vector<int> cycle;
		cycle.push_back(cycle_start);
		
		for(int v=cycle_end; v!=cycle_start; v=parent[v]){
			cycle.push_back(v);
		}
		
		cycle.push_back(cycle_start);
		
		cout << cycle.size() << endl;
		for(auto l : cycle) cout << l << " ";
	}
}