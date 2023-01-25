#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;	cin >> n;
	
  	int arr[n+5][3];
  	for(int i=1; i<=n; i++){
    	cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
  
  	int dp[n+5][3];
  	dp[0][0]=0;
  	dp[0][1]=0;
  	dp[0][2]=0;
  	
  	int ans=0;
  
  	for(int i=1; i<=n; i++){
    	for(int j=0; j<3; j++){
        	dp[i][j]=arr[i][j];
        	
          	if(j==0) dp[i][j]+= max(dp[i-1][1], dp[i-1][2]);
          	else if(j==1) dp[i][j] += max(dp[i-1][0], dp[i-1][2]);
          	else dp[i][j] += max(dp[i-1][0], dp[i-1][1]);
          
          	ans = max(ans, dp[i][j]);
        }
    }
  
  	cout << ans;
	
}