#include<bits/stdc++.h> 
using namespace std;

#define int long long 

string s;
int dp[105][105];

int func(int i, int j){
	if(i >= j) return 0;
	
	int &ans = dp[i][j];
	if(ans != -1) return dp[i][j];
	else ans=0;
	
	if(s[i]==s[j]){
		ans += func(i+1, j-1);
	} else{
		ans += min(1+func(i+1, j), 1+func(i, j-1));
	}
	
	return ans;
}


int32_t main(){
	int t=1;	cin >> t;
	int cs = 1;
	while(t--){	
		cin >> s;
		memset(dp, -1,sizeof(dp));
		int len = (int)s.length();
		cout << "Case " << cs++ << ": " <<  func(0, len-1) << "\n";
	}
}