#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll n, w;	cin >> n >> w;
  
  	multimap<ll, ll> mp;
  	for(ll i=1; i<=n; i++){
    	ll x,y;	cin >> x >> y;
      	mp.insert({x, y});
    }
  
  	ll dp[n+5][w+5];
  	for(ll i=0; i<=w; i++) dp[0][i]=0;
	  
  	int j=0;
  	for(auto l:mp){
      	j++;
      	dp[j][0]=0;
    	for(ll i=1; i<=w; i++){
			if(i >= l.first)
        		dp[j][i] = max(dp[j-1][i], l.second + dp[j-1][i-l.first]);
			else dp[j][i]=dp[j-1][i];	
        }
    }
  
  	cout << dp[n][w] << "\n";

	return 0;
}