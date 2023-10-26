#include<bits/stdc++.h> 
using namespace std;

#define int long long

int32_t main(){
	int t=1;	//cin >> t;
	while(t--){
		string n;	cin >> n;
		int ans=0;
		for(auto l:n){
			ans += (l - '0');
		}
		if(ans%3 == 0){
			cout << 2;
		}else{
			cout << 1 << "\n" << ans%3;
		}
	}
}