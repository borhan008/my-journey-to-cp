#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define tup tuple<int, int, int>

string l, r; 

int func(int i, int ans, int n, bool ts, bool fs){
	if(i==n){
		return ans;
	}
	int count = ans;
	if(l[i] == r[i]){
		count += func(i+1, 2, n, ts, fs);	
	}
	else if((r[i]-l[i]+9)%9==1){
		count += min(func(i+1, (ts ? 0 : 1),n,  true, fs), func(i+1, (ts ? 0 : 1),n,  ts, true));
	}
	else if((r[i]-l[i]) >= 2){
		count += 0;
	}
	return count;
}

int32_t main(){
	int t=1; cin >> t;
  while (t--) {
		cin >> l >> r;
		
		int n=l.size();
		string x(n, '0'); 
		
		int ans = func(0,0,n, false, false);
		cout << ans << "\n";
		
	
		
 	}
 	return 0; 	
}

