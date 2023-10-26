#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define all(v) v.begin(), v.end()
#define fi first
#define se second
const int N = 3*1e5;

int par[N];
int sizes[N];

struct DSU{
	void init(int n){
		for(int i=1; i<=n; i++){
			par[i]=i;
			sizes[N]=1;
		}
	}
	
	int find(int a){
		if(par[a]==a) return a;
		return par[a] = find(par[a]);
	}
	
	void merge(int a, int b){
		a = find(a);
		b = find(b);
		if(a != b){
			if(sizes[a] < sizes[b])
				swap(a,b);
	
			par[b]=a;
			sizes[a] += sizes[b];
		}
	}
};
 
int32_t main(){
	int t=1;	cin >> t;
	
	while(t--){
		DSU dsu;
		int n, m;	cin >> n >> m;
		dsu.init(n);
		while(m--){
			int x, y;	cin >> x >> y;
			dsu.merge(x, y);
		}
		
		map<int, int> mp;
		for(int i=1; i<=n ;i++){
			mp[dsu.find(i)]++;
		}
		int ans = 0;
		for(auto [a, b] : mp){
			for(auto [x, y] : mp){
				if(x==a && y==b) continue;
				if(x < a) continue;
				ans += 2*b*y;
			}
		}
		if(mp.size() == 1) ans = 0;
		cout << ans << "\n";
		
	}
}