#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define tup tuple<int, int, int>


int32_t main(){
	int t=1; cin >> t;
  while (t--) {
		int n,x; cin >> n;
		map<int, int> mp;
		bool pos = false;
		for(int i=0; i<n; i++){
			cin >> x; mp[x]++;
			if(mp[x] > 1) pos = true;
		}
		
		if(pos) cout << "YES\n";
		else		cout << "NO\n";
 	}
 	return 0; 	
}

