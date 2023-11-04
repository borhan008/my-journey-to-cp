#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
const int mx = 4*1e5 +5;

const int inf = (int)1e18;

int timer = 1;
int st[mx], en[mx], lt[mx];
int a[mx];
vector<int> adj[mx];
int seg[mx*4  + 5];

void dfs(int u, int par){
	st[u] = timer;
	lt[timer++] = a[u];
	
	for(auto v:adj[u]){
		if(v == par)	continue;
		dfs(v, u);
	}
	en[u] = timer;
	lt[timer++] = a[u];
}

void build(int v, int tl, int tr){
	if(tl == tr){
		seg[v] = lt[tl];
		return;
	}
	int tm = (tl+tr) >> 1;
	build(2*v, tl, tm);
	build(2*v+1, tm+1, tr);
	seg[v] = seg[2*v] + seg[2*v+1];
}

int query(int v, int tl, int tr, int l, int r){
	if(l > r) return 0;
	if(tl == l && tr == r){
		return seg[v];
	}
	int tm = (tl+tr) / 2;
	return query(2*v, tl, tm, l, min(tm, r)) + query(2*v+1, tm+1, tr, max(l, tm+1), r);
}

void update(int v, int tl, int tr, int pos, int val){
	if(tl == tr){
		seg[v] = val;
		return;
	}
	int tm = (tl+tr)/2;
	if(pos <= tm){
		update(2*v, tl, tm, pos, val);
	}else{
		update(2*v+1, tm+1, tr, pos, val);
	}
	seg[v] = seg[2*v] + seg[2*v+1];
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	int t=1;	//cin >> t;

	for(int j=1; j<=t; j++){	
		int n, m;	cin >> n >> m;
		
		for(int i=1; i<=n; i++) cin >> a[i];
		for(int i=1; i<=n-1; i++){
			int x, y;	cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		dfs(1, -1);
		build(1, 1, timer-1);
		while(m--){
			int x;	cin >> x;
			if(x==1){
				int pos, val;	cin >> pos >> val;
				update(1,1,timer-1,st[pos], val);
				update(1,1,timer-1,en[pos], val);
			} else{
				int pos;	cin >> pos;
				cout << (query(1, 1, timer-1, st[pos], en[pos])/2) << "\n";
			}
		}
	}	
}