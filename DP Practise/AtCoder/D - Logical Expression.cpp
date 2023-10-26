#include<bits/stdc++.h>
using namespace std;

#define int long long int
const int mod = 1e9+7;


int32_t main() {
	int t=1;	//cin >> t;
	while(t--){
		int n;	cin >> n;
		bool arr[n+1] = {0};
		for(int i=1; i<=n; i++){
			string s;	cin >> s;
			if(s=="OR") arr[i] = 0;
			else 				arr[i] = 1;
		}
		
		map<bool, int> mp[n+2];
		mp[0][true] = 1;
		mp[0][false] =1;
		
		
		for(int i=1; i<=n; i++){
			mp[i] = mp[i-1];
			if(arr[i] == false){
				mp[i][true] += mp[i-1][false] + mp[i-1][true];
			} else{
				mp[i][false] += mp[i-1][true]+mp[i-1][false];
			}
		}
		
		cout << mp[n][true];
	}	
}	
	