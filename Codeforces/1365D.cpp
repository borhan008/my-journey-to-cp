#include<bits/stdc++.h>
using namespace std;
#define int long long

int arr[55][55];
int n, m;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool dfs(int i, int j, vector<vector<bool>>&vis ){

	if(i==n and j==m and arr[n][m] == 0) return true;

	if(i==n and j==m and arr[n][m] == 1) return false;

	vis[i][j] = true;
	bool ans = false;
	for (int k = 0; k < 4; k++) {
    int X = i + dx[k];
    int Y = j + dy[k];

    if(X > 0 and X <= n and Y > 0 and Y <= m){
    	if(vis[X][Y] or arr[X][Y] == 1) continue;
    	vis[X][Y] = true;
    	ans |= dfs(X, Y, vis);
    }
    
  }
	
	return ans;
	
}

int32_t main() {
  int t=1; cin >> t;

  while (t--) {
	 cin >> n >> m;
		
		bool pos = true;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				char x; cin >> x;
				if(x=='.') arr[i][j]=0;
				else if(x=='#') arr[i][j]=1;
				else if(x=='G') arr[i][j]=2;
				else arr[i][j]=3;
			}
		}

		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				if(arr[i][j] == 3){
					if(j-1 != 0 && arr[i][j-1] == 2) {
					
						pos = false;
					}
					if(j+1 <= m && arr[i][j+1] == 2){
						
						 pos = false;
					}
					if(i-1 != 0 && arr[i-1][j] == 2){
						 pos = false;
					}
					if(i+1 <= n && arr[i+1][j] == 2) pos = false;
					
					if(j-1 != 0 && arr[i][j-1] == 0){
						 arr[i][j-1] = 1;
					}
					if(j+1 <= m && arr[i][j+1] == 0)  {
						arr[i][j+1] = 1;
					}
					if(i-1 != 0 && arr[i-1][j] == 0) arr[i-1][j]=1;
					if(i+1 <= n && arr[i+1][j] == 0) arr[i+1][j]=1;
					arr[i][j]=1;
				}
			}
		}
		
		if(!pos){
			cout << "No\n"; continue;
		}

		vector<vector<bool>> vis(n+1, vector<bool> (m+1, false));
		
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				if(vis[i][j] || arr[i][j] != 2) continue;
				pos &= dfs(i, j, vis);
				vis[n][m] = false;
			}
		}
		
		if(pos) cout << "Yes\n";
		else cout << "No\n"; 
		
		
	} 
}