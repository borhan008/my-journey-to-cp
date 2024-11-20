#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
const int mx = 3*1e5 +5;
const int mod = 1e9 + 7;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	int t=1;	//cin >> t;
	while(t--){
		int n,q;	cin >> n >> q;
		
		int N = log2(n);
		
		int arr[N+ 2][n+2];
		arr[0][1] = 1;
		for(int i=2; i<=n; i++){
			int x;	cin >> x;
			arr[0][i] = x;
		}
		
		vector<int> depth(n+2, 0);
		for(int j=1; j<=n; j++){	
			if(j != 1)
				depth[j] = depth[arr[0][j]] + 1;
					
			for(int i=1; i<=N; i++){
				arr[i][j] = arr[i-1][arr[i-1][j]];
			}
		}
		
		while(q--){
			int u, k;	cin >> u >> k;
			int par = u;
			int x = 0;
			
			if(depth[u] < k){
				cout << "-1\n";
				continue;
			}
			for(int i=0; i <= N; i++){
				if(k & (1<<i)){
					par = arr[i][par];
				}
			}
			cout << par << "\n";
		}

	}
}