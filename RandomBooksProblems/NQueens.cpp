#include<bits/stdc++.h>
using namespace std;
int n, queen[20];
bool check(int row, int col){
	for(int i=0; i<row; i++){
		int prow = i;
		int pcol=queen[i];
		if(pcol==col || 
		abs(col-pcol)==abs(row-prow)){
			 return 0;
		}
	}
	return 1;
}
int rec(int level){
	if(level == n) return 1;
	int ans=0;
	for(int col=0; col<n; col++){
		if(check(level, col)){
			queen[level]=col;
			ans+=rec(level+1);
			queen[level]=-1;
		}
	}
	return ans;
}
void solve(){
	cin >> n;
	memset(queen, -1, sizeof(queen));
	cout << rec(0);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);	
	int t=1;
	while(t--) solve();
	return 0;
}