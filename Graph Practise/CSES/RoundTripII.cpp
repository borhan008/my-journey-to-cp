#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define maxn (int)1e6+10

vector<vector<int>> adj(maxn);
vector<int> color(maxn, 0);
vector<int> parent(maxn, -1);
int cycle_start, cycle_end;


bool dfs(int u){
	color[u]=1;
	
	for(auto v : adj[u]){
		if(v==u) continue;
		if(color[v]==0){
			parent[v]=u;
			if(dfs(v)) return true;
		}
		else if(color[v]==1){
			cycle_start = v;
			cycle_end = u;
			return true;
		}
	}
	
	color[u]=2;
	return false;
}

int main(){
	
	int n,m; cin >> n >> m;
	
	cycle_start = -1; cycle_end = -1;
	
	for(int i=0; i<m; i++){
		int a,b; cin >> a >> b;
		adj[a].push_back(b);
	}
	
	for(int v=1; v<=n; v++){
		if(color[v]==0 && dfs(v))
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
		reverse(cycle.begin(), cycle.end());
		
		cout << cycle.size() << endl;
		for(auto v:cycle) cout << v << " ";
	}	
	
}
