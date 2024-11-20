#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
const int mx = 3*1e5 +5;
 
const int inf = (int)1e18;

 
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	int t=1;	cin >> t;
 

	for(int j=1; j<=t; j++){	
		int n;	cin >> n;
		map<string, int> mp;
		vector<int> adj[2*n + 5];
		vector<int> indegree(2*n +5 , 0);
		int cnt = 1;
		for(int i=1; i<=n; i++){
			string x, y;	cin >> x >> y;
			
			if(mp[x] == 0){
				mp[x] = cnt++;
			} if(mp[y] == 0){
				mp[y] = cnt++;
			}
			int xi=mp[x]; int yi = mp[y];
			adj[xi].push_back(yi);
			indegree[yi]++;
		}
		
		queue<int> q;
		vector<int> ans;
		for(int i=1; i<=cnt; i++){
			if(indegree[i] == 0){
				q.push(i);
			}
		}
		
		while(!q.empty()){
			auto u = q.front();	q.pop();
			ans.push_back(u);
			
			for(auto v:adj[u]){
				indegree[v]--;
				if(indegree[v] == 0) q.push(v);
			}
		}
		cout << "Case " << j << ": ";
		if(ans.size() == cnt) cout << "Yes\n";
		else 									cout << "No\n";		
	}	
}