#include <bits/stdc++.h>
using namespace std;


void dfs(vector<int> g[], int u, int parent, int start[], int end[],int &cnt){
	start[u]=cnt++;
	
	for(int i=0; i<(int)g[u].size(); i++){
		int v=g[u][i];
		if(v != parent)
			dfs(g, v, u, start, end, cnt);
	}
	end[u]=cnt++;
}	

void preProcess(int edges[][2], int parent, 
int start[], int end[], int n){
	vector<int> g[n+1];
	
	for(int i=0; i<n-1; i++){
		int u=edges[i][0];
		int v=edges[i][1];
		
		g[u].push_back(v);
		g[v].push_back(u);
	}
	
	int cnt=0;
	
	dfs(g, parent, -1, start, end, cnt);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 	std::freopen("ancestor.in", "r", stdin);
 	std::freopen("ancestor.out", "w", stdout);	
	
	
	int n; cin >> n;
	int parent; 
	int edges[n-1][2];
	int z=0;
	for(int i=1; i<=n; i++){
		int x; cin >> x;
		if(x==0){
			parent=i;
			continue;
		}
		edges[z][0]=i;
		edges[z][1]=x;
		z++;
	}
	int sz = n;
	int start[sz];
	int end[sz];
	preProcess(edges, parent, start, end, n);
	int t;
	cin >> t;
	while(t--){
		int u,v;	cin >> u >> v;
		cout << (start[u] <= start[v] && end[u] >= end[v]) << endl;
	}
	
	return 0;
}