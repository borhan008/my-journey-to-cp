#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll x, n;
ll dp[500][500];
ll ans(ll i, ll j, vector<vector<ll>> &arr){
    if(i >= x-1) return arr[x-1][0];
    if(j >= n || j < 0) return 0;	
   if(dp[i][j] != -1) return dp[i][j];
    
    ll res = 0;
    if(i < (n-1) ){
        res +=(arr[i][j] + 
        max(ans(i+1, j+1, arr), ans(i+1, j, arr)));
    } else{
    	res +=(arr[i][j] + 
         max(ans(i+1, j-1, arr), ans(i+1, j, arr)));
    }
    
	return dp[i][j]=res;
}


int main(){
    ll t;
    cin >> t;
    ll k=0;
    while(t--){
        k++;
        cin >> n;
        x=2*n - 1;
        for(ll i=0; i<=x; i++){
        	for(ll j=0; j<=n; j++){
        		dp[i][j]=-1;
        	}
        }
        vector<vector<ll>> arr(x+5, vector<ll>(n+5, 0));
       	for(ll i=0; i<n-1; i++){
       		for(ll j=0; j<=i; j++) {
       			//cout << j+1 << " ";
       			cin >> arr[i][j]; 
       		}
       	}
       	for(ll i=n-1, j=n; i<x; i++, j--){
       		for(ll k=0; k<j; k++){
       			cin >> arr[i][k];
       		}
       	}
       	cout << "Case " << k << ": " << ans(0,0,arr) << "\n";
    }
    
    return 0;
}