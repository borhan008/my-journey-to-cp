#include<bits/stdc++.h>
using namespace std;

#define int long long int
const int mod = 998244353;
const int mx = 1e6+2;
int arr[52][52][2505];

int n, m, k;
int func(int a, int  b, int c){	
	if(c < 0) return 0;
	if(a == 0 ) {
		return 1;
	}
	if(arr[a][b][c] != -1) return arr[a][b][c];
	int ans = 0;
	for(int i=1; i<=m; i++){
		ans = (ans%mod + func(a-1, b-1, c - i)%mod)%mod;
	}
	return arr[a][b][c] = ans%mod;
	
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	int t=1; //cin >> t;
	
	while(t--){
		cin >> n >> m >> k;
		memset(arr, -1, sizeof arr);
		int ans = func(n,m,k);
		cout << (ans)%mod;
	}
}	
	