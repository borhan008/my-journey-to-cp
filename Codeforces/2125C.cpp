#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define tup tuple<int, int, int>

int func(int r){
		int ans = (r);
		
		ans -= (r)/2;	
		ans -= (r)/3;		
		ans -= (r)/5;
		ans -= (r)/7;
		
		ans += (r)/(2*3);
		ans += (r)/(2*5);
		ans += (r)/(2*7);
		ans += (r)/(3*5);
		ans += (r)/(3*7);
		ans += (r)/(5*7);
		
		ans -= (r)/(2*3*5);
		ans -= (r)/(2*3*7);
		ans -= (r)/(2*5*7);
		ans -= (r)/(3*5*7);
		
		ans += (r)/(2*3*5*7);
		
		return ans;
}

int32_t main(){
	int t=1; cin >> t;
  while (t--) {
  	int l, r;
		cin >> l >> r;

		
		cout << func(r)-func(l-1) << "\n";
			
 	}
 	return 0; 	
}

