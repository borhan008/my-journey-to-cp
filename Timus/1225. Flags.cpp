#include <bits/stdc++.h>
using namespace std;

#define ll  long long

ll dp[100][100][100];

ll func(int n, int f, int s){
	if(n==0) {
		if(s==2) return 0;
		return 1;
	}
		

	if(f!=0 && s!=0 && dp[n][f][s] != -1) return dp[n][f][s];
	ll ans = 0;
	if(f==-1){
		ans += func(n-1, 1, -1);
		ans += func(n-1, 3, -1);
	}
	else if(s == -1){
		for(ll i=1; i<=3; i++){
			if(f != i) {
				ans += func(n-1, f, i);
			}
		}
	}
	else if(s==2){
		if(f==1) ans += func(n-1, s, 3);
		if(f==3) ans += func(n-1, s, 1);
	} else{
		for(int i=1; i<=3 ; i++){
			if(i != s){			
				ans += func(n-1, s, i);
			}
		}
	}
	return dp[n][f][s]=ans;
}

int main() {
	memset(dp, -1, sizeof(dp));
	ll n;	cin >> n;	
	cout << func(n, 0,0);
}
