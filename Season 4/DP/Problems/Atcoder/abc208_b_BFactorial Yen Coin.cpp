#include<bits/stdc++.h>
using namespace std;
int dp[(int)1e7+5];

int32_t main(){
	dp[0] = 0;
	memset(dp, (int)1e9, sizeof(dp));
	int n=1;
	vector<int> v;
	for(int i=1; i<=20; i++){
		dp[n] = 1;
		n*=i;
		if(n > (int)1e7) break;
		v.push_back(n);
	}
	
	for(int j=3; j<=(int)1e7; j++){
		int x=0;
		for(auto l:v){
			if(l > j) break;
			x=l;
		}
	
		dp[j] = 1 + dp[j-x];
	}	
	
	int m;	cin >> m;
	cout << dp[m] ;
}