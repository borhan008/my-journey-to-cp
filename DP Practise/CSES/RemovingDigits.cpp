#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll n;		cin >> n;
	ll dp[n+10];
	
	for(ll i=0; i<=n; i++) dp[i]=(ll)1e8;
	dp[0]=0;
	for(ll i=1; i<=n; i++){
		ll temp=i;
		ll ans=(ll)1e9;
		while(temp){
			ans = min(ans, 1+dp[i-temp%10]); 
			temp/=10;
		}
		
		dp[i]=ans;
	}
	cout << dp[n] ;
	return 0;
}