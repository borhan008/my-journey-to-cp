#include<bits/stdc++.h>
using namespace std;
#define int long long int
int dp[100][100][100][2];
int func(int n, int k, int sum, vector<int> &arr,
 bool flag, int s){
	
	if(n==(int)arr.size()){
		return (sum%k == 0 && s%k ==0);
	}

	if(dp[n][sum][s][flag] != -1) return dp[n][sum][s][flag];
	
	int ans = 0;
	for(int i=0; i<=9; i++){
	
			if(flag && i > arr[n]) break;
			ans += func(n+1, k, (sum+i)%k, arr, i<arr[n]?0:flag, (s*10 + i)%k);
		
	}
	return  dp[n][sum][s][flag] = ans;
}

int32_t main(){
	
	int t;	cin >> t;
	int i = 1;
	while(t--){
		int a, b, k;
		cin >> a >> b >> k;

		if(k > 82){
			cout << "Case " << i++ << ": 0\n";
			continue;
		}
		vector<int> arr;
		string s;
		a--;
		while(a){
			arr.push_back(a%10);
			a/=10;
		}
		vector<int> arr2;
		while(b){
			arr2.push_back(b%10);
			b/=10;
		}	

		memset(dp, -1, sizeof(dp));
		reverse(arr.begin(), arr.end());
		reverse(arr2.begin(), arr2.end());

		int x = func(0, k, 0, arr2, true, 0) ;	
		
		memset(dp, -1, sizeof(dp));
		int y = func(0, k, 0, arr, true, 0);	
		
		cout << "Case " << i++ << ": ";
		cout << (x - y) << "\n" ;
	}
	
}