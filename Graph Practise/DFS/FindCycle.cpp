#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj((int)1e6+10);
vector<int> color((int)1e6+10, 0);
vector<int> parent((int)1e6+10, -1);

vector<vector<int>> cycle;
int cycle_start, cycle_end;

bool dfs(int v) {
    color[v] = 1;
    for (int u : adj[v]) {
        if (color[u] == 0) {
            parent[u] = v;
            if (dfs(u))
                return true;
        } else if (color[u] == 1) {
            cycle_end = v;
            cycle_start = u;
            return true;
        }
    }
    color[v] = 2;
    return false;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	std::freopen("cycle2.in", "r", stdin);
	std::freopen("cycle2.out", "w", stdout);
	cycle_start=-1;
	int m,n; cin >> n >> m;

	
	for(int i=0; i<m; i++){
		int k, l; cin >> k >> l;
		adj[k].push_back(l);
	}
	
	
 for (int v = 0; v < n; v++) {
        if (color[v] == 0 && dfs(v))
            break;
    }

    if (cycle_start == -1) {
        cout << "NO" << endl;
    } else {
        vector<int> cycle;
        cycle.push_back(cycle_start);
        for (int v = cycle_end; v != cycle_start; v = parent[v])
            cycle.push_back(v);
        //cycle.push_back(cycle_start);
        reverse(cycle.begin(), cycle.end());

        cout << "YES" << endl;
        for (int v : cycle)
            cout << v << " ";
        cout << endl;
    }
	return 0;	
}