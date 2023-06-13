#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
	#define int long long	
	int t = 10;
	map<int, int> mp;
	int ans = 1;
	while(t--){
		int n;	cin >> n;
		auto f =[&](int x){
			for(int i=2; i<=10000; i++){
				int cnt=0;
				while(x%i == 0){
					x/=i;
					cnt++;
				}
				mp[i] += cnt;
				
			}
			if(x > 1) mp[x]++;
		};
		
		f(n);
	}
	
	for(auto [a, b]:mp) ans = (ans*(b+1))%10;
	
	cout << ans%10;
	
}