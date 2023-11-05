#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
const int mx = 4*1e5 +5;
 
const int inf = (int)1e18;
 
int lt[mx]; int s[mx]; int e[mx];
int timer = 1;
int a[mx]; int arr[mx];
vector<int> adj[mx];
vector<int> tr[4 * mx];

void dfs(int u, int par){
	s[u] = timer;
	lt[timer++] = a[u];
	for(auto l:adj[u]){
		if(l == par) continue;
		dfs(l, u);
	}
	e[u] = timer;
 	lt[timer++] = a[u];
}



 
void build(int nod, int a, int b)
  {
    if (a == b)
    {
      tr[nod].push_back(arr[a]);
      return;
    }
    int mid = (a + b) >> 1;
    build(nod << 1, a, mid);
    build(nod << 1 | 1, mid + 1, b);
    merge(tr[nod << 1].begin(), tr[nod << 1].end(), tr[nod << 1 | 1].begin(), tr[nod << 1 | 1].end(), back_inserter(tr[nod]));
}
 
int query(int nod, int a, int b, int l, int r)
  {
    if (a > r || b < l)
    {
      return 0;
    }
    if (a >= l && b <= r)
    {
      return tr[nod].end() - upper_bound(tr[nod].begin(), tr[nod].end(), r);
    }
    int mid = (a + b) >> 1;
 
    return (query(nod << 1, a, mid, l, r) + query(nod << 1 | 1, mid + 1, b, l, r));
}
 
 
 
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	int t=1;	//cin >> t;
 
	for(int j=1; j<=t; j++){	
		int n;	cin >> n;
		
		for(int i=1; i<=n; i++) cin >> a[i];
		for(int i=1; i<=n-1; i++){
			int x, y;	cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		dfs(1, -1);
		
		unordered_map<int, int> mp;
		for(int i=timer-1; i>=1; i--){
			if(mp[lt[i]] == 0){
				arr[i] = timer;
				mp[lt[i]] = i;				
			} else{
				arr[i] = mp[lt[i]];
				mp[lt[i]] = i;
			}
		}
			
		build(1,1, timer-1);
	
		for(int i=1; i<=n; i++){
			cout << query(1,1,timer-1, s[i], e[i]) << " ";
		}
	}	
}