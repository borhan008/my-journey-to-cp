#include<bits/stdc++.h> 
using namespace std; 
#define int long long int

int32_t main(){
	int n;	cin >> n;
	int arr[n+1][n+1] = {0};
	int ans = -200;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> arr[i][j];
			arr[i][j] = arr[i][j] + arr[i-1][j] 
				+ arr[i][j-1] - arr[i-1][j-1];
		}
	}
	

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			for(int k=i; k<=n; k++){
				for(int l=j; l<=n; l++){
					int x = arr[k][l] -
					 arr[i-1][l] - arr[k][j-1]
					+ arr[i-1][j-1];
					ans = max(ans, x);
				}
			}
		}
	}	
	cout << ans;
}