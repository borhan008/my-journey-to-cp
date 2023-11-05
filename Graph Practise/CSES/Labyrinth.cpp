#include<bits/stdc++.h>
using namespace std;

#define pb push_back

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int32_t main(){
	
	int n,m;	cin >> n >> m;
	vector<string> v;
	
	int x, y; int fx, fy;
	for(int i=0; i<n; i++){
		string s;	cin >> s;
		v.pb(s);
		for(int j=0; j<m; j++){
			if(s[j] == 'A') x=i, y=j;
			else if(s[j] == 'B') fx=i, fy=j;
		}
	}
	bool vis[n+1][m+1];
	memset(vis, false, sizeof vis);
	
	int dir[n+1][m+1];
	
	queue<pair<int, int>> q;
	q.push({x, y});
	
	while(!q.empty()){
		auto [a, b] = q.front();	q.pop();
		vis[a][b] = true;
		if(a==fx && b == fy){
			cout << "YES\n";
			string ans = "";
			while(a!=x || b!=y){
				if(dir[a][b] == 0){
					ans += "R";
					b--;
				} else if(dir[a][b] == 1){
					ans += "L";
					b++;
				} else if(dir[a][b] == 2){
					ans += "D";
					a--;
				} else{
					ans += "U";
					a++;
				}
				
			}
			reverse(ans.begin(), ans.end());
			cout << ans.size() << "\n" << ans;
			return 0;
		}
		for(int i=0; i<4; i++){
			int xx = a+dx[i];	int yy = b+dy[i];
			if(xx < 0 || xx >= n || yy < 0 || yy >= m) continue;
			if(vis[xx][yy]) continue;
			if(v[xx][yy] == '#')	continue;
			dir[xx][yy] = i;
			vis[xx][yy] = true;
			q.push({xx, yy});
		}
	}
	
	cout << "NO";
	return 0;
	
}